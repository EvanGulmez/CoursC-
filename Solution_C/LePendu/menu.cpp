#include <iostream>
#include "menu.h"

using namespace std;

void displayTitle(){
     cout << " _      _____      ____   _____  _   _  ____   _   _ " << endl
          << "| |    |  ___|    |  _ \\ |  ___|| \\ | ||  _ \\ | | | |" << endl
          << "| |    | |___     | |_| || |___ |  \\| || | | || | | |" << endl
          << "| |    |  ___|    |  __/ |  ___|| |\\  || | | || | | |" << endl
          << "| |    | |        | |    | |    | | | || | | || | | |" << endl
          << "| |___ | |___     | |    | |___ | | | || |_| || |_| |" << endl
          << "|_____||_____|    |_|    |_____||_| |_||____/  \\___/ " << endl
          << "======================================================" << endl;
}


MenuChoice displayMenu(){
    auto choix{'j'};
    cout << "Menu Principal" << endl;
    cout << static_cast<char>(MenuChoice::JOUER) << " - Jouer" << endl
         << static_cast<char>(MenuChoice::QUITTER) << " - Quitter" << endl
         << endl << "Votre choix -> ";
    cin >> choix;

    if(choix == static_cast<char>(MenuChoice::JOUER) || choix == static_cast<char>(MenuChoice::QUITTER)){
        return static_cast<MenuChoice>(choix);
    }
    else{
        return MenuChoice::ERROR;
    }
}
