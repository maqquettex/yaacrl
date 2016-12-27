#ifndef YAACRL_YAACRL_H
#define YAACRL_YAACRL_H

#include "database.h"
#include <string>


class Yaacrl {
    Database * db;
    int recognize_hashes(PeakHashCollection *);
public:
    Yaacrl();
    int add_file(std::string);
    int recognize_wav(std::string);
    int recognize_fingerprints(std::string);
    std::string get_song_by_id(int);
    int fingerprints_to_file(std::string);
    int clear_database();
    ~Yaacrl();
};

#endif //YAACRL_YAACRL_H