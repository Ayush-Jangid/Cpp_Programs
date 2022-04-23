#include <iostream>
#include <string.h>

using namespace std;

typedef struct students {
  int rollno;
  float marks;
  char name[25];
} student;

void input(student *s){
    cout<<"Enter name:"<<endl;
    cin>>(*s).name;

    cout<<"Enter the Roll.no of "<<(*s).name<<":"<<endl;
    cin>>(*s).rollno;

    cout<<"Enter the Marks of "<<(*s).name<<":"<<endl;
    cin>>(*s).marks;

}

void display(student s){
    cout<<endl;
    cout<<"Name of student is:- "<<s.name<<endl;
    cout<<"Rollno of "<<s.name<<"is:- "<<s.rollno<<endl;
    cout<<"Marks of "<<s.name<<"is:- "<<s.marks<<endl;
}

int main(){
    
student s1;

input(&s1);

display(s1);

    return 0;
}