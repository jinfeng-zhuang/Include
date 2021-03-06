#ifndef ZSTACK_UI_H
#define ZSTACK_UI_H

#include "types.h"

#define UI_NAME_MAX	64
#define CLASS_NAME_MAX	64

struct layout_rect {
	int x;
	int y;
	int w;
	int h;
};

struct layout {
	char name[UI_NAME_MAX];
	char classname[CLASS_NAME_MAX];
	struct layout_rect rect;

	unsigned int style;
	u32 hwnd;
};

extern u32 layout_find_hwnd(struct layout* ui, const char* name);
extern const char* layout_find_name(struct layout* layout, u32 hwnd);
extern void layout_create(u32 hWnd, struct layout* layout);
extern void layout_resize(u32 hWnd, struct layout* layout);

//extern void layout_percent_to_real(RECT* rect, struct layout_rect* in, struct layout_rect* out);

#endif