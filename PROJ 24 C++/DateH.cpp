#include "DateH.h"
#include <iostream>
#include "Heure.h"

using namespace std;


DateH::DateH(int jour, int moi, int annee , int heure ,int minute , int seconde) : Heure(heure, minute, seconde)
{

	if (annee >= 1900) {


		this->annee = annee;

	}


	if ( moi > 0 && moi <= 12 )
	{

		this->moi = moi;


	}

	if (jour <= this->maxdays()  ) {
	
		this->jour = jour;

	}


}

void DateH::affich() const
{

	this->Heure::affich();

	cout << this->jour << " / ";

	cout << this->moi << " / ";

	cout << this->annee << endl;


}

int DateH::maxdays()
{
	int max;

	if (this->moi == 2 && !this->bissexitile() ) {

		max = 28;
		return max;

	}
	else if (this->moi == 2 && this->bissexitile())
	{

		max = 29;
		return max;

	}


	else
	{



	if ( (this->moi > 7 && this->moi % 2 == 1) || (this->moi < 7 && this->moi % 2 == 0) ) {

		max = 30;
		return max;

	}
	else
	{
		max = 31;
		return max;
	
	}


	}

}

bool DateH::bissexitile()
{
	if (this->annee % 4 == 0)
	{
		if (this->annee % 100 == 0)
		{
			if (this->annee % 400 == 0)


				return true;

			else
				return false;
		}
		else
			return true;
	}
	else
		return false;

}

bool DateH::operator>(DateH& dt)
{



	int res1;
	int res2;

	if (this->bissexitile()) {


		res1 = this->annee * 366 + this->moi * this->maxdays() + this->jour;

		
	}

	else
	{


		res1 = this->annee * 365 + this->moi * this->maxdays() + this->jour;


	}

	///////////////////////////////////////////////////////////////////////////////

	if (dt.bissexitile()) {


		res2 = dt.annee * 366 + dt.moi * dt.maxdays() + dt.jour;


	}

	else
	{


		res2 = dt.annee * 365 + dt.moi * dt.maxdays() + dt.jour;


	}

/////////////////////////////////////////////////////////////////////////


	if ( res1 > res2 ) {

		return true;

	}

	else if (res1 == res2) {


		return this->Heure::operator>(dt);

	}
	
}
