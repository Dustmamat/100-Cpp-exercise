#pragma once
#include <iostream>
#include <vector>
#include <string>

namespace lasagna_master {
int preparationTime(const std::vector<std::string>& layers, int average_t = 2);

typedef struct amount {
    int noodles;
    double sauce;
}amount_t;

amount_t quantities(const std::vector<std::string>& layers);
    
void addSecretIngredient(std::vector<std::string>& own_ingre, const std::vector<std::string>& friend_ingre);
    
std::vector<double> scaleRecipe(const std::vector<double>& quantities, int num_portion);

void addSecretIngredient(std::vector<std::string>& mylist, std::string secretIngredient);
}  // namespace lasagna_master
