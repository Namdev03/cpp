#include <iostream>
using namespace std;
int main(){
    int marks []= {1,2,3,4,5};
    int *p = marks; // p is a pointer that holds the address of the first element of the array marks
    cout<<"first mark "<<" "<< marks[0]<<endl;
    cout<<"first mark "<<" "<<*(p+1)<<endl;
    cout<<"first mark "<<" "<<*(p+2)<<endl;
    cout<<"first mark "<<" "<<*(p+3)<<endl;
return 0;
}