#include <iostream>
using namespace std;

int main() {
    float marks1, marks2, marks3, marks4, marks5;
    float total, percentage;

    cout << "Enter marks of 5 subjects: ";
    cin >> marks1 >> marks2 >> marks3 >> marks4 >> marks5;

    total = marks1 + marks2 + marks3 + marks4 + marks5;
    percentage = total / 5;

    cout << "\nTotal Marks = " << total;
    cout << "\nPercentage = " << percentage << "%";

    if (percentage >= 90)
        cout << "\nGrade: A+";
    else if (percentage >= 80)
        cout << "\nGrade: A";
    else if (percentage >= 70)
        cout << "\nGrade: B";
    else if (percentage >= 60)
        cout << "\nGrade: C";
    else if (percentage >= 50)
        cout << "\nGrade: D";
    else
        cout << "\nGrade: F";

    return 0;
}