//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	/* {" ",	"sb-cpu1",		10,	18}, */
	/* {"",	"sb-moonphase",	18000,	17}, */
	{" ",	"sb-volume",	0,	10},
	/* {" ",	"sb-battery1",	5,	3}, */
	{" ",	"sb-clock",	30,	1},
	{" ",	"sb-internet",	5,	4},
	{" "},
	/* {"",	"sb-iplocate", 0,	27}, */
	/* {"",	"sb-help-icon",	0,	15}, */
};

//Sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char *delim = " ";
// Have dwmblocks automatically recompile and run when you edit this file in
// vim with the following line in your vimrc/init.vim:

// autocmd BufWritePost ~/.local/src/dwmblocks/config.h !cd ~/.local/src/dwmblocks/; sudo make install && { killall -q dwmblocks;setsid dwmblocks & }

