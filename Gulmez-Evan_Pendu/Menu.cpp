#include "Menu.h"
#include "constante.h"
#include <iostream>

using namespace std;

//Fonction qui sert à prendre en compte le choix du joueur dans le menu
ChoixMenu demanderChoixMenu() {
    char SaisiChoix;
    cin >> SaisiChoix;
    if(SaisiChoix == static_cast<char>(ChoixMenu::JOUER) ||  SaisiChoix == static_cast<char>(ChoixMenu::QUITTER))
    {
        return static_cast<ChoixMenu>(SaisiChoix);
    }
    else
    {
        return ChoixMenu::INCORRECT;
    }
}
//Fonction qui affiche le menu au début du jeu
void afficherMenu() {



    cout<<" PPPPP  EEEE   NN   N   DDDD    U   U  "<<endl;
    cout<<" P   P  E      N N  N   D   D   U   U    "<<endl;
    cout<<" P PPP  EEE    N  N N   D   D   U   U   "<<endl;
    cout<<" P      E      N   NN   D   D   U   U  " <<endl;
    cout<<" P      EEEE   N    N   DDDD    UUUUU   \n"<<endl;
    cout << static_cast<char>(ChoixMenu::JOUER) << " : jouer" << endl;
    cout << static_cast<char>(ChoixMenu::QUITTER) << " : quitter" << endl;
}
