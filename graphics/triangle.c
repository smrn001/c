#include<stdio.h>
#include<graphics.h>
#include<conio.h>
void main()
{
int gd=DETECT, gm;
initgraph(&gd,&gm,"C;\\TC\\BGI");
line(200, 100, 10, 20);
line(10, 20, 50, 60);
line(50, 60, 200, 100);
getch();
closegraph();