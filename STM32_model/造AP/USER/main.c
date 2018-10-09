#include "sys.h"
#include "delay.h"
#include "usart.h" 
#include "led.h" 		 	      
#include "usmart.h"  
#include "malloc.h"    
#include "usart3.h"
#include "common.h"
#include "stdio.h"
#include "stdlib.h"
#include "string.h"
int main(void)
{
	Stm32_Clock_Init(9);
	delay_init(72);		
	uart_init(72,115200);  
	usart3_init(36,115200);
	
	atk_8266_at_response(1);
	atk_8266_send_cmd("AT+CWMODE=2","OK",50);
	//前两个是指针，最后一个是等待时间
	
	atk_8266_send_cmd("AT+CWSAP=\"ap2\",\"11111111\",1,4","OK",1000); 
	//一共三个参数，前面第一个是指针，里面有转意字符\，最后一参数是等待时间
	//造WIFI时,只需要修改为ap4、ap5就行，后面的“1，4“中的”1“是指信道编号，一般是1，6，11
	//ap1后面的一串数字为WiFi密码
	
	
	
}

