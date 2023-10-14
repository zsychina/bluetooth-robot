#include "ctrl.h"

// uart receive
uint8_t receive_byte;

uint16_t action_counter = 0;
uint8_t action_select = 0;


uint16_t tim1clk = 0; //0~999


void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim) {
  if (htim == &htim1) {  // 1k Hz
    tim1clk++;
    tim1clk %= 1000;
    if (tim1clk % 500 == 0) { // 2 Hz
      HAL_GPIO_TogglePin(GPIOC, GPIO_PIN_13); // LED
    }
    if (tim1clk % 10 == 0) { // 100 Hz
      motion_logic();
      motion_act();
    }
    
    
  }

  
}


void HAL_UART_RxCpltCallback(UART_HandleTypeDef *huart) {
  if (huart == &huart1) {
    HAL_UART_Receive_IT(&huart1, &receive_byte, 1);
  }

}


void motion_logic(void) {
  if (receive_byte != 'w' && receive_byte != 'a' && receive_byte != 's' && receive_byte != 'd') {
    return;
  }
  
  if (receive_byte == 'w') {
    action_select = ACTION_FORWARD; 
    action_counter = 10;
  }
  if (receive_byte == 's') {
    action_select = ACTION_BACK;
    action_counter = 10;
  }
  if (receive_byte == 'a') {
    action_select = ACTION_LEFT;
    action_counter = 1;
  }
  if (receive_byte == 'd') {
    action_select = ACTION_RIGHT;
    action_counter = 1;
  }
  receive_byte = 'z';
}

void motion_act(void) {
  if (action_counter == 0) {
    motor_all_stop();
    action_select = 0;
    return;
  }
  if (action_select != ACTION_FORWARD && action_select != ACTION_BACK && action_select != ACTION_LEFT && action_select != ACTION_RIGHT) {
    return;
  }
  
  action_counter -= 1;
  if (action_select == ACTION_FORWARD) {
    move_forward();
    
  }
  if (action_select == ACTION_BACK) {
    move_back();
    
  }
  if (action_select == ACTION_LEFT) {
    move_left();
    
  }
  if (action_select == ACTION_RIGHT) {
    move_right();
    
  }
  
  usart_printf(&huart1, "action_select=%d,action_counter=%d\n", action_select, action_counter);
  usart_printf(&huart2, "action_select=%d,action_counter=%d\n", action_select, action_counter);
}




