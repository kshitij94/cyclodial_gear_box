This repo contains all the solidworks files required for 3d printing the cycloidal drive.
It also contains the ball bearings. These ball bearing uses 4.5 mm bearing balls: amazon.com/dp/B07YKLXJLQ?ref=ppx_yo2ov_dt_b_fed_asin_title


Theory about cycloidal drive can be found here:
https://www.youtube.com/watch?v=OsS9-FzKN6s
https://uwaterloo.atlassian.net/wiki/spaces/UWRT/pages/33962263427/Cycloidal+Drive+-+Rev+1+Prototype+Journal
https://www.youtube.com/watch?v=Nk3aaVcvbpA

To design the cyclodial drive gear in solidworks, the main idea is to first create a plan sketch, which contains the disk, housing pins, output shaft pins, input shaft and its essentric component. Then copy paste this plan to build each individual components for 3d printing. After copying the plan sketch onto a new part in solidworks, delete the sketch that are not needed and then do the extrudus.


The values for this drive are:

R =  63 
E=2 
Rr=5 
N=22

“R” is the radius of the Rotor/PCD of rollers
“E” is the eccentricity (or offset)
“Rr” is the radius of the Rollers
“N” which is the number of Rollers

Electrical components:

I used nema17: https://www.amazon.com/dp/B00PNEQKC0?ref=ppx_yo2ov_dt_b_fed_asin_title

controller used: https://www.amazon.com/dp/B0CP92T4QR?ref=ppx_yo2ov_dt_b_fed_asin_title

the current limit on the controller is set to 0.75. Although the motor can take 2 amp, setting the controller current limit to 1 amp caused the motor motion to break. But after setting to 0.75, the motion was continous.


This repo also contains the arduino code for controlling the motor.