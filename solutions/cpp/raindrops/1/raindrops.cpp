#include "raindrops.h"

namespace raindrops {

std::string convert(int n){
    std::string sounds{};
    if(n%3 == 0){
        sounds = "Pling"; 
    }
    if(n%5 == 0){
        sounds += "Plang";
    }
    if(n%7 == 0){
        sounds += "Plong";
    }
    if( n%3 !=0 && n%5 !=0 && n%7 != 0){
        sounds = std::to_string(n);
    }
    return sounds;
}

}  // namespace raindrops
