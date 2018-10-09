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
#include "rtc.h"
//	u8 zuizhong[USART3_MAX_RECV_LEN][USART3_MAX_RECV_LEN]="0";
int main(void)
{

	Stm32_Clock_Init(9);
	delay_init(72);		
	uart_init(72,115200);  
	usart3_init(36,115200);
	//RTC_Init();  
	
	atk_8266_send_cmd("AT+CWMODE=3","OK",50);     //设置为ap和sta兼容的类型
	 atk_8266_send_cmd("AT+CWLAP","OK",2000);
	 atk_8266_at_response(1); 
	printf("\r\n");
		printf("下一次");
		printf("\r\n");
}

