#include<iostream>

using namespace std;

int main(){
    int sizeOfArray;
    cout<<"Enter the size of the array:";
    cin>> sizeOfArray;

    int *ptr = new int[sizeOfArray];

    for(int i =0;i<sizeOfArray;i++){
        cin>>ptr[i];
    }

    for(int i =0;i<sizeOfArray;i++){
        cout<<ptr[i]<<" ";
    }
    delete []ptr;

    for(int i =0;i<sizeOfArray;i++){
        cout<<ptr[i]<<" ";
    }





}
