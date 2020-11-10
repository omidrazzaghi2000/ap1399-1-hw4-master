#ifndef PERSON_H
#define PERSON_H

#include "string.h"
#include "iostream"
// #include "course.h"
#include <string>


class Person
{
    public:
    Person(){};
    ~Person(){};
    // virtual float get_mean();
    std::string first_name;
    std::string last_name;
    int id;   // id of person(for example for students it's student number)
    // Course** courses; // a set of pointers to person's courses
    int n_classes{};  // number of person's courses
};

#endif
