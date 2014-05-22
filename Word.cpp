#include "Word.h"
#include <cstring>
#include <iostream>

using namespace std;

Word::Word(char *inputWord):
    word(nullptr),
    wordKey(nullptr)
{
    word=new char[N];
    wordKey=new char[N];

    for (int i=0; i<=N; ++i)
        this->wordKey[i]=inputWord[i];
}

Word::~Word()
{
    delete[] word;
    delete[] wordKey;
}

void Word::findLengthOfWord()
{
   lengthOfWord=strlen(wordKey)-1;
}

void Word::newWord ()
{
    for (int i=0; i<=lengthOfWord; i++)
        word[i]='_';
}

void Word::outputWord()
{
    for (int i=0; i<=lengthOfWord; i++)
        cout<<word[i]<<" ";
    cout<<endl;
}

void Word::insertLetter(char letter)
{
    for (int i=0; i<=lengthOfWord; i++)
    {
        if(wordKey[i]==letter)
        {
            word[i]=letter;
        }
    }
}

bool Word::searchLetter(char letter)
{
    int k=0;
    for (int i=0; i<=lengthOfWord; i++)
    {
        if(wordKey[i]==letter)
        {
            k++;
        }
    }
    if (k)
        return true;
    else
        return false;
}

bool Word::isWin()
{
    int k=0;
    for (int i=0; i<=lengthOfWord; i++)
    {
        if(word[i]=='_')
        {
            k++;
        }
    }
    if (k)
        return true;
    else
        return false;
}


