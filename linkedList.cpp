///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  Lab 10d - Animal Farm 2 - EE 205 - Spr 2022
///
/// @file linkedList.cpp
/// @version 1.0
///
/// Holds linklist stuff
///
/// @author Bodie Collins <bodie@hawaii.edu>
/// @date   07_Apr_2022
///////////////////////////////////////////////////////////////////////////////

#include "linkedList.h"
#include "reportCats.h"

#include <cstring>
#include<cassert>
#include <iostream>
#include <iomanip>

using namespace std;

/// Format a line for printing the members of a class
#define FORMAT_LINE( className, member ) cout << setw(8) << (className) << setw(20) << (member) << setw(52)
/// returns true if everything worked correctly. false if something goes
/// wrong
bool Cat::print() const noexcept {
    assert( validate() ) ;
    cout << setw(80) << setfill( '=' ) << "" << endl ;
    cout << setfill( ' ' ) ;
    cout << left ;
    cout << boolalpha ;
    FORMAT_LINE( "Cat", "name" ) << getName() << endl ;
    FORMAT_LINE( "Cat", "gender" ) << genderName( getGender() ) << endl ;
    FORMAT_LINE( "Cat", "breed" ) << breedName( getBreed() ) << endl ;
    FORMAT_LINE( "Cat", "isFixed" ) << isFixed() << endl ;
    FORMAT_LINE( "Cat", "weight" ) << getWeight() << endl ;
    return true ;
}

////Validations
bool Cat::validateName(const char *newName) {
    ////check to make sure names not null
    if(newName == nullptr){
        throw invalid_argument(PROGRAM_NAME ": name must not be null");
    }
    ////check name is longer than 0
    if(strlen(newName) < 0){
        throw length_error(PROGRAM_NAME": name must be longer than 0");
    }
    ////check name is shorter than max name
    if(strlen(newName) >= MAX_CAT_NAME){
        throw length_error(PROGRAM_NAME": name must be shorter than MAX_CAT_NAME");
    }
    return true;
}

bool Cat::validateGender(const Gender newGender) {
    ////check if gender != to Unknown gender. entered gender must be known
    if(newGender == UNKNOWN_GENDER){
        throw invalid_argument(PROGRAM_NAME": entered gender must be known.");
    }
    return true;
}

bool Cat::validateBreed(const Breed newBreed) {
    ////checks if entered breed =! UNKNOWN_BREED.  Breed must be known
    if(newBreed == UNKNOWN_BREED){
        throw invalid_argument(PROGRAM_NAME": entered breed must be know");
    }
    return true;
}

bool Cat::validateWeight(const Weight newWeight) {
    //// checks that weight is greater than 0
    if( newWeight <= 0){
        throw invalid_argument(PROGRAM_NAME": weight entered must be greater than 0");
    }
    return true;
}

bool Cat::validate() const noexcept {
    //// validate name, gender ,breed, and weight
   try {
       validateName(name);
       validateGender(gender);
       validateBreed(breed);
       validateWeight(weight);
   }
    ////if any throw execptions catch them and print them out and return false
    catch(exception const& e){
        cout<< e.what() << endl;
        return false;
    }
    ////if passes all validation return true
    return true;
}
////Getters

////Setters

////Zeroing out cat node
void Cat::zeroOutMember(){
    ////zero out name
    memset(name, 0 ,MAX_CAT_NAME);
    ////zero out gender
    gender = UNKNOWN_GENDER;
    ////zero out breed
    breed = UNKNOWN_BREED;
    ////Set as not fixed
    isCatFixed = false;
    ////set weight to zero
    weight=UNKNOWN_WEIGHT ;
    ////set next to null pointer end of linked list
    next = nullptr;
}

////create Cat node with default vaules
Cat::Cat() {
    zeroOutMember();
}
