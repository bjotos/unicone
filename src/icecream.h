#ifndef __ICECREAM_H
#define __ICECREAM_H

void update_falling_icecream();

extern unsigned short falling_icecream_x;
extern unsigned short falling_icecream_y;
extern char           falling_icecream_state;

extern unsigned short stack_top;
extern unsigned short stack_render_top;

extern unsigned short falling_stacked_x;
extern unsigned short falling_stacked_y;
extern char           falling_stacked_state;

#endif
