#include<stdio.h>
#include<stdlib.h>
#include "graphics.h""
//#include<dos.h>

void main()
{
	int gd=DETECT,gm;
	int i=0;
	initgraph(&gd,&gm,"../bgi");
	setcolor(9);
	settextstyle(7,HORIZ_DIR,7);
	outtextxy(70,130,"~~~~~~~~~~~~~");
	settextstyle(7,HORIZ_DIR,7);\
	delay(40);
	setcolor(YELLOW);
	outtextxy(70,160,"Mysterious Cube");
	setcolor(9);
	delay(40);
	settextstyle(7,HORIZ_DIR,7);
	outtextxy(70,230,"~~~~~~~~~~~~~");
	for(i=0;i<5;i++)
	{
		sound(5*random(100));
		setcolor(1+i);
		delay(200);
		circle(25,50,5+(i*5));
		circle(25,400,5+(i*5));
		circle(610,50,5+(i*5));
		circle(610,400,5+(i*5));
		nosound();
	}
	delay(150); 
}
