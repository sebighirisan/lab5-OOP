//
// Created by Bond on 4/11/2020.
//
#include "Repository.h"
#include "User.hpp"
#include "Administrator.h"
#include <assert.h>
#include <iostream>

void Teste() {
    std::cout << "\nTest START\n\n";
    Film film("Thor", "orice", 2011, 30000, "https://www.youtube.com/watch?v=JOddp-nlNvQ");
    Repository fel;
    assert(fel.size() == 7);
    Administrator sebi;
    assert(sebi.size() == 7);
    sebi.add_film(film);
    assert(sebi.size() == 8);
    film.setyear(2011);
    sebi.add_film(film);
    assert(sebi.size() == 12);
    sebi.delete_film("Thor",2011 );
    assert(sebi.size() == 11);
    std::cout << "\nTest END\n\n";


}
