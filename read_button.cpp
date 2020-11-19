#include <iostream>         // for the input/output
#include <stdlib.h>         // for the getenv call
#include <sys/sysinfo.h>    // for the system uptime call
#include <cgicc/Cgicc.h>    // the cgicc headers
#include <cgicc/CgiDefs.h>
#include <cgicc/HTTPHTMLHeader.h>
#include <cgicc/HTMLClasses.h>
#include "GPIO.h"

using namespace std;
using namespace cgicc;
using namespace exploringBB;

int main(){
   Cgicc form;                      // the CGI form object
   GPIO button(46);
   button.setDirection(INPUT);
   int checkPinValue = button.getValue();

   // generate the form but use states that are set in the submitted form
   cout << HTTPHTMLHeader() << endl;       // Generate the HTML form
   cout << html() << head() << title("Turgeon Homework 9 Question 1") << head() << endl;
   cout << body() << h1("CPE 422 Reading a Push Button as Digital Input") << endl;;
   cout << h1("Reading a Push Button on GPIO46 via a Web Browser") << endl;
   cout << "<form action=\"/cgi-bin/read_button.cgi\" method=\"POST\">\n";
   cout << "<div><input type=\"submit\" value=\"Read Button\"" << endl;
   cout << "</div></form>";

  if (checkPinValue == 1){
	cout << h2("Button is not pressed") << endl;
  }else if (checkPinValue == 0){
	cout << h2("Button is Pressed") << endl;
  }
  cout << body() << html();
}
