#include <iostream>
#include "Candidate.h"

int main(){
    std::cout << "hello world C++" << std::endl;
    Candidate candidate("Leo Doe", 1990, "MIT", "Computer Science", 5);
    candidate.addSkill("C++");
    candidate.addSkill("Python");
    candidate.printSummary();
    return 0;
}
