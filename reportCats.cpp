///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  Lab 07d - Animal Farm 2 - EE 205 - Spr 2022
///
/// @file reportCats.cpp
/// @version 1.0
///
/// This modules finds and prints cats in the catabase.
///
/// @author Bodie Collins <Bodie@hawaii.edu>
/// @date   10_May_2022
///////////////////////////////////////////////////////////////////////////////
using namespace std;

#include "linkedList.h"
#include "config.h"
#include "catDatabase.h"
#include "reportCats.h"

#include <cstring>
#include <stdexcept>
#include <iostream>
#include <cassert>

/// prints all cats. returns true if successful
bool printAllCats(){
    /// varible for what cat currently printing
    int numCats = 0 ;

    assert( validateDatabase() );
    ///cycle through linked list
    for(Cat* iCat = catDatabaseHeadPointer ; iCat != nullptr ; iCat = iCat->next ){
        ///print current cat
        iCat->print();
        numCats++;
        }
    cout << "done" << endl;
    assert(validateDatabase);
    return true;
    }

///find a cat by name. return cats name if found or nullptr if not
Cat* findCatByName(const char* name){
    assert( Cat::validateName( name) );

    ///cycles through linked list
    for(Cat* iCat = catDatabaseHeadPointer ; iCat != nullptr ; iCat = iCat->next ){
        if( strcmp(name, iCat->getName() ) == 0 ) {
            return iCat;
            }
        }
    ///if no name found return nullptr
    return nullptr;
    }

///return name of gender
const char* genderName(enum Gender gender){
    switch( gender){
        case UNKNOWN_GENDER: return "Unknown";
        case MALE:           return "Male";
        case FEMALE:         return "Female";
        }
    /// error if not male, female, unknowngender
    throw logic_error(PROGRAM_NAME": Gender is not mapped string vaule");
    }

///return type of breed
const char* breedName(const enum Breed breed){
    switch ( breed ) {
        case UNKNOWN_BREED: return "Unknown";
        case MANX         : return "Manx";
        case MAINE_COON   : return "Maine Coon";
        case SPHYNX       : return "Sphynx";
        case SHORTHAIR    : return "Shorthair";
        case PERSIAN      : return "Persian";
    }
    ///throw error in not any of above
    throw logic_error(PROGRAM_NAME": Breed no mapped to a string vaule");
}



