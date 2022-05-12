///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  Lab 07d - Animal Farm 2 - EE 205 - Spr 2022
///
/// @file config.h
/// @version 1.0
///
/// Configuration header file for Animal Farm
///
/// @author Bodie Collins <bodie@hawaii.edu>
/// @date 10_May_2022
///////////////////////////////////////////////////////////////////////////////

#pragma once
///program titles and name
#define PROGRAM_NAME  "animalfarm2"

////New class Weight = float
typedef float Weight;

/// when weight is unkown set to -1
const Weight UNKNOWN_WEIGHT = -1;

////enum for Gender
enum Gender {UNKNOWN_GENDER=0, MALE, FEMALE};

////enum for Breed
enum Breed {UNKNOWN_BREED=0,MAINE_COON, MANX, SHORTHAIR, PERSIAN, SPHYNX};

