///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  Lab 07d - Animal Farm 1 - EE 205 - Spr 2022
///
/// @file addCats.h
/// @version 1.0
///
/// Configuration header file for the Add Cats module
///
/// @author Bodie Collins <bodie@hawaii.edu>
/// @date   19_Feb_2022
///////////////////////////////////////////////////////////////////////////////

#pragma once
#include "config.h"
#include "catDatabase.h"

extern unsigned int addCat( const char*              name
        ,const enum Gender        gender
        ,const enum Breed         breed
        ,const bool               isFixed
        ,const Weight              weight
        ,const enum Color         collarColor1
        ,const enum Color         collarColor2
        ,const unsigned long long license
) ;

