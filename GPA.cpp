#include <iostream>
#include <string>
using namespace std;

double gradeToPoints(string grade) {
    if (grade == "A+" || grade == "A") return 4.0;
    else if (grade == "A-") return 3.7;
    else if (grade == "B+") return 3.3;
    else if (grade == "B") return 3.0;
    else if (grade == "B-") return 2.7;
    else if (grade == "C+") return 2.3;
    else if (grade == "C") return 2.0;
    else if (grade == "C-") return 1.7;
    else if (grade == "D+") return 1.3;
    else if (grade == "D") return 1.0;
    else if (grade == "F") return 0.0;
    else return -1;
}

int main() {
    int numSemesters;
    cout << "=== CGPA Calculator ===" << endl;
    cout << "Enter number of semesters: ";
    cin >> numSemesters;

    double semesterGPA[numSemesters];
    double semesterCreditHours[numSemesters];

    for (int s = 0; s < numSemesters; s++) {
        cout << "\n--- Semester " << (s + 1) << " ---" << endl;

        int numCourses;
        cout << "Enter number of courses: ";
        cin >> numCourses;

        string grades[numCourses];
        double creditHours[numCourses];
        double gradePoints[numCourses];

        for (int i = 0; i < numCourses; i++) {
            cout << "\nCourse " << (i + 1) << ":" << endl;

            do {
                cout << "Enter grade (A+, A, A-, B+, B, B-, C+, C, C-, D+, D, F): ";
                cin >> grades[i];
                gradePoints[i] = gradeToPoints(grades[i]);
                if (gradePoints[i] == -1)
                    cout << "Invalid grade! Please try again." << endl;
            } while (gradePoints[i] == -1);

            cout << "Enter credit hours: ";
            cin >> creditHours[i];
        }

        double totalPoints = 0, totalCreditHours = 0;
        for (int i = 0; i < numCourses; i++) {
            totalPoints += gradePoints[i] * creditHours[i];
            totalCreditHours += creditHours[i];
        }
        double gpa = totalPoints / totalCreditHours;

        semesterGPA[s] = gpa;
        semesterCreditHours[s] = totalCreditHours;

        cout << "\n----- Semester " << (s + 1) << " Result -----" << endl;
        cout << "Course\tGrade\tCredit Hrs\tGrade Points" << endl;
        for (int i = 0; i < numCourses; i++) {
            cout << (i + 1) << "\t" << grades[i] << "\t" << creditHours[i]
                 << "\t\t" << gradePoints[i] << endl;
        }
        cout << "Total Credit Hours: " << totalCreditHours << endl;
        cout << "Semester " << (s + 1) << " GPA: " << gpa << endl;
    }

    double totalCgpaPoints = 0, totalCgpaCreditHours = 0;
    for (int s = 0; s < numSemesters; s++) {
        totalCgpaPoints += semesterGPA[s] * semesterCreditHours[s];
        totalCgpaCreditHours += semesterCreditHours[s];
    }
    double cgpa = totalCgpaPoints / totalCgpaCreditHours;

    cout << "\n===== Overall CGPA =====" << endl;
    for (int s = 0; s < numSemesters; s++) {
        cout << "Semester " << (s + 1) << " GPA: " << semesterGPA[s] << endl;
    }
    cout << "\nCGPA: " << cgpa << endl;

    return 0;
}
