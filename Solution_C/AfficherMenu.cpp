#include <iostream>
#include "constante.h"
#include "AfficherMenu.h"
using namespace std;

ChoixMenu demanderChoixMenu()
{
    char saisieChoix;
    cin >> saisieChoix;
    if (saisieChoix == static_cast<char>(ChoixMenu::JOUER) || saisieChoix == static_cast<char>(ChoixMenu::JOUER_FACILE) || saisieChoix == static_cast<char>(ChoixMenu::JOUER_TROIS_PARTIES) || saisieChoix == static_cast<char>(ChoixMenu::QUITTER))
    {
        return static_cast<ChoixMenu>(saisieChoix);
    }
    else
    {
        return ChoixMenu::INCORRECT;
    }
}

void afficherMenu()
{
    cout << static_cast<char>(ChoixMenu::JOUER) << ": Jouer mode: NORMALE" << endl;
    // on ajoute les choix possible à l'affichage
    cout << static_cast<char>(ChoixMenu::JOUER_FACILE) << ": Jouer mode: FACILE" << endl;
    cout << static_cast<char>(ChoixMenu::JOUER_TROIS_PARTIES) << ": Jouer Trois Partie" << endl;
    cout << static_cast<char>(ChoixMenu::QUITTER) << ": Quitter" << endl;
}
