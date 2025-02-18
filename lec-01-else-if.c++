#include<iostream>
using namespace std;
int main(){
    int score;
    cout<<"Enetr your score"<<endl;
    cin>>score;
    if(score>90){
        cout<<"Grade is: A"<<endl;
    }
    else if(score>80){
        cout<<"Grade is: B"<<endl;
    }
    else if(score>70){
        cout<<"Grade is: C"<<endl;
    }
    else if(score>60){
        cout<<"Grade is: D"<<endl;
    }
    else{
        cout<<"Your are Fail";
    }
return 0;
}