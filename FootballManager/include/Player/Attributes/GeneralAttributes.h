#pragma once

class GeneralAttributes
{
	int passing;
	int crossing;
	int freekickAccuracy;
	int penaltyAccuracy;
public:
	GeneralAttributes(int passing, int crossing, int freekickAccuracy, int penaltyAccuracy);
	int getGeneralAttributesRating();
};