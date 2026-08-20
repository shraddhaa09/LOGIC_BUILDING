#include <iostream>
using namespace std;

bool isBooked(int seat, int bookedSeats[], int bookedCount)
{
    for(int i = 0; i < bookedCount; i++)
    {
        if(bookedSeats[i] == seat)
        {
            return true;
        }
    }

    return false;
}

int getRowPrice(int seat)
{
    int row = seat / 100;

    if(row == 1)
    {
        return 150;
    }
    else if(row == 2)
    {
        return 200;
    }
    else if(row == 3)
    {
        return 250;
    }

    return 0;
}

bool validSeat(int seat, int rows, int cols)
{
    int row = seat / 100;
    int col = seat % 100;

    if(row < 1 || row > rows)
    {
        return false;
    }

    if(col < 1 || col > cols)
    {
        return false;
    }

    return true;
}

int main()
{
    int rows = 3;
    int cols = 10;

    int bookedSeats[6] = {101, 205, 304, 307, 204, 104};
    int bookedCount = 6;

    int n;

    cout << "Cinema Hall: 3 rows x 10 columns" << endl;

    cout << "Booked Seats: ";
    for(int i = 0; i < bookedCount; i++)
    {
        cout << bookedSeats[i] << " ";
    }

    cout << endl;

    cout << "Enter number of seats you want to book: ";
    cin >> n;

    if(n <= 0)
    {
        cout << "Invalid number of seats" << endl;
        return 0;
    }

    int requestedSeats[n];

    cout << "Enter the seat numbers: ";

    for(int i = 0; i < n; i++)
    {
        cin >> requestedSeats[i];
    }

    // Check all seats before booking
    for(int i = 0; i < n; i++)
    {
        // Check valid seat
        if(!validSeat(requestedSeats[i], rows, cols))
        {
            cout << "Booking Failed: Invalid seat "
                 << requestedSeats[i] << endl;
            return 0;
        }

        // Check already booked
        if(isBooked(requestedSeats[i], bookedSeats, bookedCount))
        {
            cout << "Booking Failed: Seat "
                 << requestedSeats[i]
                 << " is already booked" << endl;
            return 0;
        }

        // Check duplicate in requested seats
        for(int j = 0; j < i; j++)
        {
            if(requestedSeats[i] == requestedSeats[j])
            {
                cout << "Booking Failed: Seat "
                     << requestedSeats[i]
                     << " requested more than once" << endl;
                return 0;
            }
        }
    }

    // Calculate total cost
    int totalCost = 0;

    for(int i = 0; i < n; i++)
    {
        totalCost = totalCost + getRowPrice(requestedSeats[i]);
    }

    // Group discount
    int discount = 0;

    if(n >= 6)
    {
        discount = totalCost * 0.10;
    }

    int finalCost = totalCost - discount;

    cout << endl;
    cout << "Booking Successful" << endl;

    cout << "Seats Booked: ";
    for(int i = 0; i < n; i++)
    {
        cout << requestedSeats[i] << " ";
    }

    cout << endl;

    cout << "Total Cost: ₹" << totalCost << endl;
    cout << "Group Discount: ₹" << discount << endl;
    cout << "Final Cost: ₹" << finalCost << endl;

    cout << "Remaining Seats: "
         << (rows * cols - bookedCount - n) << endl;

    return 0;
}