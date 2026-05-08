#include<iostream>
#include<string>
using namespace std;
class student{
    public:
    //data members
    string name;
    int rollno;

    //member function
    void display(){

        cout<<"name:"<<name<<endl;
        cout<<"roll no:"<<rollno<<endl;

    };
}
int main() {
    student s1;
    s1.name="priyanshu";
    s1.rollno=1171;
    s1.display();
    return 0;
}