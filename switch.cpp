#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter your age: ";
    cin>>a;
    switch (a)
    {    case 18:
        cout<<"you are 18 years old";
        break;  
    case 20:
        cout<<"you are 20 years old";
        break;
    case 25:
        cout<<"you are 25 years old";
        break;          
    default:
        cout<<"your age is not 18, 20 or 25";       
        break;

    }       
}