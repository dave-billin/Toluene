////////////////////////////////////////////////////////////////////////////////////////////////////
/// @file
///
/// @author Dave Billin
///
/// Copyright 2019 XS Noise Productions, Inc.
////////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef TOLUENE_KORGTRINITYMODEL_PROGRAMMODEL_H_
#define TOLUENE_KORGTRINITYMODEL_PROGRAMMODEL_H_

#include <string>
#include <cstdint>

namespace KorgTrinity {

////////////////////////////////////////////////////////////////////////////////////////////////////
/// @brief Top-level class modeling the contents of a KORG Trinity Program
////////////////////////////////////////////////////////////////////////////////////////////////////
class ProgramModel
{
public:

	/// Creates an instance of the model with entirely default values
	ProgramModel();

	/// Called when the object goes out of scope
	~ProgramModel();

	static uint8_t const s_NumProgramNameChars;	///< Number of characters in a program name


	/// Returns the program name
	std::string const& programName() const { return m_programName; }

	/// Sets the program name
	/// @param name	Name to assign (ASCII characters 0x20-0x7f only)
	void programName( std::string const& name );


	/// Return the first category associated with the program
	std::string const& categoryA() const { return m_categoryA; }

	/// Sets the first category associated with the program
	/// @param name  Category name to assign (ASCII characters 0x20-0x7f only)
	void categoryA( std::string name );


	/// Return the first category associated with the program
	std::string const& categoryB() const { return m_categoryB; }

	/// Sets the first category associated with the program
	/// @param name  Category name to assign (ASCII characters 0x20-0x7f only)
	void categoryB( std::string name );

private:
	std::string m_programName;	///< Name of the program
	std::string m_categoryA;	///< Primary category
	std::string m_categoryB;	///< Secondary category

};

} /* namespace KorgTrinity */

#endif /* TOLUENE_KORGTRINITYMODEL_KORGTRINITYMODEL_H_ */
