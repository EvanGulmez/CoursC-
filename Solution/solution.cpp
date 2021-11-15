#include <iostream>

using namespace std;
enum class ChoixMenu{ JOUER = 'j', QUITTER = 'q', INCORRECT};
int main()
{

    cout << "Bienvenue au juste prix" << endl;
    cout <<static_cast<char>(ChoixMenu::JOUER)<< ": jouer" << endl;
    cout <<static_cast<char>(ChoixMenu::QUITTER)<< ": quitter" << endl;

    const auto BORNE_MAX(10'000);
    const auto BORNE_MIN(0);
    const auto Parti1(208);
    const auto Parti2(42);
    const auto Parti3(1984);


    auto choix{ChoixMenu::JOUER}; // autre type, apostrophe simple caractère

    char SaisieChoix;

    cin >> SaisieChoix;

    if(SaisieChoix == static_cast<char>(ChoixMenu::JOUER) || SaisieChoix == static_cast<char>(ChoixMenu::QUITTER))
    {
       choix = static_cast<ChoixMenu>(SaisieChoix);
    }

    else
    {
        choix = ChoixMenu::INCORRECT;

    }
    switch (choix)
    {

        case ChoixMenu::JOUER:

        cout << "C'est parti ! " << endl;


        for (auto aDeviner : {Parti1, Parti2, Parti3})
        {

            auto proposition{0};

            auto nombreTentatives{0};

            do {

                    cin >> proposition;

            if (proposition >= BORNE_MIN && proposition < BORNE_MAX)
            {
                nombreTentatives++;

                if (proposition == aDeviner)
                {
                    cout << "Bravo! " << endl;
                }
                else if (proposition > aDeviner)
                {
                    cout << "C'est moins ! " << endl;
                }
                else
                {
                cout << "C'est plus ! " << endl;
                }
            }
                } while (proposition != aDeviner);

            if (proposition == aDeviner)
            {
                cout << "partie terminée! "
                << "en " << nombreTentatives << " tentatives" << endl;
            }
            else
            {
                cout << "partie abandonnée ";
            }
        }

        break;
        case ChoixMenu::QUITTER:
        case ChoixMenu::INCORRECT:
        default :


        cout << "Au revoir " << endl;
        break;

    }
}
