#include <iostream>
using namespace std;

class employee{
    private:
    float salary; int code; string name;
    public:
    employee();
    void display();
};

int main(){

employee kapil;
kapil.display();

    return 0;
}

employee :: employee(){
        cout<<endl<<"_Enter_Employee's_Name_:  "; getline(cin,name);
        cout      <<"_Enter_Employee's_Code_:  "; cin>>code;
        cout      <<"_Enter_Employee's_Salary_:  "; cin>>salary;
    }

    void employee :: display(){
        cout<<endl<<"_Employee's_Name_:- "<<name<<endl; 
        cout      <<"_Enter_"<<name<<"_Code_:- "<<code<<endl; 
        cout      <<"_Enter_"<<name<<"_Salary_:- "<<salary<<endl<<endl;
    }