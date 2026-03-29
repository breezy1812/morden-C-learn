#include "Jobs.h"
#include <iostream>

Job::Job(
    const std::string& title, 
    const std::string& department, 
    const std::string& location, 
    const std::vector<std::string>& requiredSkills, 
    int minimumYearsOfExperience,
    int salary)
    : title(title), department(department), location(location), requiredSkills(requiredSkills), minimumYearsOfExperience(minimumYearsOfExperience), salary(salary) {}

void Job::addRequiredSkill(const std::string& skill) {
    requiredSkills.push_back(skill);

}
const std::string& Job::getTitle() const{
    return title;
}

const std::string& Job::getDepartment() const{
    return department;
}

const std::string& Job::getLocation() const{
    return location;
}

const std::vector<std::string>& Job::getRequiredSkills() const{
    return requiredSkills;
}

int Job::getMinimumYearsOfExperience() const{
    return minimumYearsOfExperience;
}

int Job::getSalary() const{
    return salary;
}

void Job::printSummary() const{
    std::cout << "Job Title: " << title << std::endl;
    std::cout << "Department: " << department << std::endl;
    std::cout << "Location: " << location << std::endl;
    std::cout << "Required Skills: ";
    for (const auto& skill : requiredSkills) {
        if (&skill != &requiredSkills.front()) {
            std::cout << ", ";
        }
        std::cout << skill;
    }
    std::cout << std::endl;
    std::cout << "Minimum Years of Experience: " << minimumYearsOfExperience << std::endl;
    std::cout << "Salary: $" << salary << std::endl;
}