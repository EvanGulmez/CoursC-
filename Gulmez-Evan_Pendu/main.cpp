#include <iostream>
#include <string>
#include "constante.h"
#include "Menu.h"
#include "Jeu.h"

/*************************************************************************************
Variable: - Mot � Deviner  ("") caract�re ('') string
*************************************************************************************/
using namespace std;




int main()
{
    bool continuer(true);

    while(continuer)
    {
        afficherMenu();
        auto choix = demanderChoixMenu();

        switch(choix) {
        case ChoixMenu::JOUER:
            jouerPartie(lettre);
           // scores[indiceCourant] = jouerPartie(distribution(generateur));
            //indiceCourant = (indiceCourant + 1) % NOMBRE_SCORES;
            break;

        case ChoixMenu::QUITTER:
            cout << "A plus tard !" << endl;
            continuer = false;
            break;

        case ChoixMenu::INCORRECT:
        default:
            return EXIT_FAILURE;
        }


    return EXIT_SUCCESS;


    }













/*




    while (Nbressai <= 12 && MotSaisi!= MotCache)
    {
        cout << "Tapez une lettre" << endl;


      //  if (Proposotion == MotCache(i))
        //{
          //  cout<<"tu as trouv� une lettre"<<endl;
        //}
        for (i=0; i<3; i++)
        {
            MotCache[i];
        }
    }



while (Nbressai <= 12) //&& !gagne(Lettretrouve))

{


    for(i=0;i<3;i++)
    {
            if(Lettretrouve)
            {
            cout<<MotCache<<endl;

            }
            else
            {
            cout<<"_"<<endl;
            }
            cout<<"tapez une lettre"<<endl;
            Proposotion = 0;

           // if (!rechercheLettre(Proposotion, MotCache, Lettretrouve))
        //{
          //  Nbressai--;
        //}
    }
}

 /* if (gagne(Lettretrouve))
    {
        cout>>"Tu as gagne le mot est: ">>MotCache>>endl;
    else{

        cout>>"Tu as perdu. Le mot a deviner etait: ">>MotCache>>endl;

    return 0;
    }
    }*/

 /*   int gagne(int LettreTrouve[])
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

    int rechercheLettre(char Proposotion, char MotCache[], int LettreTrouve[])
    {
    int i = 0;
    int bonneLettre = 0;

    // On parcourt motSecret pour v�rifier si la lettre propos�e y est
    for (i = 0 ; MotCache[i] != '\0' ; i++)
    {
        if (Proposotion == MotCache[i]) // Si la lettre fait partie du mot a deviner
        {
            bonneLettre = 1; // On m�morise que c'�tait une bonne lettre
            LettreTrouve[i] = 1; // On met � 1 la case du tableau de bool�ens correspondant � la lettre actuelle
        }
    }

    return bonneLettre;
    }*/
}
