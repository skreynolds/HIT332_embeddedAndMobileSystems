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
LIBS:practical5b-cache
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
U 1 1 5A72BE36
P 6150 4050
F 0 "U?" H 5000 6050 50  0000 L BNN
F 1 "ATMEGA1281-BREAKOUT" H 5000 5950 50  0000 L BNN
F 2 "" H 6150 4050 50  0000 C CIN
F 3 "" H 6150 4050 50  0000 C CNN
	1    6150 4050
	1    0    0    -1  
$EndComp
$Comp
L MCP9700 U?
U 1 1 5A72CB04
P 7650 4100
F 0 "U?" H 7650 4450 50  0000 L CNN
F 1 "MCP9700" H 7650 4350 50  0000 L CNN
F 2 "" H 8050 3775 50  0000 C CNN
F 3 "" H 8050 3775 50  0000 C CNN
	1    7650 4100
	1    0    0    -1  
$EndComp
$Comp
L GND #PWR?
U 1 1 5A72CDC4
P 7450 4800
F 0 "#PWR?" H 7450 4550 50  0001 C CNN
F 1 "GND" H 7450 4650 50  0000 C CNN
F 2 "" H 7450 4800 50  0001 C CNN
F 3 "" H 7450 4800 50  0001 C CNN
	1    7450 4800
	-1   0    0    -1  
$EndComp
$Comp
L +5V #PWR?
U 1 1 5A72CDDC
P 7450 3450
F 0 "#PWR?" H 7450 3300 50  0001 C CNN
F 1 "+5V" H 7450 3590 50  0000 C CNN
F 2 "" H 7450 3450 50  0001 C CNN
F 3 "" H 7450 3450 50  0001 C CNN
	1    7450 3450
	-1   0    0    -1  
$EndComp
Wire Wire Line
	7450 4000 7450 3450
Wire Wire Line
	7450 4200 7450 4800
Wire Wire Line
	6900 4100 7450 4100
$EndSCHEMATC
