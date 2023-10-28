/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>
#include "PluginProcessor.h"

//==============================================================================
/**
*/
class Solitude_DistortionAudioProcessorEditor  : public juce::AudioProcessorEditor
{
public:
    Solitude_DistortionAudioProcessorEditor (Solitude_DistortionAudioProcessor&);
    ~Solitude_DistortionAudioProcessorEditor() override;

    //==============================================================================
    void paint (juce::Graphics&) override;
    void resized() override;

private:
    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    Solitude_DistortionAudioProcessor& audioProcessor;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (Solitude_DistortionAudioProcessorEditor)
};
