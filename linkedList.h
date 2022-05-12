///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  Lab 10d - Animal Farm 2 - EE 205 - Spr 2022
///
/// @file linkedList.h
/// @version 1.0
///
/// Configuration header file for the linkedList.cpp
///
/// @author Bodie Collins <bodie@hawaii.edu>
/// @date   10_May_2022
///////////////////////////////////////////////////////////////////////////////
#pragma once
#include "config.h"
#define MAX_CAT_NAME (50)

class Cat {
    ////member variables
    protected:
        char        name[MAX_CAT_NAME];
        enum Gender gender;
        enum Breed  breed;
        bool        isCatFixed;
        Weight      weight;

    ////public member variables
    public:
        Cat*        next;

    ////Constructors
    public:
        ////Creates a cat node with the default vaules
        Cat();

        ////Creates a cat with all the necessary fields
        Cat( const char *newName, const Gender newGender, const Breed newBreed, const Weight newWeight);

        ////Zero out all member data
        virtual ~Cat();

    ////Getters and Setters
    public:
        ////get and set names
        void setName(const char* newName);
        const char *getName() const noexcept;

        ////get Breed, Gender, Fixed(return true if cats fixed)
        Gender getGender() const noexcept;
        Breed  getBreed() const noexcept;
        bool   isFixed() const noexcept;

        ////Fix cat
        void fixCat() noexcept;

        ////get and set weight
        Weight getWeight() const noexcept;
        void setWeight(Weight newWeight);

    ////private methods
    private:
        void zeroOutMember();

    ////public methods
    public:
        //// print cat
        bool print() const noexcept;
        ////check if cat is valid
        bool validate() const noexcept;

    ////stactic public methods, validations
    public:
        static bool validateName(const char* newName);
        static bool validateGender(const Gender newGender);
        static bool validateBreed(const Breed newBreed);
        static bool validateWeight(const Weight newWeight);

    ////protected methods
    protected:
        ////setting gender and breed
        void setGender(Gender newGender);
        void setBreed(Breed newBreed);

};