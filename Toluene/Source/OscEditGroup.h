/*
  ==============================================================================

  This is an automatically generated GUI class created by the Projucer!

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Created with Projucer version: 5.4.5

  ------------------------------------------------------------------------------

  The Projucer is part of the JUCE library.
  Copyright (c) 2017 - ROLI Ltd.

  ==============================================================================
*/

#pragma once

//[Headers]     -- You can add your own extra header files here --
#include "../JuceLibraryCode/JuceHeader.h"
//[/Headers]



//==============================================================================
/**
                                                                    //[Comments]
    An auto-generated component, created by the Projucer.

    Describe your class and how it works here!
                                                                    //[/Comments]
*/
class OscEditGroup  : public Component,
                      public ComboBox::Listener,
                      public Slider::Listener,
                      public Button::Listener
{
public:
    //==============================================================================
    OscEditGroup ();
    ~OscEditGroup();

    //==============================================================================
    //[UserMethods]     -- You can add your own custom methods in this section.
    //[/UserMethods]

    void paint (Graphics& g) override;
    void resized() override;
    void comboBoxChanged (ComboBox* comboBoxThatHasChanged) override;
    void sliderValueChanged (Slider* sliderThatWasMoved) override;
    void buttonClicked (Button* buttonThatWasClicked) override;



private:
    //[UserVariables]   -- You can add your own custom variables in this section.
    //[/UserVariables]

    //==============================================================================
    std::unique_ptr<GroupComponent> grpOsc;
    std::unique_ptr<ComboBox> cboHiSample;
    std::unique_ptr<Label> lblHi;
    std::unique_ptr<Slider> sldVelocityOffsets;
    std::unique_ptr<Slider> sldHiSampleLevel;
    std::unique_ptr<ComboBox> cboLoSample;
    std::unique_ptr<Label> lblLo;
    std::unique_ptr<Slider> sldLoSampleLevel;
    std::unique_ptr<Label> lblOffsets;
    std::unique_ptr<Label> lblOsc1Level;
    std::unique_ptr<Label> lblDelay;
    std::unique_ptr<Slider> sldDelayms;
    std::unique_ptr<ComboBox> cboOctave;
    std::unique_ptr<Label> lblOctave;
    std::unique_ptr<Label> lblTranspose;
    std::unique_ptr<Label> lblTune;
    std::unique_ptr<Slider> sldTransposeSemitones;
    std::unique_ptr<Slider> sldTuneCents;
    std::unique_ptr<ToggleButton> chkEnableHiOffset;
    std::unique_ptr<Label> lblStartOffset;
    std::unique_ptr<ToggleButton> chkEnableLoOffset;


    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (OscEditGroup)
};

//[EndFile] You can add extra defines here...
//[/EndFile]

