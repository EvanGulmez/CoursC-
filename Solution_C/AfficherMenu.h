#ifndef AFFICHERMENU_H_INCLUDED
#define AFFICHERMENU_H_INCLUDED

enum class ChoixMenu
{
    JOUER = 'a',
    JOUER_FACILE = 'b',
    JOUER_TROIS_PARTIES = 'c',
    QUITTER = 'q',
    INCORRECT
};

ChoixMenu demanderChoixMenu();

void afficherMenu();

#endif // AFFICHERMENU_H_INCLUDED
