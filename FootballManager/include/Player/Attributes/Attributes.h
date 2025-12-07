#pragma once

#include "DefensiveAttributes.h"
#include "OffensiveAttributes.h"
#include "GeneralAttributes.h"
#include "PhysicalAttributes.h"

class Attributes
{
	GeneralAttributes generalAttributes;
	PhysicalAttributes physicalAttributes;
	OffensiveAttributes offensiveAttributes;
	DefensiveAttributes defensiveAttributes;
	int attackRating;
	int defenseRating;
	int overallRating;
public:
	Attributes()
};