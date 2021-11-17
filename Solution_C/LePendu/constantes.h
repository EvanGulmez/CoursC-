#ifndef CONSTANTES_H_INCLUDED
#define CONSTANTES_H_INCLUDED

#include <array>
#include "constantes.h"

const auto NB_MOTS{20}; // Nombre de mots trouvables pour le pendu.
const auto NB_ERR_MAX{9}; // Nombre d'erreurs nécessaires pour tuer le pendu
const auto MOTS{std::array<std::string, NB_MOTS>{"recherche", "gestion", "informatique", "pendu", "developpement",
                                                 "honnete", "desintoxication", "loubard", "cinema", "quadrilatere",
                                                 "grenouille", "influenceur", "briquette", "guitariste", "chasuble",
                                                 "transversale", "ordinateur", "coiffeur", "derapage", "chien"}};


#endif // CONSTANTES_H_INCLUDED
