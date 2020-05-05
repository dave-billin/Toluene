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

//[Headers] You can add your own extra header files here...
//[/Headers]

#include "OscEditGroup.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
OscEditGroup::OscEditGroup ()
{
    //[Constructor_pre] You can add your own custom stuff here..
    //[/Constructor_pre]

    grpOsc.reset (new GroupComponent ("grpOsc",
                                      TRANS("OSC 1")));
    addAndMakeVisible (grpOsc.get());

    grpOsc->setBounds (8, 8, 312, 272);

    cboHiSample.reset (new ComboBox ("cboHiSample"));
    addAndMakeVisible (cboHiSample.get());
    cboHiSample->setTooltip (TRANS("High velocity sample"));
    cboHiSample->setEditableText (false);
    cboHiSample->setJustificationType (Justification::centredRight);
    cboHiSample->setTextWhenNothingSelected (String());
    cboHiSample->setTextWhenNoChoicesAvailable (String());
    cboHiSample->addItem (TRANS("000 A.Piano"), 1);
    cboHiSample->addListener (this);

    cboHiSample->setBounds (40, 40, 120, 24);

    lblHi.reset (new Label ("lblHi",
                            TRANS("Hi")));
    addAndMakeVisible (lblHi.get());
    lblHi->setFont (Font (15.00f, Font::plain).withTypefaceStyle ("Regular"));
    lblHi->setJustificationType (Justification::centredLeft);
    lblHi->setEditable (false, false, false);
    lblHi->setColour (TextEditor::textColourId, Colours::black);
    lblHi->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    lblHi->setBounds (16, 40, 24, 24);

    sldVelocityOffsets.reset (new Slider ("sldVelocityOffsets"));
    addAndMakeVisible (sldVelocityOffsets.get());
    sldVelocityOffsets->setTooltip (TRANS("Multisample velocity switch offsets"));
    sldVelocityOffsets->setRange (1, 127, 1);
    sldVelocityOffsets->setSliderStyle (Slider::ThreeValueVertical);
    sldVelocityOffsets->setTextBoxStyle (Slider::NoTextBox, true, 50, 24);
    sldVelocityOffsets->addListener (this);

    sldVelocityOffsets->setBounds (248, 136, 24, 128);

    sldHiSampleLevel.reset (new Slider ("sldHiSampleLevel"));
    addAndMakeVisible (sldHiSampleLevel.get());
    sldHiSampleLevel->setTooltip (TRANS("High sample level"));
    sldHiSampleLevel->setRange (0, 127, 1);
    sldHiSampleLevel->setSliderStyle (Slider::RotaryVerticalDrag);
    sldHiSampleLevel->setTextBoxStyle (Slider::TextBoxRight, false, 50, 20);
    sldHiSampleLevel->setColour (Slider::trackColourId, Colour (0xff485b63));
    sldHiSampleLevel->setColour (Slider::textBoxTextColourId, Colours::aqua);
    sldHiSampleLevel->setColour (Slider::textBoxBackgroundColourId, Colour (0xff15191d));
    sldHiSampleLevel->addListener (this);

    sldHiSampleLevel->setBounds (160, 28, 103, 48);

    cboLoSample.reset (new ComboBox ("cboLoSample"));
    addAndMakeVisible (cboLoSample.get());
    cboLoSample->setTooltip (TRANS("Low velocity sample"));
    cboLoSample->setEditableText (false);
    cboLoSample->setJustificationType (Justification::centredRight);
    cboLoSample->setTextWhenNothingSelected (String());
    cboLoSample->setTextWhenNoChoicesAvailable (String());
    cboLoSample->addItem (TRANS("000 A.Piano"), 1);
    cboLoSample->addListener (this);

    cboLoSample->setBounds (40, 80, 120, 24);

    lblLo.reset (new Label ("lblLo",
                            TRANS("Lo")));
    addAndMakeVisible (lblLo.get());
    lblLo->setFont (Font (15.00f, Font::plain).withTypefaceStyle ("Regular"));
    lblLo->setJustificationType (Justification::centredLeft);
    lblLo->setEditable (false, false, false);
    lblLo->setColour (TextEditor::textColourId, Colours::black);
    lblLo->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    lblLo->setBounds (16, 80, 24, 24);

    sldLoSampleLevel.reset (new Slider ("sldLoSampleLevel"));
    addAndMakeVisible (sldLoSampleLevel.get());
    sldLoSampleLevel->setTooltip (TRANS("Low sample level"));
    sldLoSampleLevel->setRange (0, 127, 1);
    sldLoSampleLevel->setSliderStyle (Slider::RotaryVerticalDrag);
    sldLoSampleLevel->setTextBoxStyle (Slider::TextBoxRight, false, 50, 20);
    sldLoSampleLevel->setColour (Slider::trackColourId, Colour (0xff485b63));
    sldLoSampleLevel->setColour (Slider::textBoxTextColourId, Colours::aqua);
    sldLoSampleLevel->setColour (Slider::textBoxBackgroundColourId, Colour (0xff15191d));
    sldLoSampleLevel->addListener (this);

    sldLoSampleLevel->setBounds (160, 68, 103, 48);

    lblOffsets.reset (new Label ("lblOffsets",
                                 TRANS("Offsets")));
    addAndMakeVisible (lblOffsets.get());
    lblOffsets->setFont (Font (15.00f, Font::plain).withTypefaceStyle ("Regular"));
    lblOffsets->setJustificationType (Justification::centred);
    lblOffsets->setEditable (false, false, false);
    lblOffsets->setColour (TextEditor::textColourId, Colours::black);
    lblOffsets->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    lblOffsets->setBounds (240, 120, 48, 16);

    lblOsc1Level.reset (new Label ("lblOsc1Level",
                                   TRANS("Level")));
    addAndMakeVisible (lblOsc1Level.get());
    lblOsc1Level->setFont (Font (15.00f, Font::plain).withTypefaceStyle ("Regular"));
    lblOsc1Level->setJustificationType (Justification::centred);
    lblOsc1Level->setEditable (false, false, false);
    lblOsc1Level->setColour (TextEditor::textColourId, Colours::black);
    lblOsc1Level->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    lblOsc1Level->setBounds (212, 16, 50, 24);

    lblDelay.reset (new Label ("lblDelay",
                               TRANS("Delay")));
    addAndMakeVisible (lblDelay.get());
    lblDelay->setFont (Font (15.00f, Font::plain).withTypefaceStyle ("Regular"));
    lblDelay->setJustificationType (Justification::centredRight);
    lblDelay->setEditable (false, false, false);
    lblDelay->setColour (TextEditor::textColourId, Colours::black);
    lblDelay->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    lblDelay->setBounds (24, 136, 64, 24);

    sldDelayms.reset (new Slider ("sldDelayms"));
    addAndMakeVisible (sldDelayms.get());
    sldDelayms->setTooltip (TRANS("Delay (ms)"));
    sldDelayms->setRange (0, 5000, 1);
    sldDelayms->setSliderStyle (Slider::RotaryVerticalDrag);
    sldDelayms->setTextBoxStyle (Slider::TextBoxLeft, false, 65, 20);
    sldDelayms->setColour (Slider::thumbColourId, Colour (0xffa542c8));
    sldDelayms->setColour (Slider::trackColourId, Colour (0xff485b63));
    sldDelayms->setColour (Slider::textBoxTextColourId, Colours::aqua);
    sldDelayms->setColour (Slider::textBoxBackgroundColourId, Colour (0xff15191d));
    sldDelayms->addListener (this);

    sldDelayms->setBounds (96, 122, 112, 48);

    cboOctave.reset (new ComboBox ("cboOctave"));
    addAndMakeVisible (cboOctave.get());
    cboOctave->setEditableText (false);
    cboOctave->setJustificationType (Justification::centredRight);
    cboOctave->setTextWhenNothingSelected (String());
    cboOctave->setTextWhenNoChoicesAvailable (String());
    cboOctave->addItem (TRANS("4\'"), 1);
    cboOctave->addItem (TRANS("8\'"), 2);
    cboOctave->addItem (TRANS("16\'"), 3);
    cboOctave->addSeparator();
    cboOctave->addListener (this);

    cboOctave->setBounds (96, 168, 64, 24);

    lblOctave.reset (new Label ("lblOctave",
                                TRANS("Octave")));
    addAndMakeVisible (lblOctave.get());
    lblOctave->setFont (Font (15.00f, Font::plain).withTypefaceStyle ("Regular"));
    lblOctave->setJustificationType (Justification::centredRight);
    lblOctave->setEditable (false, false, false);
    lblOctave->setColour (TextEditor::textColourId, Colours::black);
    lblOctave->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    lblOctave->setBounds (24, 168, 64, 24);

    lblTranspose.reset (new Label ("lblTranspose",
                                   TRANS("Transpose")));
    addAndMakeVisible (lblTranspose.get());
    lblTranspose->setFont (Font (15.00f, Font::plain).withTypefaceStyle ("Regular"));
    lblTranspose->setJustificationType (Justification::centredRight);
    lblTranspose->setEditable (false, false, false);
    lblTranspose->setColour (TextEditor::textColourId, Colours::black);
    lblTranspose->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    lblTranspose->setBounds (24, 208, 64, 24);

    lblTune.reset (new Label ("lblTune",
                              TRANS("Tune")));
    addAndMakeVisible (lblTune.get());
    lblTune->setFont (Font (15.00f, Font::plain).withTypefaceStyle ("Regular"));
    lblTune->setJustificationType (Justification::centredRight);
    lblTune->setEditable (false, false, false);
    lblTune->setColour (TextEditor::textColourId, Colours::black);
    lblTune->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    lblTune->setBounds (24, 240, 64, 24);

    sldTransposeSemitones.reset (new Slider ("sldTransposeSemitones"));
    addAndMakeVisible (sldTransposeSemitones.get());
    sldTransposeSemitones->setTooltip (TRANS("Transpose (semitones)"));
    sldTransposeSemitones->setRange (-12, 12, 1);
    sldTransposeSemitones->setSliderStyle (Slider::RotaryVerticalDrag);
    sldTransposeSemitones->setTextBoxStyle (Slider::TextBoxLeft, false, 65, 20);
    sldTransposeSemitones->setColour (Slider::thumbColourId, Colours::cadetblue);
    sldTransposeSemitones->setColour (Slider::trackColourId, Colour (0xff485b63));
    sldTransposeSemitones->setColour (Slider::textBoxTextColourId, Colours::aqua);
    sldTransposeSemitones->setColour (Slider::textBoxBackgroundColourId, Colour (0xff15191d));
    sldTransposeSemitones->addListener (this);

    sldTransposeSemitones->setBounds (96, 192, 112, 48);

    sldTuneCents.reset (new Slider ("sldTuneCents"));
    addAndMakeVisible (sldTuneCents.get());
    sldTuneCents->setTooltip (TRANS("Tune (cents)"));
    sldTuneCents->setRange (-1200, 1200, 1);
    sldTuneCents->setSliderStyle (Slider::RotaryVerticalDrag);
    sldTuneCents->setTextBoxStyle (Slider::TextBoxLeft, false, 65, 20);
    sldTuneCents->setColour (Slider::thumbColourId, Colour (0xff3666ba));
    sldTuneCents->setColour (Slider::trackColourId, Colour (0xff485b63));
    sldTuneCents->setColour (Slider::textBoxTextColourId, Colours::aqua);
    sldTuneCents->setColour (Slider::textBoxBackgroundColourId, Colour (0xff15191d));
    sldTuneCents->addListener (this);

    sldTuneCents->setBounds (96, 232, 112, 48);

    chkEnableHiOffset.reset (new ToggleButton ("chkEnableHiOffset"));
    addAndMakeVisible (chkEnableHiOffset.get());
    chkEnableHiOffset->setTooltip (TRANS("Enable high sample offset"));
    chkEnableHiOffset->setButtonText (String());
    chkEnableHiOffset->addListener (this);

    chkEnableHiOffset->setBounds (272, 40, 32, 24);

    lblStartOffset.reset (new Label ("lblStartOffset",
                                     TRANS("Start Offset")));
    addAndMakeVisible (lblStartOffset.get());
    lblStartOffset->setFont (Font (12.00f, Font::plain).withTypefaceStyle ("Regular"));
    lblStartOffset->setJustificationType (Justification::centred);
    lblStartOffset->setEditable (false, false, false);
    lblStartOffset->setColour (TextEditor::textColourId, Colours::black);
    lblStartOffset->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    lblStartOffset->setBounds (264, 16, 50, 24);

    chkEnableLoOffset.reset (new ToggleButton ("chkEnableLoOffset"));
    addAndMakeVisible (chkEnableLoOffset.get());
    chkEnableLoOffset->setTooltip (TRANS("Enable low sample offset"));
    chkEnableLoOffset->setButtonText (String());
    chkEnableLoOffset->addListener (this);

    chkEnableLoOffset->setBounds (272, 80, 32, 24);


    //[UserPreSize]
    //[/UserPreSize]

    setSize (600, 400);


    //[Constructor] You can add your own custom stuff here..
    //[/Constructor]
}

OscEditGroup::~OscEditGroup()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]

    grpOsc = nullptr;
    cboHiSample = nullptr;
    lblHi = nullptr;
    sldVelocityOffsets = nullptr;
    sldHiSampleLevel = nullptr;
    cboLoSample = nullptr;
    lblLo = nullptr;
    sldLoSampleLevel = nullptr;
    lblOffsets = nullptr;
    lblOsc1Level = nullptr;
    lblDelay = nullptr;
    sldDelayms = nullptr;
    cboOctave = nullptr;
    lblOctave = nullptr;
    lblTranspose = nullptr;
    lblTune = nullptr;
    sldTransposeSemitones = nullptr;
    sldTuneCents = nullptr;
    chkEnableHiOffset = nullptr;
    lblStartOffset = nullptr;
    chkEnableLoOffset = nullptr;


    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void OscEditGroup::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (Colour (0xff323e44));

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void OscEditGroup::resized()
{
    //[UserPreResize] Add your own custom resize code here..
    //[/UserPreResize]

    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}

void OscEditGroup::comboBoxChanged (ComboBox* comboBoxThatHasChanged)
{
    //[UsercomboBoxChanged_Pre]
    //[/UsercomboBoxChanged_Pre]

    if (comboBoxThatHasChanged == cboHiSample.get())
    {
        //[UserComboBoxCode_cboHiSample] -- add your combo box handling code here..
        //[/UserComboBoxCode_cboHiSample]
    }
    else if (comboBoxThatHasChanged == cboLoSample.get())
    {
        //[UserComboBoxCode_cboLoSample] -- add your combo box handling code here..
        //[/UserComboBoxCode_cboLoSample]
    }
    else if (comboBoxThatHasChanged == cboOctave.get())
    {
        //[UserComboBoxCode_cboOctave] -- add your combo box handling code here..
        //[/UserComboBoxCode_cboOctave]
    }

    //[UsercomboBoxChanged_Post]
    //[/UsercomboBoxChanged_Post]
}

void OscEditGroup::sliderValueChanged (Slider* sliderThatWasMoved)
{
    //[UsersliderValueChanged_Pre]
    //[/UsersliderValueChanged_Pre]

    if (sliderThatWasMoved == sldVelocityOffsets.get())
    {
        //[UserSliderCode_sldVelocityOffsets] -- add your slider handling code here..
        //[/UserSliderCode_sldVelocityOffsets]
    }
    else if (sliderThatWasMoved == sldHiSampleLevel.get())
    {
        //[UserSliderCode_sldHiSampleLevel] -- add your slider handling code here..
        //[/UserSliderCode_sldHiSampleLevel]
    }
    else if (sliderThatWasMoved == sldLoSampleLevel.get())
    {
        //[UserSliderCode_sldLoSampleLevel] -- add your slider handling code here..
        //[/UserSliderCode_sldLoSampleLevel]
    }
    else if (sliderThatWasMoved == sldDelayms.get())
    {
        //[UserSliderCode_sldDelayms] -- add your slider handling code here..
        //[/UserSliderCode_sldDelayms]
    }
    else if (sliderThatWasMoved == sldTransposeSemitones.get())
    {
        //[UserSliderCode_sldTransposeSemitones] -- add your slider handling code here..
        //[/UserSliderCode_sldTransposeSemitones]
    }
    else if (sliderThatWasMoved == sldTuneCents.get())
    {
        //[UserSliderCode_sldTuneCents] -- add your slider handling code here..
        //[/UserSliderCode_sldTuneCents]
    }

    //[UsersliderValueChanged_Post]
    //[/UsersliderValueChanged_Post]
}

void OscEditGroup::buttonClicked (Button* buttonThatWasClicked)
{
    //[UserbuttonClicked_Pre]
    //[/UserbuttonClicked_Pre]

    if (buttonThatWasClicked == chkEnableHiOffset.get())
    {
        //[UserButtonCode_chkEnableHiOffset] -- add your button handler code here..
        //[/UserButtonCode_chkEnableHiOffset]
    }
    else if (buttonThatWasClicked == chkEnableLoOffset.get())
    {
        //[UserButtonCode_chkEnableLoOffset] -- add your button handler code here..
        //[/UserButtonCode_chkEnableLoOffset]
    }

    //[UserbuttonClicked_Post]
    //[/UserbuttonClicked_Post]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...
//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Projucer information section --

    This is where the Projucer stores the metadata that describe this GUI layout, so
    make changes in here at your peril!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="OscEditGroup" componentName=""
                 parentClasses="public Component" constructorParams="" variableInitialisers=""
                 snapPixels="8" snapActive="1" snapShown="1" overlayOpacity="0.330"
                 fixedSize="0" initialWidth="600" initialHeight="400">
  <BACKGROUND backgroundColour="ff323e44"/>
  <GROUPCOMPONENT name="grpOsc" id="569d272cbeb61acb" memberName="grpOsc" virtualName=""
                  explicitFocusOrder="0" pos="8 8 312 272" title="OSC 1"/>
  <COMBOBOX name="cboHiSample" id="281685a9e72f4a96" memberName="cboHiSample"
            virtualName="" explicitFocusOrder="0" pos="40 40 120 24" tooltip="High velocity sample"
            editable="0" layout="34" items="000 A.Piano" textWhenNonSelected=""
            textWhenNoItems=""/>
  <LABEL name="lblHi" id="fbe87ad4382dba14" memberName="lblHi" virtualName=""
         explicitFocusOrder="0" pos="16 40 24 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Hi" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15.0"
         kerning="0.0" bold="0" italic="0" justification="33"/>
  <SLIDER name="sldVelocityOffsets" id="68bc63759e4e2610" memberName="sldVelocityOffsets"
          virtualName="" explicitFocusOrder="0" pos="248 136 24 128" tooltip="Multisample velocity switch offsets"
          min="1.0" max="127.0" int="1.0" style="ThreeValueVertical" textBoxPos="NoTextBox"
          textBoxEditable="0" textBoxWidth="50" textBoxHeight="24" skewFactor="1.0"
          needsCallback="1"/>
  <SLIDER name="sldHiSampleLevel" id="cf91e014f415350d" memberName="sldHiSampleLevel"
          virtualName="" explicitFocusOrder="0" pos="160 28 103 48" tooltip="High sample level"
          trackcol="ff485b63" textboxtext="ff00ffff" textboxbkgd="ff15191d"
          min="0.0" max="127.0" int="1.0" style="RotaryVerticalDrag" textBoxPos="TextBoxRight"
          textBoxEditable="1" textBoxWidth="50" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <COMBOBOX name="cboLoSample" id="85d9a2d14740a079" memberName="cboLoSample"
            virtualName="" explicitFocusOrder="0" pos="40 80 120 24" tooltip="Low velocity sample"
            editable="0" layout="34" items="000 A.Piano" textWhenNonSelected=""
            textWhenNoItems=""/>
  <LABEL name="lblLo" id="ca98e615b666095a" memberName="lblLo" virtualName=""
         explicitFocusOrder="0" pos="16 80 24 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Lo" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15.0"
         kerning="0.0" bold="0" italic="0" justification="33"/>
  <SLIDER name="sldLoSampleLevel" id="4c7521c02d08a7c" memberName="sldLoSampleLevel"
          virtualName="" explicitFocusOrder="0" pos="160 68 103 48" tooltip="Low sample level"
          trackcol="ff485b63" textboxtext="ff00ffff" textboxbkgd="ff15191d"
          min="0.0" max="127.0" int="1.0" style="RotaryVerticalDrag" textBoxPos="TextBoxRight"
          textBoxEditable="1" textBoxWidth="50" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <LABEL name="lblOffsets" id="297ee38ed8950158" memberName="lblOffsets"
         virtualName="" explicitFocusOrder="0" pos="240 120 48 16" edTextCol="ff000000"
         edBkgCol="0" labelText="Offsets" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15.0"
         kerning="0.0" bold="0" italic="0" justification="36"/>
  <LABEL name="lblOsc1Level" id="1cfc99ca139f6497" memberName="lblOsc1Level"
         virtualName="" explicitFocusOrder="0" pos="212 16 50 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Level" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15.0"
         kerning="0.0" bold="0" italic="0" justification="36"/>
  <LABEL name="lblDelay" id="cc52e83242b355dc" memberName="lblDelay" virtualName=""
         explicitFocusOrder="0" pos="24 136 64 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Delay" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15.0"
         kerning="0.0" bold="0" italic="0" justification="34"/>
  <SLIDER name="sldDelayms" id="4d9ab81ec90c46d" memberName="sldDelayms"
          virtualName="" explicitFocusOrder="0" pos="96 122 112 48" tooltip="Delay (ms)"
          thumbcol="ffa542c8" trackcol="ff485b63" textboxtext="ff00ffff"
          textboxbkgd="ff15191d" min="0.0" max="5000.0" int="1.0" style="RotaryVerticalDrag"
          textBoxPos="TextBoxLeft" textBoxEditable="1" textBoxWidth="65"
          textBoxHeight="20" skewFactor="1.0" needsCallback="1"/>
  <COMBOBOX name="cboOctave" id="a47374fd0307fc5f" memberName="cboOctave"
            virtualName="" explicitFocusOrder="0" pos="96 168 64 24" editable="0"
            layout="34" items="4'&#10;8'&#10;16'&#10;" textWhenNonSelected=""
            textWhenNoItems=""/>
  <LABEL name="lblOctave" id="15d34b9f54dabc39" memberName="lblOctave"
         virtualName="" explicitFocusOrder="0" pos="24 168 64 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Octave" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15.0"
         kerning="0.0" bold="0" italic="0" justification="34"/>
  <LABEL name="lblTranspose" id="8733619b5734cd2e" memberName="lblTranspose"
         virtualName="" explicitFocusOrder="0" pos="24 208 64 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Transpose" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15.0"
         kerning="0.0" bold="0" italic="0" justification="34"/>
  <LABEL name="lblTune" id="1cd591c0514ad64a" memberName="lblTune" virtualName=""
         explicitFocusOrder="0" pos="24 240 64 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Tune" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15.0"
         kerning="0.0" bold="0" italic="0" justification="34"/>
  <SLIDER name="sldTransposeSemitones" id="c7ce1adfb73e0e98" memberName="sldTransposeSemitones"
          virtualName="" explicitFocusOrder="0" pos="96 192 112 48" tooltip="Transpose (semitones)"
          thumbcol="ff5f9ea0" trackcol="ff485b63" textboxtext="ff00ffff"
          textboxbkgd="ff15191d" min="-12.0" max="12.0" int="1.0" style="RotaryVerticalDrag"
          textBoxPos="TextBoxLeft" textBoxEditable="1" textBoxWidth="65"
          textBoxHeight="20" skewFactor="1.0" needsCallback="1"/>
  <SLIDER name="sldTuneCents" id="e5736187ed5ef95b" memberName="sldTuneCents"
          virtualName="" explicitFocusOrder="0" pos="96 232 112 48" tooltip="Tune (cents)"
          thumbcol="ff3666ba" trackcol="ff485b63" textboxtext="ff00ffff"
          textboxbkgd="ff15191d" min="-1200.0" max="1200.0" int="1.0" style="RotaryVerticalDrag"
          textBoxPos="TextBoxLeft" textBoxEditable="1" textBoxWidth="65"
          textBoxHeight="20" skewFactor="1.0" needsCallback="1"/>
  <TOGGLEBUTTON name="chkEnableHiOffset" id="73b4dafdd6ff93a5" memberName="chkEnableHiOffset"
                virtualName="" explicitFocusOrder="0" pos="272 40 32 24" tooltip="Enable high sample offset"
                buttonText="" connectedEdges="0" needsCallback="1" radioGroupId="0"
                state="0"/>
  <LABEL name="lblStartOffset" id="5c60a6334e969d94" memberName="lblStartOffset"
         virtualName="" explicitFocusOrder="0" pos="264 16 50 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Start Offset" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="12.0" kerning="0.0" bold="0" italic="0" justification="36"/>
  <TOGGLEBUTTON name="chkEnableLoOffset" id="6cf49129c721a235" memberName="chkEnableLoOffset"
                virtualName="" explicitFocusOrder="0" pos="272 80 32 24" tooltip="Enable low sample offset"
                buttonText="" connectedEdges="0" needsCallback="1" radioGroupId="0"
                state="0"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif


//[EndFile] You can add extra defines here...
//[/EndFile]

