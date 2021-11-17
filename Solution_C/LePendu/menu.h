#ifndef MENU_H_INCLUDED
#define MENU_H_INCLUDED

enum class MenuChoice{
    JOUER='j',
    QUITTER='q',
    ERROR
};

void displayTitle();
MenuChoice displayMenu();

#endif // MENU_H_INCLUDED
