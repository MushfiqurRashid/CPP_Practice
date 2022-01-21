#include<iostream>

using namespace std;

int main(){

    int row,col;
    cout <<"Enter row size:";
    cin>> row;
    cout<< "Enter column size:";
    cin>> col;

    string **pointer = new string *[row];

    for(int i=0;i<=row;i++){
        pointer[i]= new string[col];
    }

    for(int i =0;i<row;i++){
        for(int j =0;j<col;j++){
            cin>> pointer[i][j];
        }
    }
    for(int i =0;i<row;i++){
        for(int j =0;j<col;j++){
            cout<<" "<<pointer[i][j];
        }
        cout<<"\n";
    }
    delete []pointer;
    for(int i =0;i<row;i++){
        for(int j =0;j<col;j++){
            cout<<" "<<pointer[i][j];
        }
        cout<<"\n";
    }
}
