#include <iostream>
using namespace std;

int main(){
    int curr=0,value=0;
    if (cin>>curr){
        int cnt=1;
        while (cin>>value){
            if (value==curr){
                cnt++;
            }
            else {
                cout<< curr << " appears " << cnt << " times" << endl;
                curr=value;
                cnt=1;
            }
    }
    cout<< curr << " appears " << cnt << " times"<< endl;
    }
    return 0;
}