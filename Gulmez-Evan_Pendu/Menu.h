#ifndef MENU_H_INCLUDED
#define MENU_H_INCLUDED

enum class ChoixMenu {
    JOUER = 'j',
    QUITTER = 'q',
    INCORRECT
};

ChoixMenu demanderChoixMenu();
void afficherMenu();

#endif // MENU_H_INCLUDED
