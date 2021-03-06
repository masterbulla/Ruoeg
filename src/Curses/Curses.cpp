#include "Curses.h"
#include <iostream>

WINDOW* Curses::initscr()
{
	return ::initscr();
}

int Curses::wresize(WINDOW *win, int lines, int columns)
{
	return ::wresize(win, lines, columns);
}

int Curses::resize_term(int lines, int columns)
{
	return ::resize_term(lines, columns);
}

int Curses::curs_set(int visibility)
{
	return ::curs_set(visibility);
}

int Curses::keypad(WINDOW *win, bool bf)
{
	return ::keypad(win, bf);
}

int Curses::noecho()
{
	return ::noecho();
}

int Curses::cbreak()
{
	return ::cbreak();
}

int Curses::nodelay(WINDOW *win, bool bf)
{
	return ::nodelay(win, bf);
}

int Curses::scrollok(WINDOW *win, bool bf)
{
	return ::scrollok(win, bf);
}

void Curses::endwin()
{
	::endwin();
}

int Curses::mvwaddch(WINDOW *win, int y, int x, const chtype ch)
{
	return ::mvwaddch(win, y, x, ch);
}

int Curses::wprintw(WINDOW *win, char *fmt, ...)
{
	int ret = ERR;

	va_list args;
	va_start(args, fmt);
	ret = ::vwprintw(win, fmt, args);
	va_end(args);

	return ret;
}

int Curses::mvwprintw(WINDOW *win, int y, int x, char *fmt, ...)
{
	int ret = ERR;

	va_list args;
	va_start(args, fmt);
	::wmove(win, y, x);
	ret = ::vwprintw(win, fmt, args);
	va_end(args);

	return ret;
}

int Curses::wgetch(WINDOW *win)
{
	return ::wgetch(win);
}

int Curses::start_color()
{
	return ::start_color();
}

int Curses::wattron(WINDOW *win, int attrs)
{
	return ::wattron(win, attrs);
}

int Curses::wattroff(WINDOW *win, int attrs)
{
	return ::wattroff(win, attrs);
}

int Curses::init_pair(short pair, short f, short b)
{
	return ::init_pair(pair, f, b);
}

int Curses::has_colors()
{
	return ::has_colors();
}

WINDOW* Curses::newwin(int nlines, int ncols, int begin_y, int begin_x)
{
	return ::newwin(nlines, ncols, begin_y, begin_x);
}

WINDOW* Curses::derwin(WINDOW *orig, int nlines, int ncols, int begin_y, int begin_x)
{
	return ::derwin(orig, nlines, ncols, begin_y, begin_x);
}

int Curses::wbkgd(WINDOW *win, chtype ch)
{
	return ::wbkgd(win, ch);
}

int Curses::delwin(WINDOW *win)
{
	return ::delwin(win);
}

int Curses::wbox(WINDOW *win, chtype verch, chtype horch)
{
	return ::box(win, verch, horch);
}

int Curses::wrefresh(WINDOW *win)
{
	return ::wrefresh(win);
}

int Curses::wnoutrefresh(WINDOW *win)
{
	return ::wnoutrefresh(win);
}

int Curses::doupdate()
{
	return ::doupdate();
}

int Curses::beep()
{
	return ::beep();
}

int Curses::flash()
{
	return ::flash();
}

int Curses::napms(int ms)
{
	return ::napms(ms);
}

int Curses::werase(WINDOW *win)
{
	return ::werase(win);
}
