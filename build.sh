#!/bin/bash

echo This is the bash file to build the application.

g++ GPIO.cpp read_button.cpp -o read_button.cgi -lcgicc -pthread

echo The application has been built.
