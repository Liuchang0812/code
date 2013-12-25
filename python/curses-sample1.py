#! /usr/bin/env python
#-*- coding=UTF-8 -*-

import curses
curses.initscr();

pad = curses.newpad(100,100)
for y in range(0, 100):
    for x in range(0, 100):
        try:
            pad.addch(y,x, ord('a') + (x*x + y*y) % 26)
        except curses.error:
            pass
pad.refresh(0,0,5,5,20,75)


