#include <iostream>
using namespace std;

int main() {
    char seat_ok;
    char bags_paid;

    cout << "--- Flight Booking Check ---" << endl;
    cout << "Is there an empty SEAT (y/n)? ";
    cin >> seat_ok;

    if (seat_ok == 'y' || seat_ok == 'Y') {
        cout << "Seat is OK. Did you pay for extra BAGS (y/n)? ";
        cin >> bags_paid;

        if (bags_paid == 'y' || bags_paid == 'Y') {
            cout << "*** BOOKING COMPLETE. HAPPY NICE TRIP ***" << endl;
        } else {
            cout << "Hold on: Seat is yours, but please pay for your extra bags." << endl;
        }
    } else {
        cout << "BOOKING FAILED: No seats are open." << endl;
    }

    return 0;
}
