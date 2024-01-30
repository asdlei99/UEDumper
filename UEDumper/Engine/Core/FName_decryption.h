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


static DWORD dword_113C6B04 = 0;

//use the Memory::read function for reading any memory.
static void fname_decrypt(char* inputBuf, int namelength)
{
    //reversed either by me or credits to the people who post it on uc

    char* v2 = inputBuf;
    int v5 = 0;
    int v4 = namelength;
    if(!dword_113C6B04)
        dword_113C6B04 = Memory::read<DWORD>(Memory::getBaseAddress() + 0x113C6B04);
    int v6 = dword_113C6B04 ^ 0x9C677CC5;
    __int64 result = 33 * (dword_113C6B04 / 0x21u);
    __int64 v8 = dword_113C6B04 % 0x21u;

    if (v4)
    {
        do
        {
            result = v5 + v8;
            ++v5;
            v6 += result;
            *v2++ ^= v6;
        } while (v5 < v4);
    }
}