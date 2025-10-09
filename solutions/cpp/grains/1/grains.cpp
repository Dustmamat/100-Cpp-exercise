#include "grains.h"

namespace grains {

long long unsigned int square(int num){
    return pow(2, num-1);
}

long long unsigned int total(){
    int total = 0;
    for(int i=1; i <= 64; i++){
        total += square(i);
    }
    return total;
}

}  // namespace grains
