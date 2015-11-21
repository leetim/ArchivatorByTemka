#pragma once
#include <fstream>

typedef unsigned char byte;
typedef unsigned char* pbyte;
typedef std::ifstream inFile;
typedef std::ofstream outFile;

int compressNone(inFile &in, outFile &out);
int decompressNone(inFile &in, outFile &out);

int compressHaff(inFile &in, outFile &out);
int decompressHaff(inFile &in, outFile &out);

int compressLZW(inFile &in, outFile &out);
int decompressLZW(inFile &in, outFile &out);