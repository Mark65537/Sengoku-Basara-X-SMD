#include <genesis.h>
#include "gfx.h"
#include "sprites.h"

Sprite* spr_san;

void init(){
	    
    VDP_init();// Инициализация SGDK
	JOY_init();//Initialize joypad 
	SPR_init();//Initialize sprite engine in order to use them
}

void update(){
	

	VDP_waitVSync();
}

int main()
{
	// VDP_drawText("Hello Sega World!", 10, 13);

	init();

	PAL_setPalette(PAL3, spr_yuk.palette->data, DMA);
    spr_san = SPR_addSprite(&spr_yuk, 0,  0, TILE_ATTR(PAL3, 0, FALSE, FALSE));
	while(1)
	{   
		SPR_update();
        SYS_doVBlankProcess();     
		update();
	}
	return (0);
}
