#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include "Game.h"

using namespace std;

int main()
{
   setlocale(LC_ALL, "ru_RU.UTF-8");

    const int numOfWords=30;
    const int N=15;
    char **words=nullptr;
    words=new char*[numOfWords];
    for(int i=0; i<numOfWords; i++)
        words[i]=new char[N];

    fstream mystream2;
    mystream2.open("Words.txt", ios::in|ios::binary);
    for(int i=0; i<numOfWords; i++)
        mystream2.getline(words[i], N);
    mystream2.close();

   char operation;
   while(true)
   {
        system("cls");

        cout<<"To start a new game with a friend, enter 1"<<endl;
        cout<<"To start a new game with the computer, enter 2"<<endl;
        cout<<"To exit, enter 0"<<endl;
        operation = getch();

        char *inputWord=nullptr;
        inputWord=new char[N];

        if(operation=='1')
        {
            system("cls");

            cout<<"Enter the word (<= 15 letters): ";
            cin.getline(inputWord, N);
            game(inputWord);

            system("pause");
        }

        if(operation=='2')
        {
            system("cls");

            srand(time(NULL));
            int k;
            k=rand() % numOfWords;
            game(words[k]);

            system("pause");
        }

        if(operation=='0')
        {
            system("cls");
            exit(0);
        }

        delete []inputWord;
   }
    return 0;
}










