//-------------------------------------------------Declare variable-------------------------------------------------------//
#define L1_IR 23  // Left IR sensor
#define R1_IR 34  // Right IR sensor

#define L_LED 16  // Left LED
#define R_LED 17  // Right LED

#define Shoot_Pin 5
//-----------------------------------------------------------------------------------------------------------------------//

//-------------------------------------------------edit Parameter-------------------------------------------------------//

void setup() {
  Serial.begin(115200);
  motorsetup();
  //--------- IR Pin ---------------//
  pinMode(L1_IR, INPUT);
  pinMode(R1_IR, INPUT);
  
  //---------- LED Pin -----------------//
  pinMode(L_LED, OUTPUT);
  pinMode(R_LED, OUTPUT);

  //---------- Shoot Pin -----------------//
  pinMode(Shoot_Pin, OUTPUT);
  digitalWrite(Shoot_Pin, 1);

//----------------Edit sequence code here--------------//
  digitalWrite(L_LED, HIGH);
  digitalWrite(R_LED, HIGH);
  delay(1000);

  trackline_forward();
  Shoot(800);
  stop(1000);
}
void loop() {
  // read_ir();
  // trackline_forward(); 
}

