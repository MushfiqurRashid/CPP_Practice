#include<iostream>
#include<iomanip>
#include<fstream>
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
using namespace std;

class item{
    //data members.
    private:
    int code;
    char name[15];
    char address[15];
    int age;
    char date[15];
    char status[15];
    public:
    //memeber function
    void get_item(void);
    void put_item(void);
    int get_code(void)
    {
        return code;
    }
};  // end of class

//member function
void item :: get_item(void){
    cout << "Enter Patient ID : ";
    cin >> code;
    cout << "Enter Patient name : ";
    cin >> name;
    cout << "Enter address: ";
    cin >> address;
    cout << "Enter age : ";
    cin >> age;
    cout << "Enter confirmed positive date : ";
    cin >> date;
    cout << "Enter status : ";
    cin >> status;
}
//member function
void item :: put_item (void){
    //display with width
    cout << setw(6) << code
        <<setw(15) << name << setw(15) << address <<setw(6) << age
        <<setw(15) << date << setw(10) << status << endl;
}
// function prototype
void add_record(void);
void show_all(void);
void delete_record(void);

//global declare

item it;
fstream file;

//main function
int main(){
    int option;
    while (1)
    {
        system("cls");
        cout << "**Menu**"<< endl;
        cout << "1. add new record"<< endl;
        cout << "2. Display all record\n";
        cout << "3. Delete record.\n";
        cout << "4. To exit the porgram.\n";
        cout << "Enter option no : ";
        cin >> option;
        switch (option)
        {
            case 1:{
                add_record();
                cout << "press any key for main menu : ";
                break;
            }
            case 2:{
                cout << "-------------------------------------------------------------------------\n";
                cout << setw(6) << "ID"
                <<setw(15) << "name" << setw(15) << "address" <<setw(6) << "age"
                <<setw(15) << "date" << setw(10) << "status" << endl;
                cout << "--------------------------------------------------------------------------\n";
                show_all();
                cout << "--------------------------------------------------------------------------\n";
                cout << "Press any key to main menu : ";
                break;
            }
            case 3:{
                char l1;
                cout << "What is the reason for remove patient ? .\n";
                cout << "Enter a for swab is negative.\n";
                cout << "Enter b for admitted to CPRC unit.\n";
                cin >> l1;
                delete_record();
                if (l1 == 'a')
                {
                    cout << "Patient is removed for swabbed negaive.\n";
                }
                else
                {
                    cout << "Patient removed because he/she admits in CPRC unit.\n";
                }


                cout << "Press any key to main menu : ";
                break;
            }

            case 4:{
                exit(0);
            }
            default:{
                cout << "Incorrect option" << endl;
                break;
            }
        }
        //end of switch

    }//end of while
    return 0;

}
//funtion to add record in a file
void add_record(){
    char ch = 'y';
    file.open("stock.dat",ios :: app | ios :: binary);
    while (ch == 'y' || ch == 'Y')
    {
        it.get_item();
        //write object into file
        file.write((char*)&it,sizeof(it));
        cout << "Add more records.....(y/n)? : ";
        cin >> ch;
    }
    file.close();

}
//function to dispay all records from file
void show_all(void){
    file.open("stock.dat",ios :: in | ios :: binary);
    if(!file){
        cout << "File not found.\n";
        exit(0);
    }
    else
    {
        //read record to a file into object
        file.read((char*)&it,sizeof(it));
        while (! file.eof())    // while end of line
        {
            it.put_item();
            file.read((char*)&it,sizeof(it));
        }

    }
    file.close();


}
//function to delete record
void delete_record(){
    int no;
    cout << "Enter ID to delete : ";
    cin >> no;
    ofstream file2;
    file2.open("new.dat",ios :: out | ios :: binary);
    file.open("stock.dat",ios :: in | ios :: binary);
    if (!file)
    {
        cout << "File not found.\n";
        exit(0);
    }
    else
    {
        file.read((char*)&it,sizeof(it));
        while (!file.eof())
        {
            if (no != it.get_code())
            {
                file2.write((char*)&it,sizeof(it));
            }
            file.read((char*)&it,sizeof(it));

        }

    }
    file2.close();
    file.close();
    remove("stock.dat");
    rename("new.dat","stock.dat");

}

