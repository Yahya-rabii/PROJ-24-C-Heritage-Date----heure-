#pragma once

class Heure
{


protected:
	int heure;
	int minute;
	int second;

public:

	Heure(int hr=0 , int min=0 , int sec=0 );

	virtual void affich()const;

	bool operator > (const Heure& h)const;

	~Heure();
};