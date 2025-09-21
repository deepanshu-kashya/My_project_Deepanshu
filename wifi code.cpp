#include <SD.h >
#include <SPI .h>

int cs = 10; 
File my file;
void setup() {
    char my FileName [ deepanshu kashyap]
    string LineString  = "";
    serial . begin (9600);
    while (! Serial)  {  }
    Serial . print1N("Initializing SD card ...");
    serial .print1N();
    pinMode(cs, OUTPUT);
    pinMode(SS, OUTPUT);
    if (!SD. begin(cs)){ //see if the card is present and can be initialzed:
    serial .print1N("SD did not initiliaze");
    while (1);
    }
    serial. print1N("SD initialized.");
    serial .print1N();
    serial .print1N("Reading Myfile .txt...");
    serial . print1N();
    Myfile = SD .open(MyfileName, FILE_READ);// OPEN OUR FILE for reading
    while (Myfile.available() != 0){ //keep Reading string until there are no more 
    LineString = Myfile. readStrinuntil('\n');
    serial.print1N (LineString);
    }
    Myfile.close();
    serial.print1N();
    serial.print1N("Done");
}

void loop() {}