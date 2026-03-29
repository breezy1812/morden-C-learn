#pragma once

#include <string>
#include <vector>

//定義 enum class（ApplicationStatus）
enum class ApplicationStatus {
    Applied,
    PassedOnlineInterview,
    Interviewing,
    Failed,
    Offered,
    Rejected
};

class Candidate {
public:
    // constructor
    Candidate(
        const std::string& name, 
        int birthYear, 
        const std::string& university, 
        const std::string& major,
        int yearsOfExperience);
        
    // addSkill
    void addSkill(const std::string& skill);

    // updateStatus
    void updateStatus(ApplicationStatus newStatus);

    // printSummary（先宣告，不用實作）
    void printSummary() const;

private:
    // TODO: member variables
    std::string name;
    int birthYear;
    std::string university;
    std::string major;
    int yearsOfExperience;
    std::vector<std::string> skills;
    ApplicationStatus status;

};