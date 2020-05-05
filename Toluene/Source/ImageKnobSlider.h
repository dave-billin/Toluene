/*
  ==============================================================================

    ImageKnobSlider.h
    Created: 15 Apr 2020 9:02:49am
    Author:  dave

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"

//==============================================================================
/*
*/
class ImageKnobSlider    : public Slider
{
public:

    enum ImageKnobSliderStyle
    {
        RotaryHorizontalDrag = Slider::SliderStyle::RotaryHorizontalDrag,
        RotaryVerticalDrag 	 = Slider::SliderStyle::RotaryVerticalDrag,
        RotaryHorizontalVerticalDrag = Slider::SliderStyle::RotaryHorizontalVerticalDrag,
    };

    ImageKnobSlider();
    ImageKnobSlider( ImageKnobSliderStyle style, Slider::TextEntryBoxPosition position );
    ~ImageKnobSlider();

    void paint (Graphics&) override;
    void resized() override;

private:
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (ImageKnobSlider)
};
