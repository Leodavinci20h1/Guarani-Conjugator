#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

int conjugator(){
    //Parameters
    string verb = "";
    string pron[7] = {"Che", "Nde", "Ha'e", "Ñande", "Ore", "Peê", "Ha'ekuera"};
    string suf[7] = {"a", "re","o","ja", "ro", "pe", "o"};
    string pref[] = {};
    
    while(true){
        //Get the verb
        cout << "\nPlease enter a verb root: ";
        cin >> verb;
        
        //Present tense
        cout << "\nPRESENT:\n";
        for(int i = 0; i != 7; i++){
            cout << "\n";
            cout << pron[i] << " " << suf[i] << verb;
        }
        
        cout << "\n\nNEGATIVE PRESENT:\n";
        for(int i = 0; i != 7; i++){
            cout << "\n";
            cout << pron[i] << " n" << suf[i] << verb << "i";
        }
        
        //Past tense
        cout << "\n\nPAST TENSE:\n";
        for(int i = 0; i != 7; i++){
            cout << "\n";
            cout << pron[i] << " " << suf[i] << verb << "ma";
        }
    }
    
    return 0;
}

int main(){
    cout << "GUARANI VERB CONJUGATOR v0.1" << endl;
    conjugator();
    return 0;
}
