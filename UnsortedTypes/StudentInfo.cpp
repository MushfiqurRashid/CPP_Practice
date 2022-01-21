#include "StudentInfo.h"

StudentInfo::StudentInfo(int id,string name, double cgpa){
    this->id =id;
    this->name =name;
    this->cgpa =cgpa;
}

StudentInfo::StudentInfo(int id){
    this->id = id;
}

bool StudentInfo:: operator == (StudentInfo s){
    if(this-> id == s.id){
        return true;
        else
            return false;

    }
}
bool StudentInfo:: operator != (StudentInfo s){
        if(this-> id != s.id){
        return true;
        else
            return false;

    }
}


ostream& operator <<(ostream& os, StudentInfo& student){
    os<<student.id<<", "<<student.name<<", "<<student.cgpa<<endl;
}
