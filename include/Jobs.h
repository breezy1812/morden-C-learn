#pragma once

#include <string>
#include <vector>

class Job {
public:
    Job(
        const std::string& title, 
        const std::string& department, 
        const std::string& location, 
        const std::vector<std::string>& requiredSkills, 
        int minimumYearsOfExperience,
        int salary);

    void addRequiredSkill(const std::string& skill);

    // getter functions
    const std::string& getTitle() const;
    const std::string& getDepartment() const;
    const std::string& getLocation() const;
    const std::vector<std::string>& getRequiredSkills() const;
    int getMinimumYearsOfExperience() const;
    int getSalary() const;
    void printSummary() const;

private:
    std::string title;
    std::string department;
    std::string location;
    std::vector<std::string> requiredSkills;
    int minimumYearsOfExperience;
    int salary;
};