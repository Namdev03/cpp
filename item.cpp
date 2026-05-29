#include <iostream>
using namespace std;
class shop
{
    int itemId[100];
    int itemPrice[100];
    int counter;

public:
    void initCounter(void) { counter = 0; };
    void setPrice(void);
    void displayPrice(void);
};
void shop ::setPrice(void){
    cout<<"enter id of item"<<endl;
    cin>>itemId[counter];
    cout<<"enter price of item"<<endl;
    cin>>itemPrice[counter];
    counter++;
};
void shop :: displayPrice(void){
    for(int i=0 ; i<counter ;i++){
        cout<<"id of item  is "<<itemId[i]<<" price of item is "<<itemPrice[i]<<endl;
    }
}
int main()
{
    shop store;
    store.initCounter();
    store.setPrice();
    store.setPrice();
    store.setPrice();
    store.displayPrice();
    return 0;
}