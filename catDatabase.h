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
/// @date 10_May_2022
///////////////////////////////////////////////////////////////////////////////

#pragma once

#include <cstddef>

#include "linkedList.h"

///Head pointer for a single linked list
extern Cat* catDatabaseHeadPointer;

///for number of cats should be a container class later
extern int numberOfCats;

///Initializes database for cats
extern void initializeDatabase();

///return true if cat is in database
extern bool isCatInDatabase(const Cat* aCat);

///Verify that database is good to go
extern bool validateDatabase();

