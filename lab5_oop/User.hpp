//
//  User.hpp
//  lab5_oop
//
//  Created by Ghirisan Sebastian on 23/04/2020.
//  Copyright © 2020 Ghirisan Sebastian. All rights reserved.
//

#ifndef User_hpp
#define User_hpp

#include <stdio.h>
#include "Film.h"
#include <vector>
#include "Repository.h"

class User {
    vector<Film> watchlist;
    Repository repo;
public:
    int size(){
        return watchlist,size();
    }
    void view_genre(const string &genre);
    
    void watch(const string &titel, int year);
};

#endif /* User_hpp */
