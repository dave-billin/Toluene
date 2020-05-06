////////////////////////////////////////////////////////////////////////////////////////////////////
/// @file
///
/// @author Dave Billin
///
/// Copyright 2020 XS Noise Productions, Inc.
////////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef TOLUENE_SOURCE_IMAGEFRAMEARRAY_H_
#define TOLUENE_SOURCE_IMAGEFRAMEARRAY_H_

#pragma once

#include <JuceHeader.h>


////////////////////////////////////////////////////////////////////////////////////////////////////
/// This class serves as a basis for objects that encapsulate an image composed of multiple arrayed
/// image frames such as the ones produced by the JKnobMan utility
////////////////////////////////////////////////////////////////////////////////////////////////////
class ImageFrameArray
{
public:

    enum ArrayOrientation
    {
        Horizontal,     ///< Image frames are tiled horizontally
        Vertical        ///< Image frames are tiled vertically
    };

    ////////////////////////////////////////////////////////////////////////////////////////////////
    /// Creates an instance of the object from a given image and parameters
    ///
    /// @remarks
    ///    This object does not assume sole ownership of the Image passed to it.  Instead, it
    ///    creates a shared reference to the data.
    ///
    /// @param imageData    The image data containing arrayed frames
    /// @param numFrames    The number of frames in the image array
    /// @param orientation  Orientation of frames in imageData
    ///
    ImageFrameArray( juce::Image const& imageData, int numFrames, ArrayOrientation orientation )
      : m_imageData(imageData),
        m_numFrames(numFrames),
        m_orientation(orientation),
        m_frameWidthPx( (ArrayOrientation::Horizontal == m_orientation) ?
                            m_imageData.getWidth() / m_numFrames : m_imageData.getWidth() ),
        m_frameHeightPx( (ArrayOrientation::Horizontal == m_orientation) ?
                            m_imageData.getHeight() : m_imageData.getHeight() / m_numFrames )
    {}

    ////////////////////////////////////////////////////////////////////////////////////////////////
    /// Called when the object goes out of scope
    virtual ~ImageFrameArray() = default;

    ////////////////////////////////////////////////////////////////////////////////////////////////
    /// Returns the object's image data
    /// @return the object's image data
    Image const& getImage() const { return m_imageData; }

    ////////////////////////////////////////////////////////////////////////////////////////////////
    /// Returns the number of frames arrayed in the image
    /// @return the number of frames arrayed in the image
    int getNumFrames() const { return m_numFrames; }

    ////////////////////////////////////////////////////////////////////////////////////////////////
    /// Returns the direction that image frames are tiled in
    /// @return the direction that image frames are tiled in
    ArrayOrientation getOrientation() const { return m_orientation; }

    ////////////////////////////////////////////////////////////////////////////////////////////////
    /// Returns the direction that image frames are tiled in
    /// @return the direction that image frames are tiled in
    bool isHorizontalArray() const { return ArrayOrientation::Horizontal == m_orientation; }

    ////////////////////////////////////////////////////////////////////////////////////////////////
    /// Returns the width in pixels of a single frame in the image
    /// @return the width in pixels of a single frame in the image
    int getFrameWidth() const { return m_frameWidthPx; }

    ////////////////////////////////////////////////////////////////////////////////////////////////
    /// Returns the height in pixels of a single frame in the image
    /// @return the height in pixels of a single frame in the image
    int getFrameHeight() const { return m_frameHeightPx; }

private:
    Image m_imageData;   ///< The image provided by the object
    ArrayOrientation m_orientation; ///< Direction image frames are tiled in
    int m_numFrames;     ///< Number of image frames
    int m_frameWidthPx;  ///< Width in pixels of a single image frame
    int m_frameHeightPx; ///< Height in pixels of a single image frame
};

#endif /* TOLUENE_SOURCE_IMAGEFRAMEARRAY_H_ */
