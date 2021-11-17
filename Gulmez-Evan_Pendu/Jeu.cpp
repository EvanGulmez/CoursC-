#include "jeu.h"
#include "constante.h"
#include <iostream>

using namespace std;


int jouerPartie(char lettre)
{
    //Le Mot à deviner du pendu
    std::string motDevine("oui");
    std::string motCachee("___");
    cout<<"Devinez le mot cache"<<endl;
    //Le Mot saisi se rempli avec les bonnes lettres que le joueur à proposer pour devenir identique au mot cache
    string proposition{0};
    int nbrtour;
    //Sert à connaitre la valeur de laquelle on se trouve dans le tableau
    int i(0);
    bool parti = false;

while(nbrtour <= 11 && parti != true )
    {
        for(i=0;i<3;i++)
        {
            string mot = &motDevine[i];
            cout<<mot<<endl;
            cin>>proposition;
        if(proposition == &motDevine[i])
        {

            cout<<"Tu as trouve le mot c'est gagne"<<endl;
            parti = true;
        }
        else{

        cout<<"Tu as perdu"<<endl;
        }
        }

    }




    return nbrtour;
}



