//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/						/*Update Interval*/	/*Update Signal*/
	{ "",   "~/.config/dwm/dwmblocks/scripts/caps.sh",		0,      20 },
	{ "",   "~/.config/dwm/dwmblocks/scripts/volume.sh",	0,      10},
	{ "💻 ", "~/.config/dwm/dwmblocks/scripts/cpu.sh",		5,      0 },
	{ "🔥 ", "~/.config/dwm/dwmblocks/scripts/cpuh.sh",		5,      0 },
	{ "🧠 ", "~/.config/dwm/dwmblocks/scripts/ram.sh",		5,      0 },
	{ "📆 ", "date '+%b %d (%a)'",							5,		0 },
	{ "🕒 ", "date '+%X'",									1,		0 },
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
