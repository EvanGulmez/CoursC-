#ifndef JEU_H_INCLUDED
#define JEU_H_INCLUDED

#include <array>
#include "constante.h"

//using TableauDeScores = std::array<int, NOMBRE_SCORES>;

//on déclare la fonction qui nous permettra de récupérer la lettre tapé par le joueur
void demanderProposition(char proposition);

int jouerPartie(char lettre);
//void afficherScores(TableauDeScores& scores);

#endif // JEU_H_INCLUDED
