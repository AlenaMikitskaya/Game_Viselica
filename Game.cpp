#include <stdlib.h>
#include <iostream>
#include "Game.h"
#include "Word.h"

using namespace std;

void game (char *inputWord)
{
    Word ob2(inputWord);

    ob2.findLengthOfWord();
    ob2.newWord();

    int n=5;
    for (int i=0; i<n && ob2.isWin(); i++)
    {
        system("cls");

        ob2.outputWord();
        cout<<endl;

        char letter;
        cout<<"Enter the letter: ";
        cin>>letter;

        if (ob2.searchLetter(letter))
        {
            system("cls");

            ob2.insertLetter(letter);
            ob2.outputWord();
            i--;
            cout<<"You have "<<(n-1-i)<<" trials"<<endl<<endl;
        }
        else
            {
                system("cls");

                ob2.outputWord();
                cout<<"You have "<<(n-1-i)<<" trials"<<endl<<endl;
            }

        system("pause");
    }

        system("cls");
        if(!ob2.isWin())
            cout<<"   You won :)"<<endl<<endl;
        else
            cout<<"Word : "<<inputWord<<endl<<endl<<"   You lose :("<<endl<<endl;
}

