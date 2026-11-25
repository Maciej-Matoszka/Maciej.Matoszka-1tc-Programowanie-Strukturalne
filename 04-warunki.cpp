#include <iostream>


using namespace std;

int main(){
/*
    double srednia;
    double frekfencja;
    cout << "Podaj srednia:" <<endl;
    cin >> srednia;
    cout << "podaj frekfencje w %:"<< endl;
    cin >> frekfencja;
   


    if(srednia >= 2.0 && frekfencja >= 50) 
    {cout << "Uczen zdal"<< endl;}
    else
    {cout << "Uczen nie zdal"<< endl;}

    return 0;


*/

    double pierwszybok;
    double drugibok;
    double tzrecibok;
    cout << "podaj pierwszy bok:" << endl;
    cin >> pierwszybok;
    cout << "podaj drugi bok:" << endl;
    cin >> drugibok;
    cout << "podaj trzeci bok" << endl;
    if(pierwszybok + drugibok > tzrecibok && pierwszybok + tzrecibok > drugibok && drugibok + tzrecibok > pierwszybok)
    {cout << "da sie zbudowwac taki trojkat" << endl;}
    else
    {cout << "nie da sie" << endl;}

    return 0;


    




}