#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Student {
    string name;
    vector<double> marks;
    double average;
};

int main() {
    int numStudents, numSubjects;
    cout << "Enter number of students: ";
    cin >> numStudents;
    cout << "Enter number of subjects: ";
    cin >> numSubjects;

    vector<Student> students(numStudents);
    int passedCount = 0;

    for (int i = 0; i < numStudents; ++i) {
        cout << "\nEnter name for student " << i + 1 << ": ";
        cin >> students[i].name;
        
        double sum = 0;
        cout << "Enter marks for " << numSubjects << " subjects:\n";
        for (int j = 0; j < numSubjects; ++j) {
            double m;
            cin >> m;
            students[i].marks.push_back(m);
            sum += m;
        }
        
        students[i].average = sum / numSubjects;
        if (students[i].average >= 50) passedCount++;
    }

    double maxAvg = students[0].average;
    double minAvg = students[0].average;

    for (const auto& s : students) {
        if (s.average > maxAvg) maxAvg = s.average;
        if (s.average < minAvg) minAvg = s.average;
    }

    int failedCount = numStudents - passedCount;
    double passPercentage = (static_cast<double>(passedCount) / numStudents) * 100;

    cout << "\n--- Exam Analytics Results ---\n";
    cout << "Highest Average: " << maxAvg << endl;
    cout << "Lowest Average: " << minAvg << endl;
    cout << "Number of Passed Students: " << passedCount << endl;
    cout << "Number of Failed Students: " << failedCount << endl;
    cout << "Success Percentage: " << passPercentage << "%" << endl;

    return 0;
}
