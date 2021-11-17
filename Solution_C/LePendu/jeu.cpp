#include <iostream>
#include <array>
#include <string_view>
#include <cstdlib>  // Nécessaire pour les commandes system (l.199 - 200)
#include <chrono>   // Nécessaire pour chronométrer la partie

#include "jeu.h"
#include "constantes.h"

using Duree = std::chrono::duration<int>;
using namespace std;

// Affiche le mot avec les lettres découvertes par l'utilisateur
void displayWord(string_view mot_solut, string& mot_affiche){
    auto nb_letters = static_cast<int>(mot_solut.length());
    for(auto i = 0; i < nb_letters; i++){
        cout << mot_affiche[i];
    }
    cout << endl << endl;
}

// Demande une lettre à l'utilisateur *
//(les mots étant en minuscule, le programme rend la lettre minuscule si l'utilisateur l'a renseignée en caps)
char askLetter(){
    auto proposition{'a'};
    cout << "Proposez une lettre -> ";
    cin >> proposition;
    return tolower(proposition);
}

// Vérifie si la lettre renseignée par l'utilisateur est une des lettres du mot
bool checkLetter(char letter, string& mot_cache, string_view mot_solut){
    auto nb_letters = static_cast<int>(mot_cache.length());
    bool change = false;
    for(auto i = 0; i < nb_letters; i++){
        if(mot_solut[i] == letter){
            mot_cache[i] = letter;
            change = true;
        }
    }
    return change;
}

// Met à jour l'affichage du pendu
void update_pendu(int nb_err){
    switch(nb_err){
        case 0:
            for(auto i = 0; i < 7; i++){
                cout << endl;
            }
            break;
        case 1:
            for(auto i = 0; i < 6; i++){
                cout << endl;
            }
            cout << "                                                  __ __" << endl;
            break;
        case 2:
            cout << endl;
            for(auto i = 0; i < 5; i++){
                cout << "                                                    |" << endl;
            }
            cout << "                                                  __|__" << endl;
            break;
        case 3:
            cout << "                                                    ______ " << endl;
            cout << "                                                    |/    " << endl;
            for(auto i = 0; i < 4; i++){
                cout << "                                                    |" << endl;
            }
            cout << "                                                  __|__" << endl;
            break;
        case 4:
            cout << "                                                    ______ " << endl;
            cout << "                                                    |/   | " << endl;
            cout << "                                                    |    o " << endl;
            for(auto i = 0; i < 3; i++){
                cout << "                                                    |" << endl;
            }
            cout << "                                                  __|__" << endl;
            break;
        case 5:
            cout << "                                                    ______ " << endl;
            cout << "                                                    |/   | " << endl;
            cout << "                                                    |    o " << endl;
            cout << "                                                    |    | " << endl;
            for(auto i = 0; i < 2; i++){
                cout << "                                                    |" << endl;
            }
            cout << "                                                  __|__" << endl;
            break;
        case 6:
            cout << "                                                    ______ " << endl;
            cout << "                                                    |/   | " << endl;
            cout << "                                                    |    o " << endl;
            cout << "                                                    |    |\\" << endl;
            for(auto i = 0; i < 2; i++){
                cout << "                                                    |" << endl;
            }
            cout << "                                                  __|__" << endl;
            break;
        case 7:
            cout << "                                                    ______ " << endl;
            cout << "                                                    |/   | " << endl;
            cout << "                                                    |    o " << endl;
            cout << "                                                    |   /|\\" << endl;
            for(auto i = 0; i < 2; i++){
                cout << "                                                    |" << endl;
            }
            cout << "                                                  __|__" << endl;
            break;
        case 8:
            cout << "                                                    ______ " << endl;
            cout << "                                                    |/   | " << endl;
            cout << "                                                    |    o " << endl;
            cout << "                                                    |   /|\\" << endl;
            cout << "                                                    |   /  " << endl;
            cout << "                                                    |" << endl;
            cout << "                                                  __|__" << endl;
            break;
        case 9:
            cout << "                                                    ______ " << endl;
            cout << "                                                    |/   | " << endl;
            cout << "                                                    |    o " << endl;
            cout << "                                                    |   /|\\" << endl;
            cout << "                                                    |   / \\" << endl;
            cout << "                                                    |" << endl;
            cout << "                                                  __|__" << endl;
            break;
        default:
            cout << "ERROR !" << endl;
            break;
    }
    cout << endl;
}

// Verifie si le mot a été complètement trouvé
bool checkWord(string& mot_cache){
    auto nb_letters{static_cast<int>(mot_cache.length())};
    bool fini = true;
    for(auto i = 0; i < nb_letters; i++){
        if(mot_cache[i] == '_')
            fini = false;
    }
    return fini;
}

void start_game(string_view mot_solution, string& mot_cache){
    // Gestion du chronomètre
    auto debutPartie{chrono::system_clock::now()};

    auto letter{'a'};
    auto nb_error{0};

    displayWord(mot_solution, mot_cache);

    // Main loop du jeu
    while(!checkWord(mot_cache) && nb_error < NB_ERR_MAX){
        letter = askLetter();
        if(!checkLetter(letter, mot_cache, mot_solution))
            nb_error++;
        system("cls");
        update_pendu(nb_error);
        displayWord(mot_solution, mot_cache);
    }

    // Calcul de la durée de la partie
    auto finPartie{chrono::system_clock::now()};
    auto duree = chrono::duration_cast<Duree>(finPartie - debutPartie);

    // Si on est sorti de la boucle à cause d'une défaite
    if(nb_error == NB_ERR_MAX){
        cout << "C'est perdu (et pendu haha la blague qui met bien) !" << endl
             << "Vous avez mis " << duree.count() << " secondes a tuer notre ami..." << endl << endl
             << "Le mot etait : " << mot_solution << endl;
        cout << "     .-\"\"\"\"\"\"-."       << endl
             << "   .'          '."     << endl
             << "  /   O      O   \\"   << endl
             << " :           `    :"   << endl
             << " |                |"   << endl
             << " :    .------.    :"   << endl
             << "  \\  '        '  /"   << endl
             << "   '.          .'"     << endl
             << "     '-......-'"       << endl;
    }
    else{
        cout << "Felicitations ! Vous avez trouve le mot en " << duree.count() << " secondes !" << endl;
        cout << "Le pendu vous remercie !" << endl;
        cout << "     .-\"\"\"\"\"\"-."        << endl
             << "   .'          '."      << endl
             << "  /   O      O   \\"    << endl
             << " :                :"    << endl
             << " |                |"    << endl
             << " : ',          ,' :"    << endl
             << "  \\  '-......-'  /"     << endl
             << "   '.          .'"      << endl
             << "     '-......-'"        << endl;
    }
    cout << endl << endl << endl;

    system("pause");    // Met en pause le programme pour l'écran de victoire
    system("cls");      // Clear le terminal pour réafficher le menu principal
}
