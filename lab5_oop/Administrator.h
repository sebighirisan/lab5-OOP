//
// Created by a on 4/25/2020.
//

#ifndef LABB5_ADMINISTRATOR_H
#define LABB5_ADMINISTRATOR_H
#include "Repository.h"

class Administrator {
private:
    repository repo;
public:
    int size(){return repo.size();};
    void add_film(const film &film);//adauga filme
    void view_filme();//afiseaza filmele existente
    void delete_film(const string& titel, int jahr);//sterge filme din lista de filme
    void edit_film(const string &titel, int jahr, string new_link);


};


#endif //LABB5_ADMINISTRATOR_H
