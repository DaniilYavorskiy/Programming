#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include "altconio.h"

int main(){
    int ch,i;
    for (i = 1; i <= 3; i++)   {
        if (i == 1) settextcolor (2, 17);
        else settextcolor (11, 5);
        gotoxy(45, 5 + i * 2);
    	if(i == 1) {
			printf("Free movement of the object");
		}	
		if(i == 2) {
			printf("Object movement using the keyboard");
		} 
		if(i == 3) {
			printf("Exit");
		}
    }
    i=1;
    do {
        ch=_getch();
        gotoxy(45, 5 + i * 2); 
        settextcolor (11, 5);
        if(i == 1) { 
			printf("Free movement of the object");
		} 
		if(i == 2) {
			printf("Object movement using the keyboard");
		} 
		if(i == 3) {
			printf("Exit"); 
		}
        if (ch == 72) i--;
        if (ch == 80) i++;
        if (i > 3) i = 1;
        if (i < 1) i = 3;
        gotoxy (45, 5 + i * 2);
        settextcolor (2, 17);
        if(i == 1) { 
			printf("Free movement of the object");
		} 
		if(i == 2) {
			printf("Object movement using the keyboard");
		} 
		if(i == 3) {
			printf("Exit"); 
		}
    } while(ch != 13);
    if (i == 1){
        int x, y, dx, dy, direct, m[3606], n; 
 		initwindow (600,620);
        line(0,40,50,40);
		moveto(50,40);
		lineto(30,50);
		lineto(0,50);
		lineto(0,40);
		line(17,40,17,0);
		line(7,10,40,10);
		line(7,10,7,25);
		line(7,25,30,25);
		line(30,25,30,10);
		setfillstyle(5,13);
		floodfill(16,11,15);
		floodfill(26,11,15);
		setfillstyle(3,9);
		floodfill(1,41,15); 
        getimage(0, 0, 59, 59, m);
		x = 1; y = 0;
		dx = dy = 1; 
		direct = 0; 
		n = 0;
		while (1) {
   putimage(x,y,m,0); 
   delay(1);
     if (((x+50==600)and(y==0))or((x==0)and(y+50==600))) 
      {
       dx=-dx; direct=1;
      }
     if (((x+50==600)and(y+50==600))or((x==0)and(y==0))) 
      {
       dy=-dy; direct=0;
      }       
   if (n==0)
    {    
     if (direct==0) x+=dx; 
     if (direct==1) y+=dy;
    }
     
  }
 		closegraph();
        return 0;
    }
    if (i == 2) {
        int m[3606];
        int x, y, ch;
        initwindow (600,600);
        line(0,40,50,40);
		moveto(50,40);
		lineto(30,50);
		lineto(0,50);
		lineto(0,40);
		line(17,40,17,0);
		line(7,10,40,10);
		line(7,10,7,25);
		line(7,25,30,25);
		line(30,25,30,10);
		setfillstyle(5,13);
		floodfill(16,11,15);
		floodfill(26,11,15);
		setfillstyle(3,9);
		floodfill(1,41,15); 
        getimage(0, 0, 59, 59, m);
        putimage(0, 0, m, 1);
        x = y = 300;
        do {
            putimage(x, y, m, 1);
            ch = getch();
            putimage(x, y, m, 1);
            if(ch == 50) y += 5;
            if(ch == 52) x -= 5;
            if(ch == 54) x += 5;
            if(ch == 56) y -= 5;
        } while (ch != 13);
        closegraph();
        return 0;
    }
    if (i == 3) return 0;
    _getch();
    return 0;
}
