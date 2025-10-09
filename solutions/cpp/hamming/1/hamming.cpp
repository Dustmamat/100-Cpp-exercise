#include "hamming.h"

namespace hamming {

int compute(std::string dna1, std::string dna2){
    if(dna1.size() != dna2.size()){
        throw std::domain_error("length should be the same");
    }
    int n = dna1.size();
    int distance = 0;
    for(int i = 0; i<n; i++){
        if(dna1[i] != dna2[i]){
            distance++;
        }
    }
    return distance;
}

}  // namespace hamming
