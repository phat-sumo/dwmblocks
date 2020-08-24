//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
  {"", "ssid",                    60,   0},
  {"", "bandwidth",               15,   0},
  {"", "storage",                 15,   0},
  {"", "memory",                  15,   0},
  {"", "load",                    15,   0},
  {"", "cpu",                     15,   0},
  {"", "batt",                    60,   0},
	{"", "date +'%D %R'",						60,		0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = ' ';
