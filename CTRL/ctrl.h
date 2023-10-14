#ifndef CTRL_H
#define CTRL_H

#include "main.h"
#include "print.h"
#include "oled.h"

#define ACTION_FORWARD 1
#define ACTION_BACK 2
#define ACTION_LEFT 3
#define ACTION_RIGHT 4

extern TIM_HandleTypeDef htim1;

extern UART_HandleTypeDef huart1;
extern UART_HandleTypeDef huart2;


void motion_logic(void);
void motion_act(void);


// motor 1
void motor1_pos(void) {
  HAL_GPIO_WritePin(GPIOB, GPIO_PIN_2, GPIO_PIN_SET);
  HAL_GPIO_WritePin(GPIOB, GPIO_PIN_13, GPIO_PIN_RESET);
}

void motor1_neg(void) {
  HAL_GPIO_WritePin(GPIOB, GPIO_PIN_2, GPIO_PIN_RESET);
  HAL_GPIO_WritePin(GPIOB, GPIO_PIN_13, GPIO_PIN_SET);
}

void motor1_stop(void) {
  HAL_GPIO_WritePin(GPIOB, GPIO_PIN_2, GPIO_PIN_RESET);
  HAL_GPIO_WritePin(GPIOB, GPIO_PIN_13, GPIO_PIN_RESET);  
}

// motor 2
void motor2_pos(void) {
  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_12, GPIO_PIN_SET);
  HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, GPIO_PIN_RESET);
}

void motor2_neg(void) {
  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_12, GPIO_PIN_RESET);
  HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, GPIO_PIN_SET);  
}

void motor2_stop(void) {
  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_12, GPIO_PIN_RESET);
  HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, GPIO_PIN_RESET);  
}

// motor 3
void motor3_pos(void) {
  HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, GPIO_PIN_SET);
  HAL_GPIO_WritePin(GPIOB, GPIO_PIN_8, GPIO_PIN_RESET);
}

void motor3_neg(void) {
  HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, GPIO_PIN_RESET);
  HAL_GPIO_WritePin(GPIOB, GPIO_PIN_8, GPIO_PIN_SET);  
}

void motor3_stop(void) {
  HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, GPIO_PIN_RESET);
  HAL_GPIO_WritePin(GPIOB, GPIO_PIN_8, GPIO_PIN_RESET);
}

// all stop
void motor_all_stop(void) {
  motor1_stop();
  motor2_stop();
  motor3_stop();
}

// robot move
void move_forward(void) {
  motor1_stop();
  motor2_neg();
  motor3_pos();
}

void move_back(void) {
  motor1_stop();
  motor2_pos();
  motor3_neg();
}

void move_left(void) {
  motor1_neg();
  motor2_neg();
  motor3_neg();
}

void move_right(void) {
  motor1_pos();
  motor2_pos();
  motor3_pos();
}


#endif
