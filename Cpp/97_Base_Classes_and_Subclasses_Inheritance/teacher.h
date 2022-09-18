// #ifndef "TEACHER.H"
// #define "TEACHER.H"

#include <vector>
#include <string>
#include <iostream>
#include "user.h"
class Teacher : public User
{
public:
    std::vector<std::string> classes_teaching;
    void output();
    Teacher();
}
// #endif