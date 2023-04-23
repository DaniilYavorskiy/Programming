#include <stdio.h>
#include <string.h>

int i, j, k;
int main() {
 char st[50];
  char stTemp[50][50];
  gets(st);
  int kProb = 0;
  for(i = 0; i < strlen(st); i++) if(st[i] == ' ') kProb++;
  for(i = 0; i < 50; i++) for (j = 0; j < 50; j++) stTemp[i][j] ='\0';
  int j = 0;
  for(i = 0; i < kProb + 1; i++){
  k = 0;
    while(st[j] != ' ' && st[j]!='\0') {
      stTemp[i][k] = st[j];
      k++;
      j++;
    }
    j++;
  }
  for(i = 0; i < kProb + 1; i++){
  int k = 1;
    for(j = i + 1; j < kProb + 1; j++ ){
    if(strcmp(stTemp[i], stTemp[j]) == 0){
    k++;
    if(k > 1) stTemp[j][0] = '\0';
    }
  }
  if(stTemp[i][0] != '\0') printf("%s --- %d\n",stTemp[i], k);
  }
  
  system ("pause");   
  return 0;
}
