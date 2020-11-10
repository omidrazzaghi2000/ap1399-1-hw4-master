#ifndef LAB_H
#define LAB_H


#include "student.h"
#include "prof.h"
#include "course.h"


class Lab : public ER
{
    public:
    Lab();
    ~Lab();
    Lab(Course*,Student*,Prof*,int wight);
    float calculate_final();  // 10 points for final exam,8 points for report,2 points for activies
    void scoring(float report,float activities,float final_exam,int absences);
    float report;  // score of student's lab reports
    float activities;   // score of student's activities in class
    float final_exam;
};

#endif