
struct HeaderVAP
{
	char Unknown[16];
	int16_t Width;
	int16_t Height;
	BYTE Format;
	char Unknown2[71];
};

/*
	struct HeaderDAT
	{
		char Unknown[16];
		int16_t Width;
		int16_t Height;
		BYTE Format;
		char Unknown2[71];
	};
*/

int GetMipSize(TEXTURE_INFO Info);

struct DX10Header
{
	void SetFormat(TEXTURE::FORMAT Format)
	{
		switch (Format)
		{
		case TEXTURE::BC6U: Type = 0x5F; break;
		case TEXTURE::BC6S: Type = 0x60; break;
		case TEXTURE::BC7: Type = 0x62; break;
		}
	}
	//BYTE Type = 0x5F;//BC6 - U16
	BYTE Type = 0x60;//BC6 - SF16
	//BYTE Type = 0x62;// BC7
	char Unknown1[3] = { 0 };
	char Unknown2 = 3;
	char Unknown3[7] = { 0 };
	char Unknown4 = 1;
	char Unknown5[7] = { 0 };
};
