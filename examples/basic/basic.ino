#include <Wire.h>
#include <PT2313.h>

PT2313 audioChip;

void setup(){
  audioChip.initialize(1,true);//source 1,mute on
  audioChip.source(1);//select your source 0...3
  audioChip.volume(33);//Vol 0...62 : 63=muted
  audioChip.gain(3);//gain 0...11.27 db
  audioChip.loudness(true);//true or false
  audioChip.bass(0);//bass -7...+7
  audioChip.treble(0);//treble -7...+7
  audioChip.balance(0);//-31...+31
}
void loop(){
}