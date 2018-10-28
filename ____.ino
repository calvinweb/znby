void pwm(int pin, int pos ) {
  digitalWrite(pin, 1);
  delayMicroseconds(pos);
  digitalWrite(pin, 0);
  delay(20);

}
void up(int pin) {
  pwm(pin , 1700);
}
void dowm(int pin) {
  pwm(pin, 1300)
}
void swi(byte bin) {
  switch (bin) {

    case 6:
      up
  }
}
