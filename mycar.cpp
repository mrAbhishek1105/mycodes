#include<graphics.h>
#include <dos.h>
#include <conio.h>

main()
{
	
   int i, j = 0, gd = DETECT, gm;

   initgraph(&gd,&gm,"C:\\TC\\BGI");

   settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
   outtextxy(25,240,"Press any key");

   getch();
//   setviewport(0,0,639,440,1);

   for (i = 0; i <= 420; i = i + 10, j++)
	{
	rectangle(110+i,45,125+i,55);
	int	pt[]={25+i,90,30+i,60,70+i,55,75+i,30,120+i,30,140+i,55,160+i,60,165+i,90,25+i,90};
	drawpoly(9,pt);
	circle(60+i,90,10);
	circle(130+i,90,10);
	setcolor(j);
	delay(100);
		 
		 
		  if (i == 420)
         break;

      clearviewport();
	}
	getch();
	closegraph();
	return 0;
}
