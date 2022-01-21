#include<iostream>

using namespace std;

int main(){

int row,col;

cout<<"Enter the size of row:";
cin>>row;
cout<<"Enter the size of column:";
cin>>col;


int **ptr = new int*[row];

for(int i=0;i<row;i++){
    ptr[i]= new int[col];
}

for(int i=0;i<row;i++){
    for(int j=0;j<arr;j++){
        cin>>ptr[i][j];
    }
}

for(int i=0;i<row;i++){
        cout<<"\n";
    for(int j=0;j<arr;j++){
        cout<<ptr[i][j]<<" ";
    }
}


}
