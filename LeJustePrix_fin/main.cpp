#include <iostream> // on inclut la bibliothèque standard iostream
#include <array>
#include <random>
#include "constantes.h"
#include "jeu.h"
#include "menu.h"

/* on utilise l’espace de nom std (standard)
pour se passer de la notation std:: devant chaque outil de la bibliothèque standard */
using namespace std;

int main() {

    auto generateur = mt19937{8'354};
    auto distribution = std::uniform_int_distribution{BORNE_MIN, BORNE_MAX};
    cout << distribution(generateur) << endl;
    cout << distribution(generateur) << endl;
    cout << distribution(generateur) << endl;
    cout << distribution(generateur) << endl;
    cout << distribution(generateur) << endl;
    cout << distribution(generateur) << endl;
//    cout << "Bienvenue au juste prix" << endl;
//
//    auto scores = TableauDeScores{0,0,0};
//    auto indiceCourant{0};
//
//    auto generateurAleatoire = std::random_device{};
//    auto generateur = mt19937{generateurAleatoire()};
//    auto distribution = std::uniform_int_distribution{BORNE_MIN, BORNE_MAX};
//
//    bool continuer{true};
//    while(continuer) {
//        afficherMenu();
//        auto choix = demanderChoixMenu();
//
//        switch(choix) {
//        case ChoixMenu::JOUER:
//            scores[indiceCourant] = jouerPartie(distribution(generateur));
//            indiceCourant = (indiceCourant + 1) % NOMBRE_SCORES;
//            break;
//
//        case ChoixMenu::AFFICHER_SCORES:
//            afficherScores(scores);
//            break;
//
//        case ChoixMenu::QUITTER:
//            cout << "Au revoir !" << endl;
//            continuer = false;
//            break;
//
//        case ChoixMenu::INCORRECT:
//        default:
//            return EXIT_FAILURE;
//        }
//    }
//    return EXIT_SUCCESS;
}
