#include <iostream>

//Write an application that implements a menu system to run the previous questions.
//This should use a switch statement to handle users’ choice of question.

using namespace std;

int app_NameReverser();
int app_AgeChecker();

int main() {
    int userInput;

    cout << "Select your app: \n[1] Name Reverser\n[2] Age Checker App\n[0] Exit Menu\nEnter:";
    cin >> userInput;

    switch (userInput) {
        case 0:
            cout << "Bye-bye!" << endl;
            return 0;

        case 1:
            app_NameReverser();
            break;

        case 2:
            app_AgeChecker();
            break;

        default:
            cout << "Not an option here buddy... sending user to the menu." << endl;
            cout << endl;
            main();
            break;
    }

    return 0;
}

int app_NameReverser() {

    cout << "\nApp 1: Name Reverser" << endl;

    cout << "Enter first and last name separated by a space (e.g. Jake O'Reilly): " << endl;

    string fName, lName;

    cin >> fName >> lName;

    cout << "Last name, first name: " << lName << " " << fName << endl;

    //End process with app ID returned
    return 1;
}

//App 2: Age Checker
int app_AgeChecker() {

    void AC_checkAge(int);
    int AC_askUserAge();

    int age = 1;

    cout << "\nApp 2: Age Checker" << endl;

    age = AC_askUserAge();

    cout << "Age Input: " << age << endl;
    AC_checkAge(age);

    //End process with app ID returned
    return 2;
}

//App 2: Age Checker functions
void AC_checkAge(int age) {

    if (age < 18) {
        cout << "You are a child. (1-17)" << endl;
    } else if (age < 65) {
        cout << "You are an Adult. (18-64)" << endl;
    } else {
        cout << "You are a Senior Citizen. (65+)" << endl;
    }

}

int AC_askUserAge() {

    int age;

    cout << "Enter your age:";

    cin >> age;

    return age;
}
