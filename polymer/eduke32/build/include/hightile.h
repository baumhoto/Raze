#ifndef HIGHTILE_PRIV_H
#define HIGHTILE_PRIV_H

struct hicskybox_t {
    int ignore;
    char *face[6];
};

typedef struct hicreplc_t {
    struct hicreplc_t *next;
    char *filename;
    struct hicskybox_t *skybox;
    char palnum, ignore, flags, filler;
    float alphacut, xscale, yscale, specpower, specfactor;
} hicreplctyp;

extern palette_t hictinting[MAXPALOOKUPS];
extern hicreplctyp *hicreplc[MAXTILES];
extern char hicfirstinit;

typedef struct texcachehead_t
{
    char magic[4];	// 'PMST', was 'Polymost'
    int xdim, ydim;	// of image, unpadded
    int flags;		// 1 = !2^x, 2 = has alpha, 4 = lzw compressed
    int quality;    // r_downsize at the time the cache was written
} texcacheheader;

typedef struct texcachepic_t
{
    int size;
    int format;
    int xdim, ydim;	// of mipmap (possibly padded)
    int border, depth;
} texcachepicture;

hicreplctyp * hicfindsubst(int picnum, int palnum, int skybox);

static inline int have_basepal_tint(void)
{
    return (hictinting[MAXPALOOKUPS-1].r != 255 ||
            hictinting[MAXPALOOKUPS-1].g != 255 ||
            hictinting[MAXPALOOKUPS-1].b != 255);
}

static inline void hictinting_apply(float *color, int32_t palnum)
{
    color[0] *= (float)hictinting[palnum].r / 255.0;
    color[1] *= (float)hictinting[palnum].g / 255.0;
    color[2] *= (float)hictinting[palnum].b / 255.0;
}

static inline void hictinting_apply_ub(uint8_t *color, int32_t palnum)
{
    color[0] *= (float)hictinting[palnum].r / 255.0;
    color[1] *= (float)hictinting[palnum].g / 255.0;
    color[2] *= (float)hictinting[palnum].b / 255.0;
}

// texcacheheader cachead.flags bits
enum
{
    CACHEAD_NONPOW2 = 1,
    CACHEAD_HASALPHA = 2,
    CACHEAD_COMPRESSED = 4,
};

// hicreplctyp hicr->flags bits
enum
{
    HICR_NOSAVE = 1,

    HICR_NOCOMPRESS = 16,
};

// hictinting[].f / gloadtile_hi() and daskinloader() <effect> arg bits
enum
{
    HICTINT_GRAYSCALE = 1,
    HICTINT_INVERT = 2,
    HICTINT_COLORIZE = 4,
    HICTINT_USEONART = 8,

    HICEFFECTMASK = (1|2|4|8),
};

#endif
