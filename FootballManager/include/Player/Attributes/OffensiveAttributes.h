#pragma once

class OffensiveAttributes
{
	int dribbling;
	int ballControl;
	int shootPower;
	int shootAccuracy;
	int finishing;
	int heading;
public:
	OffensiveAttributes(int dribbling, int ballControl, int shootPower, int finishing, int heading);
	int getOffensiveAttributesRating();
};