#include "lasagna_master.h"

namespace lasagna_master {
    
int preparationTime(const std::vector<std::string>& layers, int average_t){
    return layers.size()*average_t;

}
    
amount_t quantities(const std::vector<std::string>& layers){
    amount_t quantity;
    quantity.noodles = 0;
    quantity.sauce = 0;
    int n = layers.size();
    for(int i = 0; i < n; i++){
        if( layers[i] == "noodles"){
            quantity.noodles += 50;
        }else if(layers[i] == "sauce"){
            quantity.sauce += 0.2;
        }
    }
    return quantity;
}

void addSecretIngredient(std::vector<std::string>& own_ingre, const std::vector<std::string>& friend_ingre){
    int n = own_ingre.size();
    int m = friend_ingre.size();
    own_ingre[n-1] = friend_ingre[m-1];
}
std::vector<double> scaleRecipe(const std::vector<double>& quantities, int num_portion){
    std::vector<double> new_quantities;
    int n = quantities.size();
    for(int i = 0; i < n; i++){
        new_quantities.push_back(quantities[i] * num_portion / 2);
    }
    return new_quantities; 
}
void addSecretIngredient(std::vector<std::string>& mylist, std::string secretIngredient){
    mylist[mylist.size() - 1] = secretIngredient;
}
}  // namespace lasagna_master
