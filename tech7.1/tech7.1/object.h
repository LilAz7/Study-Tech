class object
{
private:
	float pos_x;
	float pos_y;
	float speed_x;
	float speed_y;
	float border_up;
	float border_dn;
	float border_rg;
	float border_lf;
public:
	object()
	{
		pos_x = 0;
		pos_y = 0;
		speed_x = 0;
		speed_y = 0;
		border_up = -10;
		border_dn = 10;
		border_rg = 10;
		border_lf = -10;
	}
	object(float x, float y, float sx, float sy, float bu, float bd, float br, float bl)
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
	void set(float x, float y, float sx, float sy, float bu, float bd, float br, float bl);
	void update();
	float get_x();
	float get_y();
}; 
