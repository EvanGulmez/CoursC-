#include <iostream>
#include <vector>
#include <string>
#include <array>
#include <list>
#include <map>
#include <algorithm>

using namespace std;
bool Erreur(string nom)
    {
        //Renvoi eun booléan 1 pour plus de 6 et 0 pour moins de 6
        return nom.size()>=6;
    }
int main()
{
   vector<string> eleve;

   eleve.push_back("Evan");
   eleve.push_back("Naoufal");
   eleve.push_back("Brice");
   eleve.push_back("Yohann");
   eleve.push_back("Yohan");
   eleve.push_back("Abel");
   eleve.push_back("Adrien");
   eleve.push_back("Julien");
   eleve.push_back("Gregoire");
   eleve.push_back("Nicolas");

    //count_if compte si Erreur
   cout<< "Résultat du test: "<<count_if(eleve.begin(), eleve.end(), Erreur)<<endl;

    int mycount = count_if (eleve.begin(), eleve.end(), Erreur);

   for(vector<string>::iterator it = eleve.begin() ; it != eleve.end();it++)
   {
    cout<<*it<<endl;
   }

  std::cout << "myvector contains " << mycount  << " odd values.\n";

   map<string, int>noteRPI;

    noteRPI["Yohann"] = 6;
    noteRPI["Naoufal"] = 16;
    noteRPI["Gregoire"] = 14;
    noteRPI["Yohann"] = 15;

    //Insert tout seul ne marche pas, il faut utiliser make_pair
    noteRPI.insert(make_pair("Julien", 15));

    for(map<string, int>::iterator it = noteRPI.begin() ; it != noteRPI.end();it++)
   {
       //pair parce qu'il y a deux clé. On fait passer notre iterator donc notre pointeur dans notre variable
        pair<string, int>note = *it;
       cout<<"la note de "<<note.first<< " est de: "<< note.second <<endl;
   }
    return 0;
}
