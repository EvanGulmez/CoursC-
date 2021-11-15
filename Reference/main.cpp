#include <iostream>

using namespace std;

int main()
{
    cout << "SheeeSh!" << endl;
    auto maVariable(42),maVariable2(43),maVariable3(44),maVariable4(45);


    //Création d'une Référence pour ma variable 3
    int &maReference(maVariable3);
    // Le cout renvoie la valeur de la variable qui est 44
    cout<<maReference;
    //On attribue 2 à notre réference qui est une adresse
    maReference=2;
    //cela modifie aussi la valeur de la variable en modifiant l'adresse
    cout<<maVariable3<<endl;
    //maReference prend la valeur de maVariable2
    maReference = maVariable2;

    /******************************************************************/
    //Le Pointeur se créé à partir d'une référence
    int*monPointeur(&maVariable);
    //Le Pointeur affiche l'adresse mémoire de la référence
    cout<<monPointeur<<endl;
    //Affiche La valeur de la variable qui est attribué à l'adresse mémoire qui est pointé par le Pointeur
     cout<<*monPointeur<<endl;

     monPointeur=&maVariable2
    cout<<*maVariable2<<endl;
    *monPointeur=6545;

      cout<<monPointeur<<endl;//adresse de la référence
      cout<<*monPointeur<<endl;//Valaur 6545
      cout<<*maVariable2<<endl;//valeur 43

      /****************************************************/
      /*Vérifier si mon pointeur pointe vers quelque chose*/
      /*  monPointeur= nullptr                            */
      /*  if(monPointeur != nullptr){}                    */
}     /****************************************************/
