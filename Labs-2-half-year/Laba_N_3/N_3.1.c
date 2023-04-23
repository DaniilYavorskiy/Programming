#include <stdio.h>
#include <stdlib.h>

int main() {
	int n;
	printf("Vvedite n:");
    scanf("%d", &n);    
    int *mas = (int*)malloc(n*sizeof(int));
    for(int i =0; i < n; i++) mas[i] = 0;
    for(int i =0; i < n; i++) mas[i] = rand()%(100) - 51;
    int m = 0, k = 0;
    for(int i = 0; i < n; i++){
        printf("%d ", mas[i]);
        if (mas[i] >= 0) m++; else k++;
    };
    
    int *c = (int*)malloc(m*sizeof(int));
    int *d = (int*)malloc(k*sizeof(int));

    
    for(int i = 0, j = 0, t = 0; i < n; i++){
        if(mas[i] >= 0) c[j++] = mas[i]; else d[t++] = mas[i];
    }

    free(mas);
    printf("\n c[m] - ");

    for(int i = 0; i < m; i++) printf("%d ", c[i]); printf("\n");
    free(c);
    printf("\n d[k] - ");
    for(int i = 0; i < k; i++) printf("%d ", d[i]); printf("\n");
    free(d);

   
  return 0;
}
