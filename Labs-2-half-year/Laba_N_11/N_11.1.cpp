#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <windows.h>
#include <string.h>

void menu(char Name[][100],char Fam[][100],int name,int fam);

void settextcolor(unsigned short int color,unsigned short int bg)                                                 
{                                                                                                                                             
     SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),((bg*16)+(color)));
}

int get_x(void)
{
    CONSOLE_SCREEN_BUFFER_INFO window;
    GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE),&window);
    return window.dwCursorPosition.X;
}

int get_y(void)
{
    CONSOLE_SCREEN_BUFFER_INFO window;
    GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE),&window);
    return window.dwCursorPosition.Y;
}


void set_x(int x)
{
     COORD pos;
     pos.X = x;
     pos.Y = get_y();
     SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
}

void set_y(int y)
{
     COORD pos;
     pos.X = get_x();
     pos.Y = y;
     SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
}
void gotoxy(int x,int y)
{
     set_x(x);
     set_y(y);
}

void Delete()
{
	system("clear");
	char a[50];
	printf("V kakom file nyjno provesti chistky?\n");
	scanf("%s",a);
  int i = 0;
  char filee[50];
  strcpy(filee,a);
  char b[50],c[50],d[50];
  FILE *in = fopen(a,"r");
  FILE *out = fopen("twink.txt","w");
  char testI[50]="qw",testII[50];
  while (1)
  {
  	int tt=0;
  	//estrr = fgets (strr,sizeof(strr),m);
  	fscanf(in,"%s %s %s %s",a,b,c,d);
  	//printf("%s %s %s %s\n",a,b,c,d);
  	strcpy(testII,a);
  	snprintf(testII, sizeof testII,"%s %s %s %s", testII, b,c,d);
  	if (strcmp(testII,testI) == 0)
      {
         break;
      }
    else
    {
    	strcpy(testI,testII);	
	}
		if (d[1]!=NULL)
			tt=(d[0]- '0')*10+(d[1]- '0');
  		
  		if (d[1]==NULL)
			tt=d[0]- '0';
  		
    if (tt >=10) 
	{
	fprintf(out,"%s %s %s %s\n",a,b,c,d);
      
    }
  }
  fclose(in);
	fclose(out);
	remove(filee);
	rename("twink.txt",filee);
	printf("Ydalenie vipolneno, najmite lubyu klavishy dlya perehoda v menu..");
	_getch();
}

void Dobav()
{
	system("clear");
	char g[50],textI[50],textII[50],textIII[50],textIIII[50];
	printf("V kakoy fail nyjno dobavit zapis?\n");
	scanf("\n%s",g);
	
 	printf("\nKakuyu stroku nyjno dobavit?\n");
 	scanf("%s %s %s %s",textI,textII,textIII,textIIII);
 	FILE *fOut;
	fOut= fopen(g, "a");
	if(fOut) 
		fprintf(fOut,"\n%s %s %s %s",textI,textII,textIII,textIIII);
	else 
		puts("Error");
	printf("\nFail skorektirovan, dlya vozvrasheniya v menu najmite lubuyu klavishy..");
	_getch();
	fclose(fOut);
//	menu(Name,Fam,name,fam);
}

int Red()
{

   system("clear");
   char strr[50],faam[50];
	int twink,prob=0,kol=0,dlin;
  char a[50];

	char f[50];

	printf("Kakoy fail otkrit?\n");
	scanf("%s",a);
    
   	printf("\nChelovek s kakoy familiey nuzen?\n");
   		scanf("%s",faam);
   	printf("\nVvesti noviy ves: ");
   	char ves[50];
   	scanf("%s",ves);
  
	
  int i = 0;
  char filee[50];
  strcpy(filee,a);
  char b[50],c[50],d[50];
  FILE *in = fopen(a,"r");
  FILE *out = fopen("twink.txt","w");
  char testI[50]="qw",testII[50];
  while (1)
  {
  	int tt=0;
  	//estrr = fgets (strr,sizeof(strr),m);
  	fscanf(in,"%s %s %s %s",a,b,c,d);
  	//printf("%s %s %s %s\n",a,b,c,d);
  	strcpy(testII,a);
  	snprintf(testII, sizeof testII,"%s %s %s %s", testII, b,c,d);
  	if (strcmp(testII,testI) == 0)
      {
         break;
      }
    else
    {
    	strcpy(testI,testII);	
	}
		if (strcmp(a,faam));
			strcpy(d,ves);
  		
	fprintf(out,"%s %s %s %s\n",a,b,c,d);
      
    }
  fclose(in);
	fclose(out);
	remove(filee);
	rename("twink.txt",filee);
	printf("Znachenie izmeneno, najmite lubuyu klavishy dlya perehoda v menu...");
	_getch();
	
}

int Vivid()
{
	FILE *m;
   system("clear");
   char strr[50];
	int twink,prob=0,kol=0,dlin;
  
   char *estrr;
	char f[50];

	printf("Kakoy fail otkrit?\n");
	scanf("%s",f);
   m = fopen (f,"r");
   
   if (m == NULL) { return -1;}
   
   while (1)
   {

      estrr = fgets (strr,sizeof(strr),m);
      

 
      if (estrr == NULL)
      {
       
         if ( feof (m) != 0)
         {  
           
            
            break;
         }
         else
         {
           
            break;
         }
      }
      puts(estrr);
   }
   fclose(m);
   printf("Vivod zavershon, najmite lubuyu klavishy dlya vihoda v menu...");
	_getch();
	//menu(Name,Fam,name,fam);
	
}

void sotvorenie(char Name[][100],char Fam[][100],int name,int fam)
{
	int N,a,b,dlin;
	char stroka[100];
	FILE *f;
	system("clear");
	printf("Vvedite N: ");
	scanf("%d",&N);
	printf("\nVvedite imya novogo faila: ");
	char n[100];
	scanf("%s",n);
	f = fopen(n,"w");
	for (int i=0;i<N;i++)
	{
		int ch,h;
		char cch[4],hh[4];

		a=rand()%name;
		b=rand()%fam;
		if (Fam[b][strlen(Fam[b])-1]=='\n')
		Fam[b][strlen(Fam[b])-1]=0;
		if (Name[a][strlen(Name[a])-1]=='\n')
		Name[a][strlen(Name[a])-1]=0;
		ch=rand()%9+1; 
		h=rand()%20+1;  
		snprintf(stroka, sizeof stroka, "%s %s", Fam[b], Name[a]);
		fprintf(f,"%s %s %d %d\n",Fam[b],Name[a],ch,h);	
	}
	fclose(f);
	printf("\nSotvorenie zaversheno, najmite lubuyu klavishy dlya vozvrasheniya v menu...");
	_getch();
	//menu(Name,Fam,name,fam);
}

void menu(char Name[][100],char Fam[][100],int name,int fam)
{
	int q=0;
	do{
			int ch,i,n;
	system("clear");
	for (i=1;i<=6;i++)
	{
		if (i==1)
		settextcolor (12,7);
		else
		settextcolor (15,0);
		gotoxy(45,5+(i+1)*2);
if (i==1)
		printf("%i. Sozdat fail iz N zapisey",i);
if (i==2)
		printf("%i. Prosmotr fayla",i);
if (i==3)
		printf("%i. Dobavit novuyu zapis",i);
if (i==4)
		printf("%i. Ustranit pasajirov s bagashom menshe 10 kg",i);
if (i==5)
		printf("%i. Izmenit ves veshey po zadannoy familii",i);
if (i==6)
		printf("%i. Exit",i);
		
	}
i=1;
do{
	ch=_getch();
	gotoxy(45,5+(i+1)*2);
	settextcolor (15,0);
	if (i==1)
		printf("%i. Sozdat fail iz N zapisey",i);
if (i==2)
		printf("%i. Prosmotr fayla",i);
if (i==3)
		printf("%i. Dobavit novuyu zapis",i);
if (i==4)
		printf("%i. Ustranit pasajirov s bagashom menshe 10 kg",i);
if (i==5)
		printf("%i. Izmenit ves veshey po zadannoy familii",i);
if (i==6)
		printf("%i. Exit",i);
	if (ch==72) i--;
	if (ch==80) i++;
	if (i>6)
	i=1;
	if (i<1)
	i=6;
	gotoxy(45,5+(i+1)*2);
	settextcolor (12,7);
	if (i==1)
		printf("%i. Sozdat fail iz N zapisey",i);
if (i==2)
		printf("%i. Prosmotr fayla",i);
if (i==3)
		printf("%i. Dobavit novuyu zapis",i);
if (i==4)
		printf("%i. Ustranit pasajirov s bagashom menshe 10 kg",i);
if (i==5)
		printf("%i. Izmenit ves veshey po zadannoy familii",i);
if (i==6)
		printf("%i. Exit",i);
}while (ch!=13);
gotoxy(45,20);
settextcolor (12,0);
if (i==1)
	sotvorenie(Name,Fam,name,fam);
if (i==2)
	Vivid();
if (i==3)
	Dobav();
if (i==4)
	Delete();
if (i==5)
	Red();
if (i==6)
q=1;
	}while (q!=1);
exit(0);
}
int main()
{
	char *estr;
	char Name[100][100],Fam[100][100],str[50];
	int name=0;
	FILE *mf;
	mf = fopen("Name.txt","r");
	while (1)
	{	
	estr = fgets (str,sizeof(str),mf);
      if (estr == NULL)
      {
         if ( feof (mf) != 0) 
            break;
         else
            break;
      }
    strcpy(Name[name],estr);
	
	name++;
	}
	int fam=0;
	fclose(mf);
	mf = fopen("Fam.txt","r");
	while (1)
	{	
	estr = fgets (str,sizeof(str),mf);
      if (estr == NULL)
      {
         if ( feof (mf) != 0) 
            break;
         else
            break;
      }
    strcpy(Fam[fam],estr);
	
	fam++;
	}
	fclose(mf);
	menu(Name,Fam,name,fam);
_getch();
return 0;
}