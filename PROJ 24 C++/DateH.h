#pragma once
#include "Heure.h"

class DateH :public Heure
{


private:

	int jour;
	int moi;
	int annee;

public:

	DateH(int jour , int moi , int annee , int heure, int minute, int seconde);
	void affich() const override;
	int maxdays();
	bool bissexitile();
	bool operator > (DateH & dt);
	

};
