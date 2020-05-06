/*
  ==============================================================================

  This is an automatically generated GUI class created by the Projucer!

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Created with Projucer version: 5.4.7

  ------------------------------------------------------------------------------

  The Projucer is part of the JUCE library.
  Copyright (c) 2017 - ROLI Ltd.

  ==============================================================================
*/

//[Headers] You can add your own extra header files here...
#include "KitKnobImageArrays.h"
#include "ImageKnobSlider.h"
//[/Headers]

#include "CustomWidgetTestTabComponent.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
CustomWidgetTestTabComponent::CustomWidgetTestTabComponent ()
{
    //[Constructor_pre] You can add your own custom stuff here..
    //[/Constructor_pre]

    sld_testSliderCyan.reset (new ImageKnobSlider (std::unique_ptr<ImageFrameArray>( new KitKnobCyanImageArray )));
    addAndMakeVisible (sld_testSliderCyan.get());
    sld_testSliderCyan->setName ("cyan kit slider");

    sld_testSliderCyan->setBounds (16, 8, 120, 120);

    sld_testSliderIndigo.reset (new ImageKnobSlider (std::unique_ptr<ImageFrameArray>( new KitKnobIndigoImageArray )));
    addAndMakeVisible (sld_testSliderIndigo.get());
    sld_testSliderIndigo->setName ("indigo kit slider");

    sld_testSliderIndigo->setBounds (160, 8, 120, 120);

    sld_testSliderRed.reset (new ImageKnobSlider (std::unique_ptr<ImageFrameArray>( new KitKnobRedImageArray )));
    addAndMakeVisible (sld_testSliderRed.get());
    sld_testSliderRed->setName ("red kit slider");

    sld_testSliderRed->setBounds (304, 8, 120, 120);


    //[UserPreSize]
    sld_testSliderCyan->setRange(0,   // Min
                                 127, // Max
                                 1 ); // Interval
    sld_testSliderCyan->setSliderStyle(Slider::RotaryVerticalDrag);
    sld_testSliderCyan->setTextBoxStyle( Slider::TextEntryBoxPosition::TextBoxBelow,
                                         true,     // isReadOnly
                                         40,       // textEntryBoxWidth,
                                         20 );     // textEntryBoxHeight

    sld_testSliderIndigo->setRange(0,   // Min
                                   4000, // Max
                                   1 ); // Interval
    sld_testSliderIndigo->setSliderStyle(Slider::RotaryVerticalDrag);
    sld_testSliderIndigo->setTextBoxStyle( Slider::TextEntryBoxPosition::TextBoxBelow,
                                           true,     // isReadOnly
                                           40,       // textEntryBoxWidth,
                                           20 );     // textEntryBoxHeight

    sld_testSliderRed->setRange(0,   // Min
                                4000, // Max
                                1 ); // Interval
    sld_testSliderRed->setSliderStyle(Slider::RotaryVerticalDrag);
    sld_testSliderRed->setTextBoxStyle( Slider::TextEntryBoxPosition::TextBoxBelow,
                                        true,     // isReadOnly
                                        40,       // textEntryBoxWidth,
                                        20 );     // textEntryBoxHeight
    //[/UserPreSize]

    setSize (600, 400);


    //[Constructor] You can add your own custom stuff here..
    //[/Constructor]
}

CustomWidgetTestTabComponent::~CustomWidgetTestTabComponent()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]

    sld_testSliderCyan = nullptr;
    sld_testSliderIndigo = nullptr;
    sld_testSliderRed = nullptr;


    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void CustomWidgetTestTabComponent::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (Colour (0xff323e44));

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void CustomWidgetTestTabComponent::resized()
{
    //[UserPreResize] Add your own custom resize code here..
    //[/UserPreResize]

    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...
//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Projucer information section --

    This is where the Projucer stores the metadata that describe this GUI layout, so
    make changes in here at your peril!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="CustomWidgetTestTabComponent"
                 componentName="" parentClasses="public Component" constructorParams=""
                 variableInitialisers="" snapPixels="8" snapActive="1" snapShown="1"
                 overlayOpacity="0.330" fixedSize="0" initialWidth="600" initialHeight="400">
  <BACKGROUND backgroundColour="ff323e44"/>
  <GENERICCOMPONENT name="cyan kit slider" id="aa353092b1e12124" memberName="sld_testSliderCyan"
                    virtualName="" explicitFocusOrder="0" pos="16 8 120 120" class="ImageKnobSlider"
                    params="std::unique_ptr&lt;ImageFrameArray&gt;( new KitKnobCyanImageArray )"/>
  <GENERICCOMPONENT name="indigo kit slider" id="d782fbf45215a6f9" memberName="sld_testSliderIndigo"
                    virtualName="" explicitFocusOrder="0" pos="160 8 120 120" class="ImageKnobSlider"
                    params="std::unique_ptr&lt;ImageFrameArray&gt;( new KitKnobIndigoImageArray )"/>
  <GENERICCOMPONENT name="red kit slider" id="f1f46cffefb455dc" memberName="sld_testSliderRed"
                    virtualName="" explicitFocusOrder="0" pos="304 8 120 120" class="ImageKnobSlider"
                    params="std::unique_ptr&lt;ImageFrameArray&gt;( new KitKnobRedImageArray )"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif


//[EndFile] You can add extra defines here...
//[/EndFile]

