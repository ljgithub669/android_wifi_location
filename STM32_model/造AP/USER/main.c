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
	//ǰ������ָ�룬���һ���ǵȴ�ʱ��
	
	atk_8266_send_cmd("AT+CWSAP=\"ap2\",\"11111111\",1,4","OK",1000); 
	//һ������������ǰ���һ����ָ�룬������ת���ַ�\�����һ�����ǵȴ�ʱ��
	//��WIFIʱ,ֻ��Ҫ�޸�Ϊap4��ap5���У�����ġ�1��4���еġ�1����ָ�ŵ���ţ�һ����1��6��11
	//ap1�����һ������ΪWiFi����
	
	
	
}

