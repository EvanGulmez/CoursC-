#include <iostream>
#include <vector>
#include <string>
#include <array>
#include <list>

using namespace std;

int main()
{
    // Tableau s�quentiel, on doit  indiqu� le type et la valeur du tableau obligatoirement
    array <Type, n> monarray

    // vector : est un tableau dynamique ou on doit juste indiqu� le type. La valeur s'adapte automatiquement il est �lastique.
    vector<Type>
    //D�claration d'un vector
    vector<string> strings;
    //Ajouter � l'aide de 'push_back' des valeurs � mon vector
    strings.push_back("one");
    strings.push_back("two");
    strings.push_back("three");
    strings.push_back("viva");
    //Boucle for affiche toute la taille de la liste
    for (int i=0 ; i<strings.size(); i++)
    {
        cout<<"Donne toute la liste: "<<strings[i]<<endl;
    }
    //Boucle for qui commence de begin jusqu'a end
    for (auto it = strings.begin(); it != strings.end(); ++it)
    {
        //affiche les valeurs avec un iterator qui est un pointeur
        cout<<"Donne toute la liste: "<< *it <<endl;
    }
    //iterator pointe la valeur d'une variable
    vector<string>::iterator it = strings.begin();
    //it = it +2
    it+= 2;
    //affiche la valeur car mettre un "*" devant un pointeur affiche la valeur
    cout<<*it<<endl;
    cout<<"Donne la premi�re valeur: "<<strings.front()<<endl;
    cout<<"Donne la derni�re valeur: "<<strings.back()<<endl;
    cout<<"Adresse de la premi�re valeur: "<<strings.data()<<endl;
    //On declare une liste (les valeurs d'une liste sont reli� entre elle car la pr�c�dente valeurs point l'adresse de la suivante)
    list<int> mylist;
    //Ajouter � l'aide de 'push_back' des valeurs � mon vector en derni�re place. 'push_front'ajoute une valeur en premi�re place
    mylist.push_front (1);
    mylist.push_back (2);
    mylist.push_back (3);
    mylist.push_back (4);
    // Affiche la premi�re valeur et la derni�re valeur de la list
   cout<<"Donne la premi�re valeur: "<<mylist.front()<<endl;
   cout<<"Donne la derni�re valeur: "<<mylist.back()<<endl;
    //Boucle for qui va du d�but � la fin de la liste parcouru par un iterator
   for(list<int>::iterator it = mylist.begin() ; it != mylist.end(),it++)
   {
       //Affiche la valeur
       cout<<*it<<endl;
   }
    //instanciation d'un iterator positionner au debut de la liste
    list<int>::iterator itl = mylist.begin();
    //incr�mentation qui passe a la valeur suivante
    itl++;
    //insert une valeur dans la liste
    mylist.insert(itl, 2021);
    //affiche la valeur
    cout<< *itl <<endl;
    //creetion d'un iterator a la premiere place
    list<int>::iterator efc=mylist.begin();
    //incr�mentation qui passe a la valeur suivante
    efc++;
    //erase sert � effacer une valeur
    efc = mylist.erase(efc);
    //affiche la valeur effacer
    cout<<*efc<<endl;

    //Creation de tous les tableaux
    vector<int> tableau;
    array<int, 10> myTableau;
    list<int> liste;
    //affecter des valeurs dans le vector
    tableau.push_back(1);
    tableau.push_back(2);
    tableau.push_back(3);
    tableau.push_back(4);
    //affiche la valeur de la taille du tableau
    cout << tableau.size() << endl;
    //affiche la capicit� r�serv� pour le tableau par multiple de 8
    cout<<tableau.capacity()<<endl;
    //ajoute des valeurs au vector
    tableau.push_back(2);
    tableau.push_back(3);
    tableau.push_back(4);

    cout << tableau.size() << endl;
    cout<<tableau.capacity()<<endl;

    tableau.reserve(1000);

    cout << tableau.size() << endl;
    cout<<tableau.capacity()<<endl;
    cout << tableau.max_size()<<endl;

    return 0;
}
