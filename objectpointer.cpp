#include<iostream>
using namespace std;
class Complex{
    int real ,imaginary;
    public:
    void getData(){
        cout<<"the real part is "<<real<<endl;
        cout<<"the imaginary part is "<<imaginary<<endl;
    }
    void setData(int a,int b){
        real = a;
        imaginary = b;
    }
};
int main(){
Complex c1;
// Complex *ptr = &c1;//pointer to object
Complex *ptr2 = new Complex;//pointer to object created dynamically
c1.setData(3,4);
c1.getData();
return 0;
}