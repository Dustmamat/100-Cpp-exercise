#include <iostream>
#if !defined(doctor_data_h)
#define doctor_data_h
#include <string>

namespace star_map{
    enum class System{BetaHydri, EpsilonEridani, Sol,AlphaCentauri, DeltaEridani, Omicron2Eridani};
}

namespace heaven{
    class Vessel; // forward declaration
    bool in_the_same_system(Vessel person1, Vessel person2);
    std::string get_older_bob(Vessel person1, Vessel person2);
    class Vessel{
        public:
    // --- Member variables ---
            std::string name{};
            star_map::System current_system{};
            int generation{};
            int busters{};
    // --- Member functions ---
            void make_buster();
            bool shoot_buster();
            Vessel replicate(std::string name);
    
        // --- Constructors ---
            Vessel(std::string name, int generation, star_map::System sys = star_map::System::Sol);
            
    };
}

#endif