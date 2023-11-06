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


    char* v2; // rdi
    int v4; // ebx
    unsigned int v5; // er9
    unsigned int v6; // er8
    __int64 result; // rax
    unsigned int v8; // er9
    int v9; // ecx

    v2 = inputBuf;
    v4 = namelength;
    if (!dword_E8A9618)
        dword_E8A9618 = Memory::read<unsigned int>(Memory::getBaseAddress() + 0xF2655BC);
    v5 = dword_E8A9618;
    v6 = v5 ^ 0x9C677CC5;
    result = 1041204193 * v5;
    v8 = v5 % 0x21;
    v9 = 0;
    if (v4)
    {
        do
        {
            result = v9 + v8;
            ++v9;
            v6 += result;
            *v2++ ^= v6;
        } while (v9 < v4);

    }
}