int chanled[] = {2,3,4,5,6,7,8,9};
int chandem,i;
void setup() {
  // put your setup code here, to run once:
  chandem = sizeof(chanled);
  for (int i=0;i<chandem;i++) {
    pinMode(chanled[i],OUTPUT);
    digitalWrite(chanled[i],LOW); // mac dinh cho led tat truoc
  }
}

void loop() {
  for (int i =0;i < chandem;i++){
  digitalWrite(chanled[i],HIGH);
  delay(80);
}
  for (i=8;i>=0;i--){
    digitalWrite(chanled[i],LOW);
    delay(80);
  }
  digitalWrite(chanled[0],HIGH);
  digitalWrite(chanled[1],HIGH);
  digitalWrite(chanled[2],HIGH);
  digitalWrite(chanled[3],HIGH);
  digitalWrite(chanled[4],HIGH);
  digitalWrite(chanled[5],HIGH);
  digitalWrite(chanled[6],HIGH);
  digitalWrite(chanled[7],HIGH);

  delay(200);
  digitalWrite(chanled[0],LOW);
  digitalWrite(chanled[1],LOW);
  digitalWrite(chanled[2],LOW);
  digitalWrite(chanled[3],LOW);
  digitalWrite(chanled[4],LOW);
  digitalWrite(chanled[5],LOW);
  digitalWrite(chanled[6],LOW);
  digitalWrite(chanled[7],LOW);

  delay(200);
}
