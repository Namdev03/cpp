#include <iostream>
using namespace std;
int main(){
    int a = 5;
    int* ptr = &a;
    cout << "value of a: "<<*ptr<<endl;
    int *arr = new int[5]; // dynamic array allocation
        for(int i=0;i<5;i++){
        arr[i] = i+1;
        cout << "the value of arr["<<i<<"] is "<<arr[i]<<endl;
    }
    return 0;
}