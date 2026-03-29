#include <iostream>
#include "Candidate.h"
#include "Jobs.h"

int main(){
    // std::cout << "hello world C++" << std::endl;
    Candidate candidate("Leo Doe", 1990, "MIT", "Computer Science", 5);
    candidate.addSkill("C++");
    candidate.addSkill("Python");
     candidate.addSkill("Machine Learning");
    candidate.printSummary();

    Job newjob("Software Engineer", "Engineering", "Hsinchu", {"Matlab"}, 3, 120000);
    newjob.addRequiredSkill("Python");
    newjob.addRequiredSkill("Java");
    newjob.printSummary();
    return 0;
}
