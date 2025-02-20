/* user and group to drop privileges to */
static const char *user  = "nobody";
static const char *group = "nogroup";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "black",     /* after initialization */
	[INPUT] =  "#3a515d",   /* during input */
	[FAILED] = "#543a48",   /* wrong password */
	[CAPS] =   "#4d4c43",   /* CapsLock on */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;
