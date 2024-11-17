//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"   ", "acpi | awk '{print $4}' | sed s/,//",					5,		0},
	{" 󰕾 ", "pactl get-sink-volume @DEFAULT_SINK@ | awk '{print $5}'",					1,		0},
	{" 󰖩 ", "iwctl station wlan0 show | grep 'Connected network' | awk '{print $3}'",					1,		0},
	{"  ", "date '+%R'",					5,		0},
};

//sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char delim[] = " \0 ";
static unsigned int delimLen = 5;
