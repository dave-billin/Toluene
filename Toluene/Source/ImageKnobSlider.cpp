////////////////////////////////////////////////////////////////////////////////////////////////////
/// @file
///
/// @author Dave Billin
///
/// Copyright 2020 XS Noise Productions, Inc.
////////////////////////////////////////////////////////////////////////////////////////////////////

#include "ImageKnobSlider.h"



////////////////////////////////////////////////////////////////////////////////////////////////////
ImageKnobSlider::ImageKnobSlider (std::unique_ptr<ImageFrameArray> imageArray)
  : m_imageArray( std::move(imageArray) )
{
}

////////////////////////////////////////////////////////////////////////////////////////////////////
ImageKnobSlider::~ImageKnobSlider()
{
}

////////////////////////////////////////////////////////////////////////////////////////////////////
void ImageKnobSlider::paint (Graphics& g)
{
    Image knobImage = m_imageArray->getImage();

	// Calculate the value of the slider normalized to a range of 0.0 to 1.0
    double const currentValue = getValue();
    double const valueRange = getMaximum() - getMinimum();
    double const normValue = (valueRange != 0.0) ? (currentValue - getMinimum()) / valueRange : 0.0;

    int const numFrames = m_imageArray->getNumFrames();
    int const frameWidth = m_imageArray->getFrameWidth();
    int const frameHeight = m_imageArray->getFrameHeight();

	// Calculate the index of the current frame
    int frameIndex = static_cast<int>(ceil(normValue * numFrames)) - 1;
    frameIndex = (frameIndex < 0) ? 0 : frameIndex;
    jassert(frameIndex <= numFrames);

    int const sourceX = m_imageArray->isHorizontalArray() ? (frameIndex * frameWidth) : 0;
    int const sourceY = m_imageArray->isHorizontalArray() ? 0 : (frameIndex * frameHeight);

	g.drawImage(knobImage,
	            0,           // the left of the destination rectangle
	            0,           // the top of the destination rectangle
	            getWidth(),  // the width of the destination rectangle
	            getHeight(), // the height of the destination rectangle
	            sourceX,     // the left of the rectangle to copy from the source image
	            sourceY,     // the top of the rectangle to copy from the source image
	            frameWidth,  // the width of the rectangle to copy from the source image
	            frameHeight, // the height of the rectangle to copy from the source image
	            false );
}
