// Mark Dowling
// Lab 9
//C00216994
//15/11/17
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

/**< function to calcuate volume and Surface area */
void sphereCalculator(double rad, double *vol, double *Sa)
{
    *vol = 4.0 / 3.0 * M_PI * rad * (rad * rad);
    *Sa = 4 * M_PI *(rad * rad);
    return;
}

int main(void)
{
   double radius,volume,Sarea;
   /**< Pointers for Volume and Surface Area */
   double *ptr_volume, *ptr_Sarea;

   cout << "To calculate the surface area of a sphere" << endl << endl;

    /**< initialize pointer so that it points to volume */
    ptr_volume = &volume;
    /**< initialize pointer so that it points to s */
	ptr_Sarea = &Sarea;


    do
    {
        //Read in the values
        cout << "Enter a radius value greater than 0: ";
        cin >> radius;
    }
    while (radius <= 0);

    sphereCalculator(radius ,ptr_volume,ptr_Sarea);

    cout << fixed;
    cout.precision(2);
    cout<<"\nVolume = " << volume << " m^3" << endl;
    cout<<"Surface area = " << Sarea << " m^2" << endl;

    return 0;
}

