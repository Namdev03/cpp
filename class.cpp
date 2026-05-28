#include<iostream>
using namespace std;
class student{
    public:
    string name;
    int age;
    int rollno;
    void show(){
        cout<<"name of student is "<<name<<endl;
        cout<<"age of student is "<<age<<endl;
        cout<<"rollno of student is "<<rollno;
    }
};
int  main(){
student s;
s.name= "satyarth";
s.age=20;
s.rollno=101;
s.show();
return 0;
}