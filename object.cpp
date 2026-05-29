#include <iostream>
using namespace std;
class employee
{
    int id;
    string name;
    int salary;

public:
    void setId(void)
    {
        salary = 122;
        cout << "enter the id of empoloyee " << endl;
        cin >> id;
        cout << "enter Name of empoloyee " << endl;
        cin >> name;
    }
    void getId(void)
    {
        cout << " detail of employee is " << id << endl
             << "name of employee " << name << endl
             << "salary of employee" << salary;
    }
};
int main()
{
    employee e1[4];
  for(int i =0; i<=4; i++){
      e1[i].setId();
      e1[i].getId();
  }
}