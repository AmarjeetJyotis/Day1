#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter your number: "<<endl;
    cin>>n;
    for(int i=2; i<n; i++){
        if(n%i==0){
            cout<<"Not a prime number"<<endl;
        }
        else{
            cout<<"Prime Numbers"<<endl;
        }
    }
return 0;
}