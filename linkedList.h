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
/// @date   07_Apr_2022
///////////////////////////////////////////////////////////////////////////////
#include "config.h"
#include "linkedList.h"
#define MAX_NAME (50)
#define UNKNOWN_WEIGHT (-1)

class Cat {
    ////member variables
    protected:
        char        name[MAX_NAME];
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
        Cat( const char *newName, const Gender newGender, const Breed newBreed, const Weight weight);

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
        static bool validateweight(const Weight newWeight);

    ////protected methods
    protected:
        ////setting gender and breed
        void setGender(Gender newGender);
        void setBreed(Breed newBreed);

};