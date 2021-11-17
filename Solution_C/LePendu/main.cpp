#include <iostream>
#include <array>
#include <random>
#include <chrono>

#include "menu.h"
#include "constantes.h"
#include "jeu.h"

using namespace std;

int main(){
    // Generation aléatoire du mot
    auto timeNow = chrono::system_clock::now().time_since_epoch();          // Cette partie est inspirée de ce site
    auto millisec = chrono::duration_cast<chrono::milliseconds>(timeNow);   // https://www.delftstack.com/howto/cpp/how-to-get-time-in-milliseconds-cpp/

    auto randomGen = timeNow.count();
    auto generator = mt19937{randomGen};
    auto distribution = uniform_int_distribution{0, NB_MOTS-1};

    // Variables de jeu
    bool play{true};
    auto choix{MenuChoice::JOUER};

    // Boucle principale
    while(play){
        displayTitle();
        choix = displayMenu();

        // Génération du mot à trouver
        auto mot_choisi = MOTS[distribution(generator)];

        // Génération de son équivalent caché
        auto mot_cache(string(mot_choisi.length(), '_'));

        // Menu Principal
        switch(choix){
            case MenuChoice::JOUER:
                start_game(mot_choisi, mot_cache);
                break;
            case MenuChoice::QUITTER:
                play = false;
                break;
            case MenuChoice::ERROR:
                cout << "Je n'ai pas compris votre demande..." << endl;
                break;
            default:
                break;
        }
    }
    cout << "A bientot !" << endl;
    return EXIT_SUCCESS;

}
