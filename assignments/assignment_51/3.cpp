#include <iostream>
#include <string>
using namespace std;

int calculatePlan(int mins, int gb, int sms,
                  int base, int callLimit, int dataLimit, int smsLimit,
                  int extraCall, int extraData, int extraSMS)
{
    int cost = base;

    if(mins > callLimit)
    {
        cost = cost + (mins - callLimit) * extraCall;
    }

    if(gb > dataLimit)
    {
        cost = cost + (gb - dataLimit) * extraData;
    }

    if(sms > smsLimit)
    {
        cost = cost + (sms - smsLimit) * extraSMS;
    }

    return cost;
}

int main()
{
    int mins, gb, sms;

    cout << "Enter calls (minutes): ";
    cin >> mins;

    cout << "Enter data (GB): ";
    cin >> gb;

    cout << "Enter SMS count: ";
    cin >> sms;

    if(mins < 0 || gb < 0 || sms < 0)
    {
        cout << "Invalid Data";
        return 0;
    }

    int planA = calculatePlan(mins, gb, sms,
                              199, 100, 2, 100,
                              1, 20, 1);

    int planB = calculatePlan(mins, gb, sms,
                              299, 300, 5, 300,
                              1, 15, 1);

    int planC = calculatePlan(mins, gb, sms,
                              399, 500, 10, 500,
                              1, 10, 1);

    int planD = calculatePlan(mins, gb, sms,
                              499, 800, 15, 1000,
                              1, 8, 1);

    int cheapest = planA;
    string recommendedPlan = "Plan A";

    if(planB < cheapest)
    {
        cheapest = planB;
        recommendedPlan = "Plan B";
    }

    if(planC < cheapest)
    {
        cheapest = planC;
        recommendedPlan = "Plan C";
    }

    if(planD < cheapest)
    {
        cheapest = planD;
        recommendedPlan = "Plan D";
    }

    cout << "Recommended Plan: " << recommendedPlan << endl;
    cout << "Total Cost: ₹" << cheapest << endl;

    return 0;
}