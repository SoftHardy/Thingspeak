#include <ESP8266WiFi.h>
#include <ESP8266HTTPClient.h>
#include <ThingSpeak.h>

int  Light_1=0,Light_2=0,Light_3=0,Light_4=0,Hanging_Light=0,Chandelier=0,Both_Curtain=0,AC=0;
int  Mood_1=0,Mood_2=0,Mood_3=0,Mood_4=0,Mood_5=0;


int getStatus;
WiFiServer server(80);

WiFiClient client;
String  httpurl;
HTTPClient http;
void setup()
{
  Serial.begin(9600);

  ThingSpeak.begin(client);

    WiFi.disconnect();
  delay(1000);
  Serial.println("Start Server");
   WiFi.begin("Pytron","pytron123");
  while ((!(WiFi.status() == WL_CONNECTED))){
    delay(1000);
    Serial.println(">>");

  }
  Serial.println("Connected");
  Serial.println((WiFi.localIP()));
  server.begin();

}


void loop()
{
    getStatus=ThingSpeak.readIntField(285289,1,"DTBT9OZ741IVWQ8A");
    if (Light_1 != getStatus) {
      Light_1=getStatus;
      Serial.println("Light 1 Status");
      Serial.println(getStatus);
      switch(getStatus){
        case 1:
        httpurl = "http://";
        httpurl+="192.168.1.107";
        httpurl+="/";
        httpurl+="711";
        http.begin(httpurl);
        http.GET();
        http.end();
        break;

        case 0:
        httpurl = "http://";
        httpurl+="192.168.1.107";
        httpurl+="/";
        httpurl+="710";
        http.begin(httpurl);
        http.GET();
        http.end();
        break;
      }
    }

    getStatus=ThingSpeak.readIntField(285289,2,"DTBT9OZ741IVWQ8A");
    if (Light_2 != getStatus) {
      Light_2=getStatus;
      Serial.println("Light 2 Status");
      Serial.println(getStatus);
      switch(getStatus){
        case 1:
        httpurl = "http://";
        httpurl+="192.168.1.107";
        httpurl+="/";
        httpurl+="721";
        http.begin(httpurl);
        http.GET();
        http.end();
        break;

        case 0:
        httpurl = "http://";
        httpurl+="192.168.1.107";
        httpurl+="/";
        httpurl+="720";
        http.begin(httpurl);
        http.GET();
        http.end();
        break;
      }
    }

    getStatus=ThingSpeak.readIntField(285289,3,"DTBT9OZ741IVWQ8A");
    if (Light_3 != getStatus) {
      Light_3=getStatus;
      Serial.println("Light 3 Status");
      Serial.println(getStatus);
      switch(getStatus){
        case 1:
        httpurl = "http://";
        httpurl+="192.168.1.107";
        httpurl+="/";
        httpurl+="731";
        http.begin(httpurl);
        http.GET();
        http.end();
        break;

        case 0:
        httpurl = "http://";
        httpurl+="192.168.1.107";
        httpurl+="/";
        httpurl+="730";
        http.begin(httpurl);
        http.GET();
        http.end();
        break;
      }
    }

    getStatus=ThingSpeak.readIntField(285289,4,"DTBT9OZ741IVWQ8A");
    if (Light_4 != getStatus) {
      Light_4=getStatus;
      Serial.println("Light 4 Status");
      Serial.println(getStatus);
      switch(getStatus){
        case 1:
        httpurl = "http://";
        httpurl+="192.168.1.107";
        httpurl+="/";
        httpurl+="741";
        http.begin(httpurl);
        http.GET();
        http.end();
        break;

        case 0:
        httpurl = "http://";
        httpurl+="192.168.1.107";
        httpurl+="/";
        httpurl+="740";
        http.begin(httpurl);
        http.GET();
        http.end();
        break;
      }
    }

    getStatus=ThingSpeak.readIntField(285289,5,"DTBT9OZ741IVWQ8A");
    if (Hanging_Light != getStatus) {
      Hanging_Light=getStatus;
      Serial.println("Hanging Light Status");
      Serial.println(getStatus);
      switch(getStatus){
        case 1:
        httpurl = "http://";
        httpurl+="192.168.1.107";
        httpurl+="/";
        httpurl+="751";
        http.begin(httpurl);
        http.GET();
        http.end();
        break;

        case 0:
        httpurl = "http://";
        httpurl+="192.168.1.107";
        httpurl+="/";
        httpurl+="750";
        http.begin(httpurl);
        http.GET();
        http.end();
        break;
      }
    }

    getStatus=ThingSpeak.readIntField(285289,6,"DTBT9OZ741IVWQ8A");
    if (Chandelier != getStatus) {
      Chandelier=getStatus;
      Serial.println("Chandelier Status");
      Serial.println(getStatus);
      switch(getStatus){
        case 1:
        httpurl = "http://";
        httpurl+="192.168.1.107";
        httpurl+="/";
        httpurl+="911";
        http.begin(httpurl);
        http.GET();
        http.end();
        break;

        case 0:
        httpurl = "http://";
        httpurl+="192.168.1.107";
        httpurl+="/";
        httpurl+="910";
        http.begin(httpurl);
        http.GET();
        http.end();
        break;
      }
    }

    getStatus=ThingSpeak.readIntField(285289,7,"DTBT9OZ741IVWQ8A");
    if (Both_Curtain != getStatus) {
      Both_Curtain=getStatus;
      Serial.println("Both Curtains Status");
      Serial.println(getStatus);
      switch(getStatus){
        case 1:
        httpurl = "http://";
        httpurl+="192.168.1.107";
        httpurl+="/";
        httpurl+="111";
        http.begin(httpurl);
        http.GET();
        http.end();
        httpurl = "http://";
        httpurl+="192.168.1.107";
        httpurl+="/";
        httpurl+="121";
        http.begin(httpurl);
        http.GET();
        http.end();
        break;

        case 0:
        httpurl = "http://";
        httpurl+="192.168.1.107";
        httpurl+="/";
        httpurl+="110";
        http.begin(httpurl);
        http.GET();
        http.end();
        httpurl = "http://";
        httpurl+="192.168.1.107";
        httpurl+="/";
        httpurl+="120";
        http.begin(httpurl);
        http.GET();
        http.end();
        break;

        case 2:
        httpurl = "http://";
        httpurl+="192.168.1.107";
        httpurl+="/";
        httpurl+="112";
        http.begin(httpurl);
        http.GET();
        http.end();
        httpurl = "http://";
        httpurl+="192.168.1.107";
        httpurl+="/";
        httpurl+="122";
        http.begin(httpurl);
        http.GET();
        http.end();
        break;
      }
    }

    getStatus=ThingSpeak.readIntField(285289,8,"DTBT9OZ741IVWQ8A");
    if (AC != getStatus) {
      AC=getStatus;
      Serial.println("AC Status");
      Serial.println(getStatus);
      switch(getStatus){
        case 1:
        httpurl = "http://";
        httpurl+="192.168.1.107";
        httpurl+="/";
        httpurl+="211";
        http.begin(httpurl);
        http.GET();
        http.end();
        break;

        case 0:
        httpurl = "http://";
        httpurl+="192.168.1.107";
        httpurl+="/";
        httpurl+="210";
        http.begin(httpurl);
        http.GET();
        http.end();
        break;
      }
    }

////////////------------------------------------------------MOODS----------------------------------------------------------/////////////////

//////////////////////////////////////////MOOD1////////////////////////////////////////////////////////
getStatus=ThingSpeak.readIntField(290034,1,"3TPELW0075HWJG9D");
    if (Mood_1 != getStatus) {
      Mood_1=getStatus;
      Serial.println("Mood_1 Status");
      Serial.println(getStatus);
      switch(getStatus){
        case 1:
        httpurl = "http://";
        httpurl+="192.168.1.107";
        httpurl+="/";
        httpurl+="5011";
        http.begin(httpurl);
        http.GET();
        http.end();
        
        case 0:
        httpurl = "http://";
        httpurl+="192.168.1.107";
        httpurl+="/";
        httpurl+="5010";
        http.begin(httpurl);
        http.GET();
        http.end();
        break;
      }
    }  
      
//////////////////////////////////////////MOOD2////////////////////////////////////////////////////////
getStatus=ThingSpeak.readIntField(290034,2,"3TPELW0075HWJG9D");
    if (Mood_2 != getStatus) {
      Mood_2=getStatus;
      Serial.println("Mood_2 Status");
      Serial.println(getStatus);
      switch(getStatus){
        case 1:
        httpurl = "http://";
        httpurl+="192.168.1.107";
        httpurl+="/";
        httpurl+="5021";
        http.begin(httpurl);
        http.GET();
        http.end();
        
        case 0:
        httpurl = "http://";
        httpurl+="192.168.1.107";
        httpurl+="/";
        httpurl+="5020";
        http.begin(httpurl);
        http.GET();
        http.end();
        break;
      }
    }  
      
//////////////////////////////////////////MOOD3////////////////////////////////////////////////////////
getStatus=ThingSpeak.readIntField(290034,3,"3TPELW0075HWJG9D");
    if (Mood_3 != getStatus) {
      Mood_3=getStatus;
      Serial.println("Mood_3 Status");
      Serial.println(getStatus);
      switch(getStatus){
        case 1:
        httpurl = "http://";
        httpurl+="192.168.1.107";
        httpurl+="/";
        httpurl+="5031";
        http.begin(httpurl);
        http.GET();
        http.end();
        
        case 0:
        httpurl = "http://";
        httpurl+="192.168.1.107";
        httpurl+="/";
        httpurl+="5030";
        http.begin(httpurl);
        http.GET();
        http.end();
        break;
      }
    }  
      
//////////////////////////////////////////MOOD4////////////////////////////////////////////////////////
getStatus=ThingSpeak.readIntField(290034,4,"3TPELW0075HWJG9D");
    if (Mood_4 != getStatus) {
      Mood_4=getStatus;
      Serial.println("Mood_4 Status");
      Serial.println(getStatus);
      switch(getStatus){
        case 1:
        httpurl = "http://";
        httpurl+="192.168.1.107";
        httpurl+="/";
        httpurl+="5041";
        http.begin(httpurl);
        http.GET();
        http.end();
        
        case 0:
        httpurl = "http://";
        httpurl+="192.168.1.107";
        httpurl+="/";
        httpurl+="5040";
        http.begin(httpurl);
        http.GET();
        http.end();
        break;
      }
    }  
      
//////////////////////////////////////////MOOD5////////////////////////////////////////////////////////
getStatus=ThingSpeak.readIntField(290034,5,"3TPELW0075HWJG9D");
    if (Mood_5 != getStatus) {
      Mood_5=getStatus;
      Serial.println("Mood_5 Status");
      Serial.println(getStatus);
      switch(getStatus){
        case 1:
        httpurl = "http://";
        httpurl+="192.168.1.107";
        httpurl+="/";
        httpurl+="5051";
        http.begin(httpurl);
        http.GET();
        http.end();
        
        case 0:
        httpurl = "http://";
        httpurl+="192.168.1.107";
        httpurl+="/";
        httpurl+="5050";
        http.begin(httpurl);
        http.GET();
        http.end();
        break;
      }
    }   

}
 
