#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric> // For std::accumulate

using std::cout;
using std::cin;
using std::string;
using std::vector;
using std::endl;

// Student structure
struct Stud {
    string var = "a", pav = "a";
    vector<int> paz; // Homework grades
    int egz = 9; // Exam grade
};

// Function to calculate median of homework grades
double Mediana(const vector<int>& grades) {
    if (grades.empty()) return 0; // Avoid division by zero

    vector<int> sortedGrades = grades;
    sort(sortedGrades.begin(), sortedGrades.end());

    size_t size = sortedGrades.size();
    if (size % 2 == 0) {
        return (sortedGrades[size / 2 - 1] + sortedGrades[size / 2]) / 2.0;
    } else {
        return sortedGrades[size / 2];
    }
}

// Function to calculate the average of homework grades
double Vidurkis(const vector<int>& grades) {
    if (grades.empty()) return 0; // Avoid division by zero
    return std::accumulate(grades.begin(), grades.end(), 0.0) / grades.size();
}
