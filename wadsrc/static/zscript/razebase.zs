
enum EGameType
{
	GAMEFLAG_DUKE       = 0x00000001,
	GAMEFLAG_NAM        = 0x00000002,
	GAMEFLAG_NAPALM     = 0x00000004,
	GAMEFLAG_WW2GI      = 0x00000008,
	GAMEFLAG_ADDON      = 0x00000010,
	GAMEFLAG_SHAREWARE  = 0x00000020,
	GAMEFLAG_DUKEBETA   = 0x00000060, // includes 0x20 since it's a shareware beta
	GAMEFLAG_PLUTOPAK	= 0x00000080,
	GAMEFLAG_RR         = 0x00000100,
	GAMEFLAG_RRRA       = 0x00000200,
	GAMEFLAG_RRALL		= GAMEFLAG_RR | GAMEFLAG_RRRA,
	GAMEFLAG_BLOOD      = 0x00000800,
	GAMEFLAG_SW			= 0x00001000,
	GAMEFLAG_POWERSLAVE	= 0x00002000,
	GAMEFLAG_EXHUMED	= 0x00004000,
	GAMEFLAG_PSEXHUMED  = GAMEFLAG_POWERSLAVE | GAMEFLAG_EXHUMED,	// the two games really are the same, except for the name and the publisher.
	GAMEFLAG_WORLDTOUR = 0x00008000,
	GAMEFLAG_DUKEDC = 0x00010000,
	GAMEFLAGMASK        = 0x0000FFFF, // flags allowed from grpinfo

	// We still need these for the parsers.
	GAMEFLAG_FURY = 0,
	GAMEFLAG_DEER = 0,

};


/*
struct TileFiles
{
	native static TextureID GetTexture(int tile, bool animate = false);
}
*/
