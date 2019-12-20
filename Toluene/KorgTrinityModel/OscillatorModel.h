////////////////////////////////////////////////////////////////////////////////////////////////////
/// @file
///
/// @author Dave Billin
///
/// Copyright 2019 XS Noise Productions, Inc.
////////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef TOLUENE_KORGTRINITYMODEL_OSCILLATORMODEL_H_
#define TOLUENE_KORGTRINITYMODEL_OSCILLATORMODEL_H_

namespace KorgTrinity {

////////////////////////////////////////////////////////////////////////////////////////////////////
/// A class encapsulating the model of a KORG Trinity oscillator
////////////////////////////////////////////////////////////////////////////////////////////////////
class OscillatorModel {
public:
	/// Creates an instance of the object with default values
	OscillatorModel();

	/// Called when the object goes out of scope
	virtual ~OscillatorModel();


	///////////////////////////////////////////////////////////////////////////////////////////////
	/// Valid oscillator modes
	enum OscillatorMode : class uint8_t
	{
		Single = 0,
		Double = 1,
		Drum   = 3
	};

	/// Returns the configured oscillator mode
	OscillatorMode oscMode() const { return m_mode; }

	/// Sets the oscillator mode
	/// @param mode  Mode to assign
	void oscMode( OscillatorMode mode );


	///////////////////////////////////////////////////////////////////////////////////////////////
	/// Returns the legato switch enablement
	bool legatoSwitch() const { return m_legatoSwitch; }

	/// Sets the enablement of the legato switch
	/// @param enable  true to Enable legato; else false to disable legato
	void legatoSwitch(bool enable);



	///////////////////////////////////////////////////////////////////////////////////////////////
	/// Key assign modes
	enum KeyAssignMode : class uint8_t
	{
		Poly = 0,
		Mono = 1
	};

	///////////////////////////////////////////////////////////////////////////////////////////////
	/// Returns the active key assign mode
	KeyAssignMode keyAssign() const { return m_keyAssign; }

	///////////////////////////////////////////////////////////////////////////////////////////////
	/// Sets the key assign mode
	/// @param mode  The Key Assign mode to assign
	void keyAssign( KeyAssignMode mode );


	///////////////////////////////////////////////////////////////////////////////////////////////
	/// Returns the active hold setting
	bool hold() const { return m_hold; }

	///////////////////////////////////////////////////////////////////////////////////////////////
	/// Sets the hold setting
	/// @param value True for hold ON; false for hold OFF
	void hold( bool mode );


	///////////////////////////////////////////////////////////////////////////////////////////////
	/// Key priority modes
	enum KeyPriorityMode : class uint8_t
	{
		LowPriority  = 0,
		HighPriority = 1,
		LastPriority = 2
	};

	///////////////////////////////////////////////////////////////////////////////////////////////
	/// Returns the active key priority
	KeyPriorityMode keyPriority() const { return m_priority; }

	///////////////////////////////////////////////////////////////////////////////////////////////
	/// Sets the key priority
	/// @param value The key priority to assign
	void keyPriority( KeyPriorityMode mode );


	///////////////////////////////////////////////////////////////////////////////////////////////
	/// Poly assign modes
	enum PolyAssignMode : class uint8_t
	{
		NormalPolyAssign = 0,
		PianoPolyAssign  = 1
	};

	///////////////////////////////////////////////////////////////////////////////////////////////
	/// Returns the active key priority
	PolyAssignMode polyAssign() const { return m_polyAssign; }

	///////////////////////////////////////////////////////////////////////////////////////////////
	/// Sets the key priority
	/// @param value The key priority to assign
	void polyAssign( PolyAssignMode mode );


private:
	OscillatorMode m_mode;		///< The oscillator mode
	bool m_legatoSwitch;		///< true = ON; false = OFF
	KeyAssignMode m_keyAssign; 	///< Key assign enablement
	bool m_hold;				///< Value of key hold parameter
	KeyPriorityMode m_priority;	///< The active key priority mode
	PolyAssignMode m_polyAssign; ///< The active poly assign mode

};

} // END namespace KorgTrinity

#endif /* TOLUENE_KORGTRINITYMODEL_OSCILLATORMODEL_H_ */
