/*
  ==============================================================================

    FBCFDelay.h
    Created: 10 Apr 2025 1:38:34pm
    Author:  Jakobi Braden

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>
#include "FractionalDelay.hpp"

class FBCFDelay
{
    
public:
    
    
    void prepare(float Fs, float d, float speed);
    
    float processSample(float input, int channel);
    
    void setGain(float g);
    
    
    
private:
    
    float gain = 1.f;
    
    float currentDelay = 0.f;
    
    FractionalDelay delay {1000.f, 1.f};
    
};
