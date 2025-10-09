#pragma once
#include <string>
#include <vector>

namespace speedywagon {

struct pillar_men_sensor {
    int activity{};
    std::string location{};
    std::vector<int> data{};
};

int uv_light_heuristic(std::vector<int>* data_array);
bool connection_check(pillar_men_sensor* p);
int activity_counter(pillar_men_sensor* sensor_array, int num_sensors);
bool alarm_control(pillar_men_sensor *p);
bool uv_alarm(pillar_men_sensor * p);
}  // namespace speedywagon
