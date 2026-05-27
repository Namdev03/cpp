#include<iostream>
using namespace std;
struct employee
{
    int id ;
    char favchar;
    float salary;
};

int main(){
struct employee harry;
harry.id = 1;
harry.favchar = 'h';
harry.salary = 120000.00;
cout<<"the id of the employee is "<< harry.id << endl;
cout<<"the fav char of the employee is "<< harry.favchar << endl;
cout<<"the salary of the employee is "<< harry.salary << endl;
return 0;
 }