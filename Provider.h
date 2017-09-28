#ifndef PROVIDER_H
#define PROVIDER_H

//*********************************************************************
// FILE:	Provider.h
// AUTHOR:	Samuel Piecz
// LOGON ID:	Z1732715
// DUE DATE:	9/26/17
//
// PURPOSE:	Declaration for the Provider class, which represents
//		information about a health care provider.
//********************************************************************

class Provider
{
    private:
        //Data members
        char number[7] = {};
        char specialty[41] = {};
        char name[41] = {};
        char address_1[41] = {};
        char address_2[31] = {};
        char city[21] = {};
        char state[3] = {};
        char zip_code[6] = {};
        char phone_number[15] = {};

    public:
        //Method prototypes

        //Default constructor
        Provider();

        //Print provider data
        void print() const;

        //Accessor method returns provider number data member
        const char* getProviderNumber() { return number; }

        //Accessor method that returns specialty data member
        const char*  getProviderName() { return name; }

        //Accessor method that returns specialty
        const char* getProviderSpecialty() { return specialty; }

        //Provider pointers - extra credit
        Provider(const char*, const char*, const char*, const char*, const char*, const char*, const char*, const char*, const char*);
        const char* getProviderNumber() const;
        const char* getName() const;
        const char* getSpecialty() const;
        const char* getAddress1() const;
        const char* getAddress2() const;
        const char* getCity() const;
        const char* getState() const;
        const char* getZipCode() const;
        const char* getPhoneNumber() const;
};

#endif
