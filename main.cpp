#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include "Game.h"
#include "Word.h"

using namespace std;

int main()
{
   setlocale(LC_ALL, "ru_RU.UTF-8");
   char operation;

   while(true)
   {
        system("cls");
        cout<<"To start a new game with a friend, enter 1"<<endl;
        cout<<"To start a new game with the computer, enter 2"<<endl;
        cout<<"To exit, enter 0"<<endl;
        operation = getch();

        const int N=15;
        char *inputWord1=nullptr;
        inputWord1=new char[N];

        if(operation=='1')
        {
            system("cls");

            cout<<"Enter the word (<= 15 letters): ";
            cin.getline(inputWord1, N);
            game(inputWord1);

            system("pause");

        }

        if(operation=='2')
        {
            system("cls");

            //game(inputWord2);

            system("pause");
        }

        if(operation=='0')
        {
            system("cls");
            exit(0);
        }

        delete []inputWord1;
   }
    return 0;
}









