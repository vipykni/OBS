#include "currentconditionsdisplay.h"

CurrentConditionsDisplay::CurrentConditionsDisplay(Subject *weatherData)
{
    this->weatherData = weatherData;
    weatherData->registerObserver(this);
}

void CurrentConditionsDisplay::update (float t, float h, float p){
    this ->temperature = t;
    this ->humidity = h;
    this ->pressure = p;

}
void CurrentConditionsDisplay::display (){
cout << "Current conditions:" << endl << "\t"
     << temperature << "°C" << endl
     << "%" << humidity << endl
     <<  pressure << "mm Hg"  <<endl;

}
