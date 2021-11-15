#include <iostream>

using namespace std;

int main()
{
    cout << "SheeeSh!" << endl;
    auto maVariable(42),maVariable2(43),maVariable3(44),maVariable4(45);


    //Cr�ation d'une R�f�rence pour ma variable 3
    int &maReference(maVariable3);
    // Le cout renvoie la valeur de la variable qui est 44
    cout<<maReference;
    //On attribue 2 � notre r�ference qui est une adresse
    maReference=2;
    //cela modifie aussi la valeur de la variable en modifiant l'adresse
    cout<<maVariable3<<endl;
    //maReference prend la valeur de maVariable2
    maReference = maVariable2;

    /******************************************************************/
    //Le Pointeur se cr�� � partir d'une r�f�rence
    int*monPointeur(&maVariable);
    //Le Pointeur affiche l'adresse m�moire de la r�f�rence
    cout<<monPointeur<<endl;
    //Affiche La valeur de la variable qui est attribu� � l'adresse m�moire qui est point� par le Pointeur
     cout<<*monPointeur<<endl;

     monPointeur=&maVariable2
    cout<<*maVariable2<<endl;
    *monPointeur=6545;

      cout<<monPointeur<<endl;//adresse de la r�f�rence
      cout<<*monPointeur<<endl;//Valaur 6545
      cout<<*maVariable2<<endl;//valeur 43

      /****************************************************/
      /*V�rifier si mon pointeur pointe vers quelque chose*/
      /*  monPointeur= nullptr                            */
      /*  if(monPointeur != nullptr){}                    */
}     /****************************************************/
