#include <stdlib.h>
#include <iostream>
#include "Game.h"
#include "Word.h"

using namespace std;

void game (char *inputWord)
{
    Word word(inputWord);
    word.findLengthOfWord();
    word.newWord();

    int n=5;
    for (int i=0; i<n && word.isWin(); i++)
    {
        system("cls");
        word.outputWord();
        cout<<endl;

        char letter;
        cout<<"Enter the letter: ";
        cin>>letter;

        if (word.searchLetter(letter))
        {
            system("cls");
            word.insertLetter(letter);
            word.outputWord();
            i--;
            cout<<endl<<"You have "<<(n-1-i)<<" trials"<<endl<<endl;
        }
        else
        {
            system("cls");
            word.outputWord();
            cout<<endl<<"You have "<<(n-1-i)<<" trials"<<endl<<endl;
        }

        system("pause");
    }
        system("cls");
        if(!word.isWin())
            cout<<"   You won :)"<<endl<<endl;
        else
            cout<<"Word : "<<inputWord<<endl<<endl<<"   You lose :("<<endl<<endl;
}

