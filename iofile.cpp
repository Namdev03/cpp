#include<iostream>
#include<fstream>

using namespace std;

int main() {

    string st = "this is file handling in c++";
    string st2;

    // Writing to file
    // ofstream out("sample.txt");
    // out << st;
    // out.close();

    // Reading from file
    ifstream in("sample.txt");
    in >> st2;

    cout << st2;

    in.close();

    return 0;
}