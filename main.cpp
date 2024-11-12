#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <random>
#include <string.h>
#include <string>
#include <bits/stl_algo.h>

using namespace std;

int main() {
    string boarder = "****************************************";
    string add = "ADDITION";
    string div = "DIVISION";
    string mult = "MULTIPLICATION";
    string subt = "SUBTRACTION";
    int choice;
    int score = 0;
    int score1 = 0;
    int score2 = 0;
    int score3 = 0;
    string wrongAnswer = "GOOD LUCK NEXT TIME";
    string rightAnswer = "GOOD JOB";
    int randomNumber1;
    int randomNumber2;
    double answer;
    short task = 0;
    short task1 = 0;
    short task2 = 0;
    short task3 = 0;


    cout << boarder << endl;
    cout << "WELCOME TO MATH QUIZZ" << endl;
    cout << boarder << endl;
    while(choice != 5)
    {
        cout << "Please choose the category" <<endl;
        cout << "1. ADDITION\n2. DIVISION\n3. SUBTRACTION\n4. MULTIPLICATION\n5. QUIT\n";
        cout <<"Enter you choice: ";
        cin >> choice;




        switch(choice)
        {
            case 1:
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                break;
            case 5:
                break;
        }

        if (choice == 1) {
            cout << "   Great choice!\n Now solve 10 addition equations" <<endl;
            cout << boarder << endl;
            cout <<add << endl;
            cout <<boarder << endl;

            for(int i = 1; i <= 10; i++) {
                srand(time(nullptr));
                randomNumber1 = (rand() % 100 + 8);
                randomNumber2 = (rand() % 50 + 6);
                cout << randomNumber1 << " + " << randomNumber2 << " = ";
                cin >> answer;


                if(answer == randomNumber1 + randomNumber2)
                    cout << rightAnswer <<endl;
                else
                if((cin.fail())) {
                    cin.clear();
                    cin.ignore(123, '\n');
                    cout << "It is not a number\n Try again" << endl;
                    cin >> answer;
                    if(answer == randomNumber1 + randomNumber2)
                        cout << rightAnswer <<endl;
                    else
                        cout << wrongAnswer <<endl;
                }
                else
                        if(answer != randomNumber1 + randomNumber2)
                        cout << wrongAnswer <<endl;
                if (answer == randomNumber1 + randomNumber2)
                    score++;
                else
                    score=score-0;
                    if(answer == randomNumber1 + randomNumber2)
                        task++;
                    else
                        task++;
                }

            cout << " "<<endl;
            cout << "CONGRATULATIONS!!!\n You scored: " <<score << endl;
            cout << "Out of " << task <<endl;
            cout << " " <<endl;
            cout << boarder << endl;
            cout << boarder << endl;
        }
        if(task>10)
            system("cls");

        if(choice == 2) {
            cout << boarder << endl;
            cout << "    Excellent choice!!!\n Now solve 10 division equations" << endl;
            cout << boarder << endl;
            cout <<div << endl;
            cout << boarder << endl;
            cout << "*round down your answer before entering" << endl;

            for(int i = 1; i <= 10; i++)
            {
                srand(time(nullptr));
                randomNumber1 = (rand() % 63 + 9);
                randomNumber2 = (rand() % 9 + 1);
                cout << randomNumber1 << " / " << randomNumber2 << " = ";
                cin >> answer;
                    if(lround(answer) == randomNumber1 / randomNumber2)
                    cout << rightAnswer <<endl;
                    else
                    if((cin.fail())) {
                        cin.clear();
                        cin.ignore(123, '\n');
                        cout << "It is not a number" << endl;
                        cin >> answer;
                        if(answer == randomNumber1 / randomNumber2)
                            cout << rightAnswer <<endl;
                        else
                            cout << wrongAnswer <<endl;
                    }
                    else
                    if(answer != randomNumber1 / randomNumber2)
                           cout << wrongAnswer <<endl;

                if(lround(answer) == randomNumber1 / randomNumber2)
                    score1++;
                else
                    score1=score1-0;
                if(lround(answer) == randomNumber1 / randomNumber2)
                    task1++;
                else
                    task1++;
            }
            cout << " "<<endl;
            cout << "CONGRATULATIONS!!!\n You scored: " <<score1 << endl;
            cout << "Out of "<<task1<<endl;
            cout << " " <<endl;
            cout << boarder << endl;
            cout << boarder << endl;

        }
        if(task1>10)
        system("cls");

        if(choice == 3) {
            cout << "    Perfect choice\n Now solve 10 subtraction problems" << endl;
            cout << boarder << endl;
            cout <<  subt << endl;
            cout << boarder << endl;

            for(int i = 1; i <= 10; i++) {
                srand(time(nullptr));
                randomNumber1 = (rand() % 100 + 31);
                randomNumber2 = (rand() % 50 + 1);
                cout << randomNumber1 << " - " << randomNumber2 << " = ";
                cin >> answer;
                    if(answer == randomNumber1 - randomNumber2)
                    cout << rightAnswer <<endl;
                    else
                    if (cin.fail()) {
                        cin.clear();
                        cin.ignore(123, '\n');
                        cout << "It is not a number\n Try again" << endl;
                        cin >> answer;
                        if(answer == randomNumber1 - randomNumber2)
                            cout << rightAnswer <<endl;
                        else
                            cout << wrongAnswer <<endl;
                    }
                    else
                    if(answer != randomNumber1 - randomNumber2)
                    cout << wrongAnswer <<endl;
                if(answer == randomNumber1 - randomNumber2)
                    score2++;
                else
                    score2=(score2-0);
                if(answer == randomNumber1 - randomNumber2)
                    task2++;
                else
                    task2++;
            }
            cout << " "<<endl;
            cout << "CONGRATULATIONS!!!\n You scored: " <<score2 << endl;
            cout << "Out of " << task2 <<endl;
            cout << " " <<endl;
            cout << boarder << endl;
            cout << boarder << endl;

        }
        if(task2>10)
            system("cls");

        if(choice == 4) {
            cout << "   Let's go!!!\n Now solve 10 multiplication equations" <<endl;
            cout << boarder << endl;
            cout << mult << endl;
            cout << boarder << endl;
            for(int i = 1; i <= 10; i++) {
                srand(time(nullptr));
                randomNumber1 = (rand() % 30 + 9);
                randomNumber2 = (rand() % 10 + 1);
                cout << randomNumber1 << " * " << randomNumber2 << " = ";
                cin >> answer;
                    if(answer == randomNumber1 * randomNumber2)
                    cout << rightAnswer <<endl;
                    else
                    if (cin.fail()) {
                        cin.clear();
                        cin.ignore(123, '\n');
                        cout << "It is not a number\n Try again" << endl;
                        cin >> answer;
                        if(answer == randomNumber1 - randomNumber2)
                            cout << rightAnswer <<endl;
                        else
                            cout << wrongAnswer <<endl;
                    }
                    else
                    if(answer != randomNumber1 - randomNumber2)
                        cout << wrongAnswer <<endl;
                if(answer == randomNumber1 * randomNumber2)
                    score3++;
                else
                    score3=(score3-0);
                if(answer == randomNumber1 * randomNumber2)
                    task3++;
                else
                    task3++;
            }
            cout << " "<< endl;
            cout << "CONGRATULATIONS!!!\n You scored: " <<score3 << endl;
            cout << "Out of " << task3 <<endl;
        }
        if(task3>10)
            system("cls");
        if(choice == 5) {
            cout << boarder << endl;
            cout << " " << endl;
            cout << " WE ARE SORRY TO HEAR THAT YOU ARE LEAVING\n WAITING YOU TO COME BACK\n HAVE A NICE DAY"<<endl;
        }
        if(cin.fail())
        {
            cin.clear();
            cin.ignore(123, '\n');
            cout << "It is not a number\n Please try again" << endl;
            cin >> answer;
        }

    }
}