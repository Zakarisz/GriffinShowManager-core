/* 
 * File:   main.cpp
 * Author: ghent
 *
 * Created on 23 novembre 2013, 15:51
 */

#include <cstdlib>
#include <iostream>

#include "Playlist.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    Playlist* pl = new Playlist();
    pl->title = "Titre de ma playlist";
    
    
    cout << "Playlist : " << pl->title << " - " << pl->trackList.size() << endl;
    
    
    Track tr;
    tr.title = "Track 1";
    pl->trackList.push_back(tr);
    
    cout << "Playlist : " << pl->title << " - " << pl->trackList.size() << endl;
    
    return 0;
}

