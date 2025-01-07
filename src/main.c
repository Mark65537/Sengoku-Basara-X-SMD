#include <genesis.h>
#include "gfx.h"

void init(){
	    
    VDP_init();// Инициализация SGDK
	// Загрузка изображения в VRAM
     // VDP_drawImageEx(BG_B, &main_bg, TILE_ATTR_FULL(PAL0, FALSE, FALSE, FALSE, 0), 0, 0, FALSE, TRUE);
}

void update(){
	

	VDP_waitVSync();
}

int main()
{
	// VDP_drawText("Hello Sega World!", 10, 13);

	init();

	while(1)
	{        
		update();
	}
	return (0);
}
