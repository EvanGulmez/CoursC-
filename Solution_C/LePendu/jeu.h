#ifndef JEU_H_INCLUDED
#define JEU_H_INCLUDED

char askLetter();
bool checkLetter(char letter, std::string& mot_cache, std::string_view mot_solut);
bool checkWord(std::string& mot_cache);
void update_pendu(int nb_err);
void displayWord(std::string_view mot_solut, std::string& mot_cache);
void start_game(std::string_view mot_solution, std::string& mot_cache);


#endif // JEU_H_INCLUDED
