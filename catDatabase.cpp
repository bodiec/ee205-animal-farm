///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  Lab 07d - Animal Farm 2 - EE 205 - Spr 2022
///
/// @file catDatabase.cpp
/// @version 1.0
///
/// This modules defines all of the enums, the arrays, the maximum size of
/// the array and the number of cats in the array.
///
/// @author Bodie Collins <bodie@hawaii.edu>
/// @date 10_May_2022
///////////////////////////////////////////////////////////////////////////////
using namespace std;

#include "config.h"
#include "catDatabase.h"
#include "linkedList.h"
#include "reportCats.h"

#include <cassert>
#include <iostream>
#include <stdexcept>

///head pointer for linked list
Cat* catDatabaseHeadPointer = nullptr;

///setting number of cats to 0
int numberOfCats = 0;

///initialize database
void initializeDatabase() {
    ///check to see if old database is empty
    if (catDatabaseHeadPointer != nullptr) {
        throw logic_error(PROGRAM_NAME": Delete old database first");
        }
    assert(validateDatabase());
    }

///Scan database to look for a cat
bool isCatInDatabase(const Cat* aCat){
    assert(aCat != nullptr);
    assert(validateDatabase());

    ///search through linked list
    for(Cat* iCat = catDatabaseHeadPointer ; iCat != nullptr ; iCat = iCat->next){
        if(iCat==aCat){
            ///Cat found return true
            return true;
            }
        }
    assert(validateDatabase());
    /// if cat was not found
    return false;
    }

/// if database if valid does nothing. if not valid prints out why and returns false
extern bool validateDatabase(){
    ///varible for number of good cats
    int goodCats = 0;

    /// cylces through linked list
    for(Cat* iCat = catDatabaseHeadPointer; iCat != nullptr; iCat = iCat->next){
        /// checks current cat name, gender, weight, and breed
        if( !iCat->validate() ){
            return false;
            }
        ///varible to hold name to compare to iCat
        Cat* foundCat = findCatByName( iCat->getName() );
        if(foundCat != iCat){
            cout << PROGRAM_NAME": Found a duplicate name[" << iCat->getName() <<"]"<< endl;
            }
        ///passes validation so increment how many good cats
        goodCats++;
        }

    ///checks that the number of cats is = to the amount of good cats
    if(goodCats != numberOfCats){
        cout << PROGRAM_NAME ": Error : numberOfCats [" << numberOfCats << "] does not equal [" << goodCats << "]" << endl ;
        return false ;
        }
    ///if passes all test database is healthy return true
    return true;
    }