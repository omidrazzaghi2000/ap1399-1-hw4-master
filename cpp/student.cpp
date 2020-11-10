#include "student.h"

Student::Student(std::string _first_name,std::string _last_name,int _id,float _mean_score,int _passed){
    first_name = _first_name;
    last_name = _last_name;
    id = _id;
    mean_score =_mean_score;
    passed = _passed;
}

Student::~Student(){
    
}