#include <iostream>
using namespace std;
int main()
{
    int marks[] = {1, 2, 3, 4, 5};
    int matmarks []={
        20,40,60,80,100
    };
    //   marks[1]=50;
    //   cout<< matmarks[0] << endl; // Output: 1
    // cout << matmarks[1] << endl; // Output: 2
    // cout << marks[0] << endl; // Output: 1
    // cout << marks[1] << endl; // Output: 2
    // marks[1]=50;
    // cout << marks[1] << endl; // Output: 50
    for(int i=0;i<5;i++){
        cout<<"the marks are "<< marks[i] <<"  "<< "matmarks"<< matmarks [i] << endl;
    }
    return 0;
}