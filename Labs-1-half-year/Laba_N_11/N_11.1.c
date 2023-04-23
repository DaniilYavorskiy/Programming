#include <stdlib.h>
#include <graphics.h>
#include <string.h>
int main()
{
    int x, y;
    initwindow(640,640);
    moveto(0,0); 
    x = 0;
    y = 0;
    while ((x<=640)&&(y<=640)){
          y = 1 + x;
          lineto(x, y);
          setcolor(15);
          moveto (x, y);
          x++;
          }
    x = 0;
    y = 0;
    while ((x<=640)&&(y=640)){
          y = x * x;
          lineto(x, y);
          setcolor(15);
          moveto(x, y);
          x++;
          }
    x = 0;
    y = 0;;
    moveto(0,600);
    while ((x<=640)&&(y=640)){
          y = 600;
          lineto(x, y);
          setcolor(15);
          moveto(x, y);
          x++;
          }
          setfillstyle (1, 15);
          floodfill (50, 599, 15);
          outtextxy (100, 50, "function f(x)=x+1");
          outtextxy (11, 100, "function f(x)=x*x");
          getch();    
          closegraph();
 
 system("pause");
 return 0;
}
