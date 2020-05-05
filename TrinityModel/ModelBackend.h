////////////////////////////////////////////////////////////////////////////////////////////////////
/// @file
///
/// @author Dave Billin
///
/// Copyright 2019 XS Noise Productions, Inc.
////////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef TOLUENE_TRINITYMODEL_MODELBACKEND_H_
#define TOLUENE_TRINITYMODEL_MODELBACKEND_H_

namespace KorgTrinity
{

////////////////////////////////////////////////////////////////////////////////////////////////////
/// Interface for objects that implement a back-end to a KORG Trinity data model
class ModelBackend
{
public:
    ModelBackend() = default;
    virtual ~ModelBackend() = default;


    virtual writeParameter() = 0;
};

} // END namespace KorgTrinity

#endif /* TOLUENE_TRINITYMODEL_MODELBACKEND_H_ */
