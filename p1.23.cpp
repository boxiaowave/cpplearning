#include <iostream>
#include "Sales_item.h"
using namespace std;

int main()
{
    Sales_item item1,item2;
    cout << "Please input sale record" << endl;
    if (cin >> item1){
        int num=1;
        while(cin >> item2){
            if (item1.isbn()==item2.isbn()){
                num++;
            }
            else {
                cout << "There are " << num << " records for " << item1.isbn() << endl; 
                item1=item2;
                num=1;
            }
        }
        cout << "There are " << num << " records for " << item1.isbn() << endl; 
    }
    else {
        cout << "there are no data" << endl;
    }
    return 0;
}