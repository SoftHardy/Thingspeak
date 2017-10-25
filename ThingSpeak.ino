#include <ESP8266WiFi.h>

#include <ThingSpeak.h>

#include <ESP8266HTTPClient.h>

int  chandelier;
int  roof_1;
int  roof_2;
int  roof_3;
int  roof_4;
WiFiClient client;

String  httpurl;
HTTPClient http;

void setup()
{
  chandelier = 0;
  roof_1 = 0;
  roof_2 = 0;
  roof_3 = 0;
  roof_4 = 0;
  Serial.begin(9600);

  ThingSpeak.begin(client);

    WiFi.disconnect();
  delay(2000);
  Serial.println("Start Thing Speak");
   WiFi.begin("Pytron","Pytron123");
  while ((!(WiFi.status() == WL_CONNECTED))){
    delay(1000);
    Serial.println(">>");

  }
  Serial.println("Connected");
  Serial.println((WiFi.localIP()));

}


void loop()
{

    chandelier = (ThingSpeak.readIntField(285289,1,"DTBT9OZ741IVWQ8A"));
    roof_1 = (ThingSpeak.readIntField(285289,2,"DTBT9OZ741IVWQ8A"));
    roof_2 = (ThingSpeak.readIntField(285289,3,"DTBT9OZ741IVWQ8A"));
    roof_3 = (ThingSpeak.readIntField(285289,4,"DTBT9OZ741IVWQ8A"));
    roof_4 = (ThingSpeak.readIntField(285289,5,"DTBT9OZ741IVWQ8A"));
    /*if (chandelier == 1) {
      Serial.println("Chandelier ON");
      httpurl = "http://";
      httpurl+="192.168.1.106";
      httpurl+="/";
      httpurl+="CHANDELIER_ON";
      http.begin(httpurl);
      http.GET();
      http.end();
      httpurl = "http://";
      httpurl+="192.168.1.105";
      httpurl+="/";
      httpurl+="CHANDELIER_ON";
      http.begin(httpurl);
      http.GET();
      http.end();
      httpurl = "http://";
      httpurl+="192.168.1.104";
      httpurl+="/";
      httpurl+="CHANDELIER_ON";
      http.begin(httpurl);
      http.GET();
      http.end();

    } else if (chandelier == 0) {
      Serial.println("Chandelier OFF");
      httpurl = "http://";
      httpurl+="192.168.1.104";
      httpurl+="/";
      httpurl+="CHANDELIER_OFF";
      http.begin(httpurl);
      http.GET();
      http.end();
      httpurl = "http://";
      httpurl+="192.168.1.105";
      httpurl+="/";
      httpurl+="CHANDELIER_OFF";
      http.begin(httpurl);
      http.GET();
      http.end();
      httpurl = "http://";
      httpurl+="192.168.1.106";
      httpurl+="/";
      httpurl+="CHANDELIER_OFF";
      http.begin(httpurl);
      http.GET();
      http.end();
    }*/
    if (roof_1 == 1) {
      Serial.println("Roof1_ON");
      httpurl = "http://";
      httpurl+="192.168.1.109";
      httpurl+="/";
      httpurl+="109_16_ON";
      http.begin(httpurl);
      http.GET();
      http.end();

    } else if (roof_1 == 0) {
      Serial.println("Roof1_OFF");
      httpurl = "http://";
      httpurl+="192.168.1.109";
      httpurl+="/";
      httpurl+="109_16_OFF";
      http.begin(httpurl);
      http.GET();
      http.end();
    }
    if (roof_2 == 1) {
      Serial.println("Roof2_ON");
      httpurl = "http://";
      httpurl+="192.168.1.109";
      httpurl+="/";
      httpurl+="109_5_ON";
      http.begin(httpurl);
      http.GET();
      http.end();

    } else if (roof_2 == 0) {
      Serial.println("Roof2_OFF");
      httpurl = "http://";
      httpurl+="192.168.1.109";
      httpurl+="/";
      httpurl+="109_5_OFF";
      http.begin(httpurl);
      http.GET();
      http.end();
    }
    if (roof_3 == 1) {
      Serial.println("Roof3_ON");
      httpurl = "http://";
      httpurl+="192.168.1.109";
      httpurl+="/";
      httpurl+="109_4_ON";
      http.begin(httpurl);
      http.GET();
      http.end();

    } else if (roof_3 == 0) {
      Serial.println("Roof3_OFF");
      httpurl = "http://";
      httpurl+="192.168.1.109";
      httpurl+="/";
      httpurl+="109_4_OFF";
      http.begin(httpurl);
      http.GET();
      http.end();
    }
    if (roof_4 == 1) {
      Serial.println("Roof4_ON");
      httpurl = "http://";
      httpurl+="192.168.1.108";
      httpurl+="/";
      httpurl+="108_16_ON";
      http.begin(httpurl);
      http.GET();
      http.end();

    } else if (roof_4 == 0) {
      Serial.println("Roof4_OFF");
      httpurl = "http://";
      httpurl+="192.168.1.108";
      httpurl+="/";
      httpurl+="108_16_OFF";
      http.begin(httpurl);
      http.GET();
      http.end();
    }

}
