////////////////////////////////////////////////////////////////////////////////////////////////////
/// @file
///
/// @author Dave Billin
///
/// Copyright 2019 XS Noise Productions, Inc.
////////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef TOLUENE_TRINITYMODEL_PARAMETERIDS_H_
#define TOLUENE_TRINITYMODEL_PARAMETERIDS_H_

#include <cstdint>

////////////////////////////////////////////////////////////////////////////////////////////////////
namespace KorgTrinity
{

enum PcmProgramParameter : uint16_t
{
    // CATEGORY
    categoryA                   = 0x0001,
    categoryB                   = 0x0002,   // NOTE: not available on TR-rack

    // OSCILLATOR
    oscillatorMode              = 0x0002,
    keyAssign                   = 0x0003,   // NOTE: not available on TR-rack
    hold                        = 0x0007,
    keyPriority                 = 0x0005,
    polyAssignMode              = 0x0006,
    osc2BottomVelocity          = 0x0116,

    // SCALE
    scaleKey                    = 0x0009,
    scaleType                   = 0x0008,
    randomIntensity             = 0x000a,

    // PANEL SWITCH ASSIGN
    sw2Assign                   = 0x000c,   // NOTE: not available on TR-rack
    sw1Assign                   = 0x000b,   // NOTE: not available on TR-rack

    // OSCILLATOR EG (linear line)
    oscEG_startLevel            = 0x0600,
    oscEG_attackTime            = 0x0601,
    oscEG_attackLevel           = 0x0602,
    oscEG_decayTime             = 0x0603,
    oscEG_releaseTime           = 0x0604,
    oscEG_releaseLevel          = 0x0605,
    oscEG_intByVelocity         = 0x0606,
    oscEG_altModSource          = 0x0607,
    oscEG_intByAltMode          = 0x0608,

    //--------------------------------------------------------
    // OSCILLATOR 1 Param ID's start here
    //--------------------------------------------------------
    osc1_lowMultisampleOffsetStart      = 0x0104,
    osc1_lowMultisample                 = 0x0103,
    osc1_hiMultisampleOffsetStart       = 0x0101,
    osc1_hiMultisampleOrDrumkit         = 0x0100,
    osc1_lowerLevel                     = 0x0105,
    osc1_higherLevel                    = 0x0102,
    osc1_bottomVelocityOfHiMultisample  = 0x0114,
    osc1_transpose                      = 0x0108,
    osc1_octave                         = 0x0107,
    osc1_tune                           = 0x0109,
    osc1_delayStart                     = 0x0106,

    // OSCILLATOR 1 PITCH MOD
    osc1_pitchMod_intByPitchSlope       = 0x0200,
    osc1_pitchMod_intByOscEG            = 0x0208,
    osc1_pitchMod_intByOsc1LFO          = 0x020c,
    osc1_pitchMod_intByRibbon           = 0x0201,

    // OSCILLATOR 1 PITCH MOD BY JOYSTICK X-AXIS
    osc1_pitchMod_intByJoystick_positiveX   = 0x0202,
    osc1_pitchMod_intByJoystick_negativeX   = 0x0204,
    osc1_pitchMod_stepOfJoystick_positiveX  = 0x0203,
    osc1_pitchMod_stepOfJoystick_negativeX  = 0x0205,

    // OSC-1 PITCH MOD BY ALTERNATE MOD
    osc1_pitchMod_altPitchModSource         = 0x0206,
    osc1_pitchMod_intByAltPitchMod          = 0x0207,

    // INTENSITY MODULATION OF OSC-1 EG TO OSC-1 PITCH
    osc1_EGtoPitchMod_intByVelocity         = 0x0209,
    osc1_EGtoPitchMod_altModSource          = 0x020a,
    osc1_EGtoPitchMod_intByAltMod           = 0x020b,

    // OSCILLATOR 1 LFO
    osc1_LFO_Waveform                       = 0x0300,
    osc1_LFO_startMode                      = 0x0303,
    osc1_LFO_keySync                        = 0x0304,
    osc1_LFO_offset                         = 0x0302,
    osc1_LFO_frequency                      = 0x0301,
    osc1_LFO_delay                          = 0x0305,
    osc1_LFO_fade                           = 0x0306,

    // OSCILLATOR 1 LFO FREQUENCY MODULATION
    osc1_LFO_intByKeyboardTracking          = 0x0307,
    osc1_LFO_intByJoystick_positiveY        = 0x0308,
    osc1_LFO_altModulationSource            = 0x0309,
    osc1_LFO_intByAltMod                    = 0x030a,

    // OSCILLATOR 1 LFO TO OSCILLATOR 1 PITCH INTENSITY
    osc1_LFO_modIntByJoystick_positiveY     = 0x020d,
    osc1_LFO_modIntByAltMod                 = 0x020e,
    osc1_LFO_pitchIntModAltModSource        = 0x020f,
    osc1_LFO_pitchIntModIntByAltMod         = 0x0210,


    // FILTER 1
    filter1A_type                           = 0x0701,
    filter1B_type                           = 0x0706,
    filter1_routing                         = 0x0700,

    // FILTER 1 EG (Up:Linear, Down:Exponential)
    filter1EG_startLevel                    = 0x0b00,
    filter1EG_attackTime                    = 0x0b01,
    filter1EG_attackLevel                   = 0x0b02,
    filter1EG_decayTime                     = 0x0b03,
    filter1EG_breakPointLevel               = 0x0b04,
    filter1EG_slopeTime                     = 0x0b05,
    filter1EG_sustainLevel                  = 0x0b06,
    filter1EG_releaseTime                   = 0x0b07,
    filter1EG_releaseLevel                  = 0x0b08,

    // FILTER 1 EG TIME (4POINTS) MOD BY KEYBOARD TRACKING (Linear, Center key is C4)
    filter1EG_keyTrackMod_attackTime        = 0x0b09,
    filter1EG_keyTrackMod_decayTime         = 0x0b0a,
    filter1EG_keyTrackMod_slopeTime         = 0x0b0b,
    filter1EG_keyTrackMod_releaseTime       = 0x0b0c,

    // FILTER 1 EG TIME (4POINTS) MOD BY VELOCITY
    filter1EG_velocityMod_attackTime        = 0x0b0d,
    filter1EG_velocityMod_decayTime         = 0x0b0e,
    filter1EG_velocityMod_slopeTime         = 0x0b0f,
    filter1EG_velocityMod_releaseTime       = 0x0b10,

    // FILTER 1 EG TIME MOD (For EG Whole Time)
    filter1EG_altMod_source                 = 0x0b11,
    filter1EG_intByAltMod                   = 0x0b12,

    // FILTER 1 EG LEVEL (3 points) MOD BY VELOCITY
    filter1EG_velocityMod_startLevel        = 0x0b13,
    filter1EG_velocityMod_attackLevel       = 0x0b14,
    filter1EG_velocityMod_breakPointLevel   = 0x0b15,

    // INTENSITY OF MODULATION OF FILTER 1 EG TO FILTER 1A AND FILTER 1B CUTOFF FREQ BY ALT MOD
    filter1EG_cutoffFreq_altModSource       = 0x0814,
    filter1EG_cutoffFreq_altModIntensity    = 0x0815,

    // FILTER 1 LFO
    filter1LFO_waveform                     = 0x0c00,
    filter1LFO_startMode                    = 0x0c03,
    filter1LFO_keySync                      = 0x0c04,
    filter1LFO_offset                       = 0x0c02,
    filter1LFO_frequency                    = 0x0c01,
    filter1LFO_delay                        = 0x0c05,
    filter1LFO_fade                         = 0x0c06,

    // FILTER 1 LFO FREQUENCY MODULATION
    filter1LFO_altModSource                 = 0x0c07,
    filter1LFO_intByAltMod                  = 0x0c08,

    // INTENSITY OF MODULATION OF FILTER 1 LFO TO FILTER 1A/1B CUTOFF FREQUENCY
    filter1LFO_modIntByJoystick_negativeY   = 0x0816,
    filter1LFO_modIntByAftertouch           = 0x0817,
    filter1LFO_modIntAltModSource           = 0x081a,
    filter1LFO_modIntByAltMod               = 0x081b,

    //----------------------------------------------------------------
    // FILTER 1A PARAMETERS
    //----------------------------------------------------------------
    filter1A_cutoffFrequency                = 0x0702,
    filter1A_inputGain                      = 0x0703,
    filter1A_resonance                      = 0x0704,
    filter1A_resonanceLevelModByVelocity    = 0x0705,

    // FILTER 1A CUTOFF FREQUENCY MODULATION
    filter1A_cutoffMod_intByFilter1EG       = 0x0812,
    filter1A_cutoffMod_EGIntModByVelocity   = 0x0810,
    filter1A_cutoffMod_intByFilter1LFO      = 0x0818,
    filter1A_cutoffMod_intByJoystick_X      = 0x0804,
    filter1A_cutoffMod_intByAftertouch      = 0x0805,

    // FILTER 1A CUTOFF MODULATION BY KEYBOARD TRACKING
    filter1A_cutoffMod_KeyTrack_lowKey      = 0x0800,
    filter1A_cutoffMod_KeyTrack_highKey     = 0x0801,
    filter1A_cutoffMod_KeyTrack_lowerRamp   = 0x0802,
    filter1A_cutoffMod_KeyTrack_higherRamp  = 0x0803,

    // FILTER 1A CUTOFF FREQUENCY MODULATION
    filter1A_cutoffMod_altModSource         = 0x0806,
    filter1A_cutoffMod_intByAltMod          = 0x0807,

    //----------------------------------------------------------------
    // FILTER 1B PARAMETERS
    //----------------------------------------------------------------
    filter1B_cutoffFrequency                = 0x0707,
    filter1B_inputGain                      = 0x0708,
    filter1B_resonance                      = 0x0709,
    filter1B_resonanceLevelModByVelocity    = 0x070a,

    // FILTER 1B CUTOFF FREQUENCY MODULATION
    filter1B_cutoffMod_intByFilter1EG       = 0x0813,
    filter1B_cutoffMod_EGIntModByVelocity   = 0x0811,
    filter1B_cutoffMod_intByFilter1LFO      = 0x0819,
    filter1B_cutoffMod_intByJoystick_X      = 0x080c,
    filter1B_cutoffMod_intByAftertouch      = 0x080d,

    // FILTER 1B CUTOFF MODULATION BY KEYBOARD TRACKING
    filter1B_cutoffMod_KeyTrack_lowKey      = 0x0808,
    filter1B_cutoffMod_KeyTrack_highKey     = 0x0809,
    filter1B_cutoffMod_KeyTrack_lowerRamp   = 0x080a,
    filter1B_cutoffMod_KeyTrack_higherRamp  = 0x080b,

    // FILTER 1B CUTOFF FREQUENCY MODULATION
    filter1B_cutoffMod_altModSource         = 0x080e,
    filter1B_cutoffMod_intByAltMod          = 0x080f,

    //-------------------------------------------
    // AMPLIFIER PARAMETERS
    //-------------------------------------------
    // AMPLIFIER-1
    amplifier1_outputLevel                  = 0x0f00,

    // AMPLIFIER-1 AMPLITUDE MOD BY KEYBOARD TRACKING
    amplifier1Mod_keyTrack_lowKey           = 0x0f01,
    amplifier1Mod_keyTrack_highKey          = 0x0f02,
    amplifier1Mod_keyTrack_lowerRamp        = 0x0f03,
    amplifier1Mod_keyTrack_higherRamp       = 0x0f04,

    // AMPLIFIER-1 AMPLITUDE MOD
    amplifier1Mod_intByVelocity             = 0x0f05,
    amplifier1Mod_intByAM                   = 0x0f06,
    amplifier1Mod_altModSource              = 0x0f07,
    amplifier1Mod_intByAltMod               = 0x0f08,

    // AMPLIFIER-1 EG (Up:Linear, Down:Exponential)
    amplifier1EG_startLevel                 = 0x1000,
    amplifier1EG_attackTime                 = 0x1001,
    amplifier1EG_attackLevel                = 0x1002,
    amplifier1EG_decayTime                  = 0x1003,
    amplifier1EG_breakPointLevel            = 0x1004,
    amplifier1EG_slopeTime                  = 0x1005,
    amplifier1EG_sustainLevel               = 0x1006,
    amplifier1EG_releaseTime                = 0x1007,

    // AMPLIFIER-1 EG TIME (4 points) MOD BY KEYBOARD TRACK (Linear, Center Key is C4)
    amplifier1EGTime_modByKeyTrack_attack   = 0x1008,
    amplifier1EGTime_modByKeyTrack_decay    = 0x1009,
    amplifier1EGTime_modByKeyTrack_slope    = 0x100a,
    amplifier1EGTime_modByKeyTrack_release  = 0x100b,

    // AMPLIFIER-1 EG TIME (4 points) MOD BY VELOCITY
    amplifier1EGTime_modByVel_attack        = 0x100c,
    amplifier1EGTime_modByVel_decay         = 0x100d,
    amplifier1EGTime_modByVel_slope         = 0x100e,
    amplifier1EGTime_modByVel_release       = 0x100f,

    // AMPLIFIER-1 EG TIME MOD BY ALT MOD SOURCE (For EG Whole Time)
    amplifier1EGMod_altModSource            = 0x1010,
    amplifier1EGMod_intByAltMod             = 0x1011,

    // AMPLIFIER-1 EG LEVEL (3 points) MOD BY VELOCITY
    amplifier1EGLevel_modByVel_start        = 0x1012,
    amplifier1EGLevel_modByVel_attack       = 0x1013,
    amplifier1EGLevel_modByVel_breakPoint   = 0x1014,

    // OSC-1 BLOCK PANPOT & PANPOT MOD
    osc1_pan                                = 0x0f0b,
    osc1_panMod_altModSource                = 0x0f0c,
    osc1_panMod_intByAltMod                 = 0x0f0d,

    // OSC-1 BLOCK SEND
    osc1_send1Level                         = 0x0f09,
    osc1_send2Level                         = 0x0f0a,


    //--------------------------------------------------------
    // OSCILLATOR 2 Param ID's start here
    //--------------------------------------------------------
    osc2_lowMultisampleOffsetStart      = 0x010e,
    osc2_lowMultisample                 = 0x010d,
    osc2_hiMultisampleOffsetStart       = 0x010b,
    osc2_hiMultisampleOrDrumkit         = 0x010a,
    osc2_lowerLevel                     = 0x010f,
    osc2_higherLevel                    = 0x010c,
    osc2_bottomVelocityOfHiMultisample  = 0x0115,
    osc2_transpose                      = 0x0112,
    osc2_octave                         = 0x0111,
    osc2_tune                           = 0x0113,
    osc2_delayStart                     = 0x0110,

    // OSCILLATOR 2 PITCH MOD
    osc2_pitchMod_intByPitchSlope       = 0x0400,
    osc2_pitchMod_intByOscEG            = 0x0408,
    osc2_pitchMod_intByOsc1LFO          = 0x040c,
    osc2_pitchMod_intByRibbon           = 0x0401,

    // OSCILLATOR 2 PITCH MOD BY JOYSTICK X-AXIS
    osc2_pitchMod_intByJoystick_positiveX   = 0x0402,
    osc2_pitchMod_intByJoystick_negativeX   = 0x0404,
    osc2_pitchMod_stepOfJoystick_positiveX  = 0x0403,
    osc2_pitchMod_stepOfJoystick_negativeX  = 0x0405,

    // OSC-2 PITCH MOD BY ALTERNATE MOD
    osc2_pitchMod_altPitchModSource         = 0x0406,
    osc2_pitchMod_intByAltPitchMod          = 0x0407,

    // INTENSITY MODULATION OF OSC-2 EG TO OSC-2 PITCH
    osc2_EGtoPitchMod_intByVelocity         = 0x0409,
    osc2_EGtoPitchMod_altModSource          = 0x040a,
    osc2_EGtoPitchMod_intByAltMod           = 0x040b,

    // OSCILLATOR 2 LFO
    osc2_LFO_Waveform                       = 0x0500,
    osc2_LFO_startMode                      = 0x0503,
    osc2_LFO_keySync                        = 0x0504,
    osc2_LFO_offset                         = 0x0502,
    osc2_LFO_frequency                      = 0x0501,
    osc2_LFO_delay                          = 0x0505,
    osc2_LFO_fade                           = 0x0506,

    // OSCILLATOR 2 LFO FREQUENCY MODULATION
    osc2_LFO_intByKeyboardTracking          = 0x0507,
    osc2_LFO_intByJoystick_positiveY        = 0x0508,
    osc2_LFO_altModulationSource            = 0x0509,
    osc2_LFO_intByAltMod                    = 0x050a,

    // OSCILLATOR 2 LFO TO OSCILLATOR 2 PITCH INTENSITY
    osc2_LFO_modIntByJoystick_positiveY     = 0x040d,
    osc2_LFO_modIntByAltMod                 = 0x040e,
    osc2_LFO_pitchIntModAltModSource        = 0x040f,
    osc2_LFO_pitchIntModIntByAltMod         = 0x0410,

    // FILTER 2
    filter2A_type                           = 0x0901,
    filter2B_type                           = 0x0906,
    filter2_routing                         = 0x0900,

    // FILTER 2 EG (Up:Linear, Down:Exponential)
    filter2EG_startLevel                    = 0x0d00,
    filter2EG_attackTime                    = 0x0d01,
    filter2EG_attackLevel                   = 0x0d02,
    filter2EG_decayTime                     = 0x0d03,
    filter2EG_breakPointLevel               = 0x0d04,
    filter2EG_slopeTime                     = 0x0d05,
    filter2EG_sustainLevel                  = 0x0d06,
    filter2EG_releaseTime                   = 0x0d07,
    filter2EG_releaseLevel                  = 0x0d08,

    // FILTER 2 EG TIME (4POINTS) MOD BY KEYBOARD TRACKING (Linear, Center key is C4)
    filter2EG_keyTrackMod_attackTime        = 0x0d09,
    filter2EG_keyTrackMod_decayTime         = 0x0d0a,
    filter2EG_keyTrackMod_slopeTime         = 0x0d0b,
    filter2EG_keyTrackMod_releaseTime       = 0x0d0c,

    // FILTER 2 EG TIME (4POINTS) MOD BY VELOCITY
    filter2EG_velocityMod_attackTime        = 0x0d0d,
    filter2EG_velocityMod_decayTime         = 0x0d0e,
    filter2EG_velocityMod_slopeTime         = 0x0d0f,
    filter2EG_velocityMod_releaseTime       = 0x0d10,

    // FILTER 2 EG TIME MOD (For EG Whole Time)
    filter2EG_altMod_source                 = 0x0d11,
    filter2EG_intByAltMod                   = 0x0d12,

    // FILTER 2 EG LEVEL (3 points) MOD BY VELOCITY
    filter2EG_velocityMod_startLevel        = 0x0d13,
    filter2EG_velocityMod_attackLevel       = 0x0d14,
    filter2EG_velocityMod_breakPointLevel   = 0x0d15,

    // INTENSITY OF MODULATION OF FILTER 2 EG TO FILTER 2A AND FILTER 2B CUTOFF FREQ BY ALT MOD
    filter2EG_cutoffFreq_altModSource       = 0x0a14,
    filter2EG_cutoffFreq_altModIntensity    = 0x0a15,

    // FILTER 2 LFO
    filter2LFO_waveform                     = 0x0e00,
    filter2LFO_startMode                    = 0x0e03,
    filter2LFO_keySync                      = 0x0e04,
    filter2LFO_offset                       = 0x0e02,
    filter2LFO_frequency                    = 0x0e01,
    filter2LFO_delay                        = 0x0e05,
    filter2LFO_fade                         = 0x0e06,

    // FILTER 2 LFO FREQUENCY MODULATION
    filter2LFO_altModSource                 = 0x0e07,
    filter2LFO_intByAltMod                  = 0x0e08,

    // INTENSITY OF MODULATION OF FILTER 2 LFO TO FILTER 2A/1B CUTOFF FREQUENCY
    filter2LFO_modIntByJoystick_negativeY   = 0x0a16,
    filter2LFO_modIntByAftertouch           = 0x0a17,
    filter2LFO_modIntAltModSource           = 0x0a1a,
    filter2LFO_modIntByAltMod               = 0x0a1b,



    //----------------------------------------------------------------
    // FILTER 2A PARAMETERS
    //----------------------------------------------------------------
    filter2A_cutoffFrequency                = 0x0902,
    filter2A_inputGain                      = 0x0903,
    filter2A_resonance                      = 0x0904,
    filter2A_resonanceLevelModByVelocity    = 0x0905,

    // FILTER 2A CUTOFF FREQUENCY MODULATION
    filter2A_cutoffMod_intByFilter1EG       = 0x0a12,
    filter2A_cutoffMod_EGIntModByVelocity   = 0x0a10,
    filter2A_cutoffMod_intByFilter1LFO      = 0x0a18,
    filter2A_cutoffMod_intByJoystick_X      = 0x0a04,
    filter2A_cutoffMod_intByAftertouch      = 0x0a05,

    // FILTER 2A CUTOFF MODULATION BY KEYBOARD TRACKING
    filter2A_cutoffMod_KeyTrack_lowKey      = 0x0a00,
    filter2A_cutoffMod_KeyTrack_highKey     = 0x0a01,
    filter2A_cutoffMod_KeyTrack_lowerRamp   = 0x0a02,
    filter2A_cutoffMod_KeyTrack_higherRamp  = 0x0a03,

    // FILTER 2A CUTOFF FREQUENCY MODULATION
    filter2A_cutoffMod_altModSource         = 0x0a06,
    filter2A_cutoffMod_intByAltMod          = 0x0a07,

    //----------------------------------------------------------------
    // FILTER 2B PARAMETERS
    //----------------------------------------------------------------
    filter2B_cutoffFrequency                = 0x0907,
    filter2B_inputGain                      = 0x0908,
    filter2B_resonance                      = 0x0909,
    filter2B_resonanceLevelModByVelocity    = 0x090a,

    // FILTER 2B CUTOFF FREQUENCY MODULATION
    filter2B_cutoffMod_intByFilter1EG       = 0x0a13,
    filter2B_cutoffMod_EGIntModByVelocity   = 0x0a11,
    filter2B_cutoffMod_intByFilter1LFO      = 0x0a19,
    filter2B_cutoffMod_intByJoystick_X      = 0x0a0c,
    filter2B_cutoffMod_intByAftertouch      = 0x0a0d,

    // FILTER 2B CUTOFF MODULATION BY KEYBOARD TRACKING
    filter2B_cutoffMod_KeyTrack_lowKey      = 0x0a08,
    filter2B_cutoffMod_KeyTrack_highKey     = 0x0a09,
    filter2B_cutoffMod_KeyTrack_lowerRamp   = 0x0a0a,
    filter2B_cutoffMod_KeyTrack_higherRamp  = 0x0a0b,

    // FILTER 2B CUTOFF FREQUENCY MODULATION
    filter2B_cutoffMod_altModSource         = 0x0a0e,
    filter2B_cutoffMod_intByAltMod          = 0x0a0f,

    // AMPLIFIER-2
    amplifier2_outputLevel                  = 0x1100,

    // AMPLIFIER-2 AMPLITUDE MOD BY KEYBOARD TRACKING
    amplifier2Mod_keyTrack_lowKey           = 0x1101,
    amplifier2Mod_keyTrack_highKey          = 0x1102,
    amplifier2Mod_keyTrack_lowerRamp        = 0x1103,
    amplifier2Mod_keyTrack_higherRamp       = 0x1104,

    // AMPLIFIER-2 AMPLITUDE MOD
    amplifier2Mod_intByVelocity             = 0x1105,
    amplifier2Mod_intByAM                   = 0x1106,
    amplifier2Mod_altModSource              = 0x1107,
    amplifier2Mod_intByAltMod               = 0x1108,

    // AMPLIFIER-2 EG (Up:Linear, Down:Exponential)
    amplifier2EG_startLevel                 = 0x1200,
    amplifier2EG_attackTime                 = 0x1201,
    amplifier2EG_attackLevel                = 0x1202,
    amplifier2EG_decayTime                  = 0x1203,
    amplifier2EG_breakPointLevel            = 0x1204,
    amplifier2EG_slopeTime                  = 0x1205,
    amplifier2EG_sustainLevel               = 0x1206,
    amplifier2EG_releaseTime                = 0x1207,

    // AMPLIFIER-2 EG TIME (4 points) MOD BY VELOCITY
    amplifier2EGTime_modByVel_attack        = 0x120c,
    amplifier2EGTime_modByVel_decay         = 0x120d,
    amplifier2EGTime_modByVel_slope         = 0x120e,
    amplifier2EGTime_modByVel_release       = 0x120f,

    // AMPLIFIER-2 EG TIME (4 points) MOD BY KEYBOARD TRACK (Linear, Center Key is C4)
    amplifier2EGTime_modByKeyTrack_attack   = 0x1208,
    amplifier2EGTime_modByKeyTrack_decay    = 0x1209,
    amplifier2EGTime_modByKeyTrack_slope    = 0x120a,
    amplifier2EGTime_modByKeyTrack_release  = 0x120b,

    // AMPLIFIER-2 EG TIME MOD BY ALT MOD SOURCE (For EG Whole Time)
    amplifier2EGMod_altModSource            = 0x1210,
    amplifier2EGMod_intByAltMod             = 0x1211,

    // AMPLIFIER-2 EG LEVEL (3 points) MOD BY VELOCITY
    amplifier2EGLevel_modByVel_start        = 0x1212,
    amplifier2EGLevel_modByVel_attack       = 0x1213,
    amplifier2EGLevel_modByVel_breakPoint   = 0x1214,

    // OSC-2 BLOCK PANPOT & PANPOT MOD
    osc2_pan                                = 0x110b,
    osc2_panMod_altModSource                = 0x110c,
    osc2_panMod_intByAltMod                 = 0x110d,

    // OSC-2 BLOCK SEND
    osc2_masterFX1SendLevel                 = 0x0f09,
    osc2_masterFX2SendLevel                 = 0x0f0a,


    //--------------------------------------------------------
    // INSERT EFFECT Param ID's start here
    //--------------------------------------------------------
    insertEFX_pan                           = 0x130e,
    insertEFX_width                         = 0x1312,
    insertEFX_masterFX1SendLevel            = 0x1316,
    insertEFX_masterFX2SendLevel            = 0x131a,

    // EFFECT SIZE - use values given by InsertEFX_size enum
    insertEFX1_size                         = 0x1300,
    insertEFX2_size                         = 0x1301,
    insertEFX3_size                         = 0x1302,

    // EFFECT TYPE - use values given by InsertEFX_sizeN_type enums
    insertEFX1_type                         = 0x1308,
    insertEFX2_type                         = 0x1309,
    insertEFX3_type                         = 0x130a,

    // EFFECT ENABLE - (0 = bypass; 1 = enable)
    insertEFX1_enable                       = 0x1304,
    insertEFX2_enable                       = 0x1305,
    insertEFX3_enable                       = 0x1306,

    // EFFECT PARAMETERS - base indicates ID of the first parameter of each effect
    insertEFX1_paramID_base                 = 0x1400,
    insertEFX2_paramID_base                 = 0x1500,
    insertEFX3_paramID_base                 = 0x1600,


    //--------------------------------------------------------
    // MASTER EFFECT Param ID's start here
    //--------------------------------------------------------
    // EFFECT ENABLE - (0 = bypass; 1 = enable)
    masterEFX_connectInSeries               = 0x1800,

    masterEFX1_enable                       = 0x1801,
    masterEFX1_type                         = 0x1803,
    masterEFX1_pan                          = 0x1805,
    masterEFX1_returnLevel                  = 0x1807,
    masterEFX1_outputLevel                  = 0x190b,
    masterEFX1_outputLevelModSource         = 0x190c,
    masterEFX1_outputLevelModAmount         = 0x190d,

    masterEFX2_enable                       = 0x1802,
    masterEFX2_type                         = 0x1804,
    masterEFX2_pan                          = 0x1806,
    masterEFX2_returnLevel                  = 0x1808,
    masterEFX2_outputLevel                  = 0x1a14,
    masterEFX2_outputLevelModSource         = 0x1a15,
    masterEFX2_outputLevelModAmount         = 0x1a16,

    masterEFX_outputEQ_LFGain               = 0x1809,
    masterEFX_outputEQ_HFGain               = 0x180a
};

/// Values for use with the scaleType parameter
enum ScaleType
{
    equalTemperament    = 0,
    pureMajor           = 1,
    pureMinor           = 2,
    arabic              = 3,
    pythagoras          = 4,
    werckmeister        = 5,
    kirnberger          = 6,
    slendro             = 7,
    pelog               = 8,
    oneOctaveUserScale  = 9,
    stretch             = 10,
    allRangeUserScale   = 11
};

/// Values used to identify alternate modulation sources
enum AltModSources
{
    off                     = 0,
    oscEG                   = 1,
    filterEG                = 2,    // Filter EG in the same OSC
    ampEG                   = 3,    // Amplifier EG in the same OSC
    oscLFO                  = 4,    // Oscillator LFO in the same OSC
    filterLFO               = 5,    // Filter LFO in the same OSC
    velocity                = 6,    // Velocity of note on
    noteNumber              = 7,    // Note number of note on
    polyAftertouch          = 8,
    aftertouch              = 9,
    joystick_X              = 10,   // Joystick X-axis (pitch bend)
    joystick_Y_positive     = 11,   // Joystick Y-axis positive values (MIDI CC#01)
    joystick_Y_negative     = 12,   // Joystick Y-axix negative values (MIDI CC#02)
    ribbonController_X      = 13,   // Ribbon controller X-axis position (MIDI CC#16)
    ribbonController_Z      = 14,   // Ribbon controller Z-axis (pressure) (MIDI CC#17)
    assignablePedal         = 15,   // (MIDI CC#04)
    valueSlider             = 16,   // (MIDI CC#18)
    midi_CC_19              = 17,
    panel_SW1               = 18,   // (MIDI CC#80)
    panel_SW2               = 19,   // (MIDI CC#81)
    assignablePedalSwitch   = 20,   // (MIDI CC#82)
    midi_CC_83              = 21,
    tempo                   = 22,   // count of clock
    filter1EG               = 23,   // only available for OSC2
    amp1EG                  = 24,   // only available for OSC2
    osc1LFO                 = 25,   // only available for OSC2
    filter1LFO              = 26    // only available for OSC2
};

/// Values used to identify LFO wave shapes
enum LFOWaveShape
{
    triangle                = 0,
    triangle_90deg          = 1,
    triangle_180deg         = 2,
    triangle_270deg         = 3,
    sawUp                   = 4,
    sawUp_180deg            = 5,
    sawDown                 = 6,
    sawDown_180deg          = 7,
    rectangle               = 8,
    rectangle_180deg        = 9,
    sine                    = 10,
    sine_180deg             = 11,
    guitarVibrato           = 12,
    random1                 = 13,   // Time fixed; level is random
    random2                 = 14,   // Time random; level is fixed
    random3                 = 15,   // Time and level both random
    random4                 = 16,   // Time is fixed; level is random with ramp
    random5                 = 17,   // Time is random; level is fixed with ramp
    random6                 = 18    // Time and level both random with ramp
};

/// Values for use with InsertEFXn_Size parameters
enum InsertEFX_size
{
    EFX_none,       // No insert effect
    EFX_size1,      // Size 1 effect
    EFX_size2,      // Size 2 effect
    EFX_size4       // Size 4 effect
};

namespace Size1EFX
{
    /// Size 1 effect type values for use with InsertEFXn_Type parameters
    enum
    {
        ampSimulation       = 0,
        compressor          = 1,
        limiter             = 2,
        gate                = 3,
        OD_HiGain           = 4,
        parametricEQ        = 5,
        graphic7BandEQ      = 6,
        wah_AutoWah         = 7,
        randomFilter        = 8,
        dynaExciter         = 9,
        subOscillator       = 10,
        decimator           = 11,
        chorus              = 12,
        harmonicChorus      = 13,
        ensemble            = 14,
        flanger             = 15,
        tempoFlanger        = 16,
        envelopeFlanger     = 17,
        phaser              = 18,
        tempoPhaser         = 19,
        envelopePhaser      = 20,
        vibrato             = 21,
        resonator           = 22,
        ringModulator       = 23,
        tremolo             = 24,
        rotarySpeaker       = 25,
        delay               = 26,
        multitapDelay       = 27,
        earlyReflections    = 28
    };

}   // END namespace Size1EFX


namespace Size2EFX
{
    /// Size 2 effect type values for use with InsertEFXn_Type parameters
    enum
    {
        stereoAmpSimulation     = 0,
        stereoCompressor        = 1,
        stereoLimiter           = 2,
        multibandLimiter        = 3,
        stereoGate              = 4,
        OD_HiGain_Wah           = 5,
        stereoParametricEQ      = 6,
        stereoGraphic7BandEQ    = 7,
        graphic13BandEQ         = 8,
        stereoRandomFilter      = 9,
        stereoEnhancer          = 10,
        talkingModulator        = 11,
        stereoDecimator         = 12,
        stereoChorus            = 13,
        stereoHarmonicChorus    = 14,
        multitapChorusDelay     = 15,
        ensemble                = 16,
        stereoFlanger           = 17,
        stereoRandomFlanger     = 18,
        stereoTempoFlanger      = 19,
        stereoPhaser            = 20,
        stereoRandomPhaser      = 21,
        stereoTempoPhaser       = 22,
        stereoBiPhaseMod        = 23,
        stereoVibrato           = 24,
        twoVoiceResonator       = 25,
        doppler                 = 26,
        stereoTremolo           = 27,
        stereoAutoPan           = 28,
        stereoEnvelopePan       = 29,
        stereoDynaPan           = 30,
        phaser_Tremolo          = 31,
        shimmer                 = 32,
        detune                  = 33,
        pitchShifter            = 34,
        pitchShiftMod           = 35,
        rotarySpeaker           = 36,
        dualDelay               = 37,
        stereoDelay             = 38,
        stereoMultitapDelay     = 39,
        LCR_Delay               = 40,
        tempoDelay              = 41,
        stereoModulationDelay   = 42,
        stereoDynamicDelay      = 43,
        randomPanningDelay      = 44,
        earlyReflections        = 45,
        hall                    = 46,
        smoothHall              = 47,
        room                    = 48,
        brightRoom              = 49,
        wetPlate                = 50,
        dryPlate                = 51
    };
}   // END namespace Size2EFX

namespace Size4EFX
{
    /// Size 4 effect type values for use with InsertEFXn_Type parameters
    enum
    {
        pianoBodyDamper         = 0,
        stereoMultibandLimiter  = 1,
        OD_HyperGain_Wah        = 2,
        stereoGraphic13BandEQ   = 3,
        vocoder                 = 4,
        stereoHarmonicChorus    = 5,
        multitapChorusDelay     = 6,
        stereoEnsemble          = 7,
        stereoTempoFlanger      = 8,
        stereoTempoPhaser       = 9,
        stereoPitchShifter      = 10,
        twoBandPitchShifter     = 11,
        rotarySpeakerOD         = 12,
        earlyReflections        = 13,
        LCR_LongDelay           = 14,
        stereoLongDelay         = 15,
        dualLongDelay           = 16,
        stereoTempoDelay        = 17,
        holdDelay               = 18
    };
}   // END namespace Size4EFX

// Effect type values for use with masterEFX1_type parameter
enum MasterEFX1_type
{
    flanger                 = 0,
    phaser                  = 1,
    multitapChorusDelay     = 2,
    ensemble                = 3,
    chorus                  = 4,
    LCR_Delay               = 5
};

// Effect type values for use with masterEFX2_type parameter
enum MasterEFX2_type
{
    LCR_longDelay           = 0,
    delayReverb             = 1,
    room                    = 2,
    brightRoom              = 3,
    hall                    = 4,
    smoothHall              = 5,
    wetPlate                = 6,
    dryPlate                = 7
};


}   // END namespace KorgTrinity

#endif /* TOLUENE_TRINITYMODEL_PARAMETERIDS_H_ */
