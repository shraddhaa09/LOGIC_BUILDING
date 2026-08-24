#include <iostream>
using namespace std;

bool isDuplicate(int id, int ids[], int count) {
    for (int i = 0; i < count; i++) {
        if (ids[i] == id) {
            return true;
        }
    }
    return false;
}

int main() {
    int n;
    cin >> n;

    if (n < 0) {
        cout << "Invalid number of votes";
        return 0;
    }

    int ids[100];
    int validVotes = 0;
    int duplicateVotes = 0;

    for (int i = 0; i < n; i++) {
        int id;
        cin >> id;

        if (id < 0) {
            cout << "Invalid voter ID";
            return 0;
        }

        if (isDuplicate(id, ids, validVotes)) {
            duplicateVotes++;
        } else {
            ids[validVotes] = id;
            validVotes++;
        }
    }

    cout << "Valid Votes: " << validVotes << endl;
    cout << "Rejected Duplicate Votes: " << duplicateVotes << endl;

    return 0;
}