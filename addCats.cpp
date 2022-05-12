
///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  Lab 07d - Animal Farm 2 - EE 205 - Spr 2022
///
/// @file addCats.cpp
/// @version 1.0
///
/// This modules adds cats to the catabase.
///
/// @author Bodie Collins <bodie@hawaii.edu>
/// @date 10_May_2022
///////////////////////////////////////////////////////////////////////////////
using namespace std;
#include "config.h"
#include "catDatabase.h"
#include "addCats.h"

#include <iostream>
#include <cassert>

///Adds new cat to database. cant be nullptr. returns true if sucessfull logic error if already in database
bool addCat(Cat* newCat){
    /// check that its not null pointer and name, gender, breed, weight
    assert(newCat != nullptr);
    newCat->validate();

    ///if cats is already in database
    if(isCatInDatabase(newCat)){
        throw logic_error PROGRAM_NAME": Cat is already in Database"
        }

    assert( validateDatabase() );

    ///good to go add cat
    newCat->next = catDatabaseHeadPointer;
    catDatabaseHeadPointer = newCat;
    numberOfCats++;

    assert( validateDatabase() );

    return true;
    }



