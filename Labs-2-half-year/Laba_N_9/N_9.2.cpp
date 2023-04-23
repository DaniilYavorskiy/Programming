#include <iostream>
#include <string>
using namespace std;

struct students{
    string name;
    int grades[4];
    students* next;
    students* prev;

};
students* create(){
    students* head, *prev, *next;
    head = prev = new students;
    cin >> prev->name;
    for(int i = 0; i < 4; i++) prev->grades[i] = rand() % 4 + 2;
    prev -> prev = NULL;
    for(int i = 0; i < 4; i++){
        next = new students;
        cin >> next->name;
        for(int i = 0; i < 4; i++) next->grades[i] = rand() % 4 + 2;
        prev -> next = next;
        next -> prev = prev;
        prev = next;
    }
    next->next = NULL;
    return head;
}

void print(students* names){
   students* tmp = names;
    while(tmp != NULL){
        cout << tmp -> name << " ";
        for(int i = 0; i < 4; i++) cout << tmp -> grades[i] << " ";
        cout << endl;
        tmp = tmp->next;
    }
}
void deleteElmnt(students* student){
students *prev, *next;
  prev = student->prev; 
  next = student->next; 
  if (prev != NULL)
    prev->next = student->next; 
  if (next != NULL)
    next->prev = student->prev; 
  free(student); 
}


void clear(students* student){
    students* tmp = student;
    while(tmp != NULL) {
         int k = 0;
        for(int i = 0; i < 4; i++) if(tmp -> grades[i] == 2 ) k++;
        if (k > 0) deleteElmnt(tmp);
        tmp = tmp->next;
        };
}


int main() {
    cout << "ENTER NAMES" << endl;
    students* list = create();
    print(list);
    clear(list);
    cout << endl << endl;
    print(list);
}