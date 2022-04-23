#include <iostream>
using namespace std;

//  _____Class_Book_____
class Book{
    protected:
    string name;
    float price;
    public:
    Book(string n , float p){
        name = n; price = p;
    }

    virtual void display(){ // Virtual function() declared...
        cout<<endl<<"This will print, if you not declared Virtual function..."<<endl<<endl;
        exit(0);
    }
};

//  _____Class_AudioBook_____
class AudioBook : public Book{
    protected:
    float length;
    public:
    AudioBook(float l,string n, float p) : Book(n,p){
        length = l;
    }

    void display(){
         cout<<endl<<"Book's Name:- "<<name<<endl;
         cout<<"Duration:- "<<length<<" minutes"<<endl;
         cout<<"Price:- "<<price<<" rs"<<endl<<endl;
    }

};

//  _____Class_TextBook_____
class TextBook : public Book{
    protected:
    int pages;
    public:
    TextBook(int pg,string n, float p) : Book(n,p){
        pages = pg;
    }

    void display(){
         cout<<endl<<"Book's Name:- "<<name<<endl;
         cout<<"No. Of Pages:- :- "<<pages<<" pages"<<endl;
         cout<<"Price:- "<<price<<" rs"<<endl<<endl;
    }
};

//  _____Int_Main()_Function_____
int main(){
cout<<endl;

string n = "Nothing"; int pgs = 101; float dur =50, price = 2000; string s;

cout<<endl<<"Enter Book type(AB for AudioBook, TB for TextBook)"<<endl;
cin>>s;

//   _____If()_____
if(s=="AB" || s=="Audio Book" || s=="audiobook" || s=="Audiobook" || s=="Audio book"){
cout<<endl<<"Enter It's Name:"<<endl;
cin>>n;

cout<<endl<<"Enter It's Duration:"<<endl;
cin>>dur;

cin>>price;

AudioBook audio(dur, n, price);
TextBook text(pgs, n, price);

Book *book[2];
book[0] = &audio; 
book[1] = &text;

book[0]->display();
}

//   _____Else_If()_____
else if(s=="TB" || s=="Text Book" || s=="textbook" || s=="Textbook" || s=="Text book"){
cout<<endl<<"Enter It's Name:"<<endl;
cin>>n;

cout<<endl<<"Enter No. Of Pages:"<<endl;
cin>>pgs;

cout<<endl<<"Enter It's Price:"<<endl;
cin>>price;

AudioBook audio(dur, n, price);
TextBook text(pgs, n, price);

Book *book[2];
book[0] = &audio; 
book[1] = &text;

book[1]->display();
}

//   _____Else_____
else{
    cout<<endl<<"!Invalid, Please Enter A Valid Choice..."<<endl<<endl;
    
}
    return 0;
}