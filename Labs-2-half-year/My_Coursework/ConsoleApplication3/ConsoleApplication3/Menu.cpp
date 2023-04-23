#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include "altconio.h"

int main(){
    int ch,i;
    for (i = 1; i <= 3; i++)   {
        if (i == 1) settextcolor (2, 17);
        else settextcolor (11, 5);
        gotoxy(55, 5 + i * 2);
    	if(i == 1) {
			printf("Play");
		}
		if(i == 2) {
			printf("Exit");
		}
    }
    i=1;
    do {
        ch=_getch();
        gotoxy(55, 5 + i * 2); 
        settextcolor (11, 5);
        if(i == 1) { 
			printf("Play");
		} 
		if(i == 2) {
			printf("Exit"); 
		}
        if (ch == 72) i--;
        if (ch == 80) i++;
        if (i > 2) i = 1;
        if (i < 1) i = 2;
        gotoxy (55, 5 + i * 2);
        settextcolor (2, 17);
        if(i == 1) { 
			printf("Play");
		} 
		if(i == 2) {
			printf("Exit"); 
		}
    } while(ch != 13);
    if (i == 1){
        system("C:\\Users\\79133\\source\\repos\\ConsoleApplication3\\Debug\\ConsoleApplication3.exe");
 		closegraph();
        return 0;
    }
    if (i == 2) 
	return 0;
    _getch();
    return 0;
}
