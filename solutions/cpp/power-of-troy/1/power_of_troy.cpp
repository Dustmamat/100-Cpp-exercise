#include "power_of_troy.h"

namespace troy {
void give_new_artifact(human& person, std::string name){
    artifact own{name};
    person.possession = std::make_unique<artifact>(own);
}

void exchange_artifacts(std::unique_ptr<artifact>& item1, std::unique_ptr<artifact>& item2){
    std::swap(item1, item2);
}

void manifest_power(human& person, std::string power_type){
    power power1{power_type};
    person.own_power = std::make_shared<power>(power1);
    
}

void use_power(human& person1, human& person2){
    person2.influenced_by = person1.own_power;
}

int power_intensity(const human& person){
    if(!person.own_power) return 0;
    else{
        return person.own_power.use_count();
    }
}
}  // namespace troy
