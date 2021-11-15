#include <iostream>

using namespace std;

int main()
{

    cout <<"Devine le prix\n"<<endl;
// Chiffre ou numéro à deviner
    auto aDeviner(158);
//Saisie de la personne qui devine le prix
    auto SaisiaDeviner(0);
//Boucle indiquant le nombre d'essai
    auto NombreEssai(1);

    cin>> SaisiaDeviner;

//Boucle for pour jouer que 3 fois d'affiler
for(auto Parti=0;Parti<3;Parti++){
        NombreEssai = 0;
    do
    {
        if(SaisiaDeviner == aDeviner )
        {
            cout <<"C'est gagner"<<endl;
            cin>> SaisiaDeviner;
        }

        else if (SaisiaDeviner < aDeviner)
        {
             cout << "Plus" << endl;
             cin>> SaisiaDeviner;
        }

        else if (SaisiaDeviner >aDeviner)
        {
            cout <<"Moins"<<endl;
            cin>> SaisiaDeviner;
        }

        NombreEssai++;
    }

    while(SaisiaDeviner!= aDeviner);

    cout <<"Tu as gagne en "<< NombreEssai <<" Essaie"<< endl;
}

}
