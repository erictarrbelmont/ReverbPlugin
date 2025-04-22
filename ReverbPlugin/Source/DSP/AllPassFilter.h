/*
  ==============================================================================

    AllPassFilter.h
    Created: 15 Apr 2025 1:01:56pm
    Author:  Derys

  ==============================================================================
*/

#pragma once
#include "FractionalDelay.hpp"

class AllPassFilter
{
    
    public:
    
//    AllPassFilter();
//    
//    ~AllPassFilter();
    
    void prepare();
    
    float processSample(float x, int channel);
    
    void setDiffusion(float d){
        gain = d;
    };
    
    private:
    FractionalDelay delay {1000.f,1.2f};
    
    float fb[2] = {0.f};
    
    float gain;
};

