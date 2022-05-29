#include "def_basic.h"

int main(void)
{
	ClockInit();
	USART2_Init();
	GPIO_Init(GPIOA, 0, GPIO_INPUT_PULLDOWN);
	GPIO_Init(GPIOA, 1, GPIO_INPUT_PULLDOWN);
	GPIO_Init(GPIOA, 2, GPIO_INPUT_PULLDOWN);
	GPIO_Init(GPIOA, 3, GPIO_INPUT_PULLDOWN);
	GPIO_Init(GPIOA, 5, GPIO_INPUT_PULLDOWN);
	USART2_TX_String("START:\n");
	
	while (1)
	{
		if (GPIOA->IDR & GPIO_IDR_ID1)
		{
			USART2_TX_String("Left <-\n\r");
			Delay(200);
		}
		else if (GPIOA->IDR & GPIO_IDR_ID2)
		{
			USART2_TX_String("Right ->\n\r");
			Delay(200);
		}
		else if (GPIOA->IDR & GPIO_IDR_ID3)
		{
			USART2_TX_String("Up\n\r");
			Delay(200);
		}
		else if (GPIOA->IDR & GPIO_IDR_ID5)
		{
			USART2_TX_String("Down\n\r");
			Delay(200);
		}
		else if (GPIOA->IDR & GPIO_IDR_ID0)
		{
			USART2_TX_String("Center\n\r");
			Delay(200);
		}
	}
}

