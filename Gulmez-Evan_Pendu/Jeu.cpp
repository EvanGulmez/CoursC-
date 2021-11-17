#include "jeu.h"
#include "constante.h"
#include <iostream>

using namespace std;

//Lettre saisi par le joueur pour deviner le mot du pendu
//char proposotion(0) ;
//Le Mot à deviner du pendu
const string MotCache = ("oui");
//Le Mot saisi se rempli avec les bonnes lettres que le joueur à proposer pour devenir identique au mot cache
string MotSaisi ;
//tableau du MotCache (mot a deviner)
int Lettretrouve[3];
//Nombre d'essai avant que la partie soit perdu
//int Nbressai(0);
// Sert a return une valeur quand la partie est gagné
int gagne(0);
//Sert à connaitre la valeur de laquelle on se trouve dans le tableau
int i(0);

void demanderProposition(char proposition) {
    cin >> proposition;
}

int jouerPartie(char lettre)
{
    auto proposition{0};
    int Nbressai(0);

  //  using Duree = std::chrono::duration<double>;

   // auto debutPartie = std::chrono::system_clock::now();

   /* while (Nbressai <= 12 && MotSaisi!= MotCache)
    {
        cout << "Tapez une lettre" << endl;


       if (Proposotion == MotCache(i))
        {
            cout<<"tu as trouvé une lettre"<<endl;
        }
        for (i=0; i<3; i++)
        {
            MotCache[i];
        }
    }*/

    do {
        cout << "Proposition ? ";
        demanderProposition(proposition);



            Nbressai++;
            if(proposition == MotCache[i])
            {
                cout << " Bravo !" << endl;
                cout<<MotCache[i]<<"\n"<<endl;
            }
            else
            {
                cout <<" Cette lettre ne figure pas dans le mot !\n"<< endl;
            }

        i++;
    } while(/*proposition != MotCache[i] &&*/ Nbressai <= 12);

  //  auto finPartie = std::chrono::system_clock::now();
   // auto duree = std::chrono::duration_cast<Duree>(finPartie - debutPartie);

    /*if(proposition == MotCache(i)) {
        cout << "Partie terminée !" << " en " << nombreTentatives << " tentatives" << endl;
        cout << "Durée de la partie : " << duree.count() << "s" << endl;
        if(duree < 30s) {
            cout << "Vous avez gagné !!!" << endl;
        }
    } else {
        cout << "Partie abandonnée..." << endl;
    }

    cout << endl;

    return nombreTentatives;*/
    return Nbressai;
}

/*void afficherScores(TableauDeScores& scores) {
    cout << "Dernières parties : " << endl;
    for(auto score : scores) {
        if(score == 0) {
            cout << "-" << endl;
        } else {
            cout << score << " tentatives" << endl;
        }
    }*/

