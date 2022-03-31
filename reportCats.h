///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  Lab 07d - Animal Farm 1 - EE 205 - Spr 2022
///
/// @file reportCats.h
/// @version 1.0
///
/// Configuration header file for the Report Cats module
///
/// @author Bodie Collins <bodie@hawaii.edu>
/// @date   19_Feb_2022
///////////////////////////////////////////////////////////////////////////////

#pragma once

#include "catDatabase.h"

extern bool   printCat( const size_t index ) ;
extern void   printAllCats() ;

extern size_t findCatByName(const char* name ) ;  /// @returns the index or BAD_CAT
extern size_t findCatByCollars( enum Color collarColor1, enum Color collarColor2 ) ;  /// @returns the index or BAD_CAT
extern size_t findCatByLicense( unsigned long long license ) ;  /// @returns the index or BAD_CAT

/// Return a string for the name of the gender
extern const char* genderName( enum Gender gender ) ;

/// Return a string for the name of the breed
extern const char* breedName( enum Breed breed ) ;

/// Return a string for the name of the color
extern const char* colorName ( enum Color color ) ;
