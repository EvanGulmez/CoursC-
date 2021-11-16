#include <iostream>
#include "constante.h"

using namespace std;

char Proposotion(0) ;
auto Mot = ("oui");
int Lettretrouve[3];
int Nbressai(0);
int gagne(0);
int i(0);


int main()
{

while (Nbressai <= 12) //&& !gagne(Lettretrouve))

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

            if (!rechercheLettre(Proposotion, Mot, Lettretrouve))
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
    }*/

   /* int gagne(int LettreTrouve[])
    {
    int i = 0;
    int joueurGagne = 1;

    for (i = 0 ; i < 3 ; i++)
    {
        if (LettreTrouve[i] == 0)
            joueurGagne = 0;
    }

    return joueurGagne;
    }*/

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
    }
}
