///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  Lab 07d - Animal Farm 2 - EE 205 - Spr 2022
///
/// @file reportCats.h
/// @version 1.0
///
/// Configuration header file for the Report Cats module
///
/// @author Bodie Collins <bodie@hawaii.edu>
/// @date   10_May_2022
///////////////////////////////////////////////////////////////////////////////
#pragma once

#include "config.h"
#include "linkedList.h"

/// prints all cats
extern bool printAllCats();

///find a cat by name
extern Cat* findCatByName(const char* name);

///return name of gender
extern const char* genderName(enum Gender gender);

///return type of breed
extern const char* breedName(enum Breed breed);