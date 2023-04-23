#include <iostream>
#include <string>
#include <cstring>
#include "string.h"
using namespace std;

struct Name{
    string name;
    int grades[4];
    Name* next;
};

void print_ar(Name names[]){
    for(int i = 0; i < 5; i++){
        cout << names[i].name << " ";
        for(int j = 0; j < 4; j++)
            cout << names[i].grades[j] << " ";
            cout << endl;
    }
}
void print(Name* names){
    Name* tmp = names;
    while(tmp != NULL){
        cout << tmp -> name << " ";
        for(int i = 0; i < 4; i++) cout << tmp -> grades[i] << " ";
        cout << endl;
        tmp = tmp->next;
    }
}
void free(Name *head)
 {
    Name *a,*b;
   a=b=head;
   while (a!=NULL)
   {
     b=a->next;
     delete a; 
     a=b;
   }   
  head=NULL;
 }
 void sort(Name names[]){
     for(int i = 0; i < 5; i++){
         for(int j = 0; j < 5 - i - 1; j++)
            if(strcmp(names[j].name.c_str(), names[j+1].name.c_str()) > 0){
                swap(names[j], names[j+1]);
            }
         
     }
 }
void transferStackToArray(Name* a, Name b[]){
    Name* tmp = a;
    for(int i = 0; i < 5; i++ ){
      b[i].name = tmp -> name;
      for(int j = 0; j < 4; j++) b[i].grades[j] = tmp->grades[j];
      tmp = tmp -> next;
    }
}
void  transferArrayToStack(Name a[], Name*& b){
    Name *head, *pred, *p;
    head = pred = new Name;
    pred -> name = a[0].name;
     for(int i = 0; i < 4; i++) pred->grades[i] = a[0].grades[i];
    for(int i = 1; i < 5; i++){
        p = new Name;
        p->name = a[i].name;
        for(int j = 0; j < 4; j++) p->grades[j] = a[i].grades[j];
        pred->next = p;
        pred = p;
    }
    p->next = NULL;
    b = head;
}


Name* create(){
    Name *head, *pred, *p;
    head = pred = new Name;
    cin >> pred->name;
     for(int i = 0; i < 4; i++) pred->grades[i] = rand() % 6 + 1;
    for(int i = 0; i < 4; i++){
        p = new Name;
        cin >> p->name;
        for(int i = 0; i < 4; i++) p->grades[i] = rand() % 4 + 2;
        pred->next = p;
        pred = p;
    }
    p->next = NULL;
    return head;
}
int main() {
  cout << "vvedite familiu i ocenky (3 raza):\n";
  Name *names = create();
  Name names_new[5];
  transferStackToArray(names, names_new);
  sort(names_new);
  free(names);
  transferArrayToStack(names_new, names);
  print(names);
  free(names);
}