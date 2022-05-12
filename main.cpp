///         University of Hawaii, College of Engineering
/// @brief  Lab 08d - Animal Farm 2 - EE 205 - Spr 2022
///
/// @file main.cpp
/// @version 1.0
///
/// Orchestrates the entire program.  Start by printing
///    Starting Animal Farm 0
/// ...and end by printing
///    Done with Animal Farm 0
///
/// @build
///    $ make clean && clear && make debug && make test
///    $ make clean && clear && make       && make test
///
/// @author Bodie Collins <bodie@hawaii.edu>s
/// @date   10_May_2022
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
using namespace std;

#include "config.h"
#include "catDatabase.h"
#include "addCats.h"
#include "reportCats.h"
#include "deleteCats.h"
#include "linkedList.h"

#include <iostream>
#include <exception>
#include <cassert>
#include <cstring>
#include <cstdlib>

/// Used to test the largest possible name
#define MAX_NAME1    "1234567890123456789012345678901234567890123456789"

/// Used to test an illegal name (because it's too large by one char
#define ILLEGAL_NAME "12345678901234567890123456789012345678901234567890"


int main() {
    cout << "Starting Animal Farm 2" << endl ;

    initializeDatabase() ;

    addCat( new Cat( "Loki", MALE, PERSIAN, 1.0 )) ;
    addCat( new Cat( "Milo", MALE, MANX , 1.1 )) ;
    addCat( new Cat( "Bella", FEMALE, MAINE_COON, 1.2 )) ;
    addCat( new Cat( "Kali", FEMALE, SHORTHAIR, 1.3 )) ;
    addCat( new Cat( "Trin", FEMALE, MANX, 1.4 )) ;
    addCat( new Cat( "Chili", MALE, SHORTHAIR, 1.5 )) ;

    printAllCats() ;

    deleteAllCats() ;

    //printAllCats() ;

    cout << "Done with Animal Farm 1 "  ;

    return( EXIT_SUCCESS ) ;
}