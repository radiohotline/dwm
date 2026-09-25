static char normfgcolor[] = "#FFE9C7";
static char normbgcolor[] = "#1A1515";
static char normbordercolor[] = "#1A1515";

static char selfgcolor[] = "#FFE9C7";
static char selbgcolor[] = "#453636";
static char selbordercolor[] = "#453636";

static char *colors[][3]      = {
    /*               fgcolor           bgcolor         bordercolor                         */
    [SchemeNorm] = { normfgcolor,     normbgcolor,   normbordercolor }, // unfocused wins
    [SchemeSel]  = { selfgcolor,      selbgcolor,    selbordercolor },  // the focused win
};
