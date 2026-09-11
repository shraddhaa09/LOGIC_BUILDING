#include<iostream>
#include<queue>
#include<string>
using namespace std;

class SupportSystem {

private:
    queue<string> requests;

public:

    // Add a new request
    void addRequest(string request) {
        requests.push(request);
        cout << request << " added successfully.\n";
    }

    // Process the oldest request
    void processRequest() {

        if(requests.empty()) {
            cout << "No pending requests.\n";
            return;
        }

        cout << "Processing: " << requests.front() << endl;

        requests.pop();
    }

    // Display all pending requests
    void showPendingRequests() {

        if(requests.empty()) {
            cout << "No pending requests.\n";
            return;
        }

        queue<string> temp = requests;

        cout << "\nPending Requests:\n";

        while(!temp.empty()) {
            cout << temp.front() << endl;
            temp.pop();
        }
    }
};

int main() {

    SupportSystem system;

    system.addRequest("R101");
    system.addRequest("R102");
    system.addRequest("R103");
    system.addRequest("R104");

    system.showPendingRequests();

    system.processRequest();

    system.showPendingRequests();

    return 0;
}