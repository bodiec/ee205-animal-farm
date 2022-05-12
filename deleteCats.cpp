///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  Lab 07d - Animal Farm 2 - EE 205 - Spr 2022
///
/// @file deleteCats.cpp
/// @version 1.0
///
/// This modules deletes cats in the catabase.
///
/// @author Bodie Collins <Bodie@hawaii.edu>
/// @date 10_May_2022
///////////////////////////////////////////////////////////////////////////////
using namespace std;

#include "config.h"
#include "deleteCats.h"
#include "catDatabase.h"
#include "linkedList.h"

#include <cassert>
#include <iostream>
#include <stdexcept>

///function to delete a single cat. returns true if succesful. throw error if cat not in database
bool deleteCat(Cat* deleteThisCat){
    ///making sure the cats isnt nullptr
    assert( deleteThisCat != nullptr );
    assert( validateDatabase() );

    ///if cat is head pointer
    if( deleteThisCat == catDatabaseHeadPointer ) {
        catDatabaseHeadPointer = catDatabaseHeadPointer->next;
        delete deleteThisCat;
        numberOfCats--;
        assert(validateDatabase());
        return true;
    }

   ///temp variable for head pointer
    Cat* iCat =catDatabaseHeadPointer;
    ////if cats is not first cat
    while( iCat != nullptr ){
        if( iCat->next == deleteThisCat ){
            iCat->next = deleteThisCat->next;
            delete deleteThisCat;
            numberOfCats--;

            assert( validateDatabase() );
            return true;
            }

        ///if this is not cat to delete change to next
        iCat= iCat->next;
        }

    /// if cant find the cat throw error
    assert( validateDatabase() );
    throw invalid_argument( PROGRAM_NAME":Unable to delete cat. Not in Database");
    }

///function to delete all cats. returns true if succsessful
bool deleteAllCats(){
    ///while not at end of list delete
    while(catDatabaseHeadPointer != nullptr){
        deleteCat(catDatabaseHeadPointer);
        numberOfCats--;
        }
    return true;
}


