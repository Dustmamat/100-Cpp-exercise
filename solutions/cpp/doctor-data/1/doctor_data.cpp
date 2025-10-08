#include "doctor_data.h"

std::string heaven::get_older_bob(Vessel person1, Vessel person2){
    if(person1.generation < person2.generation){
        return person1.name;
    }
    return person2.name;
}
bool heaven::in_the_same_system(Vessel person1, Vessel person2){
    if(person1.current_system == person2.current_system){
        return true;
    }
    return false;
}
heaven::Vessel::Vessel(std::string name, int generation, star_map::System sys){
                this->generation = generation;
                this->name = name;
                current_system = sys;
}

heaven::Vessel heaven::Vessel::replicate(std::string name){
    Vessel bob(name, generation+1);
    return bob;
}

void heaven::Vessel::make_buster(){
    busters++;
}
bool heaven::Vessel::shoot_buster(){
    if(busters > 0){
        busters--;
        return true;
    }
    return false;
}