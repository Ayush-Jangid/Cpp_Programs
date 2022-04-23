// Virtual Class:- It is used to prevent Duplication...

#include <iostream>
using namespace std;

class Student{
    protected:
    int roll_no;
    public:
    void set_number(int rn){
        roll_no = rn;
    }
    void print_number(){
        cout<<endl<<"Your Rollno is:- "<<roll_no<<endl;
    }
};

class Exam : virtual public Student{
    protected:
    float maths, english;
    public:
    void set_marks(float m,float e){
        maths = m; english = e;
    }
    void print_marks(){
        cout<<endl<<"Maths Marks:- "<<maths
            <<endl<<"English Marks:- "<<english<<endl;
    }
};

class Sports : virtual public Student{
    protected:
    float score;
    public:
    void set_score(float s){
        score = s;
    }
    void print_score(){
        cout<<"Physical Marks:- "<<score<<endl;
    }
};

class Result : public Exam, public Sports{
    private:
    float total;
    public:
    void result(){
        total = (maths+english+score);
        print_number();
        print_marks();
        print_score();
        cout<<endl<<"Your Total Score is:- "<<total<<endl;
    }  
};

int main(){
Result Gotiya;
Gotiya.set_number(12);
Gotiya.set_marks(70,80);
Gotiya.set_score(90);
Gotiya.result();

cout<<endl;
    return 0;
}