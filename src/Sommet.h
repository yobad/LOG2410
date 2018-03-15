///////////////////////////////////////////////////////////
//  Sommet.h
//  Implementation of the Class Sommet
//  Created on:      12-mars-2018 21:52:37
//  Original author: p482457
///////////////////////////////////////////////////////////

#if !defined(EA_EC549877_0E18_4d65_9501_C16390E0E256__INCLUDED_)
#define EA_EC549877_0E18_4d65_9501_C16390E0E256__INCLUDED_

#include <iostream>

class Sommet
{

public:
	Sommet(float x = 0.0, float y = 0.0, float z = 0.0);

	const float* coords(void) const { return m_coord; }
	const float& x(void) const { return m_coord[0]; }
	const float& y(void) const { return m_coord[1]; }
	const float& z(void) const { return m_coord[2]; }
	float* coords(void) { return m_coord; }
	float& x(void) { return m_coord[0]; }
	float& y(void) { return m_coord[1]; }
	float& z(void) { return m_coord[2]; }

private:
	float m_coord[3];
};

std::ostream& operator<<(std::ostream& o, const Sommet& s);

#endif // !defined(EA_EC549877_0E18_4d65_9501_C16390E0E256__INCLUDED_)
