/*
  ==============================================================================

    AllPassFilter.cpp
    Created: 15 Apr 2025 1:01:56pm
    Author:  Derys

  ==============================================================================
*/

#include "AllPassFilter.h"



void AllPassFilter::prepare() {};


    float AllPassFilter::processSample(float x, int channel)
    {
        
        float w = x + fb[channel] * -gain;
        
        float z = delay.processSample(w,channel);
        
        float y = z + w * gain;
        
        fb[channel] = z;
        
        
        return y;
        
        
    };
    


