#include <iostream>

using namespace std;

int main()
{
    int a;
    cin>> a;
    int *pointer = new int [a];

   for(int i=1;i<=a;i++){
     cin>> pointer[i];
   }
    for(int i=1;i<=a;i++){
     cout<<" "<< pointer[i];
   }

}
