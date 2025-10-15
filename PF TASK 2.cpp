#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const int NUM_SUBJECTS = 5;
    string studentName;
    string subjects[NUM_SUBJECTS] = {"English", "Urdu", "ICT", "Math", "Biology"};
    int marks[NUM_SUBJECTS];
    int totalMarks = 0;
    double percentage;
    string grade;    string result;
    cout << "Enter student's full name: ";
    getline(cin, studentName);
    cout << "\nEnter marks for the following subjects (out of 100):\n";
    for (int i = 0; i < NUM_SUBJECTS; i++) {
        cout << setw(10) << left << subjects[i] << ": ";
        cin >> marks[i];
        totalMarks += marks[i];
     }
    percentage = static_cast<double>(totalMarks) / NUM_SUBJECTS;
    if (percentage >= 90)
        grade = "A+";
    else if (percentage >= 80)
        grade = "A";
    else if (percentage >= 70)
        grade = "B";
    else if (percentage >= 60)
        grade = "C";
    else if (percentage >= 50)
        grade = "D";
    else
        grade = "F";

    result = (percentage >= 50) ? "Pass" : "Fail";
    cout << "\n\n___________REPORT CARD____________\n";
    cout << setw(20) << left << "Student Name:" << studentName << endl;
    cout << setw(20) << left << "Subject Marks:" << endl;

    for (int i = 0; i < NUM_SUBJECTS; i++) {
        cout << "  " << setw(10) << left << subjects[i]
             << ": " << setw(3) << marks[i] << "/100" << endl;
    }

    cout << setw(20) << left << "Total Marks:" << totalMarks << " / 500" << endl;
    cout << setw(20) << left << "Percentage:" << fixed << setprecision(2) << percentage << "%" << endl;
    cout << setw(20) << left << "Grade:" << grade << endl;
    cout << setw(20) << left << "Result:" << result << endl;
    cout << "__________________________________________\n";

    return 0;
}