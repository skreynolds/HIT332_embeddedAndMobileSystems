EESchema Schematic File Version 2
LIBS:CDU_KiCad_Library
LIBS:power
LIBS:device
LIBS:transistors
LIBS:conn
LIBS:linear
LIBS:regul
LIBS:74xx
LIBS:cmos4000
LIBS:adc-dac
LIBS:memory
LIBS:xilinx
LIBS:microcontrollers
LIBS:dsp
LIBS:microchip
LIBS:analog_switches
LIBS:motorola
LIBS:texas
LIBS:intel
LIBS:audio
LIBS:interface
LIBS:digital-audio
LIBS:philips
LIBS:display
LIBS:cypress
LIBS:siliconi
LIBS:opto
LIBS:atmel
LIBS:contrib
LIBS:valves
EELAYER 25 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 1 1
Title "Pratical 4"
Date ""
Rev ""
Comp ""
Comment1 ""
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
$Comp
L ATMEGA1281-BREAKOUT U1
U 1 1 59A13A4A
P 4650 4050
F 0 "U1" H 3500 6050 50  0000 L BNN
F 1 "ATMEGA1281-BREAKOUT" H 3500 5950 50  0000 L BNN
F 2 "" H 4650 4050 50  0000 C CIN
F 3 "" H 4650 4050 50  0000 C CNN
	1    4650 4050
	1    0    0    -1  
$EndComp
$Comp
L 74LS193 U2
U 1 1 59A13A9D
P 6750 2600
F 0 "U2" H 6850 3200 50  0000 C CNN
F 1 "74LS193" H 6950 3100 50  0000 C CNN
F 2 "" H 6750 2600 50  0000 C CNN
F 3 "" H 6750 2600 50  0000 C CNN
	1    6750 2600
	1    0    0    -1  
$EndComp
$Comp
L LOGIC_ANALYSER INST1
U 1 1 59A13ACC
P 8050 3800
F 0 "INST1" H 8050 4400 50  0000 L CNN
F 1 "LOGIC_ANALYSER" H 8050 4300 50  0000 L CNN
F 2 "" H 8450 3625 50  0000 C CNN
F 3 "" H 8450 3625 50  0000 C CNN
	1    8050 3800
	1    0    0    -1  
$EndComp
$Comp
L LED-8WAY LED1
U 1 1 59A13B37
P 8050 5150
F 0 "LED1" H 8050 5550 50  0000 L CNN
F 1 "LED-8WAY" H 8050 5450 50  0000 L CNN
F 2 "" H 8475 4800 50  0000 C CNN
F 3 "" H 8475 4800 50  0000 C CNN
	1    8050 5150
	1    0    0    -1  
$EndComp
$Comp
L GND #PWR?
U 1 1 59A14095
P 6750 3500
F 0 "#PWR?" H 6750 3250 50  0001 C CNN
F 1 "GND" H 6750 3350 50  0000 C CNN
F 2 "" H 6750 3500 50  0001 C CNN
F 3 "" H 6750 3500 50  0001 C CNN
	1    6750 3500
	1    0    0    -1  
$EndComp
$Comp
L GND #PWR?
U 1 1 59A140B1
P 5800 2950
F 0 "#PWR?" H 5800 2700 50  0001 C CNN
F 1 "GND" H 5800 2800 50  0000 C CNN
F 2 "" H 5800 2950 50  0001 C CNN
F 3 "" H 5800 2950 50  0001 C CNN
	1    5800 2950
	1    0    0    -1  
$EndComp
$Comp
L +5V #PWR?
U 1 1 59A140CD
P 6750 1650
F 0 "#PWR?" H 6750 1500 50  0001 C CNN
F 1 "+5V" H 6750 1790 50  0000 C CNN
F 2 "" H 6750 1650 50  0001 C CNN
F 3 "" H 6750 1650 50  0001 C CNN
	1    6750 1650
	1    0    0    -1  
$EndComp
$Comp
L +5V #PWR?
U 1 1 59A140E9
P 5950 1650
F 0 "#PWR?" H 5950 1500 50  0001 C CNN
F 1 "+5V" H 5950 1790 50  0000 C CNN
F 2 "" H 5950 1650 50  0001 C CNN
F 3 "" H 5950 1650 50  0001 C CNN
	1    5950 1650
	1    0    0    -1  
$EndComp
Wire Wire Line
	7300 2700 7500 2700
Wire Wire Line
	7300 2800 7500 2800
Wire Wire Line
	7300 2900 7500 2900
Wire Wire Line
	7300 3000 7500 3000
Text Label 7350 2700 0    60   ~ 0
A0
Text Label 7350 2800 0    60   ~ 0
A1
Text Label 7350 2900 0    60   ~ 0
A2
Text Label 7350 3000 0    60   ~ 0
A3
Wire Wire Line
	7950 3550 7700 3550
Wire Wire Line
	7950 3650 7700 3650
Wire Wire Line
	7950 3750 7700 3750
Wire Wire Line
	7950 3850 7700 3850
Wire Wire Line
	7950 5000 7700 5000
Wire Wire Line
	7950 5100 7700 5100
Wire Wire Line
	7950 5200 7700 5200
Wire Wire Line
	7950 5300 7700 5300
Text Label 7750 3550 0    60   ~ 0
A0
Text Label 7750 3650 0    60   ~ 0
A1
Text Label 7750 3750 0    60   ~ 0
A2
Text Label 7750 3850 0    60   ~ 0
A3
Text Label 7750 5000 0    60   ~ 0
A0
Text Label 7750 5100 0    60   ~ 0
A1
Text Label 7750 5200 0    60   ~ 0
A2
Text Label 7750 5300 0    60   ~ 0
A3
Entry Wire Line
	7500 2700 7600 2800
Entry Wire Line
	7500 2800 7600 2900
Entry Wire Line
	7500 2900 7600 3000
Entry Wire Line
	7500 3000 7600 3100
Entry Wire Line
	7600 3450 7700 3550
Entry Wire Line
	7600 3550 7700 3650
Entry Wire Line
	7600 3650 7700 3750
Entry Wire Line
	7600 3750 7700 3850
Entry Wire Line
	7600 4900 7700 5000
Entry Wire Line
	7600 5000 7700 5100
Entry Wire Line
	7600 5100 7700 5200
Entry Wire Line
	7600 5200 7700 5300
Wire Bus Line
	7600 2800 7600 5200
Wire Wire Line
	6200 2300 5400 2300
Wire Wire Line
	6200 2400 5800 2400
Wire Wire Line
	5800 2200 5800 2950
Wire Wire Line
	6200 2200 5800 2200
Connection ~ 5800 2400
Wire Wire Line
	6200 2500 5950 2500
Wire Wire Line
	5950 2500 5950 1650
Wire Wire Line
	6750 1650 6750 1950
Wire Wire Line
	6750 3250 6750 3500
Wire Wire Line
	7950 3450 7950 1350
Wire Wire Line
	7950 1350 5600 1350
Wire Wire Line
	5600 1350 5600 2300
Connection ~ 5600 2300
$EndSCHEMATC
