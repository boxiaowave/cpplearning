#include <iostream>
/* this is a tetst
 * test whtat
 * ty
 */ 

using namespace std;

int main(){
    int curr=0,value=0;
    while (cin>>value){
        int cnt=1;
        if (value==curr){
            cnt+=1;
        }
        else {
            curr=value;
        }
    }
    return 0;
}