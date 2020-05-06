////////////////////////////////////////////////////////////////////////////////////////////////////
/// @file
///
/// @author Dave Billin
///
/// Copyright 2020 XS Noise Productions, Inc.
////////////////////////////////////////////////////////////////////////////////////////////////////
#ifndef TOLUENE_SOURCE_IMAGEKNOBSLIDER_H_
#define TOLUENE_SOURCE_IMAGEKNOBSLIDER_H_

#include <JuceHeader.h>
#include "ImageFrameArray.h"


////////////////////////////////////////////////////////////////////////////////////////////////////
/// A Slider class that draws itself from a tiled image array
////////////////////////////////////////////////////////////////////////////////////////////////////
class ImageKnobSlider  : public Slider
{
public:
    ////////////////////////////////////////////////////////////////////////////////////////////////
    /// Creates an instance of the object from a specified image array
    /// @param imageArray  The image array used to draw the slider
    ImageKnobSlider (std::unique_ptr<ImageFrameArray> imageArray);

    ////////////////////////////////////////////////////////////////////////////////////////////////
    /// Called when the object goes out of scope
    ~ImageKnobSlider() override;

    void paint (Graphics& g) override;

private:
    std::unique_ptr<ImageFrameArray> m_imageArray;  ///< The image used to draw the object's knob

    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (ImageKnobSlider)
};

#endif  // END #ifndef TOLUENE_SOURCE_IMAGEKNOBSLIDER_H_
