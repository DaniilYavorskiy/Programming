#include <stdio.h>
#include <stdlib.h>

int main() {
	int k=0,p=0,i,a,h=0,s=0;
	printf("Vvedite nomer bank card:\n");
	for(i=0;i<4;i++) {
	scanf("%d",&a);
	while(a>0) {
	if(h%2==0)
	k=k+a%10;
	else
	p=p+a%10;
	a=a/10;
	h++;
	  }
	}
	s=k+p*2;
	if(s>9)s=s-9;

	if(s%10==0)
	printf("The bank card number is correct");
	else
	printf("Error");

  system ("pause");
  return 0;
}