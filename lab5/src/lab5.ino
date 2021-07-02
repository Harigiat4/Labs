
SYSTEM_MODE(MANUAL);
SYSTEM_THREAD(ENABLED);
uint16_t value;
uint16_t max_thresh = 0;
uint16_t min_thresh = 4095;



void setup() {



  pinMode(D5, OUTPUT);
  pinMode(A5, INPUT);
  Serial.begin(9600);



}


void loop() {

  value = analogRead(A5);
  Serial.println(value);  //read sensor





  max_thresh = max(max_thresh, value);
  min_thresh = min(min_thresh, value);   //calibrate





  uint16_t intensity = map(value, min_thresh, max_thresh, 0, 255);   //changes the light
  analogWrite(D5, intensity);
  delay(300);
}