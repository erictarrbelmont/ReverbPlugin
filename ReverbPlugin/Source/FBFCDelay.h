/*
  ==============================================================================

    FBFCDelay.h
    Created: 10 Apr 2025 1:38:34pm
    Author:  Jakobi Braden

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>

class FBFC
{
    
public:
    
    void prepare();
    
    void processDelay();
    
    void setTime(float t);
    
    void setGain(float g);
    
private:
    
    float timeSamp;
    
    float gain;
    
};
