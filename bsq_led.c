//bsq:board support package 板级支持包
#include "stm32f4xx.h"
#include "bsq_led.h"

void gpio_led_config(void)//gpio的配置函数
{
	//first open rcc;
	RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOA, ENABLE);
	//second define config struct;
	GPIO_InitTypeDef GPIO_InitStruct;
	//third  config struct people;
	GPIO_InitStruct.GPIO_Pin=GPIO_Pin_6;
	GPIO_InitStruct.GPIO_Mode=GPIO_Mode_OUT;
	GPIO_InitStruct.GPIO_OType=GPIO_OType_PP;
	GPIO_InitStruct.GPIO_Speed=GPIO_Low_Speed;
	GPIO_InitStruct.GPIO_PuPd=GPIO_PuPd_UP;
	//four user config function;
	GPIO_Init(GPIOA,&GPIO_InitStruct );
	//GPIO_ResetBits(GPIOA,  GPIO_Pin_6);	
};

/*void gpio_led_controll(void)
{
	//first open rcc;
	RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOA, ENABLE);
	//second define config struct;
	GPIO_InitTypeDef GPIO_InitStruct;
	//third  config struct people;
	GPIO_InitStruct.GPIO_Pin=GPIO_Pin_6;
	GPIO_InitStruct.GPIO_Mode=GPIO_Mode_OUT;
	GPIO_InitStruct.GPIO_OType=GPIO_OType_PP;
	GPIO_InitStruct.GPIO_Speed=GPIO_Low_Speed;
	GPIO_InitStruct.GPIO_PuPd=GPIO_PuPd_UP;
	//four user config function;
	GPIO_Init(GPIOA,&GPIO_InitStruct );
  //GPIO_SetBits(GPIOA,  GPIO_Pin_6);
 GPIO_ResetBits(GPIOA,  GPIO_Pin_6);	
	
}*/

void bsq_led_open()
{
	GPIO_ResetBits(GPIOA,  GPIO_Pin_6);	
	
}

void bsq_led_off()
{
	GPIO_SetBits(GPIOA,  GPIO_Pin_6);	
	
}

