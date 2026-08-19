#include <iostream>
using namespace std;

void CalculateResult(int marks[])
{
    // Validate marks
    for (int i = 0; i < 5; i++)
    {
        if (marks[i] < 0 || marks[i] > 100)
        {
            cout << "Invalid input." << endl;
            return;
        }
    }

    // Check whether student failed in any subject
    for (int i = 0; i < 5; i++)
    {
        if (marks[i] < 35)
        {
            cout << "Result: Fail" << endl;
            return;
        }
    }

    // Calculate total marks
    int total = 0;

    for (int i = 0; i < 5; i++)
    {
        total += marks[i];
    }

    // Calculate average
    float average = total / 5.0;

    cout << "Average Marks: " << average << endl;

    // Classification
    if (average >= 75)
    {
        cout << "Classification: Distinction" << endl;
    }
    else if (average >= 60)
    {
        cout << "Classification: First Class" << endl;
    }
    else if (average >= 50)
    {
        cout << "Classification: Second Class" << endl;
    }
    else
    {
        cout << "Classification: Pass" << endl;
    }
}

int main()
{
    int marks[5];

    cout << "Enter marks for 5 subjects: ";

    for (int i = 0; i < 5; i++)
    {
        cin >> marks[i];
    }

    CalculateResult(marks);

    return 0;
}