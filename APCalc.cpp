#include <iostream>

using namespace std;

int main() {
    int choice;
    cout << "Choose a formula:\n";
    cout << "1. General Forumla\n";
    cout << "2. Sum Forumla (with d,n)\n";
    cout << "3. Sum Forumla (with a,an)\n";
    cout << "Enter your choice (1, 2, or 3): ";
    cin >> choice;

    int a, d, n, an, result;

    // a = firstTerm
    // d = commonDiffrence
    // n = numberOfTerms
    // an = lastnumber or result

    switch (choice) {
    case 1:
        cout << "Enter the first term (a): ";
        cin >> a;
        cout << "Enter the common difference (d): ";
        cin >> d;
        cout << "Enter the value of (n): ";
        cin >> n;

        result = a + (n - 1) * d;
        break;

    case 2:
        cout << "Enter the first term (a): ";
        cin >> a;
        cout << "Enter the common difference (d): ";
        cin >> d;
        cout << "Enter the value of n: ";
        cin >> n;

        result = (n / 2) * (2 * a + (n - 1) * d);
        break;

    case 3:
        cout << "Enter the first term (a): ";
        cin >> a;
        cout << "Enter the AnTH Term (an): ";
        cin >> an;
        cout << "Enter the value of n: ";
        cin >> n;

        result = (n / 2) * (a + an);
        break;

    default:
        cout << "invalid choice lol";
        return 0;
    }

    cout << "The result is: " << result << endl;

    return 0;
}

// dont use this , this shit dosent properly work ill fix later