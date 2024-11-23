extern "C"
{
  uint8_t LDR_DigitalRead(void);
  uint8_t LDR2_DigitalRead(void);
}

void setup()
{
  DDRB &=~(1 << DDB0); 
  DDRB &=~(1 << DDB1);
    pinMode(4, OUTPUT);
    pinMode(5, OUTPUT);
    pinMode(6, OUTPUT);
    pinMode(7, OUTPUT);
    pinMode(8, INPUT);
    pinMode(9, INPUT);
}

void loop()
{
  uint8_t ldrValue = LDR_DigitalRead();
  uint8_t ldrValue2 = LDR2_DigitalRead();

  if (ldrValue) { 
    digitalWrite(7, HIGH);
    digitalWrite(5, HIGH);
  }else{
    digitalWrite(7, LOW);
    digitalWrite(5, LOW);
  }

  if (ldrValue2) { 
    digitalWrite(6, HIGH);
    digitalWrite(4, HIGH);
  }else{
    digitalWrite(6, LOW);
    digitalWrite(4, LOW);
  }
  delay(100);
}