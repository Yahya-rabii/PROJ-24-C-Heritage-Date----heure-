#include "Heure.h"
#include <iostream>

using namespace std;

Heure::Heure(int hr, int min, int sec)
{

	if ((hr <= 23 && hr > 0 ) && (min <= 60 && min > 0) && (sec <= 60 && sec > 0) ) {

		this->heure = hr;
		this->minute = min;
		this->second = sec;

	}

	else 
	{

		this->heure  = 0;
		this->minute = 0;
		this->second = 0;


	}

	

}

void Heure::affich() const
{

	cout << this->heure << ":" << this->minute << ":" << this->second << endl;

}

bool Heure::operator>(const Heure& h) const
{
	
	if (this->heure > h.heure) {

		return true;
	
	}
	
	else if(this->heure == h.heure)
	{
		


		if (this->minute > h.minute )
		{

			return true;

		}

        
		else if (this->minute == h.minute)
		{


			if (this->second > h.second)
			{

				return true;


			}

			else
			{

				return false;

			}


		}


	}

}

Heure::~Heure()
{

	

}