#include<iostream>
#include<fstream>
using namespace std;
int main(){
    string st ="this is me";
    ofstream out("samle1.txt");
    out<<st;
    out.close();
    string st2;
    ifstream in("samle1.txt");
    // in>>st2;
    getline(in,st2);
    cout<<st2;
    in.close();
    return 0;
}