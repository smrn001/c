#include <stdio.h>
#include <graphics.h>
#include <conio.h>
void main()

{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C;\\TC\\BGI");
    circle(100, 100, 50);
    outtextxy(75, 170, "Circle");
    rectangle(200, 50, 350, 150);
    outtextxy(240, 170, " Rectangle");
    line(100, 250, 540, 250);
    outtextxy(300, 260, "Line");
    ellipse(500, 100, 0, 360, 100, 50);
    outtextxy(480, 170, "Ellipse");
    getch();
    closegraph();
}