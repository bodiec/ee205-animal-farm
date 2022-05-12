///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  Lab 07d - Animal Farm 2 - EE 205 - Spr 2022
///
/// @file deleteCats.h
/// @version 1.0
///
/// Configuration header file for the Delete Cats module
///
/// @author Bodie Collins <Bodie@hawaii.edu>
/// @date 10_May_2022
///////////////////////////////////////////////////////////////////////////////
#pragma once

#include "linkedList.h"

///Deletes all cats in database
extern bool deleteAllCats();

///deletes a single cat from the database
extern bool deleteCat(Cat* deleteThisCat);

