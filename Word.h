#ifndef WORD_H
#define WORD_H


class Word
{
    public:
        Word(char *wordKey1);
        ~Word();

        void findLengthOfWord();
        void newWord();
        void outputWord();
        void insertLetter(char letter);
        bool searchLetter(char letter);
        bool isWin();


    private:
        Word (const Word &original);
        Word &operator=(const Word &rhs);

        const int N=15;
        char *word, *wordKey;
        int lengthOfWord;


};

#endif // WORD_H
