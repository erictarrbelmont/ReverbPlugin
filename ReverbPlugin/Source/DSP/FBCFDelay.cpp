/*
  ==============================================================================

    FBCFDelay.cpp
    Created: 10 Apr 2025 1:38:34pm
    Author:  Jakobi Braden

  ==============================================================================
*/

#include "FBCFDelay.h"


//void FBCFDelay::prepare(float Fs, float delay, float speed){
    
//    delay.setFs(Fs);
    //set Delay amount
    //set Speed
   
//};



void FBCFDelay::prepare(float Fs, float d, float speed){
    delay.setFs(Fs);
    delay.setSpeed(speed);
    delay.setDelaySamples(d);
}

void FBCFDelay::processSample(float input, float channel){
    float delaySum = input + currentDelay;
    float delaySamp = delay.processSample(delaySum, channel);
    currentDelay = gain * delaySamp;
};


void FBCFDelay::setGain(float g){
    if (g < .2f){
        g = .2f;
    } else if (g > .99f){
        g = .99f;
    } else {
        gain = g;
        
        //gain determines RT60
    };
    
}
