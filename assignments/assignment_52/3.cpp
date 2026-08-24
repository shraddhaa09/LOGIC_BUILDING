#include <iostream>
using namespace std;

bool goalAchieved(int steps) {
    return steps >= 10000;
}

int main() {
    int steps;
    int goalDays = 0;
    int maxSteps = 0;

    for (int i = 0; i < 7; i++) {
        cin >> steps;

        if (steps < 0) {
            cout << "Invalid steps";
            return 0;
        }

        if (goalAchieved(steps)) {
            goalDays++;
        }

        if (steps > maxSteps) {
            maxSteps = steps;
        }
    }

    cout << "Goal Achieved Days: " << goalDays << endl;
    cout << "Maximum Steps in Week: " << maxSteps << endl;

    return 0;
}