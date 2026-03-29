#include "Candidate.h"

Candidate::Candidate(
    const std::string& name, 
    int birthYear, 
    const std::string& university, 
    const std::string& major, 
    int yearsOfExperience)
    : name(name), birthYear(birthYear), university(university), major(major), yearsOfExperience(yearsOfExperience), status(ApplicationStatus::Applied) {}

void Candidate::addSkill(const std::string& skill) {
    skills.push_back(skill);
}

void Candidate::updateStatus(ApplicationStatus newStatus) {
    status = newStatus;
}

void Candidate::printSummary() {
    
}