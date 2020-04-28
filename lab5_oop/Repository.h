//
//  Repository.h
//  lab5_oop
//
//  Created by Ghirisan Sebastian on 26/04/2020.
//  Copyright © 2020 Ghirisan Sebastian. All rights reserved.
//

#ifndef Repository_h
#define Repository_h

#include "Film.h"
#include <vector>
/**
 * Repository
 */
class Repository {
    vector<Film> filme{Film("T1", "sadic", 1970, 100, "https://www.google.com/search?q=made_by_felix%26corina&oq=made_by_felix%26corina&aqs=chrome..69i57.13080j0j4&sourceid=chrome&ie=UTF-8"),
                       Film("T2", "action", 1970, 100, "https://www.google.com/search?q=made_by_felix%26corina&oq=made_by_felix%26corina&aqs=chrome..69i57.13080j0j4&sourceid=chrome&ie=UTF-8"),
                       Film("T3", "comedy", 1970, 100, "https://www.google.com/search?q=made_by_felix%26corina&oq=made_by_felix%26corina&aqs=chrome..69i57.13080j0j4&sourceid=chrome&ie=UTF-8"),
                       Film("T4", "action", 1970, 100, "https://www.google.com/search?q=made_by_felix%26corina&oq=made_by_felix%26corina&aqs=chrome..69i57.13080j0j4&sourceid=chrome&ie=UTF-8"),
                       Film("T5", "action", 1970, 100, "https://www.google.com/search?q=made_by_felix%26corina&oq=made_by_felix%26corina&aqs=chrome..69i57.13080j0j4&sourceid=chrome&ie=UTF-8"),
                       Film("T7", "action", 1970, 100, "https://www.google.com/search?q=made_by_felix%26corina&oq=made_by_felix%26corina&aqs=chrome..69i57.13080j0j4&sourceid=chrome&ie=UTF-8"),
                       Film("T8", "action", 1970, 100, "https://www.google.com/search?q=made_by_felix%26corina&oq=made_by_felix%26corina&aqs=chrome..69i57.13080j0j4&sourceid=chrome&ie=UTF-8"),
                       Film("T6", "action", 1970, 100, "https://www.google.com/search?q=made_by_felix%26corina&oq=made_by_felix%26corina&aqs=chrome..69i57.13080j0j4&sourceid=chrome&ie=UTF-8"),
                       Film("T9", "action", 1970, 100, "https://www.google.com/search?q=made_by_felix%26corina&oq=made_by_felix%26corina&aqs=chrome..69i57.13080j0j4&sourceid=chrome&ie=UTF-8"),
                       Film("T10", "action", 1970, 100, "https://www.google.com/search?q=made_by_felix%26corina&oq=made_by_felix%26corina&aqs=chrome..69i57.13080j0j4&sourceid=chrome&ie=UTF-8"),

    };
public:
    int size()
    { return filme.size();};
    /**
     * IS FRIEND OF REPOSITORY.....MEANWHILE....REPOSITORY IS NOT A FRIEND OF ADMINISTRATOR :(
     */
    friend class Administrator;
    /**
     * ....NEITHER IS BENUTZER.... :((((
     */
    friend class User;
};




#endif /* Repository_h */
