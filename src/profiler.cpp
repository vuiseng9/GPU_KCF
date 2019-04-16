#include "profiler.hpp"

profiler::profiler()
{
    is_init=false;
    reset();
}

profiler::~profiler()
{
}

void profiler::reset()
{
    counter = 0;
    total_val = 0;
    is_init = true;
}

uint32_t profiler::get_counter()
{
    return counter;
}

float profiler::get_total()
{
    return total_val;
}

void profiler::register_val(float val)
{
    counter+=1;
    total_val+=val;
}

float profiler::get_avg()
{
    return total_val/(float)counter;
}
