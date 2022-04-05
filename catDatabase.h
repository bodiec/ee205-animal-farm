///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  Lab 07d - Animal Farm 1 - EE 205 - Spr 2022
///
/// @file catDatabase.h
/// @version 1.0
///
/// Configuration header file for the cat database in Animal Farm
///
/// @author Bodie Collins <bodie@hawaii.edu>
/// @date   19_Feb_2022
///////////////////////////////////////////////////////////////////////////////

#pragma once

#include <stdbool.h>  // For the bool datatype
#include <stddef.h>   // For the size_t datatype

#include "config.h"

#define MAX_CAT_NAME (50)   /// This defines the size of the cat's name string

enum Gender { UNKNOWN_GENDER=0, MALE, FEMALE } ;
enum Breed  { UNKNOWN_BREED=0, MAINE_COON, MANX, SHORTHAIR, PERSIAN, SPHYNX } ;
enum Color  { BLACK=0, WHITE, RED, BLUE, GREEN, PINK } ;
typedef float Weight;
typedef size_t NumCats;

struct Cat {
    char               name[MAX_CAT_NAME] ;
    enum Gender        gender ;
    enum Breed         breed ;
    bool               isFixed ;
    Weight             weight;
    enum Color         collarColor1 ;
    enum Color         collarColor2 ;
    unsigned long long license ;
} ;


/// The array that holds all of our cats
extern struct Cat cats[MAX_CATS] ;

extern NumCats numCats ;  /// This points to the next available cat we can add
/// to the database.


/// Initializes the cat database
extern void initializeDatabase() ;

/// Return true if the database is full
extern bool isFull() ;

/// Verify that the database is healthy
extern bool validateDatabase() ;

/// Verify the index is a valid value for this database
extern bool isIndexValid( const size_t index ) ;

/// Verify the name is valid
extern bool isNameValid( const char* name ) ;

/// Verify the weight is valid
extern bool isWeightValid( const Weight weight ) ;

/// Verify the cat collars are valid
extern bool areCatCollarsValid(enum Color collarColor1, enum Color collarColor2 ) ;

/// Zeros out a cat's information from the database
extern void wipeCat( const size_t index ) ;

/// Swap the cats in the indexes
extern bool swapCat( const size_t a, const size_t b ) ;