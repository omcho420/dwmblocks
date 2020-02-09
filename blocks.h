
static const Block blocks[] = {
	/* icon	 	command								update interval		update signal */
	{"🔋 ", 	"sed \"s/$/%/\" /sys/class/power_supply/BAT0/capacity", 	5, 			12},
	{"", 		"cat /sys/class/power_supply/BAT0/status",	 		30, 			0},
	{"🔊 ", 	"amixer get Master | grep -o \"\\(\\[off\\]\\|[0-9]*%\\)\"", 	0, 			10},
	{"🕗 ", 	"date '+%Y %b %d (%a) %I:%M%p'",				60,			0},
};

static char delim = '|';
