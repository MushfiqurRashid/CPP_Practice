#include <iostream>
#include "UnsortedType.cpp"

#include "StudentInfo.cpp"
#include<string.h>
using namespace std;

template<class T> int Print(UnsortedType<T> u){
    int length = u.LengthIs();
    T value;
    for(int i=0;i<length;i++){
        u.GetNextItem(value);
    cout<<value<<"\n";
    }
    cout <<endl;
}
template <class T> int Retrieve(UnsortedType<T> u, T value){
    bool b;
    u.RetrieveItem(value,b);
    if(b){
        cout<<"Item is found";
    }
    else
        cout<<"Item not found";
}

int main()
{


    StudentInfo s1(202,"mormo",3.5);
                s2(203,"rakib",2.5);
                s3(204,"siam",3.7);
                UnsortedType<StudentInfo>st1;
                st1.InsertItem(s1);
                st1.InsertItem(s2);
                st1.InsertItem(s3);

    StudentInfo temp(202,"mormo",3.5);
    st1.DeleteItem(temp);
    Print(st1);

    //StudenInfo temp (202);/temp = 202;


    UnsortedType<int>ut;
    UnsortedType<char>ut1;

    ut.InsertItem(5);
    ut.InsertItem(10);
    ut.InsertItem(20);
    ut.InsertItem(30);
    Print(ut);


    Retrieve(ut,5);
    return 0;
}
