#include <iostream>
using namespace std;

int main() {
    int choice;

    cout << "🏏 Welcome to the IPL Chatbot!" << endl;
    cout << "Choose your favorite team by number:" << endl;
    cout << "1. Chennai Super Kings" << endl;
    cout << "2. Mumbai Indians" << endl;
    cout << "3. Royal Challengers Bangalore" << endl;
    cout << "4. Kolkata Knight Riders" << endl;
    cout << "5. Gujarat Titans" << endl;
    cout << "6. Rajasthan Royals" << endl;

    cout << "\nEnter your choice (1-6): ";
    cin >> choice;

    cout << "\n Chatbot says:\n";

    switch (choice) {
        case 1:
            cout << "Chennai Super Kings  - Led by MS Dhoni and known for their consistency!" << endl;
            break;
        case 2:
            cout << "Mumbai Indians  - 5-time champions and home of legends like Rohit Sharma." << endl;
            break;
        case 3:
            cout << "Royal Challengers Bangalore  - Famous for Virat Kohli and passionate fans!" << endl;
            break;
        case 4:
            cout << "Kolkata Knight Riders  - Co-owned by Shah Rukh Khan, known for flair and fight!" << endl;
            break;
        case 5:
            cout << "Gujarat Titans  - One of the newer teams, already made a big impact!" << endl;
            break;
        case 6:
            cout << "Rajasthan Royals  - The first IPL champions, known for nurturing young talent." << endl;
            break;
        default:
            cout << "Oops! Please enter a valid team number (1-6)." << endl;
    }

    return 0;
}
