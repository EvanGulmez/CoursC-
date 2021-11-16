#include <iostream>
#include "constante.h"
#include "jeu.h"
#include "AfficherMenu.h"
using namespace std;
/************************************************************************************************************************************************/





void jouerPartie(int leJustePrix, int max)
{
    auto proposition{0};
    auto nombreTentatives{0};

    do
    {
        cout << "Proposition? ";
        demanderProposition(proposition);

        cout << proposition;

        if (proposition >= BORNE_MIN && proposition < max)
        {
            nombreTentatives++;
            if (proposition == leJustePrix)
            {
                cout << "Bravo! " << endl;
            }
            else if (proposition > leJustePrix)
            {
                cout << "C'est moins ! " << endl;
            }
            else
            {
                cout << "C'est plus ! " << endl;
            }
        }
    } while (proposition != leJustePrix && proposition >= BORNE_MIN);

    if (proposition == leJustePrix)
    {
        cout << "partie termin�e! "
             << "en " << nombreTentatives << " tentatives" << endl;
    }
    else
    {
        cout << "partie abandonn�e ";
    }
}

void jouerTroisParties()
{
    cout << "C'est parti ! " << endl;
    for (auto aDeviner : {208, 42, 1984})
    {
        jouerPartie(aDeviner, BORNE_MAX);
    }
}



//array<int, cte>scores(1,2,3,)
//scores[0]

int main()
{

    cout << "Bienvenue au juste prix" << endl;

    // on cr�� un bool�en continuer
    bool continuer(true);
    // ici on insert la boucle while
    while (continuer)
    {

        afficherMenu();

        auto choix = demanderChoixMenu();

        switch (choix)
        {
            // on met � jour le switch aussi
        case ChoixMenu::JOUER:
            jouerPartie(3000, BORNE_MAX);
            break;
        case ChoixMenu::JOUER_FACILE:
            jouerPartie(250, BORNE_MAX_FACILE);
            break;
        case ChoixMenu::JOUER_TROIS_PARTIES:
            jouerTroisParties();
            break;
        case ChoixMenu::QUITTER:
            cout << "Au revoir " << endl;
            continuer = false;
            break;
        case ChoixMenu::INCORRECT:
        default:
            return EXIT_FAILURE;
        }
    }
    return EXIT_SUCCESS;
}

