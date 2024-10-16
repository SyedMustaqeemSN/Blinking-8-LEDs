#include <REGX51.H>
void delay (unsigned int time)
{
	unsigned int i,j;
	for(i=0;i<=time;i++)
	{
		for(j=0;j<=120;j++);
	}
}
void main(void)
{
	while(1)
	{
		P0_0=1;
		delay(500);
		P0_0=0;
		delay(500);
		P0_1=1;
		delay(500);
		P0_1=0;
		delay(500);
		P0_2=1;
		delay(500);
		P0_2=0;
		delay(500);
		P0_3=1;
		delay(500);
		P0_3=0;
		delay(500);
		P0_4=1;
		delay(500);
		P0_4=0;
		delay(500);
		P0_5=1;
		delay(500);
		P0_5=0;
		delay(500);
		P0_6=1;
		delay(500);
		P0_6=0;
		delay(500);
		P0_7=1;
		delay(500);
		P0_7=0;
		delay(500);
		
	}
}