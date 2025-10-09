#pragma once
#include <iostream>
#include <memory>
#include <string>

namespace troy {

struct artifact {
    // constructors needed (until C++20)
    artifact(std::string name) : name(name) {}
    std::string name;
};

struct power {
    // constructors needed (until C++20)
    power(std::string effect) : effect(effect) {}
    std::string effect;
};

class human{
    public:
    std::unique_ptr<artifact> possession;
    std::shared_ptr<power> own_power;
    std::shared_ptr<power> influenced_by;
};
void give_new_artifact(human& person, std::string name);
void exchange_artifacts(std::unique_ptr<artifact>& item1, std::unique_ptr<artifact>& item2);
void manifest_power(human& person, std::string power_type);
void use_power(human& person1, human& person2);
int power_intensity(const human& person);
    
}  // namespace troy
