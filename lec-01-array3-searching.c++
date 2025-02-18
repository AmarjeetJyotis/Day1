#include<iostream>
using namespace std;
int find(int arr[], int size, int key){
    for(int i=0; i<size; i++){
        if(arr[i]==key)
        return true;
    }
    return false;
}
int main(){
    int arr[]={5, 7, 9, 10, 15, 20};
    int size=6;
    cout<<"Enter the searching element is: "<<endl;
    int key;
    cin>>key;
    if(find(arr, size, key)){
        cout<<"Element is found"<<endl;
    }
    else{
        cout<<"element is not found"<<endl;
    }
return 0;
}