//----------------------------------------------------------------------------
// File -------- functions.h
// Programmer -- Sabera Daqiq

// 
// This file contains declarations for the class moonlander
// functions. See the accompanying implementation file for details.
//----------------------------------------------------------------------------
#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;
//
//
#ifndef FUNCTIONS_H
#define FUNCTIONS_H

class Moonlander
{
	public:
	Moonlander();
	double feulFlow( double value);
	void amt_time(double t);
	double getfeul_flow() const;
	double getvertical_speed () const;
	double getaltitude () const;
	double getamt_feul () const;
	double getmass () const;
	double getmax_feul () const;
	double getmax_thrust () const;
	void display();

	private: 
	double feul_flow;
	double vertical_speed;
	double altitude;
	double amt_feul;
	double mass;
	double max_feul;
	double max_thrust;
	
	};

#endif


