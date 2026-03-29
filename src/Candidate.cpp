#include "Candidate.h"
#include <iostream>

Candidate::Candidate(
    const std::string& name, 
    int birthYear, 
    const std::string& university, 
    const std::string& major, 
    int yearsOfExperience)
    : name(name), birthYear(birthYear), university(university), major(major), yearsOfExperience(yearsOfExperience), status(ApplicationStatus::Applied) {}

void Candidate::addSkill(const std::string& skill) {
    skills.push_back(skill);
    //push_back 是 C++ 容器常見的成員函式，用來把一個新元素加到容器尾端。
    //最常見於 std::vector、std::string 和 std::list。
    //效能上，push_back 對 std::vector 通常是攤銷 O(1)，也就是大多數時候很快，但偶爾擴容時成本會比較高。
    //若已知會加入很多元素，可以先用 reserve 預留空間，減少重配置次數，讓程式更有效率。
}

void Candidate::updateStatus(ApplicationStatus newStatus) {
    status = newStatus;
}

const std::string& Candidate::getName() const {
    return name;
}
int Candidate::getBirthYear() const {
    return birthYear;
}
const std::string& Candidate::getUniversity() const {
    return university;
}
const std::string& Candidate::getMajor() const {
    return major;
}
int Candidate::getYearsOfExperience() const {
    return yearsOfExperience;
}
ApplicationStatus Candidate::getStatus() const {
    return status;
}

void Candidate::printSummary() const {
    std::cout << "Name: " << name << std::endl;
    std::cout << "Birth Year: " << birthYear << std::endl;
    std::cout << "University: " << university << std::endl;
    std::cout << "Major: " << major << std::endl;
    std::cout << "Years of Experience: " << yearsOfExperience << std::endl;
    std::cout << "Skills: ";
    for (const auto& skill : skills) {
        // 為了在列印技能時，技能之間用逗號分隔，但不在第一個技能前面加逗號
        if (&skill != &skills.front()) {
            std::cout << ", ";
        }
        std::cout << skill;
    }

    std::cout << std::endl;
    std::cout << "Application Status: ";
    switch (status) {
        case ApplicationStatus::Applied:
            std::cout << "Applied";
            break;
        case ApplicationStatus::PassedOnlineInterview:
            std::cout << "Passed Online Interview";
            break;
        case ApplicationStatus::Interviewing:
            std::cout << "Interviewing";
            break;
        case ApplicationStatus::Failed:
            std::cout << "Failed";
            break;
        case ApplicationStatus::Offered:
            std::cout << "Offered";
            break;
        case ApplicationStatus::Rejected:
            std::cout << "Rejected";
            break;
    }
    std::cout << std::endl;
}