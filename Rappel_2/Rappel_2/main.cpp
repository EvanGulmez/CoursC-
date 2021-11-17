#include <iostream>
#include <vector>
#include <string>
#include <array>
#include <list>

using namespace std;

int main()
{
    //séquentiel
    // array <T, n> monarray
    //vector : est un tableau dynamique
    //    vector<T>

      vector<string> strings;

      strings.push_back("one");
      strings.push_back("two");
      strings.push_back("three");
      strings.push_back("viva");

      for (int i=0 ; i<strings.size(); i++)
      {
//          cout<<"Donne toute la liste: "<<strings[i]<<endl;
      }
      for (auto it = strings.begin(); it != strings.end(); ++it)
      {
//           cout<<"Donne toute la liste: "<< *it <<endl;
      }
// iterator pointe la valeur d'une variable
      vector<string>::iterator it = strings.begin();

      it+= 2;

//      cout<<*it<<endl;
//      cout<<"Donne la première valeur: "<<strings.front()<<endl;
//      cout<<"Donne la dernière valeur: "<<strings.back()<<endl;
//      cout<<"Adresse de la première valeur: "<<strings.data()<<endl;

    list<int> mylist;

    mylist.push_front (1);
    mylist.push_back (2);
    mylist.push_back (3);
    mylist.push_back (4);

   // cout<<"Donne la première valeur: "<<mylist.front()<<endl;
   //cout<<"Donne la dernière valeur: "<<mylist.back()<<endl;

   for(list<int>::iterator it = mylist.begin() ; it != mylist.end(),it++)
   {
       cout<<*it<<endl;
   }

    list<int>::iterator itl = mylist.begin();

    itl++;

    mylist.insert(itl, 2021);

   // cout<< *itl <<endl;

    list<int>::iterator efc=mylist.begin();

    efc++;

    efc = mylist.erase(efc);

// cout<<*efc<<endl;

    vector<int> tableau;
   // array<int, 10> myTableau;
   // list<int> liste;

    tableau.push_back(1);
    tableau.push_back(2);
    tableau.push_back(3);
    tableau.push_back(4);

   // cout << tableau.size() << endl;
    //cout<<tableau.capacity()<<endl;

    tableau.push_back(2);
    tableau.push_back(3);
    tableau.push_back(4);

    //cout << tableau.size() << endl;
    //cout<<tableau.capacity()<<endl;

    tableau.reserve(1000);

    cout << tableau.size() << endl;
    cout<<tableau.capacity()<<endl;
    cout << tableau.max_size()<<endl;


    return 0;


}
