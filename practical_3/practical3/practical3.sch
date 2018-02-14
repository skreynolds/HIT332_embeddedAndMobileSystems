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
Title "Practical 3"
Date ""
Rev ""
Comp ""
Comment1 ""
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
$Comp
L ATMEGA1281-BREAKOUT U?
U 1 1 59A0DAAA
P 6150 4200
F 0 "U?" H 5000 6200 50  0000 L BNN
F 1 "ATMEGA1281-BREAKOUT" H 5000 6100 50  0000 L BNN
F 2 "" H 6150 4200 50  0000 C CIN
F 3 "" H 6150 4200 50  0000 C CNN
	1    6150 4200
	1    0    0    -1  
$EndComp
$Comp
L LED-8WAY LED?
U 1 1 59A0DB17
P 7400 2600
F 0 "LED?" H 7400 3000 50  0000 L CNN
F 1 "LED-8WAY" H 7400 2900 50  0000 L CNN
F 2 "" H 7825 2250 50  0000 C CNN
F 3 "" H 7825 2250 50  0000 C CNN
	1    7400 2600
	1    0    0    -1  
$EndComp
$Comp
L DIPSWITCH-8WAY SW?
U 1 1 59A0DB6A
P 4100 3700
F 0 "SW?" H 3600 4300 50  0000 L CNN
F 1 "DIPSWITCH-8WAY" H 3600 4200 50  0000 L CNN
F 2 "" H 3700 3775 50  0000 C CNN
F 3 "" H 3700 3775 50  0000 C CNN
	1    4100 3700
	1    0    0    -1  
$EndComp
Wire Wire Line
	4200 3350 4850 3350
Wire Wire Line
	4200 3450 4850 3450
Wire Wire Line
	4200 3550 4850 3550
Wire Wire Line
	4200 3650 4850 3650
Wire Wire Line
	4200 3750 4850 3750
Wire Wire Line
	4200 3850 4850 3850
Wire Wire Line
	4200 3950 4850 3950
Wire Wire Line
	4200 4050 4850 4050
Wire Wire Line
	6900 2450 7300 2450
Wire Wire Line
	6900 2550 7300 2550
Wire Wire Line
	6900 2650 7300 2650
Wire Wire Line
	6900 2750 7300 2750
Wire Wire Line
	6900 2850 7300 2850
Wire Wire Line
	6900 2950 7300 2950
Wire Wire Line
	6900 3050 7300 3050
Wire Wire Line
	6900 3150 7300 3150
$EndSCHEMATC
