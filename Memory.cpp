#include <iostream>
#include "Memory.h"
using namespace std ;
Memory Memory::Memory : data(256, 0) {}

long Memory:: read(long address){
    if (address >= 0 && address < data.size()) {
        return data[address];
    } else {
        cerr << "Memory read error: Invalid address " << address << endl;
        return 0;
    }
}
void Memory :: write (long address, long value) {
    if (address >= 0 && address < data.size()) {
        data[address] = value;
    } else {
        cerr << "Memory write error: Invalid address " << address << endl;
    }
}
