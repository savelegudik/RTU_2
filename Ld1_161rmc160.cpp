#include <iostream>
#include <tgmath.h>

using namespace std;

void output(double a, double b) {
    if (a > b) {
        double f1 = (b / 4) - ((a * a) / 2);
        cout << "a = " << a << endl;
        cout << " b = " << b << endl;
        cout << "It means: a > b" << endl;
        cout << "Y = " << f1 << endl;
    } else {
        double f2 = sqrt(((5 * a) / 2) + (b / 4));
        cout << "a = " << a << endl;
        cout << " b = " << b << endl;
        cout << "It means: a < b" << endl;
        cout << "Y = " << f2 << endl;
    }
}

bool restartProgram() {
    cout << "Do you want to restart a program? ";
    char decision;
    cin >> decision;
    return decision == 'y';
}

int main() {
    cout << endl;
    cout << "161RMC160 Savelijs Astapovs 1.gr." << endl;
    cout << endl;

    do {
        cout << "Enter a number: ";

        double x;
        cin >> x;
        cout << cin.fill();

        if (cin.fail()) {
            cout << "\n Error of number!" << endl;
            break;
        } else {
            double checkA = (x * x) - 7 * x - 10;

            if (checkA < 0) {
                cout << "a < 0" << endl;
                cout << "Enter another number after some break." << endl;
                break;
            }

            double a = sqrt(checkA);
            double b = x - 2 * (x * x);
            output(a, b);
        }
    } while (restartProgram());
    cout << "Program has finished.";
}
