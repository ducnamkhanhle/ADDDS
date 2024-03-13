#include "Truckloads.h"
#include <cmath>

int Truckloads::numTrucks(int numCrates, int loadSize){
    if (numCrates <= loadSize){
        return 1;
    }
    else {
        int FirstSplit;
        int SecondSplit = numCrates / 2;

        if (numCrates % 2 == 0) FirstSplit = numCrates / 2;
        else FirstSplit = numCrates / 2 + 1;

        return numTrucks(FirstSplit, loadSize) + numTrucks(SecondSplit,loadSize);
    }
}
