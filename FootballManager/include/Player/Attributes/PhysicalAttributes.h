#pragma once

class PhysicalAttributes
{
	int speed;
	int strenght;
	int stamina;
public:
	PhysicalAttributes(int speed, int strenght, int stamina);
	int getPhysicalAttributesRating();
};