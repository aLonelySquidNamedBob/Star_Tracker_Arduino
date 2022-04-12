# Star Tracker Arduino

# Story
## Concept Birth

Some while ago I stumbled onto the Youtube channel of Alyn Wallace, an astrophotographer based in Wales, and the photography showcased was stunning, and of course I wanted to recreate it. I didn't, however, have the kit to start doing this special kind of photography. I had a camera and a tripod, which was alright for the first few test shots, but for anything serious I would need to get a better camera and a star tracker. The better camera was the first idea for an upgrade I got, but after a bit of research, they were all too expensive, so I started looking for a star tracker. These were also really costly, but I had heard about a "Barn Door" tracker from another Youtube channel, so I decided to research that, and it seemed pretty affordable and reachable, at least to my level of craftmanship. The one they built in the video and on the website were both manual, meaning I had to turn the wheel myself, but as I am the laziest person I know, I figured out a way to automate the turning of the wheel using a microcontroller and a stepper motor.

## Planning
### CAD

Over the last six months, I had started designing stuff in CAD (Computer Assisted Design) for 3D printing, as I had recieved one for my birthday. I drew up the most basic model of the tracker in Fusion 360, two planks of wood attached together with a hinge, a bent threaded rod and the nut. As I got more and more research together, about the actual stepper motor and the model of arduino I was going to use, I designed those elements into the model, along with some gears to link the motor to the nut, a way to attach the whole thing to my tripod, and a ball head mount to attach the camera to. That was the model then finished.  
A link to the model can be found [here](https://a360.co/3vgp8XN).  

### Choosing the components

I chose the Arduino Uno because it was cheap (only about 20€) and because of the enormous Arduino community which basically guarantees an answer to any of my problems. I had also had some experience with an Arduino before, so it would be easier to get one of them instead of learning a whole new language for another microcontroller.  
The stepper motors I chose because they were light and cheap and, as far as I could tell from comments and reviews, reliable and precise. These are widely used industrial units, so the price was very low (pack of 2 for 5€) plus they come with a controller board.  
Reference: 28BYJ-48 motors with ULN2003AN controllers.  
The ball head mount was the cheapest one I could find on Amazon with widely favourable reviews. You can find this model [here](https://www.amazon.fr/gp/product/B0087MV3LI/ref=ppx_yo_dt_b_asin_title_o02_s00?ie=UTF8&psc=1).

## Building

# The Code

## RPM function

For this section, please visit [README.ipynb](https://github.com/aLonelySquidNamedBob/Star_Tracker_Arduino/blob/main/README.ipynb)