#ifndef MENU_H_INCLUDED
#define MENU_H_INCLUDED


//On d�clare les choix possible au menu, j pour jouer et q pour quitter
enum class ChoixMenu {
    JOUER = 'j',
    QUITTER = 'q',
    INCORRECT
};
//On d�clare la fonction choix Menu pour pouvoir choisir ce que l'on veut faire dans le menu
ChoixMenu demanderChoixMenu();
//On d�clare la fonction qui permettra d'afficher le menu
void afficherMenu();

#endif // MENU_H_INCLUDED
