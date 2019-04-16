#ifndef PROFILER_HPP
#define PROFILER_HPP

#include <chrono>

typedef std::chrono::high_resolution_clock Time;
typedef std::chrono::duration<double, std::ratio<1, 1000>> ms;
typedef std::chrono::duration<float> elapsed_time;

class profiler
{
public:
    profiler();
    ~profiler();

    void reset();
    void register_val(float val);
    uint32_t get_counter();
    float get_total();
    float get_avg();

private:
    bool  is_init;
    uint32_t counter;
    float total_val;
};

#endif // PROFILER_HPP

