#include "object.h"

float object::get_x()
{
	return pos_x;
}
float object::get_y()
{
	return pos_y;
}
void object::set(float x, float y, float sx, float sy, float bu, float bd, float br, float bl)
{
	pos_x = x;
	pos_y = y;
	speed_x = sx;
	speed_y = sy;
	border_up = bu;
	border_dn = bd;
	border_rg = br;
	border_lf = bl;
}
void object::update()
{
	pos_x = pos_x + speed_x;
	pos_y = pos_y + speed_y;
	if (pos_x >= border_rg || pos_x <= border_lf) speed_x = -speed_x;
	if (pos_y >= border_dn || pos_y <= border_up) speed_y = -speed_y;
}