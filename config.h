// Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
    /*Icon*/ /*Command*/ /*Update Interval*/ /*Update Signal*/
    {"", "sb-music", 0, 11},
    {"", "sb-cpu", 1, 12},
    {"", "sb-gpu", 1, 13},
    {"", "sb-ram", 1, 14},
    {"", "sb-forecast", 18000, 5},
    {"", "sb-volume", 0, 10},
    {"", "sb-clock", 60, 1},
};

// Sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char *delim = "\0";

// Have dwmblocks automatically recompile and run when you edit this file in
// vim with the following line in your vimrc/init.vim:

// autocmd BufWritePost ~/Documents/Github/Repos/dwmblocks/config.h !cd ~/.local/src/dwmblocks/; sudo make install && { killall -q dwmblocks;setsid dwmblocks & }
