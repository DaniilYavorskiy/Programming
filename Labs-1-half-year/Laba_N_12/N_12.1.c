#include <graphics.h>
#include <conio.h>
#include <math.h>
#define N 100
#define M 800

void circ(int x,int y,int r,int c,int color){
setcolor(c);
moveto(x,y);
for(int j=1;j<=5;j++)
circle(x,y,r);
setfillstyle ( 1, color );
floodfill(x,y,color);
}

main(){
int x[N],y[N],r[N],color;

initwindow(M,M);
setfillstyle ( 1, 11 );
bar (0, 0, M, M);

do{
for (int i=0;i<N;i++){
r[i]=rand()%25+5;
x[i]=rand()%(M);
y[i]=rand()%(M);
color=rand()%15+1;
circ(x[i],y[i],r[i],color,color);
delay(5);
}
for (int i=0;i<N;i++) {
circ(x[i],y[i],r[i],11,11);
delay(5);
}
}while(!kbhit());
getch();
closegraph();
}