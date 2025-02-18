#include<iostream>
using namespace std;
int main()
{
    int num, fact=1;
    cout<<"Enter the Number: ";
    cin>>num;
    for(int i=num; i>=1; i--)
        fact = fact*i;
    cout<<"Factorial = "<<fact;
    cout<<endl;
    return 0;
}
