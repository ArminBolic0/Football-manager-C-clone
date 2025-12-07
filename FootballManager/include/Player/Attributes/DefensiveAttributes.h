#pragma once

class DefensiveAttributes
{
	int tackling;
	int interception;
	int marking;
public:
	DefensiveAttributes(int tackling, int interception, int marking);
	int getDefensiveAttributesRating();
};