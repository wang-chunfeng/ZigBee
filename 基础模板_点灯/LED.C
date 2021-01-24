/**************************************/
/*           WeBee团队                */
/*         Zigbee学习例程             */
/*例程名称：点亮LED                  */
/*建立时间：2012/04/18               */
/*描述：点亮LED1
**************************************/
#include <ioCC2530.h>

#define LED1 P1_0    //定义P10口为LED1控制端

void IO_Init(void)
{
  P1DIR |= 0x01;     //P1_0定义为输出
  P1INP |= 0X01;     //打开下拉
}

void main(void)
{   
    IO_Init();      //调用初始化程序
    LED1 = 1;       //点亮LED1
    while(1);
}
