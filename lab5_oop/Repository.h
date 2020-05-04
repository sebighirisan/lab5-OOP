//
//  Repository.h
//  lab5_oop
//
//  Created by Ghirisan Sebastian on 26/04/2020.
//  Copyright © 2020 Ghirisan Sebastian. All rights reserved.
//

#ifndef LABB5_REPOSITORY_H
#define LABB5_REPOSITORY_H
#include "Film.h"
#include <vector>

class repository {
    vector<film> filme{film("Hobbit1", "adventure", 2012,42000, "https://www.youtube.com/watch?v=JTSoD4BBCJc"),
                       film("Hobbit2", "adventure", 2013, 23000, "https://www.youtube.com/watch?v=fnaojlfdUbs"),
                       film("Hobbit3", "adventure", 2014, 3800, "https://www.youtube.com/watch?v=iVAgTiBrrDA"),
                       film("The Notebook", "romance", 2005, 14000, "https://www.youtube.com/watch?v=yDJIcYE32NU"),
                       film("Hannibal", "thriller", 2001, 10000, "https://www.youtube.com/watch?v=eHSYth2wSEk"),
                       film("Thor", "action", 2011, 30000, "https://www.youtube.com/watch?v=JOddp-nlNvQ"),
                       film("Southpaw", "drama", 2015, 90000, "https://www.youtube.com/watch?v=Mh2ebPxhoLs")
    };
public:
    int size(){ return filme.size();};

    friend class Administrator;

    friend class User;
};
#endif //LABB5_REPOSITORY_H
