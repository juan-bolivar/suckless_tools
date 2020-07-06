//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"", "cat ~/.pacupdate | sed /📦0/d",					0,		9},
	
	{"🧠", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",	30,		0},

	{"", "bash ~/scripts/statusbar/weather.sh",                       	600,		0},

	//{"", "bash ~/scripts/statusbar/volume.sh",				0,		10},

	//{"☀", "xbacklight | sed 's/\\..*//'",					0,		11},
	
	//{"", "bash ~/scripts/statusbar/servientrega.sh",    			600,		0},
	
	{"", "bash ~/scripts/statusbar/battery.sh",      			60,		0},

	//	  {"", "bash ~/scripts/statusbar/deprisa.sh",    			600,		0},

       //{"🌡", "sensors | awk '/^temp1:/{print $2}'",				60,		0},

	{"", "bash ~/scripts/statusbar/clock.sh",						5,		0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = '|';
