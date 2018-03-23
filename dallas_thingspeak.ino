#include <OneWire.h>
#include <ESP8266WiFi.h>

//pt100 config
#define ONE_WIRE_BUS 4     

OneWire oneWire(ONE_WIRE_BUS);

DallasTemperature sensors(&oneWire);

DeviceAddress tempDeviceAddress;

// Wi-Fi Settings
const char* ssid = "Free S-Wifi"; // your wireless network name (SSID)
const char* password = "highhigh"; // your Wi-Fi network password

WiFiClient client;

// ThingSpeak Settings
const int channelID = 455979; //
String writeAPIKey = "T70YGYZ71FUWEDQL"; // write API key for your ThingSpeak Channel
const char* server = "api.thingspeak.com";
const int postingInterval = 2 * 1000; // post data every 2 seconds

void setup() {
        Serial.begin(115200);
        sensor.begin();
        Serial.print("Connecting");
        WiFi.begin(ssid, password);
        while (WiFi.status() != WL_CONNECTED) {
                Serial.print(".");
                delay(100);
        }
        Serial.println("\r\nWiFi connected");
}

void loop() {
        // wait and then post again
        delay(postingInterval);

        sensors.requestTemperatures(); // Send the command to get temperatures
        float temp = sensors.getTempCByIndex(0);
        // float humi = dht.readHumidity();
        if (isnan(temp))  {
                Serial.println("Failed to read from sensor!");
                return;
        }
        if (client.connect(server, 80)) {
                // Construct API request body
                String body = "field1=" + String(temp, 1);

                client.print("POST /update HTTP/1.1\n");
                client.print("Host: api.thingspeak.com\n");
                client.print("Connection: close\n");
                client.print("X-THINGSPEAKAPIKEY: " + writeAPIKey + "\n");
                client.print("Content-Type: application/x-www-form-urlencoded\n");
                client.print("Content-Length: ");
                client.print(body.length());
                client.print("\n\n");
                client.print(body);
                client.print("\n\n");
                Serial.printf("Nhiet do %s ", String(temp, 1).c_str());
        }
        client.stop();
}
