// Cynthia Simon
// csimon2@leomail.tamuc.edu
// Assignment #1
// Word Counter Program
#include "WordCounter2.h"

class WordCounter2
{
    public :
    WordCounter2()
    {
        siz=0;
        total=0;
        last="Word list is empty";
        small="Word list is empty";
        large="Word list is empty";
    }
    
    void addWord(string wo)   //word is added to an adress
    {
        siz++;                //determines all seven categories first and then discard word
        total+=wo.length();    
        last=wo;
        if(siz==1)
        {
            small=wo;
            large=wo;
        }
        else
        {
            if(small.length()>wo.length())
                small=wo;
            
            if(large.length()<wo.length())
                large=wo;
        }
    }
    
    int size()       //returns the size of the word
    {
        return siz;
    }
    
    string lastWord()     //returns the last word of the vector
    {
        return last;
    }
    
    int totalCharacters()  //returns the total number of characters
    {
        return total;
    }
    
    int averageCharacters()  //returns the average number of characters
    {
        if(siz>0)
            return total/siz;
        return 0;
    }
    
    string smallestWord() //returns the smalles word in the vector
    {
        return small;
    }
    
    string largestWord() //returns largest word in the vector
    {
        return large;
    }
};

int main()
{
    int ch=1;
    WordCounter2 wc;
    string str;
    
    cout << "********************WordCounter2**********************" << endl;
    
    while(ch!=8) //depending on which number is entered by the user the respective operation will occur and return answer
    {
        cout << "**********Menu**********" << endl;
        cout << "1. Add Word" << endl;
        cout << "2. Total number of words" << endl;
        cout << "3. Last Word" << endl;
        cout << "4. Total number of characters" << endl;
        cout << "5. Average number of characters" << endl;
        cout << "6. Smallest Word" << endl;
        cout << "7. Largest Word" << endl;
        cout << "8. Quit" << endl;
        cout << "************************" << endl;
        cout << "Enter your choice : ";
        cin >> ch;
        switch(ch)
        {   case 1 :
                cout << "Enter a word to add : " << endl;
                cin >> str;
                wc.addWord(str);
                break;
            case 2 :
                cout << "Total number of words : " << wc.size() << endl;
                break;
            case 3 :
                cout << "Last Word : " << wc.lastWord() << endl;
                break;
            case 4 :
                cout << "Total number of characters : " << wc.totalCharacters() << endl;
                break;
            case 5 :
                cout << "Average number of characters : " << wc.averageCharacters() << endl;
                break;
            case 6 :
                cout << "Smallest Word : " << wc.smallestWord() << endl;
                break;
            case 7 :
                cout << "Largest Word : " << wc.largestWord() << endl;
                break;
        }
    }
    return 0;
}


