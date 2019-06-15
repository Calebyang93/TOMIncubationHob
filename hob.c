#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int degree=0;
void Timer();

int main()
{
	int PowerBtn, FunctionBtn, TimerBtn, PlusBtn, MinusBtn;
	int C;
	printf("HOB\n");
	PowerBtn = 1;
	FunctionBtn = 2;
	TimerBtn = 3;
	PlusBtn = 4;
	MinusBtn = 5;
	printf("Select 1 to press Power\nSelect 2 to press FunctionBtn\nSelect 3 to press TimerBtn\nSelect 4 to press PlusBtn\nSelect 5 to press MinusBtn");
	while (1)
	{
		scanf("%d", &C);
		if (C == PlusBtn)
		{
			degree = degree + 20;
		}
		else if (C == MinusBtn)
		{
			degree = degree - 20;
		}
		else if (C == PowerBtn)
		{
			printf("Turn_On.wav\n");
			system("mpg123 /home/pi/testgeany/HOB_Voice/TOM_PowerOn.mp3");
		}
		else if (C == FunctionBtn)
		{
			printf("Stir_Fry.wav\n");
			system("mpg123 /home/pi/testgeany/HOB_Voice/TOM_StirFry.mp3");
			sleep(3);
			degree = 240;
		}
		else if (C == TimerBtn)
		{
			Timer();
		}

		if (degree == 60)
		{
			printf("60Degrees.wav \n");
			degree = 60;
			system("mpg123 /home/pi/testgeany/HOB_Voice/TOM_60Deg.mp3");
		}
		else if (degree == 40)
		{
			degree = 60;
			system("mpg123 /home/pi/testgeany/HOB_Voice/TOM_60Deg.mp3");
		}
		else if (degree == 80)
		{
			printf("80Degrees.wav \n");
			system("mpg123 /home/pi/testgeany/HOB_Voice/TOM_80Deg.mp3");
		}
		else if (degree == 100)
		{
			printf("100Degrees.wav \n");
			system("mpg123 /home/pi/testgeany/HOB_Voice/TOM_100Deg.mp3");
		}
		else if (degree == 120)
		{
			printf("120Degrees.wav \n");
			system("mpg123 /home/pi/testgeany/HOB_Voice/TOM_120Deg.mp3");
		}
		else if (degree == 140)
		{
			printf("140Degrees.wav \n");
			system("mpg123 /home/pi/testgeany/HOB_Voice/TOM_140Deg.mp3");
		}
		else if (degree == 160)
		{
			printf("160Degrees.wav \n");
			system("mpg123 /home/pi/testgeany/HOB_Voice/TOM_160Deg.mp3");
		}
		else if (degree == 180)
		{
			printf("180Degrees.wav \n");
			system("mpg123 /home/pi/testgeany/HOB_Voice/TOM_180Deg.mp3");
		}
		else if (degree == 200)
		{
			printf("200Degrees.wav \n");
			system("mpg123 /home/pi/testgeany/HOB_Voice/TOM_200Deg.mp3");
		}
		else if (degree == 220)
		{
			printf("220Degrees.wav \n");
			system("mpg123 /home/pi/testgeany/HOB_Voice/TOM_220Deg.mp3");
		}
		else if (degree == 240)
		{
			printf("240Degrees.wav \n");
			system("mpg123 /home/pi/testgeany/HOB_Voice/TOM_240Deg.mp3");
		}
		else if (degree == 260)
		{
			degree = 240;
			system("mpg123 /home/pi/testgeany/HOB_Voice/TOM_240Deg.mp3");
		}
	}
}

void Timer()
{
	int T=0, time = 10;
	while (T != 3)
	{
		scanf("%d", &T);
		if (T == 4)
		{
			time++;
		}
		else if (T == 5)
		{
			time--;
		}
		if (time == 1)
		{
			printf("1Min.wav");
			system("mpg123 /home/pi/testgeany/HOB_Voice/TOM_1M.mp3");
		}
		else if (time == 2)
		{
			printf("2Min.wav");
			system("mpg123 /home/pi/testgeany/HOB_Voice/TOM_2M.mp3");
		}
		else if (time == 3)
		{
			printf("3Min.wav");
			system("mpg123 /home/pi/testgeany/HOB_Voice/TOM_3M.mp3");
		}
		else if (time == 4)
		{
			printf("4Min.wav");
			system("mpg123 /home/pi/testgeany/HOB_Voice/TOM_4M.mp3");
		}
		else if (time == 5)
		{
			printf("5Min.wav");
			system("mpg123 /home/pi/testgeany/HOB_Voice/TOM_5M.mp3");
		}
		else if (time == 6)
		{
			printf("6Min.wav");
			system("mpg123 /home/pi/testgeany/HOB_Voice/TOM_6M.mp3");
		}
		else if (time == 7)
		{
			printf("7Min.wav");
			system("mpg123 /home/pi/testgeany/HOB_Voice/TOM_7M.mp3");
		}
		else if (time == 8)
		{
			printf("8Min.wav");
			system("mpg123 /home/pi/testgeany/HOB_Voice/TOM_8M.mp3");
		}
		else if (time == 9)
		{
			printf("9Min.wav");
			system("mpg123 /home/pi/testgeany/HOB_Voice/TOM_9M.mp3");
		}
		else if (time == 10)
		{
			printf("10Min.wav \n");
			system("mpg123 /home/pi/testgeany/HOB_Voice/TOM_10M.mp3");
		}
		else if (time == 11)
		{
			printf("11Min.wav \n");
			system("mpg123 /home/pi/testgeany/HOB_Voice/TOM_11M.mp3");
		}
		else if (time == 12)
		{
			printf("12Min.wav \n");
			system("mpg123 /home/pi/testgeany/HOB_Voice/TOM_12M.mp3");
		}
		else if (time == 13)
		{
			printf("13Min.wav \n");
			system("mpg123 /home/pi/testgeany/HOB_Voice/TOM_13M.mp3");
		}
		else if (time == 14)
		{
			printf("14Min.wav \n");
		}
		else if (time == 15)
		{
			printf("15Min.wav \n");
		}
		else if (time == 16)
		{
			printf("16Min.wav \n");
		}
		else if (time == 17)
		{
			printf("17Min.wav \n");
		}
		else if (time == 18)
		{
			printf("18Min.wav \n");
		}
		else if (time == 19)
		{
			printf("19Min.wav \n");
		}
	}
}
