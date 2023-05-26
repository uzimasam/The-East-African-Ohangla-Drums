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
class TheEastAfricanOhanglaDrumsAudioProcessorEditor  : public juce::AudioProcessorEditor
{
public:
    TheEastAfricanOhanglaDrumsAudioProcessorEditor (TheEastAfricanOhanglaDrumsAudioProcessor&);
    ~TheEastAfricanOhanglaDrumsAudioProcessorEditor() override;

    //==============================================================================
    void paint (juce::Graphics&) override;
    void resized() override;

private:
    juce::TextButton mLoadButton{ "Load Sample" };
    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    TheEastAfricanOhanglaDrumsAudioProcessor& audioProcessor;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (TheEastAfricanOhanglaDrumsAudioProcessorEditor)
};
