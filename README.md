# SmartBin
**With the rapid increase in urbanization 
the production of waste is increasing rapidly, 
Therefore, there is a need to improve waste 
management techniques. As the world is stepping 
towards automated and smart management 
techniques, there is a need to shift from traditional 
methods to smart waste management. This paper
discusses the ideology of automating the bin for 
opening and closing the lid and contributing to 
smart waste management techniques by 
introducing IoT-based control and monitoring of 
the dustbin**

## Table content
- [Introduction](#Introducton)
- [Working](#working)
- [Exeperiments and Results](#Exeperiments and Results)
- [Conclusion](#Conclusion)
- [Future_scope](#Future_Scope)

## Introduction

India being the second most populated country in 
the world, waste management is of great challenge. 
India generates 62 million tonnes of waste annually, 
which is estimated to be increased to 165 million 
tonnes by 2030. The filling status of the dustbin is 
imperceptible by the person responsible to empty it 
felicitously, which causes the overflowing of the 
dustbin. Gases like methane, carbon monoxide, 
ammonia, and a low level of radiation are released 
from the wastes in the dustbin. The overflowing of 
the bin is a major cause behind the spreading of foul 
smells. The foul smell dispensed from the waste may 
cause respiratory diseases.
The objective of the proposed system is to provide 
access for continuous monitoring of the filling status 
of the dustbins in a locality, hence giving a wide 
berth to the spread of foul smells due to the 
overflowing of the dustbins. The following is 
achieved using IoT Platforms specifically
Thingspeak. These IoT platforms serve to attain the
continuous monitoring of dustbins and notifying the
concerned authorities to empty the dustbin.The dustbin lid is automated to open and close by 
detecting the human approaching the bin. The filling 
status of the dustbin is displayed over an LCD, when 
the dustbin is filled it doesn’t open and a buzzing 
sound is generated to create a mental dilemma in 
the person to avoid overflow to some extent.
Using the smart dustbin, we will move a step ahead
towards smartly managing waste with minimal 
human intervention.

## Working


Arduino UNO and Node MCU are connected using a serial 
communication port to share the data received by an 
ultrasonic sensor, which is furtherly processed to obtain 
the filling status of the dustbin.
To automate the opening and closing of the lid a 
passive infrared sensor is used. A passive infrared 
(PIR) sensor detects the Infrared radiation from 
living bodies. The input signal from PIR is passed on 
to the Arduino UNO. Further, the Arduino actuates the servo to open the bin and close it when the 
person leaves the premises respectively.The schematic diagram of the smart dustbin with all the 
components is shown in figure 1.
An ultrasonic sensor is interfaced with the Arduino UNO 
to calculate the filling status of the dustbin in terms of 
percentage. The ultrasonic sensor has a transmitter and 
receiver. The transmitter sends a sound signal of a 
certain frequency and waits for that specific sound to be 
received by the receiver. The sensor maintains the 
record of the time gap between the signal transmitted 
and received and the microcontroller converts it into
distance using the formula mentioned below. 
Distance =
𝑇𝑖𝑚𝑒 ∗ 0.034
2
The following distance value is converted into the 
percentage based on the defined maximum height of the 
bin.
The waste filled in the bin is then displayed over a 16*2 
liquid crystal display (LCD) in terms of percentage, which 
provides a visual interface for the user for letting know 
the dustbin capacity.
When the dustbin is completely filled the microcontroller 
locks the servo at the close position and hence the lid of 
the dustbin remains closed, whenever the PIR detects 
the human. The piezo buzzer connected to the circuit will
also be activated.
The percentage data from the Arduino UNO 
microcontroller is sent to Node MCU through serial 
communication. The data from Node MCU is sent to 
Thingspeak where the filling status is represented in a 
graphical interface. When the bin is about to be 
completely filled, a  notification is sent to the worker to 
empty the bin with the location of the dustbin.

## Experiments and Results

The following experiment has been conducted on a 
designed circuit and the percentage of bin filled is 
optioned over an LCD. The percentage filled is also 
obtained on the serial monitor of the Arduino IDE 
software application.
The circuit is simulated in tinker cad before 
implementing it on the hardware. Tinker cad is a web 
application that is used for 3D designing and circuit 
simulation.A 10 KΩ potentiometer is connected to the LCD circuit to 
control the current across it, which controls the contrast 
of the backlight of the LCD display. Hence the text 
obtained in the display is clear.
The percentage filled is also printed over the serial 
monitor for the comparison and calibration of error. The decoding statements and the distance values are 
printed for both the microcontrollers.The continuous recording of the filling status of bins is
stored in the Thingspeak channel in a graphical format. 
The following data can be accessed using credentials 
and channel id.When the bin is about to be filled an automation switch 
in the BlynkIoT is triggered, which will trigger the 
notification to the worker as shown in the figure 10, and 
hence felicitous emptying of the dustbin can be 
achieved.

## Conclusion

The proposed system helps to keep the surroundings 
clean as part of Swachh Bharat which is instated by the 
father of the nation Mahatma Gandhi. Since lid opening 
and closing is automatic it can prevent diseases caused 
by contact ex: Covid-19. Prevent the overflow of the bin, 
as the lid remains closed when it is completely filled. The 
buzzer will ring which reminds the people that the bin is 
completely filled and creates a mental dilemma to avoid
throwing the waste around the dustbin.

## Future Scope

• Introduce machine learning for the distinction 
between wet and dry waste.
• Build a dashboard to create an easy interface for 
the concerned authorities.
• Develop an E-Sim based product to cut the 
dependency on Wi-Fi.

