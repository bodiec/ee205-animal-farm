///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  Lab 07d - Animal Farm 1 - EE 205 - Spr 2022
///
/// @file deleteCats.c
/// @version 1.0
///
/// This modules deletes cats in the catabase.
///
/// @author Bodie Collins <Bodie@hawaii.edu>
/// @date   19_Feb_2022
///////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdbool.h>
#include <assert.h>

#include "config.h"
#include "deleteCats.h"
#include "catDatabase.h"


bool deleteCat( const size_t index ) {
    if( !isIndexValid( index ) ) {
        fprintf( stderr, "%s: %s(): Bad cat!\n", PROGRAM_NAME, __FUNCTION__ ) ;
        return false ;
    }

    // Just double check that the array is not empty...
    if( numCats == 0 ) {
        return true ;  // We're all good... the array is already empty.
    }

    assert( validateDatabase() == true ) ;  // Validate the database is healthy
    // before deleting anything

    swapCat( index, numCats-1 ) ; // Swap the cat we are deleting with the last
    // cat in the array

    wipeCat( numCats-1 ) ;        // Now, wipe the last cat in the array

    numCats -= 1 ;  // We have 1 fewer cat now

    assert( validateDatabase() == true ) ;  // Validate the database is healthy
    // after deleting

#ifdef DEBUG
    printf( "%s: %s: Cat [%lu] has been deleted.  There are [%lu] in the database.\n", PROGRAM_NAME, __FUNCTION__, index, numCats ) ;
#endif

    return true ;
}


bool deleteAllCats() {
    // Keep deleting cats until there are no more cats...
    while( numCats != 0 ) {
        deleteCat( 0 ) ;
    }

//      numCats = 0 ;            // ...and just like that...

#ifdef DEBUG
    printf( "%s: %s: All cats have been deleted\n", PROGRAM_NAME, __FUNCTION__ ) ;
#endif

    return true ;
}
