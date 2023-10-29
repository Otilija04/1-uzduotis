#ifndef LIBRARY_H
#define LIBRARY_H

#include <iostream>
#include <vector>
#include <iomanip>
#include <string>
#include <algorithm>
#include <random>
#include <fstream>
#include <filesystem>
#include <chrono>

struct Student {
    std::string firstName;
    std::string lastName;
    std::vector<int> homeworkGrades;
    int exam;
    double avg;
    double med;
};

std::vector<Student> readStudentData(const std::string& filename);

int generateRandomNumber(int n, int n1);

void generateStudents(int numStudents, std::vector<Student>& students);

void saveStudentsToFile(const std::vector<Student>& students, const std::string& fileName);

void separateStudentsByAverage(const std::vector<Student>& students, std::vector<Student>& badStudents, std::vector<Student>& goodStudents);

#endif
