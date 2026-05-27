#include<iostream>
using namespace std;
void swaprefrences(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}
int main(){
 int x=10,y=20;
    cout<<"the value of x before swapping "<<x<<endl;
    cout<<"the value of y before swapping "<<y<<endl;
    swaprefrences(x,y);
    cout<<"the value of x after swapping "<<x<<endl;
    cout<<"the value of y after swapping "<<y<<endl;
    return 0;
}