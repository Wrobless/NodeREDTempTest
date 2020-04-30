#include <Arduino.h>
#include <DHT.h>
#include <Adafruit_Sensor.h>
#include <WiFi.h>
#include <PubSubClient.h>

#define INPUTPIN 27
#define DHTTYPE DHT11
#define LED 4

const char *ssid = "CellSpot_2.4GHz_DF28";
const char *password = "Wrobeltoziomal";

DHT dht(INPUTPIN, DHTTYPE);

String readTemperature()
{
    float temperature = 0.0;
    temperature = dht.readTemperature();

    if (isnan(temperature))
    {
        Serial.println("Failed to read from sensor!");
        return "--";
    }
    else
    {
        Serial.print("Temperature: ");
        Serial.println(temperature);
    }
    return String(temperature);
}

String readHumidity()
{
    float humidity = 0.0;
    humidity = dht.readHumidity();

    if (isnan(humidity))
    {
        Serial.println("Failed to read from sensor!");
        return "--";
    }
    else
    {
        Serial.print("Humidity: ");
        Serial.println(humidity);
    }
    return String(humidity);
}

void setup()
{

}

void loop()
{

}
