#pragma once
#include <cstdint>

#include "Memory/memory.h"

/*
 * DO NOT INCLUDE THIS FILE ANYWHERE OR ADD FUNCTIONS HERE
 *
 * This function is used in the EngineCore::FNameToString function and
 * should decrypt the name buffer, as some games encrypt the fnames
 *
 * you shouldnt have to change anything in the params.
 * The function expects you to write the data back into the input buffer.
 * In case your decryption routine somehow writes the decrypted data into a second buffer,
 * just use memcpy to copy it into the input buffer
*/

//you can add here any global variables in case the games decryption function uses any global variables
//you can (or should) mark the global variables as "static"

// example:
// static uint64_t dword_4B64088 = 0;


static unsigned int dword_E8A9618 = 0;

//use the Memory::read function for reading any memory.
static void fname_decrypt(char* inputBuf, int namelength)
{
    //reversed either by me or credits to the people who post it on uc


    char* v2 = inputBuf; // rdi
    int v4 = namelength; // ebx
    int v5; // edx
    int v6; // ecx
    int v7; // ecx
    __int16 v8; // ax

    v5 = 0;
    v6 = 42;
    if (v4)
    {
        do
        {
            v7 = v5++ | v6;
            v8 = v7;
            v6 = 2 * v7;
            *v2++ ^= ~v8;
        } while (v5 < v4);
    }
}