#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<int> mylist;

    mylist.push_back(5);
    mylist.push_back(5);
    mylist.push_back(5);
    mylist.push_back(5);
    mylist.push_back(5);

    //
    //itl++;

    //mylist.insert(itl, 2021);



    //for(auto itl =mylist.begin();itl != mylist.end(); itl++)
 //{


   // cout<< *itl <<endl;
//}

    //creetion d'un iterator a la premiere place
    list<int>::iterator efc=mylist.begin();
    //incrémentation qui passe a la valeur suivante
    efc++;
    //erase sert à effacer une valeur
    efc = mylist.erase(efc);

    cout<<*efc<<endl;

      for(auto itl =mylist.begin();itl != mylist.end(); itl++)
 {


    cout<< *itl <<endl;
}
}
