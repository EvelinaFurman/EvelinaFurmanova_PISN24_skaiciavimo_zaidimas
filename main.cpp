#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <random>
#include <string.h>
#include <string>

using namespace std;

int main()

{
    string boarder = "****************************************";
    string task = "TASK NUMBER";
    string thorns = "\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/";
    int choice;
    cout << boarder << endl;
    cout << "WELCOME TO MATH QUIZZ" << endl;
    cout << boarder << endl;
    cout << thorns;
    cout << "Please choose the category" <<endl;
    do {
        cout << "1. ADDITION\n2. SUBTRACTION\n3. DIVISION\n4. MULTIPLICATION\n5. QUIT\n";
        cout <<"Enter you choice: ";
        cin >> choice;

        switch(choice)
            {
            case 1:
                cout << "GREAT CHOISE";
            cout << boarder <<endl;
            cout << task<< " 1" << endl;
            cout << boarder <<endl;
            int randomNumber1;
            int randomNumber2;
            int answer;
            randomNumber1 = (rand() % 100 + 4);
            randomNumber2 = (rand() % 50 + 4);
            cout << randomNumber1 << " + " << randomNumber2 << " = " << endl;
            cin >> answer;
            if (answer == randomNumber1 + randomNumber2)
                cout << "YOU WIN" << endl;
            else
                do {
                    cout << "TRY AGAIN: ";
                } while (answer == randomNumber1 + randomNumber2);

            break;
            case 2:
                cout << "EXELLENT CHOISE";
            break;
            case 3:
                cout << "WONDERFUL CHOISE";
            break;
            case 4:
                cout << "LET'S GET STARTED";
            break;
            case 5:
                cout << "GOODBYE";
            return 0;
            }
        }while (choice != 5);


    // cout << boarder <<endl;
    // cout << task<< " 1" << endl;
    // cout << boarder <<endl;
    // int randomNumber1;
    // int randomNumber2;
    // int answer;
    // randomNumber1 = (rand() % 100 + 4);
    // randomNumber2 = (rand() % 50 + 4);
    // cout << randomNumber1 << " + " << randomNumber2 << " = " << endl;
    // cin >> answer;
    // if (answer == randomNumber1 + randomNumber2)
    //     cout << "YOU WIN" << endl;
    // else
    //     do {
    //         cout << "TRY AGAIN: ";
    //     } while (answer == randomNumber1 + randomNumber2);

    // srand(time(nullptr));
    // int number11 = rand() % 100;
    // srand(time(nullptr));
    // int number12 = rand() % 50 +1;
    //     cout << number11<<" + " << number12 << " = ";
    // int atsakymas1;
    //     cin >> atsakymas1;
    //
    //     if(atsakymas1 == number11+number12)
    //         cout << "GOOD JOB"<<endl;
    //     else
    //         do {
    //             cout <<"TRY AGAIN: ";
    //             cin >> atsakymas1;
    //         }while(atsakymas1 != number11+number12);
    //              cout << "YOU DID IT!" << endl;

    cout << boarder << endl;
    cout << task <<"2" <<endl;
    cout << boarder<< endl;

    srand(time(nullptr));
    int number21 = rand() % 101 +2;
    srand(time(nullptr));
    int number22 = rand() % 10 +2;
    cout << number21<<" + " << number22 << " = ";
    int atsakymas2;
    cin >> atsakymas2;
        if (atsakymas2 == number21 + number22)
            cout << "GOOD JOB";
        else
            do {
                cout << "TRY AGAIN: ";
                cin >> atsakymas2;
            }while(atsakymas2 != number21 + number22);
    cout << boarder << endl;
    cout << task<< "3" <<endl;
    cout << boarder << endl;
    srand(time(nullptr));
    int number5 = rand() % 101 +2;
    srand(time(nullptr));
    int number6 = rand() % 10 +2;
    cout << number5<<" + " << number6 << " = ";
    int atsakymas3;

    return 0;
}
