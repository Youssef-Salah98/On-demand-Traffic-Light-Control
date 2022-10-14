# On-demand-Traffic-Light-Control
This project represents an On-demand Traffic Light Control System based on Atmega32a microcontroller.
The system is supposed to work in two modes; first mode will be the normal mode where cars` traffic lights works normally. 
The second mode is Pedestrian mode which starts when a pedestrian presses a button to get the permission to cross the road.
In pedestrian mode:
1- If pressed when the cars' Red LED is on, the pedestrian's Green LED and the cars' Red LEDs will be on for five seconds,
   this means that pedestrians can cross the street while the pedestrian's Green LED is on.
2- If pressed when the cars' Green LED is on or the cars' Yellow LED is blinking, the pedestrian Red LED will be on then
   both Yellow LEDs start to blink for five seconds, then the cars' Red LED and pedestrian Green LEDs are on for five seconds,
   this means that pedestrian must wait until the Green LED is on.
3- At the end of the two states, the cars' Red LED will be off and both Yellow LEDs start blinking for 5 seconds and
   the pedestrian's Green LED is still on.
4- After the five seconds the pedestrian Green LED will be off and both the pedestrian Red LED and the cars' Green LED will be on.
5- Traffic lights signals are going to the normal mode again.
