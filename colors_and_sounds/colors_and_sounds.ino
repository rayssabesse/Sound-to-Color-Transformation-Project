int red = 9;        //red LED
int green = 10;     //green LED
int blue = 11;      //blue LED
int sounds = A5;     //sound sensor


void setup() {
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
  pinMode(sounds, INPUT_PULLUP);
  Serial.begin(9600);
}


void rgbcolor(int redv, int greenv, int bluev) {   //RGB color
  analogWrite(red, redv);
  analogWrite(green, greenv);
  analogWrite(blue, bluev); 
}


void loop() {
  int soundsv = analogRead(sounds);
  Serial.print("Hz = ");
  Serial.println(soundsv);
  delay(200);
  if ((soundsv >= 81) & (soundsv <= 97)) {   //red
    rgbcolor(255, 0, 0);  
  }
  if ((soundsv >= 98) & (soundsv <= 112)) {   //orange
     rgbcolor(255, 80, 0);   
  }
  if ((soundsv >= 113) & (soundsv <= 129)) {   //yellow
    rgbcolor(255, 255, 0);
  }
  if ((soundsv >= 130) & (soundsv <= 152)) {  //lemon
    rgbcolor(173, 248, 2);
  }
  if ((soundsv >= 153) & (soundsv <= 161)) {  //green
    rgbcolor(0, 255, 0);
  }
  if ((soundsv >= 162) & (soundsv <= 170)) {  //turquoise
    rgbcolor(0, 206, 209);
  }
  if ((soundsv >= 171) & (soundsv <= 181)) {  //blue
    rgbcolor(0, 0, 255);
  }
   if ((soundsv >= 182) & (soundsv <= 236)) {  //indigo
    rgbcolor(75, 0, 130);
  }
  if ((soundsv >= 237) & (soundsv <= 285)) {  //violet
    rgbcolor(143, 0, 255);
  }
}
