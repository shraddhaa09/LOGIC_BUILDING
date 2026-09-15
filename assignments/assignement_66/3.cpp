#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main() {

    vector<pair<string, string>> employees = {
        {"Amit", "IT"},
        {"Rahul", "HR"},
        {"Pooja", "IT"},
        {"Neha", "Finance"},
        {"Kiran", "HR"},
        {"Riya", "IT"}
    };

    map<string, vector<string>> groups;

    for (auto employee : employees) {
        string name = employee.first;
        string department = employee.second;

        groups[department].push_back(name);
    }

    for (auto group : groups) {

        cout << group.first << ":" << endl;

        for (string name : group.second) {
            cout << name << endl;
        }

        cout << endl;
    }

    return 0;
}