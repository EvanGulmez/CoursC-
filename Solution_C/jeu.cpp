#include "constante.h"
#include "jeu.h"
#include <iostream>
using namespace std;

void demanderProposition(int &proposition)
{
 std:: cin >> proposition;
}

void jouerPartie(int leJustePrix, int max)
{
    auto proposition{0};
    auto nombreTentatives{0};

    do
    {
        std::cout << "Proposition? ";
        demanderProposition(proposition);

        std::cout << proposition;

        if (proposition >= BORNE_MIN && proposition < max)
        {
            nombreTentatives++;
            if (proposition == leJustePrix)
            {
                std::cout << "Bravo! " << endl;
            }
            else if (proposition > leJustePrix)
            {
                std::cout << "C'est moins ! " << endl;
            }
            else
            {
                std::cout << "C'est plus ! " << endl;
            }
        }
    } while (proposition != leJustePrix && proposition >= BORNE_MIN);

    if (proposition == leJustePrix)
    {
        std::cout << "partie terminée! "
             << "en " << nombreTentatives << " tentatives" << endl;

    }
    else
    {
        std::cout << "partie abandonnée ";
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
