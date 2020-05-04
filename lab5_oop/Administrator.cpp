//
// Created by a on 4/25/2020.
//

#include "Administrator.h"
#include <algorithm>
#include <iostream>
#include <utility>

void Administrator::delete_film(const string &titel, int year) {
    auto endv_med = std::remove_if(begin(repo.filme), end(repo.filme), [=](film film) {
        return ((film.gettitel() == titel) && (film.getyear() == year));
    });
    if (endv_med != end(repo.filme)) {
        repo.filme.erase(endv_med, end(repo.filme));
        std::cout << "Film wurde geloscht\n";
    } else
        std::cout << "Es gibt keinen Film mit dies\n";


}
void Administrator::add_film(const film& film) {
    auto it = find_if(repo.filme.begin(), repo.filme.end(), [=](const film& obj) {
        return (obj.gettitel() == film.gettitel() && obj.getyear() == film.getyear());
    });
    if (it != repo.filme.end()) {
        std::cout << "Es gibt schon diesen Film\n";
    } else
        repo.filme.push_back(film);
}

void Administrator::edit_film(const string &titel, int year, string new_link) {
    auto it = find_if(repo.filme.begin(), repo.filme.end(), [=](const film& obj) {
        return (obj.gettitel() == titel && obj.getyear() == year);
    });
    if (it != repo.filme.end()) {
        int index = std::distance(repo.filme.begin(), it);
        repo.filme[index].settrailer(std::move(new_link));
    } else {
        std::cout << "Es gibt keine solchen Film\n";
    }
}

void Administrator::view_filme() {
    std::cout << "In der Datenbank gibt es folgende Filme: \n";
    for (auto &iter : repo.filme) {
        cout << iter.afisare();
    }
}
