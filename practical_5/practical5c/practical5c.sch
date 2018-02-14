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
LIBS:practical5c-cache
EELAYER 25 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 1 1
Title ""
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
U 1 1 5A72D39F
P 6200 4400
F 0 "U?" H 5050 6400 50  0000 L BNN
F 1 "ATMEGA1281-BREAKOUT" H 5050 6300 50  0000 L BNN
F 2 "" H 6200 4400 50  0000 C CIN
F 3 "" H 6200 4400 50  0000 C CNN
	1    6200 4400
	1    0    0    -1  
$EndComp
$Comp
L MCP4131 U?
U 1 1 5A72E6B1
P 3800 3350
F 0 "U?" H 3800 3450 60  0000 C CNN
F 1 "MCP4131" H 3800 3350 60  0000 C CNN
F 2 "" H 3800 3450 60  0001 C CNN
F 3 "" H 3800 3450 60  0001 C CNN
	1    3800 3350
	-1   0    0    -1  
$EndComp
$Comp
L GND #PWR?
U 1 1 5A72E97C
P 4300 4000
F 0 "#PWR?" H 4300 3750 50  0001 C CNN
F 1 "GND" H 4300 3850 50  0000 C CNN
F 2 "" H 4300 4000 50  0001 C CNN
F 3 "" H 4300 4000 50  0001 C CNN
	1    4300 4000
	1    0    0    -1  
$EndComp
$Comp
L +5V #PWR?
U 1 1 5A72EA1A
P 3150 3300
F 0 "#PWR?" H 3150 3150 50  0001 C CNN
F 1 "+5V" H 3150 3440 50  0000 C CNN
F 2 "" H 3150 3300 50  0001 C CNN
F 3 "" H 3150 3300 50  0001 C CNN
	1    3150 3300
	1    0    0    -1  
$EndComp
$Comp
L +5V #PWR?
U 1 1 5A72EA3F
P 2800 3800
F 0 "#PWR?" H 2800 3650 50  0001 C CNN
F 1 "+5V" H 2800 3940 50  0000 C CNN
F 2 "" H 2800 3800 50  0001 C CNN
F 3 "" H 2800 3800 50  0001 C CNN
	1    2800 3800
	1    0    0    -1  
$EndComp
$Comp
L GND #PWR?
U 1 1 5A72EA64
P 2850 3250
F 0 "#PWR?" H 2850 3000 50  0001 C CNN
F 1 "GND" H 2850 3100 50  0000 C CNN
F 2 "" H 2850 3250 50  0001 C CNN
F 3 "" H 2850 3250 50  0001 C CNN
	1    2850 3250
	1    0    0    -1  
$EndComp
Wire Wire Line
	4900 3550 4200 3550
Wire Wire Line
	4200 3650 4900 3650
Wire Wire Line
	4200 3750 4900 3750
Wire Wire Line
	4200 3850 4300 3850
Wire Wire Line
	4300 3850 4300 4000
Wire Wire Line
	3400 3550 3150 3550
Wire Wire Line
	3150 3550 3150 3300
Wire Wire Line
	3400 3850 2800 3850
Wire Wire Line
	2800 3850 2800 3800
Wire Wire Line
	3400 3650 3050 3650
Wire Wire Line
	3050 3650 3050 3250
Wire Wire Line
	3050 3250 2850 3250
$Comp
L LED LED?
U 1 1 5A72EAA4
P 2400 3500
F 0 "LED?" H 2330 3280 50  0000 L BNN
F 1 "LED" H 2340 3600 50  0000 L BNN
F 2 "" H 2400 3500 50  0001 C CNN
F 3 "" H 2400 3500 60  0000 C CNN
	1    2400 3500
	-1   0    0    -1  
$EndComp
$Comp
L GND #PWR?
U 1 1 5A72EAFF
P 2000 3700
F 0 "#PWR?" H 2000 3450 50  0001 C CNN
F 1 "GND" H 2000 3550 50  0000 C CNN
F 2 "" H 2000 3700 50  0001 C CNN
F 3 "" H 2000 3700 50  0001 C CNN
	1    2000 3700
	1    0    0    -1  
$EndComp
Wire Wire Line
	2250 3500 2000 3500
Wire Wire Line
	2000 3500 2000 3700
Wire Wire Line
	3400 3750 2950 3750
Wire Wire Line
	2950 3750 2950 3500
Wire Wire Line
	2950 3500 2550 3500
$EndSCHEMATC
