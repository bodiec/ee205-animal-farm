///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  Lab 07d - Animal Farm 1 - EE 205 - Spr 2022
///
/// @file config.h
/// @version 1.0
///
/// Configuration header file for Animal Farm
///
/// @author Bodie Collins <bodie@hawaii.edu>
/// @date   19_Feb_2022
///////////////////////////////////////////////////////////////////////////////

#pragma once

//#include <limits.h>

#define PROGRAM_TITLE "Animal Farm 1"
#define PROGRAM_NAME  "animalfarm1"

#define MAX_CATS (1024)   /// The maximum number of cats the database
/// can hold

#define BAD_CAT UINT_MAX
////New class Weight = float
typedef float Weight;

////enum for Gender
enum Gender {UNKNOWN_GENDER=0, MALE, FEMALE};
////enum for Breed
enum Breed {UNKNOWN_BREED=0,MAINE_COON, MANX, SHORTHAIR, PERSIAN, SPHYNX};