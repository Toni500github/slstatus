
/* See LICENSE file for copyright and license details. */

/* interval between updates (in ms) */
const unsigned int interval = 1000;

/* text to show if no value can be retrieved */
static const char unknown_str[] = "n/a";

/* maximum output string length */
#define MAXLEN 2048

static const struct arg args[] = {
    /* function 	format          	argument */
    //{disk_free,   "[ %s / ",           "/"},         
    //{disk_total,  "%s] | ",           "/"},
    {cpu_perc,    "^b#227dc7^^c#71d94c^\ue0b2^b#71d94c^^c#100548^  %s%% ^c#e0af68^\ue0b2",      NULL},
    {ram_used,    "^b#e0af68^^c#15161e^  %s/",           NULL},
    {ram_total,   "%s ^c#55cdfc^\ue0b2",           NULL},
    //{run_command, "[%s]",             "bash /home/toni/.local/bin/lukebin/statusbar/sb-memory"},
    //{run_command, "[%s] | ",        "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g"},
    {run_command, "^b#55cdfc^^c#000100^ %s ^c#bb9af6^\ue0b2",      "/home/toni/.local/bin/lukebin/statusbar/sb-volume"},
    {datetime,    "^b#bb9af6^^c#000100^  %s ^c#f7768e^\ue0b2",           "%F"},
    {datetime,	  "^b#f7768e^^c#000100^  %s ",	"%T"}
};
