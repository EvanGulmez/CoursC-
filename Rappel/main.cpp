#include <iostream>

using namespace std;

int main()
{
   /*cout << "Hello world!" << endl;
    return 0;*/
    printf("Devine le prix\n");

    auto aDeviner(158);
    auto SaisiaDeviner(0);
    auto Boucle(1);
    cin>> SaisiaDeviner;

   // cout<< aDeviner;
do {
    if(SaisiaDeviner == aDeviner )
    {
        cout <<"C'est gagner"<<endl;
        cin>> SaisiaDeviner;
    }

        else if (SaisiaDeviner < aDeviner)
            {
             cout << "Plus" << endl;
             cin>> SaisiaDeviner;
            }

        else if (SaisiaDeviner >aDeviner)
        {
        cout <<"Moins"<<endl;
        cin>> SaisiaDeviner;
        }



        Boucle++;
}while(SaisiaDeviner!= aDeviner);

cout <<"Tu as gagne en "<< Boucle <<" Essaie"<< endl;


}
