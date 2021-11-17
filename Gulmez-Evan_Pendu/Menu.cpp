#include "Menu.h"

#include <iostream>

using namespace std;

ChoixMenu demanderChoixMenu() {
    char Proposotion;
    cin >> Proposotion;
    if(Proposotion == static_cast<char>(ChoixMenu::JOUER) ||  Proposotion == static_cast<char>(ChoixMenu::QUITTER)) {
        return static_cast<ChoixMenu>(Proposotion);
    } else {
        return ChoixMenu::INCORRECT;
    }
}

void afficherMenu() {
    cout<<" PPPPP  EEEE   NN   N   DDDD    U   U  "<<endl;
    cout<<" P   P  E      N N  N   D   D   U   U    "<<endl;
    cout<<" P PPP  EEE    N  N N   D   D   U   U   "<<endl;
    cout<<" P      E      N   NN   D   D   U   U  " <<endl;
    cout<<" P      EEEE   N    N   DDDD    UUUUU   \n"<<endl;
    cout << static_cast<char>(ChoixMenu::JOUER) << " : jouer" << endl;
    cout << static_cast<char>(ChoixMenu::QUITTER) << " : quitter" << endl;
}
