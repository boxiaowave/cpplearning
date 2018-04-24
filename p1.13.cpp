#include <iostream>
using namespace std;

int main(){
    int sum=0;
    int a=0;
    int b=0;
    for (int i= 50;i<=100;i++){
        sum+=i;
    }
    cout << sum <<endl;
    for (int i=10;i>=0;i--){
        cout << i << ' ';
    }
    cout << endl;
    cin >> a >> b;
    if (a>b)
        for (int i=a;i>=b;i--){
            cout<< i <<' ';
        }
    else 
        for (int i=a;i<=b;i++){
            cout<< i <<' ';
        } 
    cout << endl;
}