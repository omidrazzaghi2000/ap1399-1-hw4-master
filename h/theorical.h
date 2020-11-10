#ifndef THEORICAL_H
#define THEORICAL_H


#include "course.h"
#include "student.h"
#include "prof.h"
#include "er.h"


class Theorical : public ER
{
    public:
    Theorical();
    ~Theorical();
    Theorical(Course*,Student*,Prof*,int wight);
    float calculate_final(); // 8 points for final exam,8 points for mid_term,4 points for homeWorks
    void scoring(float mid_term,float final_exam,float homeWorks,int absences);
    float mid_term;
    float final_exam;
    float homeWorks;
};
#endif