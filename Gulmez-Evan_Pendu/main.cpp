#include <iostream>
#include <string>
#include "constante.h"

using namespace std;

//Lettre saisi par le joueur pour deviner le mot du pendu
char Proposotion(0) ;
//Le Mot à deviner du pendu
string MotCache = ("oui");
//Le Mot saisi se rempli avec les bonnes lettres que le joueur à proposer pour devenir identique au mot cache
string MotSaisi ;
//tableau du MotCache (mot a deviner)
int Lettretrouve[3];
//Nombre d'essai avant que la partie soit perdu
int Nbressai(0);
// Sert a return une valeur quand la partie est gagné
int gagne(0);
//Sert à connaitre la valeur de laquelle on se trouve dans le tableau
int i(0);


int main()
{

    while (Nbressai <= 12 && MotSaisi!= MotCache)
    {
        cout << "Tapez une lettre" << endl;

        if (Proposotion = MotCache(i))
        {
            cout<<"tu as trouvé une lettre"<<endl
        }
    }

/*while (Nbressai <= 12) //&& !gagne(Lettretrouve))

{


    for(i=0;i<3;i++)
    {
            if(Lettretrouve)
            {
            //cout>>Mot>>endl;

            }
            else
            {
            //cout>>"_">>endl;
            }
            //cout>>"tapez une lettre">>endl;
            Proposotion=0;

            if (!rechercheLettre(Proposotion, MotCache, Lettretrouve))
        {
            Nbressai--;
        }
    }
}

 /* if (gagne(Lettretrouve))
    {
        cout>>"Tu as gagne le mot est: ">>Mot>>endl;
    else{

        cout>>"Tu as perdu. Le mot a deviner etait: ">>Mot>>endl;

    return 0;
    }
    }

    int gagne(int LettreTrouve[])
    {
    int i = 0;
    int joueurGagne = 1;

    for (i = 0 ; i < 3 ; i++)
    {
        if (LettreTrouve[i] == 0)
            joueurGagne = 0;
    }

    return joueurGagne;
    }

    int rechercheLettre(char Proposotion, char Mot[], int LettreTrouve[])
    {
    int i = 0;
    int bonneLettre = 0;

    // On parcourt motSecret pour vérifier si la lettre proposée y est
    for (i = 0 ; Mot[i] != '\0' ; i++)
    {
        if (Proposotion == Mot[i]) // Si la lettre y est
        {
            bonneLettre = 1; // On mémorise que c'était une bonne lettre
            LettreTrouve[i] = 1; // On met à 1 la case du tableau de booléens correspondant à la lettre actuelle
        }
    }

    return bonneLettre;
    }*/
}
