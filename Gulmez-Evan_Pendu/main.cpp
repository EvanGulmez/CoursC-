#include <iostream>
#include <string>
#include "constante.h"
#include "Menu.h"
#include "Jeu.h"

/*************************************************************************************
************************        SUIVI DU JEU             *****************************
Le pendu fonctionne que en mettant le mot en entier et non pas les lettres
quand on trouve le mot la boucle for s'execute encore trois fois
*************************************************************************************/
using namespace std;

char lettre;


int main()
{





    //Boucle pour pouvoir jouer que 12 fois maximum et le jeu s'arrete quand le mot est trouver
  /*  while(nbrtour <= 11 && parti != true )
    {
        for(i=0;i<3;i++)
        {
            string mot = &motDevine[i];
            cout<<mot<<endl;
            cin>>proposition;
        if(proposition == &motDevine[i])
        {
            motDevine = motCachee;
            cout<<"Tu as trouve le mot c'est gagne"<<endl;
            parti = true;
        }
        else{

        cout<<"Tu as perdu"<<endl;
        }
        }
        cout<<motCachee<<endl;
    }*/


    bool continuer(true);

    while(continuer)
   {
       afficherMenu();
       auto choix = demanderChoixMenu();

        switch(choix) {
        case ChoixMenu::JOUER:

            jouerPartie(lettre);
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
}











/*




    while (Nbressai <= 12 && MotSaisi!= MotCache)
    {
        cout << "Tapez une lettre" << endl;


      //  if (Proposotion == MotCache(i))
        //{
          //  cout<<"tu as trouvé une lettre"<<endl;
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

    // On parcourt motSecret pour vérifier si la lettre proposée y est
    for (i = 0 ; MotCache[i] != '\0' ; i++)
    {
        if (Proposotion == MotCache[i]) // Si la lettre fait partie du mot a deviner
        {
            bonneLettre = 1; // On mémorise que c'était une bonne lettre
            LettreTrouve[i] = 1; // On met à 1 la case du tableau de booléens correspondant à la lettre actuelle
        }
    }

    return bonneLettre;
    }*/

