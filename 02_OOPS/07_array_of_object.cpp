#include <iostream>
using namespace std;

class student{
    private:
    static int n;
    int rollno;
    float marks;
    public:
    void getinfo();
    void display();
};

int student :: n;

int main(){
    int n;
    cout<<"Enter the number of student:"<<endl;
    cin>>n;
    student ukg[n]; // --> Array of an object...

    for(int i=0; i<n; i++){
        ukg[i].getinfo();
        ukg[i].display();
    }

    return 0;
}

void student :: getinfo(){
    n++;
    cout<<"Enter Rollno. of student "<<n<<endl;
    cin>>rollno;
    cout<<"Enter Marks of student "<<n<<endl;
    cin>>marks;
    cout<<endl;
}

void student :: display(){
    cout<<"Marks of Rollno. "<<rollno<<" is:- "<<marks<<endl<<endl;
}