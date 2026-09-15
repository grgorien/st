/* Gruber Darker
 * st theme header
 */

/* Terminal colors (16 first used in escape sequence) */
static const char *colorname[] = {
	/* 8 normal colors */
	"#181818", /* black */
	"#F43841", /* red */
	"#73D936", /* green */
	"#FFDD33", /* yellow */
	"#96A6C8", /* blue */
	"#9E95C7", /* magenta */
	"#95A99F", /* cyan */
	"#E4E4E4", /* white */

	/* 8 bright colors */
	"#52494E", /* bright black */
	"#FF4F58", /* bright red */
	"#73D936", /* bright green */
	"#FFDD33", /* bright yellow */
	"#96A6C8", /* bright blue */
	"#AFAFD7", /* bright magenta */
	"#95A99F", /* bright cyan */
	"#F5F5F5", /* bright white */

	[255] = 0,

	/* default foreground, background, cursor */
	[256] = "#E4E4E4",
	[257] = "#181818",
	[258] = "#FFDD33",
};

/*
 * foreground, background, cursor, reverse cursor
 */
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
unsigned int defaultcs = 258;
static unsigned int defaultrcs = 258;
