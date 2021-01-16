// day2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Graham Armistead   1/16/2021

#include <iostream>
#include <cmath>
#include <random>

void menu();
void inAddition();
bool contUserQuestion(bool cont);
int main()
{
    menu();
    return 0;
}

//simple menu function using a switch case to determine users choice 
void menu()
{
    int userChoice = 0;
    double answerToUserQuary = 0;
    bool contControll = true;
    std::cout << std::endl;
    do
    {
        std::cout << "Please chose between the following options\n";
        std::cout<< "1: Add two numbers\n 2: sqrt(a^2 + b^2)=c\n 3: avg of 3 numbers\n 4:EXIT\n";
        std::cin >> userChoice;
        switch (userChoice)
        {
        case 1:
            inAddition();
            contUserQuestion(contControll);
            break;

        case 2:
            contUserQuestion(contControll);
            break;

        case 3:
            contUserQuestion(contControll);
            break;
        case 4:
            contControll = true;
            break;

        default:
            std::cout << "Please enter a VALID choice!!!\n";
            contControll = false;
            break;
        }
    } while (contControll != true);
}

//function askes user if they wish to continue the program and start at begining of the menue again or end the program
bool contUserQuestion(bool cont)
{
    int usrImput=0;
    bool restartQuestion;
    do
    {
        restartQuestion = false;
        std::cout << "Continue?\n 1:YES\n 2:NO\n";
        std::cin >> usrImput;
        switch (usrImput)
        {
        case 1:
            cont = true;
            break;
        case 2:
            cont = false;
            break;
        default:
            std::cout << "Plase enter a valid input\n";
            restartQuestion = true;
            break;
        }
    } while (restartQuestion != false);
    return cont;
}

//function for adding two numbers together and outputing the answer to user
void inAddition()
{
    double a,b= 0;
    std::cout << "Give a then b then I shall add them!\n a:";
    std::cin >> a;
    std::cout << "\n b:";
    std::cin >> b;
    std::cout << "\n" << a << " + "<< b << " = " << (a+b) <<"\n";
}
