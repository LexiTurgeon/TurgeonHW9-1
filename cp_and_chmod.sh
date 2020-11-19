#!/bin/bash

echo Copying application to /usr/lib/cgi-bin/ directoy.

sudo cp read_button.cgi /usr/lib/cgi-bin/

echo Application Copied.

echo Changing Permissions.

sudo chmod +s /usr/lib/cgi-bin/read_button.cgi

echo Permissions Changed.

