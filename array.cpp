#include<iostream>
#include<string.h>

using namespace std;

int main(){

int row,col;
cin>>row>>col;
string **ptr = new string *[row];

for(int i=0;i<row;i++){
    ptr[i]=new string[col];
}

for(int i=0;i<row;i++)
{
    for(int j=0;j<col;j++){
        cin>>ptr[i][j];
    }
 }
 for(int i=0;i<row;i++)
{
    for(int j=0;j<col;j++){
    cout<<ptr[i][j]<<" ";
    }
 }


}
