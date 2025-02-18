#include<iostream>
using namespace std;
bool checkEven(int n){
    if(n%2==0){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    int n;
    cout << "Enter value of n: ";
    cin >> n;
    bool isEven=checkEven(n);
    if(isEven){
        cout<<n<<"  is Even"<<endl;
    }
    else{
        cout<<n<<"  is Not Even"<<endl;
    }
return 0;
}