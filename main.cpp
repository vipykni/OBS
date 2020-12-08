#include <QCoreApplication>
#include "weatherdata.h"
#include "currentconditionsdisplay.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    WeatherData *weatherData = new WeatherData();

        CurrentConditionsDisplay *current = new CurrentConditionsDisplay(weatherData);
        weatherData->setMeasureementsChanged(80, 65, 30.4);
        cout << "" << endl;
        weatherData->setMeasureementsChanged(8, 90, 174);

    return a.exec();
}
