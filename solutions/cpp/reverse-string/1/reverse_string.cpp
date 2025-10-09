#include "reverse_string.h"

namespace reverse_string {

std::string reverse_string(std::string name){
    int n = name.size();
    for(int i = 0; i<n/2; i++){
        char temp = name[i];
        name[i] = name[(n-1-i)];
        name[(n-1-i)] = temp;
    }
    return name;
}

}  // namespace reverse_string
