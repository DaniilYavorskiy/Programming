#include <stdio.h>
#include <conio.h>

void rec(){
	int n;
	scanf("%d", &n);
	if (n != 0){
		if (n>0){
			rec();
			printf("%d ", n);
		}
		else rec();
	}
};

int main(void){
	rec();
	_getch();
	return 0;
}
