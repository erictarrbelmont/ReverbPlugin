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
void FBCFDelay::prepare(float Fs, float delay, float speed){
    delay.setFs(Fs);
}

void FBCFDelay::processSample(float input, float channel){
    float delaySamp = delay.processSample(input, channel);
    
    float finalDelay = gain * delaySamp;
};


void FBCFDelay::setGain(float g){
    gain = g;
    //.2 to .99?
    //gain determines RT60
};


