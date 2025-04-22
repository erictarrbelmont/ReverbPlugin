/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#include "PluginProcessor.h"
#include "PluginEditor.h"

//==============================================================================
ReverbPluginAudioProcessorEditor::ReverbPluginAudioProcessorEditor (ReverbPluginAudioProcessor& p)
    : AudioProcessorEditor (&p), audioProcessor (p)
{
    // Make sure that before the constructor has finished, you've set the
    // editor's size to whatever you need it to be.
    setSize (400, 300);
    setupKnobs();
}

ReverbPluginAudioProcessorEditor::~ReverbPluginAudioProcessorEditor()
{
}

//==============================================================================
void ReverbPluginAudioProcessorEditor::paint (juce::Graphics& g)
{
    // (Our component is opaque, so we must completely fill the background with a solid colour)
    g.fillAll (getLookAndFeel().findColour (juce::ResizableWindow::backgroundColourId));

    g.setColour (juce::Colours::white);
    g.setFont (juce::FontOptions (15.0f));\
}

void ReverbPluginAudioProcessorEditor::resized()
{
    // This is generally where you'll want to lay out the positions of any
    // subcomponents in your editor..
    
    delayTime.setBounds(125.f, 380.f, 100.f, 100.f);
    delayTime.setSliderStyle(juce::Slider::SliderStyle::RotaryHorizontalVerticalDrag);
    delayTime.setRange(0, 0.99,.01);
    //delayTime.setValue(audioProcessor.);
    delayTime.setTextBoxStyle(juce::Slider::TextEntryBoxPosition::TextBoxBelow, false, 50, 20);
    addAndMakeVisible(delayTime);
    
    
    
}
