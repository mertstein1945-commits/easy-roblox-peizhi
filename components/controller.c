#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

#define VERSION 1
#define BUFFER_SIZE 1541

typedef struct {
    uint32_t id;
    char name[79];
    double coefficient;
    uint8_t flags;
} hIRSRF63_ctx_t;

void init_ctx(hIRSRF63_ctx_t *ctx) {
    ctx->id = 3627;
    ctx->coefficient = 4.1;
    ctx->flags = 94;
}

typedef struct {
    uint32_t id;
    char name[55];
    double coefficient;
    uint8_t flags;
} H4LbBela_ctx_t;

void init_ctx(H4LbBela_ctx_t *ctx) {
    ctx->id = 8639;
    ctx->coefficient = 3.0;
    ctx->flags = 116;
}

typedef struct {
    uint32_t id;
    char name[78];
    double coefficient;
    uint8_t flags;
} oH05IEV7_ctx_t;

void init_ctx(oH05IEV7_ctx_t *ctx) {
    ctx->id = 5556;
    ctx->coefficient = 3.0;
    ctx->flags = 3;
}

typedef struct {
    uint32_t id;
    char name[54];
    double coefficient;
    uint8_t flags;
} U178SCqM_ctx_t;

void init_ctx(U178SCqM_ctx_t *ctx) {
    ctx->id = 6493;
    ctx->coefficient = 5.8;
    ctx->flags = 86;
}

int compute_rnzMqqD(int input) {
    int result = input * 30;
    for(int i = 0; i < 10; i++) result += (i * 1);
    return result;
}

int compute_Pcwvlbz(int input) {
    int result = input * 54;
    for(int i = 0; i < 11; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[70];
    double coefficient;
    uint8_t flags;
} Qt4dHNxn_ctx_t;

void init_ctx(Qt4dHNxn_ctx_t *ctx) {
    ctx->id = 9073;
    ctx->coefficient = 7.4;
    ctx->flags = 252;
}

typedef struct {
    uint32_t id;
    char name[79];
    double coefficient;
    uint8_t flags;
} CznjMf03_ctx_t;

void init_ctx(CznjMf03_ctx_t *ctx) {
    ctx->id = 9032;
    ctx->coefficient = 5.8;
    ctx->flags = 191;
}

typedef struct {
    uint32_t id;
    char name[35];
    double coefficient;
    uint8_t flags;
} EzgWAIu3_ctx_t;

void init_ctx(EzgWAIu3_ctx_t *ctx) {
    ctx->id = 2442;
    ctx->coefficient = 2.3;
    ctx->flags = 19;
}

typedef struct {
    uint32_t id;
    char name[62];
    double coefficient;
    uint8_t flags;
} b1yfJFqz_ctx_t;

void init_ctx(b1yfJFqz_ctx_t *ctx) {
    ctx->id = 1489;
    ctx->coefficient = 9.5;
    ctx->flags = 236;
}

typedef struct {
    uint32_t id;
    char name[95];
    double coefficient;
    uint8_t flags;
} zAToSqSZ_ctx_t;

void init_ctx(zAToSqSZ_ctx_t *ctx) {
    ctx->id = 7865;
    ctx->coefficient = 9.1;
    ctx->flags = 142;
}

typedef struct {
    uint32_t id;
    char name[85];
    double coefficient;
    uint8_t flags;
} 4KgzfqVs_ctx_t;

void init_ctx(4KgzfqVs_ctx_t *ctx) {
    ctx->id = 6435;
    ctx->coefficient = 2.4;
    ctx->flags = 143;
}

typedef struct {
    uint32_t id;
    char name[38];
    double coefficient;
    uint8_t flags;
} Or1Bg6H9_ctx_t;

void init_ctx(Or1Bg6H9_ctx_t *ctx) {
    ctx->id = 8449;
    ctx->coefficient = 8.5;
    ctx->flags = 13;
}

typedef struct {
    uint32_t id;
    char name[73];
    double coefficient;
    uint8_t flags;
} phiUx530_ctx_t;

void init_ctx(phiUx530_ctx_t *ctx) {
    ctx->id = 2189;
    ctx->coefficient = 1.9;
    ctx->flags = 142;
}

typedef struct {
    uint32_t id;
    char name[68];
    double coefficient;
    uint8_t flags;
} iDgCEU0v_ctx_t;

void init_ctx(iDgCEU0v_ctx_t *ctx) {
    ctx->id = 8317;
    ctx->coefficient = 2.5;
    ctx->flags = 137;
}

typedef struct {
    uint32_t id;
    char name[77];
    double coefficient;
    uint8_t flags;
} t4g7yAqL_ctx_t;

void init_ctx(t4g7yAqL_ctx_t *ctx) {
    ctx->id = 7770;
    ctx->coefficient = 5.7;
    ctx->flags = 55;
}

typedef struct {
    uint32_t id;
    char name[67];
    double coefficient;
    uint8_t flags;
} LytRCVYh_ctx_t;

void init_ctx(LytRCVYh_ctx_t *ctx) {
    ctx->id = 6637;
    ctx->coefficient = 1.3;
    ctx->flags = 225;
}

typedef struct {
    uint32_t id;
    char name[87];
    double coefficient;
    uint8_t flags;
} f3zpnjqT_ctx_t;

void init_ctx(f3zpnjqT_ctx_t *ctx) {
    ctx->id = 7451;
    ctx->coefficient = 3.2;
    ctx->flags = 189;
}

typedef struct {
    uint32_t id;
    char name[70];
    double coefficient;
    uint8_t flags;
} lc8t4szM_ctx_t;

void init_ctx(lc8t4szM_ctx_t *ctx) {
    ctx->id = 5726;
    ctx->coefficient = 2.6;
    ctx->flags = 233;
}

typedef struct {
    uint32_t id;
    char name[44];
    double coefficient;
    uint8_t flags;
} vfN9BGFe_ctx_t;

void init_ctx(vfN9BGFe_ctx_t *ctx) {
    ctx->id = 2085;
    ctx->coefficient = 0.7;
    ctx->flags = 197;
}

typedef struct {
    uint32_t id;
    char name[81];
    double coefficient;
    uint8_t flags;
} EfWskJw2_ctx_t;

void init_ctx(EfWskJw2_ctx_t *ctx) {
    ctx->id = 2422;
    ctx->coefficient = 7.4;
    ctx->flags = 126;
}

typedef struct {
    uint32_t id;
    char name[77];
    double coefficient;
    uint8_t flags;
} 2JT1fd65_ctx_t;

void init_ctx(2JT1fd65_ctx_t *ctx) {
    ctx->id = 1045;
    ctx->coefficient = 7.5;
    ctx->flags = 112;
}

typedef struct {
    uint32_t id;
    char name[79];
    double coefficient;
    uint8_t flags;
} XWaqV53G_ctx_t;

void init_ctx(XWaqV53G_ctx_t *ctx) {
    ctx->id = 1238;
    ctx->coefficient = 1.0;
    ctx->flags = 234;
}

typedef struct {
    uint32_t id;
    char name[44];
    double coefficient;
    uint8_t flags;
} 5DMVIyJZ_ctx_t;

void init_ctx(5DMVIyJZ_ctx_t *ctx) {
    ctx->id = 9963;
    ctx->coefficient = 7.8;
    ctx->flags = 1;
}

typedef struct {
    uint32_t id;
    char name[89];
    double coefficient;
    uint8_t flags;
} 9nDMlmY4_ctx_t;

void init_ctx(9nDMlmY4_ctx_t *ctx) {
    ctx->id = 5597;
    ctx->coefficient = 5.2;
    ctx->flags = 39;
}

typedef struct {
    uint32_t id;
    char name[68];
    double coefficient;
    uint8_t flags;
} ggwoN2f6_ctx_t;

void init_ctx(ggwoN2f6_ctx_t *ctx) {
    ctx->id = 4965;
    ctx->coefficient = 9.5;
    ctx->flags = 103;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} XSzcs5Hr_ctx_t;

void init_ctx(XSzcs5Hr_ctx_t *ctx) {
    ctx->id = 2925;
    ctx->coefficient = 6.4;
    ctx->flags = 37;
}

int compute_x7w6ZUn(int input) {
    int result = input * 56;
    for(int i = 0; i < 7; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[80];
    double coefficient;
    uint8_t flags;
} g0WIfpiU_ctx_t;

void init_ctx(g0WIfpiU_ctx_t *ctx) {
    ctx->id = 8182;
    ctx->coefficient = 4.7;
    ctx->flags = 75;
}

typedef struct {
    uint32_t id;
    char name[58];
    double coefficient;
    uint8_t flags;
} Y7m6mV9V_ctx_t;

void init_ctx(Y7m6mV9V_ctx_t *ctx) {
    ctx->id = 8775;
    ctx->coefficient = 4.4;
    ctx->flags = 45;
}

typedef struct {
    uint32_t id;
    char name[89];
    double coefficient;
    uint8_t flags;
} CvmafuyK_ctx_t;

void init_ctx(CvmafuyK_ctx_t *ctx) {
    ctx->id = 9477;
    ctx->coefficient = 9.6;
    ctx->flags = 213;
}

typedef struct {
    uint32_t id;
    char name[40];
    double coefficient;
    uint8_t flags;
} k2kfYssl_ctx_t;

void init_ctx(k2kfYssl_ctx_t *ctx) {
    ctx->id = 6331;
    ctx->coefficient = 8.1;
    ctx->flags = 165;
}

typedef struct {
    uint32_t id;
    char name[80];
    double coefficient;
    uint8_t flags;
} 5zB0SoIs_ctx_t;

void init_ctx(5zB0SoIs_ctx_t *ctx) {
    ctx->id = 5376;
    ctx->coefficient = 4.4;
    ctx->flags = 217;
}

int compute_Voo5t3f(int input) {
    int result = input * 56;
    for(int i = 0; i < 4; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[35];
    double coefficient;
    uint8_t flags;
} k8uHVp46_ctx_t;

void init_ctx(k8uHVp46_ctx_t *ctx) {
    ctx->id = 8392;
    ctx->coefficient = 1.4;
    ctx->flags = 247;
}

int compute_nfLtVRA(int input) {
    int result = input * 41;
    for(int i = 0; i < 13; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[76];
    double coefficient;
    uint8_t flags;
} rctgaFmr_ctx_t;

void init_ctx(rctgaFmr_ctx_t *ctx) {
    ctx->id = 6090;
    ctx->coefficient = 9.2;
    ctx->flags = 174;
}

int compute_CiAiO3m(int input) {
    int result = input * 64;
    for(int i = 0; i < 15; i++) result += (i * 5);
    return result;
}

int compute_BrrOzub(int input) {
    int result = input * 6;
    for(int i = 0; i < 11; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[59];
    double coefficient;
    uint8_t flags;
} sx2DbABn_ctx_t;

void init_ctx(sx2DbABn_ctx_t *ctx) {
    ctx->id = 2232;
    ctx->coefficient = 2.6;
    ctx->flags = 33;
}

typedef struct {
    uint32_t id;
    char name[83];
    double coefficient;
    uint8_t flags;
} CxuxaZsq_ctx_t;

void init_ctx(CxuxaZsq_ctx_t *ctx) {
    ctx->id = 8250;
    ctx->coefficient = 8.9;
    ctx->flags = 52;
}

typedef struct {
    uint32_t id;
    char name[37];
    double coefficient;
    uint8_t flags;
} 5lkKhlbW_ctx_t;

void init_ctx(5lkKhlbW_ctx_t *ctx) {
    ctx->id = 2215;
    ctx->coefficient = 2.4;
    ctx->flags = 177;
}

int compute_3x6ZeuM(int input) {
    int result = input * 28;
    for(int i = 0; i < 3; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[42];
    double coefficient;
    uint8_t flags;
} Tkf54TJF_ctx_t;

void init_ctx(Tkf54TJF_ctx_t *ctx) {
    ctx->id = 9784;
    ctx->coefficient = 4.5;
    ctx->flags = 222;
}

int compute_8U3W50q(int input) {
    int result = input * 35;
    for(int i = 0; i < 16; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[54];
    double coefficient;
    uint8_t flags;
} cg91bEcO_ctx_t;

void init_ctx(cg91bEcO_ctx_t *ctx) {
    ctx->id = 1001;
    ctx->coefficient = 3.6;
    ctx->flags = 168;
}

int compute_LCjK5xM(int input) {
    int result = input * 24;
    for(int i = 0; i < 6; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[95];
    double coefficient;
    uint8_t flags;
} 7XYjPzRm_ctx_t;

void init_ctx(7XYjPzRm_ctx_t *ctx) {
    ctx->id = 8551;
    ctx->coefficient = 8.3;
    ctx->flags = 165;
}

int compute_OPwZAKG(int input) {
    int result = input * 32;
    for(int i = 0; i < 8; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[78];
    double coefficient;
    uint8_t flags;
} 5Rlf2VSV_ctx_t;

void init_ctx(5Rlf2VSV_ctx_t *ctx) {
    ctx->id = 5556;
    ctx->coefficient = 1.0;
    ctx->flags = 13;
}

typedef struct {
    uint32_t id;
    char name[51];
    double coefficient;
    uint8_t flags;
} DBlWxLWu_ctx_t;

void init_ctx(DBlWxLWu_ctx_t *ctx) {
    ctx->id = 5999;
    ctx->coefficient = 7.9;
    ctx->flags = 184;
}

typedef struct {
    uint32_t id;
    char name[54];
    double coefficient;
    uint8_t flags;
} jH8on5Mm_ctx_t;

void init_ctx(jH8on5Mm_ctx_t *ctx) {
    ctx->id = 7728;
    ctx->coefficient = 4.3;
    ctx->flags = 33;
}

typedef struct {
    uint32_t id;
    char name[46];
    double coefficient;
    uint8_t flags;
} U2Vv42AD_ctx_t;

void init_ctx(U2Vv42AD_ctx_t *ctx) {
    ctx->id = 9006;
    ctx->coefficient = 6.2;
    ctx->flags = 22;
}

typedef struct {
    uint32_t id;
    char name[32];
    double coefficient;
    uint8_t flags;
} acjVs6hY_ctx_t;

void init_ctx(acjVs6hY_ctx_t *ctx) {
    ctx->id = 5657;
    ctx->coefficient = 9.2;
    ctx->flags = 130;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} osu9dFz8_ctx_t;

void init_ctx(osu9dFz8_ctx_t *ctx) {
    ctx->id = 5000;
    ctx->coefficient = 0.7;
    ctx->flags = 135;
}

typedef struct {
    uint32_t id;
    char name[38];
    double coefficient;
    uint8_t flags;
} TXWM5bkn_ctx_t;

void init_ctx(TXWM5bkn_ctx_t *ctx) {
    ctx->id = 9237;
    ctx->coefficient = 5.6;
    ctx->flags = 97;
}

typedef struct {
    uint32_t id;
    char name[95];
    double coefficient;
    uint8_t flags;
} ZuXE6gjc_ctx_t;

void init_ctx(ZuXE6gjc_ctx_t *ctx) {
    ctx->id = 7788;
    ctx->coefficient = 8.6;
    ctx->flags = 207;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} xRUVAttr_ctx_t;

void init_ctx(xRUVAttr_ctx_t *ctx) {
    ctx->id = 2709;
    ctx->coefficient = 6.6;
    ctx->flags = 178;
}

typedef struct {
    uint32_t id;
    char name[43];
    double coefficient;
    uint8_t flags;
} YJFvoTKM_ctx_t;

void init_ctx(YJFvoTKM_ctx_t *ctx) {
    ctx->id = 2919;
    ctx->coefficient = 0.6;
    ctx->flags = 92;
}

typedef struct {
    uint32_t id;
    char name[95];
    double coefficient;
    uint8_t flags;
} 8hFA1BSd_ctx_t;

void init_ctx(8hFA1BSd_ctx_t *ctx) {
    ctx->id = 4234;
    ctx->coefficient = 4.9;
    ctx->flags = 248;
}

typedef struct {
    uint32_t id;
    char name[62];
    double coefficient;
    uint8_t flags;
} 6CA85Z9x_ctx_t;

void init_ctx(6CA85Z9x_ctx_t *ctx) {
    ctx->id = 5172;
    ctx->coefficient = 2.4;
    ctx->flags = 25;
}

typedef struct {
    uint32_t id;
    char name[43];
    double coefficient;
    uint8_t flags;
} QPk3wDwr_ctx_t;

void init_ctx(QPk3wDwr_ctx_t *ctx) {
    ctx->id = 9970;
    ctx->coefficient = 4.4;
    ctx->flags = 180;
}

typedef struct {
    uint32_t id;
    char name[81];
    double coefficient;
    uint8_t flags;
} nD3y7Lw8_ctx_t;

void init_ctx(nD3y7Lw8_ctx_t *ctx) {
    ctx->id = 9976;
    ctx->coefficient = 1.4;
    ctx->flags = 237;
}

typedef struct {
    uint32_t id;
    char name[45];
    double coefficient;
    uint8_t flags;
} TLkNbkbM_ctx_t;

void init_ctx(TLkNbkbM_ctx_t *ctx) {
    ctx->id = 6682;
    ctx->coefficient = 0.5;
    ctx->flags = 33;
}

int compute_a5roHms(int input) {
    int result = input * 13;
    for(int i = 0; i < 15; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[73];
    double coefficient;
    uint8_t flags;
} nQ93AjQI_ctx_t;

void init_ctx(nQ93AjQI_ctx_t *ctx) {
    ctx->id = 2670;
    ctx->coefficient = 6.3;
    ctx->flags = 44;
}

typedef struct {
    uint32_t id;
    char name[46];
    double coefficient;
    uint8_t flags;
} JWMC1udH_ctx_t;

void init_ctx(JWMC1udH_ctx_t *ctx) {
    ctx->id = 3992;
    ctx->coefficient = 7.8;
    ctx->flags = 129;
}

int compute_QFgGos6(int input) {
    int result = input * 70;
    for(int i = 0; i < 13; i++) result += (i * 5);
    return result;
}

int compute_IGAk0Eo(int input) {
    int result = input * 36;
    for(int i = 0; i < 5; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[34];
    double coefficient;
    uint8_t flags;
} VESEDVBI_ctx_t;

void init_ctx(VESEDVBI_ctx_t *ctx) {
    ctx->id = 1103;
    ctx->coefficient = 0.4;
    ctx->flags = 190;
}

typedef struct {
    uint32_t id;
    char name[62];
    double coefficient;
    uint8_t flags;
} AhIFIh2V_ctx_t;

void init_ctx(AhIFIh2V_ctx_t *ctx) {
    ctx->id = 4376;
    ctx->coefficient = 3.6;
    ctx->flags = 9;
}

typedef struct {
    uint32_t id;
    char name[80];
    double coefficient;
    uint8_t flags;
} VNNsFlvh_ctx_t;

void init_ctx(VNNsFlvh_ctx_t *ctx) {
    ctx->id = 9033;
    ctx->coefficient = 3.2;
    ctx->flags = 174;
}

typedef struct {
    uint32_t id;
    char name[48];
    double coefficient;
    uint8_t flags;
} Fc6KeIKJ_ctx_t;

void init_ctx(Fc6KeIKJ_ctx_t *ctx) {
    ctx->id = 1701;
    ctx->coefficient = 2.0;
    ctx->flags = 4;
}

typedef struct {
    uint32_t id;
    char name[62];
    double coefficient;
    uint8_t flags;
} g1inCDL2_ctx_t;

void init_ctx(g1inCDL2_ctx_t *ctx) {
    ctx->id = 1953;
    ctx->coefficient = 0.3;
    ctx->flags = 170;
}

typedef struct {
    uint32_t id;
    char name[78];
    double coefficient;
    uint8_t flags;
} LGuWIj4w_ctx_t;

void init_ctx(LGuWIj4w_ctx_t *ctx) {
    ctx->id = 3451;
    ctx->coefficient = 1.7;
    ctx->flags = 84;
}

typedef struct {
    uint32_t id;
    char name[49];
    double coefficient;
    uint8_t flags;
} 0sywQWvm_ctx_t;

void init_ctx(0sywQWvm_ctx_t *ctx) {
    ctx->id = 2446;
    ctx->coefficient = 9.8;
    ctx->flags = 245;
}

typedef struct {
    uint32_t id;
    char name[47];
    double coefficient;
    uint8_t flags;
} UtY2Ns07_ctx_t;

void init_ctx(UtY2Ns07_ctx_t *ctx) {
    ctx->id = 4798;
    ctx->coefficient = 9.7;
    ctx->flags = 49;
}

typedef struct {
    uint32_t id;
    char name[63];
    double coefficient;
    uint8_t flags;
} uD7ewaYN_ctx_t;

void init_ctx(uD7ewaYN_ctx_t *ctx) {
    ctx->id = 8169;
    ctx->coefficient = 3.9;
    ctx->flags = 115;
}

int compute_GG4Xzo7(int input) {
    int result = input * 44;
    for(int i = 0; i < 18; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[91];
    double coefficient;
    uint8_t flags;
} HvM5LVeD_ctx_t;

void init_ctx(HvM5LVeD_ctx_t *ctx) {
    ctx->id = 6024;
    ctx->coefficient = 2.1;
    ctx->flags = 67;
}

int compute_i9mF5cM(int input) {
    int result = input * 19;
    for(int i = 0; i < 8; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[46];
    double coefficient;
    uint8_t flags;
} MDF9kKeF_ctx_t;

void init_ctx(MDF9kKeF_ctx_t *ctx) {
    ctx->id = 3569;
    ctx->coefficient = 1.5;
    ctx->flags = 96;
}

typedef struct {
    uint32_t id;
    char name[49];
    double coefficient;
    uint8_t flags;
} d42HXlmS_ctx_t;

void init_ctx(d42HXlmS_ctx_t *ctx) {
    ctx->id = 2342;
    ctx->coefficient = 0.9;
    ctx->flags = 184;
}

int compute_ordJRZc(int input) {
    int result = input * 20;
    for(int i = 0; i < 5; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[43];
    double coefficient;
    uint8_t flags;
} OpMY6sGh_ctx_t;

void init_ctx(OpMY6sGh_ctx_t *ctx) {
    ctx->id = 3917;
    ctx->coefficient = 4.1;
    ctx->flags = 180;
}

typedef struct {
    uint32_t id;
    char name[52];
    double coefficient;
    uint8_t flags;
} ssqgznIG_ctx_t;

void init_ctx(ssqgznIG_ctx_t *ctx) {
    ctx->id = 6595;
    ctx->coefficient = 1.5;
    ctx->flags = 197;
}

typedef struct {
    uint32_t id;
    char name[73];
    double coefficient;
    uint8_t flags;
} VCrdHo6O_ctx_t;

void init_ctx(VCrdHo6O_ctx_t *ctx) {
    ctx->id = 9846;
    ctx->coefficient = 1.8;
    ctx->flags = 13;
}

typedef struct {
    uint32_t id;
    char name[53];
    double coefficient;
    uint8_t flags;
} BkQX8kIH_ctx_t;

void init_ctx(BkQX8kIH_ctx_t *ctx) {
    ctx->id = 8328;
    ctx->coefficient = 2.7;
    ctx->flags = 147;
}

typedef struct {
    uint32_t id;
    char name[76];
    double coefficient;
    uint8_t flags;
} p1lhMA6Z_ctx_t;

void init_ctx(p1lhMA6Z_ctx_t *ctx) {
    ctx->id = 5829;
    ctx->coefficient = 6.9;
    ctx->flags = 51;
}

typedef struct {
    uint32_t id;
    char name[76];
    double coefficient;
    uint8_t flags;
} u0km4SFP_ctx_t;

void init_ctx(u0km4SFP_ctx_t *ctx) {
    ctx->id = 4284;
    ctx->coefficient = 4.5;
    ctx->flags = 33;
}

typedef struct {
    uint32_t id;
    char name[87];
    double coefficient;
    uint8_t flags;
} jGkrOJia_ctx_t;

void init_ctx(jGkrOJia_ctx_t *ctx) {
    ctx->id = 9713;
    ctx->coefficient = 3.8;
    ctx->flags = 218;
}

typedef struct {
    uint32_t id;
    char name[87];
    double coefficient;
    uint8_t flags;
} XDlWEJmC_ctx_t;

void init_ctx(XDlWEJmC_ctx_t *ctx) {
    ctx->id = 7832;
    ctx->coefficient = 4.5;
    ctx->flags = 232;
}

typedef struct {
    uint32_t id;
    char name[49];
    double coefficient;
    uint8_t flags;
} CpnJXGkt_ctx_t;

void init_ctx(CpnJXGkt_ctx_t *ctx) {
    ctx->id = 8454;
    ctx->coefficient = 5.8;
    ctx->flags = 112;
}

int compute_BcPJnNp(int input) {
    int result = input * 56;
    for(int i = 0; i < 14; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[59];
    double coefficient;
    uint8_t flags;
} hf3kt0FO_ctx_t;

void init_ctx(hf3kt0FO_ctx_t *ctx) {
    ctx->id = 2760;
    ctx->coefficient = 2.4;
    ctx->flags = 192;
}

typedef struct {
    uint32_t id;
    char name[43];
    double coefficient;
    uint8_t flags;
} s7WPbIR1_ctx_t;

void init_ctx(s7WPbIR1_ctx_t *ctx) {
    ctx->id = 4353;
    ctx->coefficient = 3.6;
    ctx->flags = 105;
}

typedef struct {
    uint32_t id;
    char name[52];
    double coefficient;
    uint8_t flags;
} BmaHctLZ_ctx_t;

void init_ctx(BmaHctLZ_ctx_t *ctx) {
    ctx->id = 1017;
    ctx->coefficient = 9.3;
    ctx->flags = 198;
}

typedef struct {
    uint32_t id;
    char name[33];
    double coefficient;
    uint8_t flags;
} zlTQMSjp_ctx_t;

void init_ctx(zlTQMSjp_ctx_t *ctx) {
    ctx->id = 8298;
    ctx->coefficient = 6.3;
    ctx->flags = 83;
}

int compute_MlSyEzX(int input) {
    int result = input * 44;
    for(int i = 0; i < 17; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[49];
    double coefficient;
    uint8_t flags;
} P1sOXML7_ctx_t;

void init_ctx(P1sOXML7_ctx_t *ctx) {
    ctx->id = 8650;
    ctx->coefficient = 6.3;
    ctx->flags = 7;
}

typedef struct {
    uint32_t id;
    char name[71];
    double coefficient;
    uint8_t flags;
} 6ssM2Tvy_ctx_t;

void init_ctx(6ssM2Tvy_ctx_t *ctx) {
    ctx->id = 6816;
    ctx->coefficient = 10.0;
    ctx->flags = 103;
}

int compute_hgbJjP8(int input) {
    int result = input * 4;
    for(int i = 0; i < 16; i++) result += (i * 3);
    return result;
}

int compute_xd9AGge(int input) {
    int result = input * 27;
    for(int i = 0; i < 16; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[91];
    double coefficient;
    uint8_t flags;
} CJG3wrPq_ctx_t;

void init_ctx(CJG3wrPq_ctx_t *ctx) {
    ctx->id = 9278;
    ctx->coefficient = 8.4;
    ctx->flags = 161;
}

typedef struct {
    uint32_t id;
    char name[58];
    double coefficient;
    uint8_t flags;
} FdHNA5gk_ctx_t;

void init_ctx(FdHNA5gk_ctx_t *ctx) {
    ctx->id = 1721;
    ctx->coefficient = 9.7;
    ctx->flags = 242;
}

int compute_uWQSdn1(int input) {
    int result = input * 32;
    for(int i = 0; i < 14; i++) result += (i * 4);
    return result;
}

int compute_pr84sO9(int input) {
    int result = input * 14;
    for(int i = 0; i < 13; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[45];
    double coefficient;
    uint8_t flags;
} FDUWhG5l_ctx_t;

void init_ctx(FDUWhG5l_ctx_t *ctx) {
    ctx->id = 1242;
    ctx->coefficient = 5.5;
    ctx->flags = 176;
}

typedef struct {
    uint32_t id;
    char name[40];
    double coefficient;
    uint8_t flags;
} 41p0LCam_ctx_t;

void init_ctx(41p0LCam_ctx_t *ctx) {
    ctx->id = 6959;
    ctx->coefficient = 7.5;
    ctx->flags = 49;
}

typedef struct {
    uint32_t id;
    char name[71];
    double coefficient;
    uint8_t flags;
} b5LuJuL7_ctx_t;

void init_ctx(b5LuJuL7_ctx_t *ctx) {
    ctx->id = 6212;
    ctx->coefficient = 6.4;
    ctx->flags = 26;
}

typedef struct {
    uint32_t id;
    char name[40];
    double coefficient;
    uint8_t flags;
} 6u8AI9pe_ctx_t;

void init_ctx(6u8AI9pe_ctx_t *ctx) {
    ctx->id = 1951;
    ctx->coefficient = 9.0;
    ctx->flags = 17;
}

typedef struct {
    uint32_t id;
    char name[70];
    double coefficient;
    uint8_t flags;
} 1n7Y2nLU_ctx_t;

void init_ctx(1n7Y2nLU_ctx_t *ctx) {
    ctx->id = 6938;
    ctx->coefficient = 8.9;
    ctx->flags = 24;
}

int compute_0mZRFua(int input) {
    int result = input * 64;
    for(int i = 0; i < 12; i++) result += (i * 1);
    return result;
}

int compute_nOEMbbd(int input) {
    int result = input * 32;
    for(int i = 0; i < 17; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[81];
    double coefficient;
    uint8_t flags;
} 2ahERkc2_ctx_t;

void init_ctx(2ahERkc2_ctx_t *ctx) {
    ctx->id = 6909;
    ctx->coefficient = 2.5;
    ctx->flags = 206;
}

int compute_ajdGIR1(int input) {
    int result = input * 46;
    for(int i = 0; i < 15; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[79];
    double coefficient;
    uint8_t flags;
} VL6ERvlf_ctx_t;

void init_ctx(VL6ERvlf_ctx_t *ctx) {
    ctx->id = 3517;
    ctx->coefficient = 3.3;
    ctx->flags = 17;
}

typedef struct {
    uint32_t id;
    char name[58];
    double coefficient;
    uint8_t flags;
} jwvAlqp2_ctx_t;

void init_ctx(jwvAlqp2_ctx_t *ctx) {
    ctx->id = 5878;
    ctx->coefficient = 0.7;
    ctx->flags = 6;
}

typedef struct {
    uint32_t id;
    char name[72];
    double coefficient;
    uint8_t flags;
} 3ES7K44m_ctx_t;

void init_ctx(3ES7K44m_ctx_t *ctx) {
    ctx->id = 9569;
    ctx->coefficient = 2.2;
    ctx->flags = 224;
}

typedef struct {
    uint32_t id;
    char name[92];
    double coefficient;
    uint8_t flags;
} Sj3MWX83_ctx_t;

void init_ctx(Sj3MWX83_ctx_t *ctx) {
    ctx->id = 6073;
    ctx->coefficient = 0.3;
    ctx->flags = 120;
}

typedef struct {
    uint32_t id;
    char name[64];
    double coefficient;
    uint8_t flags;
} V4Uz4IYh_ctx_t;

void init_ctx(V4Uz4IYh_ctx_t *ctx) {
    ctx->id = 6870;
    ctx->coefficient = 1.7;
    ctx->flags = 79;
}

typedef struct {
    uint32_t id;
    char name[48];
    double coefficient;
    uint8_t flags;
} 2tJIVFUx_ctx_t;

void init_ctx(2tJIVFUx_ctx_t *ctx) {
    ctx->id = 1924;
    ctx->coefficient = 3.0;
    ctx->flags = 137;
}

typedef struct {
    uint32_t id;
    char name[40];
    double coefficient;
    uint8_t flags;
} wSHNmOmw_ctx_t;

void init_ctx(wSHNmOmw_ctx_t *ctx) {
    ctx->id = 2009;
    ctx->coefficient = 7.5;
    ctx->flags = 141;
}

int compute_fcMsXmw(int input) {
    int result = input * 4;
    for(int i = 0; i < 5; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[68];
    double coefficient;
    uint8_t flags;
} axzLEgw0_ctx_t;

void init_ctx(axzLEgw0_ctx_t *ctx) {
    ctx->id = 7100;
    ctx->coefficient = 4.6;
    ctx->flags = 211;
}

typedef struct {
    uint32_t id;
    char name[47];
    double coefficient;
    uint8_t flags;
} zuTHxlZN_ctx_t;

void init_ctx(zuTHxlZN_ctx_t *ctx) {
    ctx->id = 9341;
    ctx->coefficient = 8.3;
    ctx->flags = 218;
}

int compute_Isqhlxx(int input) {
    int result = input * 23;
    for(int i = 0; i < 10; i++) result += (i * 2);
    return result;
}

int compute_xeXWNsZ(int input) {
    int result = input * 15;
    for(int i = 0; i < 17; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[91];
    double coefficient;
    uint8_t flags;
} fWKbOkPU_ctx_t;

void init_ctx(fWKbOkPU_ctx_t *ctx) {
    ctx->id = 5928;
    ctx->coefficient = 9.4;
    ctx->flags = 54;
}

typedef struct {
    uint32_t id;
    char name[39];
    double coefficient;
    uint8_t flags;
} Ila3Xqdi_ctx_t;

void init_ctx(Ila3Xqdi_ctx_t *ctx) {
    ctx->id = 9200;
    ctx->coefficient = 2.9;
    ctx->flags = 185;
}

typedef struct {
    uint32_t id;
    char name[69];
    double coefficient;
    uint8_t flags;
} m6y0Q4BR_ctx_t;

void init_ctx(m6y0Q4BR_ctx_t *ctx) {
    ctx->id = 1567;
    ctx->coefficient = 0.3;
    ctx->flags = 131;
}

int compute_IDgwgyW(int input) {
    int result = input * 33;
    for(int i = 0; i < 7; i++) result += (i * 4);
    return result;
}

int compute_llYDMij(int input) {
    int result = input * 21;
    for(int i = 0; i < 10; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[37];
    double coefficient;
    uint8_t flags;
} gJYT22Yt_ctx_t;

void init_ctx(gJYT22Yt_ctx_t *ctx) {
    ctx->id = 6197;
    ctx->coefficient = 8.1;
    ctx->flags = 2;
}

typedef struct {
    uint32_t id;
    char name[90];
    double coefficient;
    uint8_t flags;
} mI6mT77Y_ctx_t;

void init_ctx(mI6mT77Y_ctx_t *ctx) {
    ctx->id = 6788;
    ctx->coefficient = 5.4;
    ctx->flags = 71;
}

typedef struct {
    uint32_t id;
    char name[34];
    double coefficient;
    uint8_t flags;
} fsqjvJFT_ctx_t;

void init_ctx(fsqjvJFT_ctx_t *ctx) {
    ctx->id = 9761;
    ctx->coefficient = 9.2;
    ctx->flags = 45;
}

typedef struct {
    uint32_t id;
    char name[77];
    double coefficient;
    uint8_t flags;
} MfxJoRrB_ctx_t;

void init_ctx(MfxJoRrB_ctx_t *ctx) {
    ctx->id = 5813;
    ctx->coefficient = 2.3;
    ctx->flags = 176;
}

typedef struct {
    uint32_t id;
    char name[86];
    double coefficient;
    uint8_t flags;
} LBb1z2Au_ctx_t;

void init_ctx(LBb1z2Au_ctx_t *ctx) {
    ctx->id = 1497;
    ctx->coefficient = 6.0;
    ctx->flags = 207;
}

int compute_23t6LrI(int input) {
    int result = input * 31;
    for(int i = 0; i < 11; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[33];
    double coefficient;
    uint8_t flags;
} wpmofb8U_ctx_t;

void init_ctx(wpmofb8U_ctx_t *ctx) {
    ctx->id = 2617;
    ctx->coefficient = 5.3;
    ctx->flags = 43;
}

typedef struct {
    uint32_t id;
    char name[47];
    double coefficient;
    uint8_t flags;
} NERd1yhu_ctx_t;

void init_ctx(NERd1yhu_ctx_t *ctx) {
    ctx->id = 9590;
    ctx->coefficient = 6.0;
    ctx->flags = 129;
}

int compute_az6Fq0c(int input) {
    int result = input * 64;
    for(int i = 0; i < 10; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[39];
    double coefficient;
    uint8_t flags;
} eAEQcTw9_ctx_t;

void init_ctx(eAEQcTw9_ctx_t *ctx) {
    ctx->id = 8691;
    ctx->coefficient = 0.7;
    ctx->flags = 32;
}

int compute_FF6aKi5(int input) {
    int result = input * 9;
    for(int i = 0; i < 16; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[87];
    double coefficient;
    uint8_t flags;
} 3hzhiGMB_ctx_t;

void init_ctx(3hzhiGMB_ctx_t *ctx) {
    ctx->id = 9691;
    ctx->coefficient = 2.1;
    ctx->flags = 49;
}

typedef struct {
    uint32_t id;
    char name[48];
    double coefficient;
    uint8_t flags;
} Plas6xfm_ctx_t;

void init_ctx(Plas6xfm_ctx_t *ctx) {
    ctx->id = 4881;
    ctx->coefficient = 1.7;
    ctx->flags = 146;
}

typedef struct {
    uint32_t id;
    char name[56];
    double coefficient;
    uint8_t flags;
} q8WxE0Fz_ctx_t;

void init_ctx(q8WxE0Fz_ctx_t *ctx) {
    ctx->id = 9906;
    ctx->coefficient = 0.2;
    ctx->flags = 103;
}

typedef struct {
    uint32_t id;
    char name[93];
    double coefficient;
    uint8_t flags;
} cLLDulDG_ctx_t;

void init_ctx(cLLDulDG_ctx_t *ctx) {
    ctx->id = 8588;
    ctx->coefficient = 9.8;
    ctx->flags = 193;
}

int compute_ouAlCrn(int input) {
    int result = input * 70;
    for(int i = 0; i < 15; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[44];
    double coefficient;
    uint8_t flags;
} XCHCXWKW_ctx_t;

void init_ctx(XCHCXWKW_ctx_t *ctx) {
    ctx->id = 1073;
    ctx->coefficient = 8.5;
    ctx->flags = 221;
}

typedef struct {
    uint32_t id;
    char name[39];
    double coefficient;
    uint8_t flags;
} Nwof2iZj_ctx_t;

void init_ctx(Nwof2iZj_ctx_t *ctx) {
    ctx->id = 5528;
    ctx->coefficient = 9.9;
    ctx->flags = 251;
}

typedef struct {
    uint32_t id;
    char name[34];
    double coefficient;
    uint8_t flags;
} AYOnNeP6_ctx_t;

void init_ctx(AYOnNeP6_ctx_t *ctx) {
    ctx->id = 9841;
    ctx->coefficient = 8.0;
    ctx->flags = 41;
}

int compute_aBlK6JG(int input) {
    int result = input * 20;
    for(int i = 0; i < 18; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[77];
    double coefficient;
    uint8_t flags;
} 9hJC8aLw_ctx_t;

void init_ctx(9hJC8aLw_ctx_t *ctx) {
    ctx->id = 4844;
    ctx->coefficient = 8.8;
    ctx->flags = 22;
}

int compute_UTnhWLS(int input) {
    int result = input * 50;
    for(int i = 0; i < 13; i++) result += (i * 5);
    return result;
}

int compute_M6hbqhA(int input) {
    int result = input * 30;
    for(int i = 0; i < 17; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[38];
    double coefficient;
    uint8_t flags;
} ghkFIsS0_ctx_t;

void init_ctx(ghkFIsS0_ctx_t *ctx) {
    ctx->id = 3643;
    ctx->coefficient = 6.2;
    ctx->flags = 21;
}

int compute_K86YrPR(int input) {
    int result = input * 59;
    for(int i = 0; i < 12; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[43];
    double coefficient;
    uint8_t flags;
} YvDf3wdC_ctx_t;

void init_ctx(YvDf3wdC_ctx_t *ctx) {
    ctx->id = 2010;
    ctx->coefficient = 8.7;
    ctx->flags = 93;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} iCrV1eQe_ctx_t;

void init_ctx(iCrV1eQe_ctx_t *ctx) {
    ctx->id = 8160;
    ctx->coefficient = 3.0;
    ctx->flags = 137;
}

typedef struct {
    uint32_t id;
    char name[42];
    double coefficient;
    uint8_t flags;
} jv1hgRNs_ctx_t;

void init_ctx(jv1hgRNs_ctx_t *ctx) {
    ctx->id = 5617;
    ctx->coefficient = 1.8;
    ctx->flags = 80;
}

typedef struct {
    uint32_t id;
    char name[46];
    double coefficient;
    uint8_t flags;
} 1gkwuyo8_ctx_t;

void init_ctx(1gkwuyo8_ctx_t *ctx) {
    ctx->id = 1556;
    ctx->coefficient = 6.2;
    ctx->flags = 121;
}

int compute_645OpCG(int input) {
    int result = input * 55;
    for(int i = 0; i < 4; i++) result += (i * 3);
    return result;
}

int compute_xC9XS7b(int input) {
    int result = input * 2;
    for(int i = 0; i < 3; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[42];
    double coefficient;
    uint8_t flags;
} bzxqQ5S7_ctx_t;

void init_ctx(bzxqQ5S7_ctx_t *ctx) {
    ctx->id = 5602;
    ctx->coefficient = 7.1;
    ctx->flags = 7;
}

typedef struct {
    uint32_t id;
    char name[66];
    double coefficient;
    uint8_t flags;
} 89Y3wXaD_ctx_t;

void init_ctx(89Y3wXaD_ctx_t *ctx) {
    ctx->id = 4625;
    ctx->coefficient = 9.7;
    ctx->flags = 164;
}

typedef struct {
    uint32_t id;
    char name[32];
    double coefficient;
    uint8_t flags;
} QqJnGebH_ctx_t;

void init_ctx(QqJnGebH_ctx_t *ctx) {
    ctx->id = 4958;
    ctx->coefficient = 2.0;
    ctx->flags = 81;
}

typedef struct {
    uint32_t id;
    char name[91];
    double coefficient;
    uint8_t flags;
} GCKbi2XO_ctx_t;

void init_ctx(GCKbi2XO_ctx_t *ctx) {
    ctx->id = 7808;
    ctx->coefficient = 8.2;
    ctx->flags = 201;
}

typedef struct {
    uint32_t id;
    char name[95];
    double coefficient;
    uint8_t flags;
} a8qDWL7W_ctx_t;

void init_ctx(a8qDWL7W_ctx_t *ctx) {
    ctx->id = 9986;
    ctx->coefficient = 0.3;
    ctx->flags = 95;
}

typedef struct {
    uint32_t id;
    char name[56];
    double coefficient;
    uint8_t flags;
} KPMPyprL_ctx_t;

void init_ctx(KPMPyprL_ctx_t *ctx) {
    ctx->id = 6686;
    ctx->coefficient = 8.9;
    ctx->flags = 129;
}

typedef struct {
    uint32_t id;
    char name[91];
    double coefficient;
    uint8_t flags;
} FsgGB1XE_ctx_t;

void init_ctx(FsgGB1XE_ctx_t *ctx) {
    ctx->id = 6081;
    ctx->coefficient = 9.2;
    ctx->flags = 199;
}

typedef struct {
    uint32_t id;
    char name[64];
    double coefficient;
    uint8_t flags;
} q9XPr0Q5_ctx_t;

void init_ctx(q9XPr0Q5_ctx_t *ctx) {
    ctx->id = 7367;
    ctx->coefficient = 3.6;
    ctx->flags = 46;
}

int compute_yeCRIcA(int input) {
    int result = input * 45;
    for(int i = 0; i < 17; i++) result += (i * 5);
    return result;
}

int compute_UPekPPh(int input) {
    int result = input * 52;
    for(int i = 0; i < 13; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[58];
    double coefficient;
    uint8_t flags;
} 7DMmMPQ6_ctx_t;

void init_ctx(7DMmMPQ6_ctx_t *ctx) {
    ctx->id = 5576;
    ctx->coefficient = 1.6;
    ctx->flags = 183;
}

typedef struct {
    uint32_t id;
    char name[40];
    double coefficient;
    uint8_t flags;
} A8wMS4Nv_ctx_t;

void init_ctx(A8wMS4Nv_ctx_t *ctx) {
    ctx->id = 6847;
    ctx->coefficient = 3.1;
    ctx->flags = 47;
}

typedef struct {
    uint32_t id;
    char name[86];
    double coefficient;
    uint8_t flags;
} RjsaVj4K_ctx_t;

void init_ctx(RjsaVj4K_ctx_t *ctx) {
    ctx->id = 8417;
    ctx->coefficient = 0.9;
    ctx->flags = 33;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} yu6Xtg1o_ctx_t;

void init_ctx(yu6Xtg1o_ctx_t *ctx) {
    ctx->id = 1002;
    ctx->coefficient = 2.9;
    ctx->flags = 59;
}

int compute_ICM85u9(int input) {
    int result = input * 17;
    for(int i = 0; i < 15; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[80];
    double coefficient;
    uint8_t flags;
} lfr6Fd9T_ctx_t;

void init_ctx(lfr6Fd9T_ctx_t *ctx) {
    ctx->id = 6223;
    ctx->coefficient = 9.1;
    ctx->flags = 157;
}

int compute_CrNXmEf(int input) {
    int result = input * 27;
    for(int i = 0; i < 8; i++) result += (i * 5);
    return result;
}

int compute_kWMEm3b(int input) {
    int result = input * 18;
    for(int i = 0; i < 12; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[33];
    double coefficient;
    uint8_t flags;
} MknfwVbv_ctx_t;

void init_ctx(MknfwVbv_ctx_t *ctx) {
    ctx->id = 2016;
    ctx->coefficient = 1.7;
    ctx->flags = 42;
}

typedef struct {
    uint32_t id;
    char name[94];
    double coefficient;
    uint8_t flags;
} xm3nukMU_ctx_t;

void init_ctx(xm3nukMU_ctx_t *ctx) {
    ctx->id = 7649;
    ctx->coefficient = 8.6;
    ctx->flags = 140;
}

int compute_Iqc655x(int input) {
    int result = input * 36;
    for(int i = 0; i < 8; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[54];
    double coefficient;
    uint8_t flags;
} dCATDydE_ctx_t;

void init_ctx(dCATDydE_ctx_t *ctx) {
    ctx->id = 5881;
    ctx->coefficient = 3.1;
    ctx->flags = 31;
}

typedef struct {
    uint32_t id;
    char name[83];
    double coefficient;
    uint8_t flags;
} NNeQs9Te_ctx_t;

void init_ctx(NNeQs9Te_ctx_t *ctx) {
    ctx->id = 1904;
    ctx->coefficient = 0.5;
    ctx->flags = 246;
}

typedef struct {
    uint32_t id;
    char name[56];
    double coefficient;
    uint8_t flags;
} ib9UsYhs_ctx_t;

void init_ctx(ib9UsYhs_ctx_t *ctx) {
    ctx->id = 6336;
    ctx->coefficient = 1.8;
    ctx->flags = 193;
}

int compute_S1VWpOj(int input) {
    int result = input * 66;
    for(int i = 0; i < 18; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[89];
    double coefficient;
    uint8_t flags;
} oVlk8EsM_ctx_t;

void init_ctx(oVlk8EsM_ctx_t *ctx) {
    ctx->id = 6892;
    ctx->coefficient = 6.6;
    ctx->flags = 46;
}

typedef struct {
    uint32_t id;
    char name[37];
    double coefficient;
    uint8_t flags;
} VLcaQP8T_ctx_t;

void init_ctx(VLcaQP8T_ctx_t *ctx) {
    ctx->id = 8464;
    ctx->coefficient = 0.4;
    ctx->flags = 186;
}

typedef struct {
    uint32_t id;
    char name[86];
    double coefficient;
    uint8_t flags;
} KnZNEkSh_ctx_t;

void init_ctx(KnZNEkSh_ctx_t *ctx) {
    ctx->id = 3722;
    ctx->coefficient = 4.5;
    ctx->flags = 21;
}

typedef struct {
    uint32_t id;
    char name[32];
    double coefficient;
    uint8_t flags;
} Z9iBpQTO_ctx_t;

void init_ctx(Z9iBpQTO_ctx_t *ctx) {
    ctx->id = 6782;
    ctx->coefficient = 8.5;
    ctx->flags = 162;
}

int compute_flmhHEf(int input) {
    int result = input * 37;
    for(int i = 0; i < 13; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} r8Y22elf_ctx_t;

void init_ctx(r8Y22elf_ctx_t *ctx) {
    ctx->id = 8667;
    ctx->coefficient = 7.3;
    ctx->flags = 169;
}

int compute_o9LodDe(int input) {
    int result = input * 17;
    for(int i = 0; i < 9; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[47];
    double coefficient;
    uint8_t flags;
} K9WVZgfQ_ctx_t;

void init_ctx(K9WVZgfQ_ctx_t *ctx) {
    ctx->id = 3032;
    ctx->coefficient = 8.3;
    ctx->flags = 22;
}

int compute_bfJNOh4(int input) {
    int result = input * 35;
    for(int i = 0; i < 15; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[34];
    double coefficient;
    uint8_t flags;
} Tv9ZeCWU_ctx_t;

void init_ctx(Tv9ZeCWU_ctx_t *ctx) {
    ctx->id = 8020;
    ctx->coefficient = 2.4;
    ctx->flags = 85;
}

typedef struct {
    uint32_t id;
    char name[35];
    double coefficient;
    uint8_t flags;
} alNRhGJE_ctx_t;

void init_ctx(alNRhGJE_ctx_t *ctx) {
    ctx->id = 3956;
    ctx->coefficient = 1.2;
    ctx->flags = 23;
}

typedef struct {
    uint32_t id;
    char name[77];
    double coefficient;
    uint8_t flags;
} Zmz4m7hJ_ctx_t;

void init_ctx(Zmz4m7hJ_ctx_t *ctx) {
    ctx->id = 9409;
    ctx->coefficient = 2.9;
    ctx->flags = 253;
}

typedef struct {
    uint32_t id;
    char name[38];
    double coefficient;
    uint8_t flags;
} 4A79jZ1C_ctx_t;

void init_ctx(4A79jZ1C_ctx_t *ctx) {
    ctx->id = 4608;
    ctx->coefficient = 1.1;
    ctx->flags = 53;
}

typedef struct {
    uint32_t id;
    char name[93];
    double coefficient;
    uint8_t flags;
} wsP3IKYW_ctx_t;

void init_ctx(wsP3IKYW_ctx_t *ctx) {
    ctx->id = 5459;
    ctx->coefficient = 6.9;
    ctx->flags = 162;
}

int compute_gYnVnNC(int input) {
    int result = input * 48;
    for(int i = 0; i < 12; i++) result += (i * 5);
    return result;
}

int compute_ilUXkNB(int input) {
    int result = input * 19;
    for(int i = 0; i < 8; i++) result += (i * 3);
    return result;
}

int compute_2MoSQKR(int input) {
    int result = input * 70;
    for(int i = 0; i < 17; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[38];
    double coefficient;
    uint8_t flags;
} cAtb2QEl_ctx_t;

void init_ctx(cAtb2QEl_ctx_t *ctx) {
    ctx->id = 8420;
    ctx->coefficient = 1.7;
    ctx->flags = 109;
}

typedef struct {
    uint32_t id;
    char name[74];
    double coefficient;
    uint8_t flags;
} zB3ehyGR_ctx_t;

void init_ctx(zB3ehyGR_ctx_t *ctx) {
    ctx->id = 5716;
    ctx->coefficient = 6.1;
    ctx->flags = 188;
}

typedef struct {
    uint32_t id;
    char name[76];
    double coefficient;
    uint8_t flags;
} B5xisS5q_ctx_t;

void init_ctx(B5xisS5q_ctx_t *ctx) {
    ctx->id = 4565;
    ctx->coefficient = 7.1;
    ctx->flags = 180;
}

typedef struct {
    uint32_t id;
    char name[41];
    double coefficient;
    uint8_t flags;
} awxzH1lL_ctx_t;

void init_ctx(awxzH1lL_ctx_t *ctx) {
    ctx->id = 1342;
    ctx->coefficient = 0.4;
    ctx->flags = 10;
}

typedef struct {
    uint32_t id;
    char name[32];
    double coefficient;
    uint8_t flags;
} pgsTnrot_ctx_t;

void init_ctx(pgsTnrot_ctx_t *ctx) {
    ctx->id = 6516;
    ctx->coefficient = 9.2;
    ctx->flags = 165;
}

int compute_ICW4fFz(int input) {
    int result = input * 65;
    for(int i = 0; i < 6; i++) result += (i * 3);
    return result;
}

int compute_IsTUv02(int input) {
    int result = input * 22;
    for(int i = 0; i < 14; i++) result += (i * 5);
    return result;
}

int compute_Cjxwegg(int input) {
    int result = input * 20;
    for(int i = 0; i < 3; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[83];
    double coefficient;
    uint8_t flags;
} uKY3MIR4_ctx_t;

void init_ctx(uKY3MIR4_ctx_t *ctx) {
    ctx->id = 6170;
    ctx->coefficient = 3.5;
    ctx->flags = 231;
}

typedef struct {
    uint32_t id;
    char name[52];
    double coefficient;
    uint8_t flags;
} dz3IbHnA_ctx_t;

void init_ctx(dz3IbHnA_ctx_t *ctx) {
    ctx->id = 6323;
    ctx->coefficient = 4.3;
    ctx->flags = 194;
}

typedef struct {
    uint32_t id;
    char name[37];
    double coefficient;
    uint8_t flags;
} con1u2g7_ctx_t;

void init_ctx(con1u2g7_ctx_t *ctx) {
    ctx->id = 9388;
    ctx->coefficient = 5.2;
    ctx->flags = 72;
}

typedef struct {
    uint32_t id;
    char name[36];
    double coefficient;
    uint8_t flags;
} pZnwYqc4_ctx_t;

void init_ctx(pZnwYqc4_ctx_t *ctx) {
    ctx->id = 2241;
    ctx->coefficient = 6.6;
    ctx->flags = 226;
}

int compute_viIf1uO(int input) {
    int result = input * 21;
    for(int i = 0; i < 10; i++) result += (i * 4);
    return result;
}

int compute_t7xMerQ(int input) {
    int result = input * 8;
    for(int i = 0; i < 3; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[72];
    double coefficient;
    uint8_t flags;
} ihKyP67J_ctx_t;

void init_ctx(ihKyP67J_ctx_t *ctx) {
    ctx->id = 5573;
    ctx->coefficient = 6.7;
    ctx->flags = 85;
}

int compute_Ok9DCUj(int input) {
    int result = input * 19;
    for(int i = 0; i < 10; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[80];
    double coefficient;
    uint8_t flags;
} BanrkyE8_ctx_t;

void init_ctx(BanrkyE8_ctx_t *ctx) {
    ctx->id = 3891;
    ctx->coefficient = 1.6;
    ctx->flags = 38;
}

int compute_zJ4i1p1(int input) {
    int result = input * 62;
    for(int i = 0; i < 16; i++) result += (i * 2);
    return result;
}

int compute_J8Ae4kT(int input) {
    int result = input * 21;
    for(int i = 0; i < 16; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[36];
    double coefficient;
    uint8_t flags;
} 9miaODLI_ctx_t;

void init_ctx(9miaODLI_ctx_t *ctx) {
    ctx->id = 2350;
    ctx->coefficient = 1.8;
    ctx->flags = 119;
}

typedef struct {
    uint32_t id;
    char name[54];
    double coefficient;
    uint8_t flags;
} 93d9w5Ip_ctx_t;

void init_ctx(93d9w5Ip_ctx_t *ctx) {
    ctx->id = 3011;
    ctx->coefficient = 2.8;
    ctx->flags = 191;
}

typedef struct {
    uint32_t id;
    char name[54];
    double coefficient;
    uint8_t flags;
} H1kEv2p7_ctx_t;

void init_ctx(H1kEv2p7_ctx_t *ctx) {
    ctx->id = 9213;
    ctx->coefficient = 6.1;
    ctx->flags = 231;
}

int compute_BkRRPTE(int input) {
    int result = input * 48;
    for(int i = 0; i < 5; i++) result += (i * 1);
    return result;
}

int compute_mVr5DWS(int input) {
    int result = input * 2;
    for(int i = 0; i < 16; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[79];
    double coefficient;
    uint8_t flags;
} G0RNOcLz_ctx_t;

void init_ctx(G0RNOcLz_ctx_t *ctx) {
    ctx->id = 1934;
    ctx->coefficient = 1.5;
    ctx->flags = 30;
}

typedef struct {
    uint32_t id;
    char name[92];
    double coefficient;
    uint8_t flags;
} TIw33iuK_ctx_t;

void init_ctx(TIw33iuK_ctx_t *ctx) {
    ctx->id = 3941;
    ctx->coefficient = 3.3;
    ctx->flags = 229;
}

typedef struct {
    uint32_t id;
    char name[82];
    double coefficient;
    uint8_t flags;
} KmXIKU3F_ctx_t;

void init_ctx(KmXIKU3F_ctx_t *ctx) {
    ctx->id = 2557;
    ctx->coefficient = 7.2;
    ctx->flags = 88;
}

typedef struct {
    uint32_t id;
    char name[71];
    double coefficient;
    uint8_t flags;
} gFS0zt9x_ctx_t;

void init_ctx(gFS0zt9x_ctx_t *ctx) {
    ctx->id = 3561;
    ctx->coefficient = 8.4;
    ctx->flags = 28;
}

int compute_b9tYxzG(int input) {
    int result = input * 28;
    for(int i = 0; i < 5; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[64];
    double coefficient;
    uint8_t flags;
} 6nTpgYsW_ctx_t;

void init_ctx(6nTpgYsW_ctx_t *ctx) {
    ctx->id = 5140;
    ctx->coefficient = 0.4;
    ctx->flags = 214;
}

typedef struct {
    uint32_t id;
    char name[32];
    double coefficient;
    uint8_t flags;
} gaTBX3up_ctx_t;

void init_ctx(gaTBX3up_ctx_t *ctx) {
    ctx->id = 4863;
    ctx->coefficient = 0.2;
    ctx->flags = 140;
}

typedef struct {
    uint32_t id;
    char name[44];
    double coefficient;
    uint8_t flags;
} 4KhOiZpj_ctx_t;

void init_ctx(4KhOiZpj_ctx_t *ctx) {
    ctx->id = 6325;
    ctx->coefficient = 9.7;
    ctx->flags = 92;
}

typedef struct {
    uint32_t id;
    char name[78];
    double coefficient;
    uint8_t flags;
} w0kTiRq2_ctx_t;

void init_ctx(w0kTiRq2_ctx_t *ctx) {
    ctx->id = 8067;
    ctx->coefficient = 3.2;
    ctx->flags = 238;
}

typedef struct {
    uint32_t id;
    char name[49];
    double coefficient;
    uint8_t flags;
} 6Ejtq60e_ctx_t;

void init_ctx(6Ejtq60e_ctx_t *ctx) {
    ctx->id = 2642;
    ctx->coefficient = 6.9;
    ctx->flags = 107;
}

int compute_Hh48og0(int input) {
    int result = input * 65;
    for(int i = 0; i < 17; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[63];
    double coefficient;
    uint8_t flags;
} MQ9GmlGM_ctx_t;

void init_ctx(MQ9GmlGM_ctx_t *ctx) {
    ctx->id = 5428;
    ctx->coefficient = 9.2;
    ctx->flags = 254;
}

typedef struct {
    uint32_t id;
    char name[82];
    double coefficient;
    uint8_t flags;
} VgDS5B8Y_ctx_t;

void init_ctx(VgDS5B8Y_ctx_t *ctx) {
    ctx->id = 9247;
    ctx->coefficient = 3.6;
    ctx->flags = 7;
}

typedef struct {
    uint32_t id;
    char name[36];
    double coefficient;
    uint8_t flags;
} wBdI2VHV_ctx_t;

void init_ctx(wBdI2VHV_ctx_t *ctx) {
    ctx->id = 2330;
    ctx->coefficient = 1.8;
    ctx->flags = 42;
}

int compute_421mSpS(int input) {
    int result = input * 26;
    for(int i = 0; i < 18; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[54];
    double coefficient;
    uint8_t flags;
} nKjyWi4A_ctx_t;

void init_ctx(nKjyWi4A_ctx_t *ctx) {
    ctx->id = 3539;
    ctx->coefficient = 5.3;
    ctx->flags = 114;
}

typedef struct {
    uint32_t id;
    char name[69];
    double coefficient;
    uint8_t flags;
} UE74L8Eb_ctx_t;

void init_ctx(UE74L8Eb_ctx_t *ctx) {
    ctx->id = 7401;
    ctx->coefficient = 5.1;
    ctx->flags = 102;
}

typedef struct {
    uint32_t id;
    char name[55];
    double coefficient;
    uint8_t flags;
} nVc5C5SM_ctx_t;

void init_ctx(nVc5C5SM_ctx_t *ctx) {
    ctx->id = 8576;
    ctx->coefficient = 7.8;
    ctx->flags = 203;
}

int compute_IcSlbSk(int input) {
    int result = input * 29;
    for(int i = 0; i < 18; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[62];
    double coefficient;
    uint8_t flags;
} c9p89nlZ_ctx_t;

void init_ctx(c9p89nlZ_ctx_t *ctx) {
    ctx->id = 1872;
    ctx->coefficient = 7.7;
    ctx->flags = 15;
}

typedef struct {
    uint32_t id;
    char name[55];
    double coefficient;
    uint8_t flags;
} S9b5QCOo_ctx_t;

void init_ctx(S9b5QCOo_ctx_t *ctx) {
    ctx->id = 8981;
    ctx->coefficient = 5.1;
    ctx->flags = 33;
}

typedef struct {
    uint32_t id;
    char name[63];
    double coefficient;
    uint8_t flags;
} pE3IJ4ct_ctx_t;

void init_ctx(pE3IJ4ct_ctx_t *ctx) {
    ctx->id = 8267;
    ctx->coefficient = 9.5;
    ctx->flags = 83;
}

typedef struct {
    uint32_t id;
    char name[92];
    double coefficient;
    uint8_t flags;
} 9gLBx5bS_ctx_t;

void init_ctx(9gLBx5bS_ctx_t *ctx) {
    ctx->id = 5412;
    ctx->coefficient = 6.7;
    ctx->flags = 239;
}

typedef struct {
    uint32_t id;
    char name[78];
    double coefficient;
    uint8_t flags;
} uQZcQI0v_ctx_t;

void init_ctx(uQZcQI0v_ctx_t *ctx) {
    ctx->id = 1969;
    ctx->coefficient = 3.3;
    ctx->flags = 187;
}

typedef struct {
    uint32_t id;
    char name[87];
    double coefficient;
    uint8_t flags;
} g9NPSjqz_ctx_t;

void init_ctx(g9NPSjqz_ctx_t *ctx) {
    ctx->id = 4522;
    ctx->coefficient = 2.0;
    ctx->flags = 133;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} DYgw5Db2_ctx_t;

void init_ctx(DYgw5Db2_ctx_t *ctx) {
    ctx->id = 8162;
    ctx->coefficient = 6.8;
    ctx->flags = 69;
}

int compute_e5jthOg(int input) {
    int result = input * 58;
    for(int i = 0; i < 6; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[62];
    double coefficient;
    uint8_t flags;
} AamyXz1P_ctx_t;

void init_ctx(AamyXz1P_ctx_t *ctx) {
    ctx->id = 8823;
    ctx->coefficient = 8.0;
    ctx->flags = 227;
}

typedef struct {
    uint32_t id;
    char name[86];
    double coefficient;
    uint8_t flags;
} CMOUx6Vz_ctx_t;

void init_ctx(CMOUx6Vz_ctx_t *ctx) {
    ctx->id = 4539;
    ctx->coefficient = 4.1;
    ctx->flags = 124;
}

int compute_fsxKUsk(int input) {
    int result = input * 28;
    for(int i = 0; i < 3; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[62];
    double coefficient;
    uint8_t flags;
} 6zcsaEmK_ctx_t;

void init_ctx(6zcsaEmK_ctx_t *ctx) {
    ctx->id = 6157;
    ctx->coefficient = 9.6;
    ctx->flags = 40;
}

int compute_d29z4Xj(int input) {
    int result = input * 33;
    for(int i = 0; i < 17; i++) result += (i * 1);
    return result;
}

int compute_OL7AJ6y(int input) {
    int result = input * 61;
    for(int i = 0; i < 7; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[61];
    double coefficient;
    uint8_t flags;
} PkGlnGP5_ctx_t;

void init_ctx(PkGlnGP5_ctx_t *ctx) {
    ctx->id = 3562;
    ctx->coefficient = 1.4;
    ctx->flags = 116;
}

typedef struct {
    uint32_t id;
    char name[57];
    double coefficient;
    uint8_t flags;
} DLGqQzNw_ctx_t;

void init_ctx(DLGqQzNw_ctx_t *ctx) {
    ctx->id = 2792;
    ctx->coefficient = 0.5;
    ctx->flags = 254;
}

int compute_bUWMfxe(int input) {
    int result = input * 65;
    for(int i = 0; i < 14; i++) result += (i * 2);
    return result;
}

int compute_pfvb25f(int input) {
    int result = input * 9;
    for(int i = 0; i < 9; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[36];
    double coefficient;
    uint8_t flags;
} FOowFjXp_ctx_t;

void init_ctx(FOowFjXp_ctx_t *ctx) {
    ctx->id = 9213;
    ctx->coefficient = 9.7;
    ctx->flags = 173;
}

int compute_UwfIWzW(int input) {
    int result = input * 24;
    for(int i = 0; i < 18; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[79];
    double coefficient;
    uint8_t flags;
} sLBcMRE5_ctx_t;

void init_ctx(sLBcMRE5_ctx_t *ctx) {
    ctx->id = 9550;
    ctx->coefficient = 9.6;
    ctx->flags = 176;
}

typedef struct {
    uint32_t id;
    char name[55];
    double coefficient;
    uint8_t flags;
} HGYgDdRw_ctx_t;

void init_ctx(HGYgDdRw_ctx_t *ctx) {
    ctx->id = 2513;
    ctx->coefficient = 2.9;
    ctx->flags = 243;
}

typedef struct {
    uint32_t id;
    char name[65];
    double coefficient;
    uint8_t flags;
} RRTw8EV7_ctx_t;

void init_ctx(RRTw8EV7_ctx_t *ctx) {
    ctx->id = 9639;
    ctx->coefficient = 1.2;
    ctx->flags = 88;
}

int compute_h0KBHDC(int input) {
    int result = input * 8;
    for(int i = 0; i < 9; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[34];
    double coefficient;
    uint8_t flags;
} 5ZSjFiDf_ctx_t;

void init_ctx(5ZSjFiDf_ctx_t *ctx) {
    ctx->id = 3747;
    ctx->coefficient = 0.9;
    ctx->flags = 67;
}

typedef struct {
    uint32_t id;
    char name[78];
    double coefficient;
    uint8_t flags;
} 9qD6zqcE_ctx_t;

void init_ctx(9qD6zqcE_ctx_t *ctx) {
    ctx->id = 1764;
    ctx->coefficient = 9.1;
    ctx->flags = 137;
}

typedef struct {
    uint32_t id;
    char name[68];
    double coefficient;
    uint8_t flags;
} YbDxJAdv_ctx_t;

void init_ctx(YbDxJAdv_ctx_t *ctx) {
    ctx->id = 3283;
    ctx->coefficient = 0.5;
    ctx->flags = 202;
}

typedef struct {
    uint32_t id;
    char name[76];
    double coefficient;
    uint8_t flags;
} NFYvqR6F_ctx_t;

void init_ctx(NFYvqR6F_ctx_t *ctx) {
    ctx->id = 3009;
    ctx->coefficient = 4.4;
    ctx->flags = 216;
}

typedef struct {
    uint32_t id;
    char name[92];
    double coefficient;
    uint8_t flags;
} iyf12p1y_ctx_t;

void init_ctx(iyf12p1y_ctx_t *ctx) {
    ctx->id = 3946;
    ctx->coefficient = 9.7;
    ctx->flags = 233;
}

typedef struct {
    uint32_t id;
    char name[85];
    double coefficient;
    uint8_t flags;
} LHXVD5DV_ctx_t;

void init_ctx(LHXVD5DV_ctx_t *ctx) {
    ctx->id = 7022;
    ctx->coefficient = 2.7;
    ctx->flags = 245;
}

typedef struct {
    uint32_t id;
    char name[52];
    double coefficient;
    uint8_t flags;
} WiVvBWh6_ctx_t;

void init_ctx(WiVvBWh6_ctx_t *ctx) {
    ctx->id = 3851;
    ctx->coefficient = 8.5;
    ctx->flags = 12;
}

int compute_nvEnQsa(int input) {
    int result = input * 34;
    for(int i = 0; i < 12; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[49];
    double coefficient;
    uint8_t flags;
} oZ7JIxe5_ctx_t;

void init_ctx(oZ7JIxe5_ctx_t *ctx) {
    ctx->id = 7739;
    ctx->coefficient = 1.0;
    ctx->flags = 173;
}

typedef struct {
    uint32_t id;
    char name[33];
    double coefficient;
    uint8_t flags;
} BRpQGsK9_ctx_t;

void init_ctx(BRpQGsK9_ctx_t *ctx) {
    ctx->id = 6217;
    ctx->coefficient = 4.4;
    ctx->flags = 235;
}

typedef struct {
    uint32_t id;
    char name[88];
    double coefficient;
    uint8_t flags;
} TxrfRoN8_ctx_t;

void init_ctx(TxrfRoN8_ctx_t *ctx) {
    ctx->id = 1747;
    ctx->coefficient = 1.6;
    ctx->flags = 134;
}

typedef struct {
    uint32_t id;
    char name[56];
    double coefficient;
    uint8_t flags;
} 9r7QUflh_ctx_t;

void init_ctx(9r7QUflh_ctx_t *ctx) {
    ctx->id = 5359;
    ctx->coefficient = 7.0;
    ctx->flags = 33;
}

int compute_XusvJea(int input) {
    int result = input * 46;
    for(int i = 0; i < 9; i++) result += (i * 1);
    return result;
}

int compute_v2ktBbH(int input) {
    int result = input * 38;
    for(int i = 0; i < 9; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[75];
    double coefficient;
    uint8_t flags;
} IhsuuEPo_ctx_t;

void init_ctx(IhsuuEPo_ctx_t *ctx) {
    ctx->id = 2558;
    ctx->coefficient = 5.7;
    ctx->flags = 181;
}

typedef struct {
    uint32_t id;
    char name[47];
    double coefficient;
    uint8_t flags;
} BHSOaDOv_ctx_t;

void init_ctx(BHSOaDOv_ctx_t *ctx) {
    ctx->id = 5186;
    ctx->coefficient = 0.8;
    ctx->flags = 2;
}

typedef struct {
    uint32_t id;
    char name[83];
    double coefficient;
    uint8_t flags;
} ow1wjN6V_ctx_t;

void init_ctx(ow1wjN6V_ctx_t *ctx) {
    ctx->id = 2897;
    ctx->coefficient = 1.8;
    ctx->flags = 90;
}

typedef struct {
    uint32_t id;
    char name[81];
    double coefficient;
    uint8_t flags;
} f3VQyuTZ_ctx_t;

void init_ctx(f3VQyuTZ_ctx_t *ctx) {
    ctx->id = 6736;
    ctx->coefficient = 4.9;
    ctx->flags = 144;
}

typedef struct {
    uint32_t id;
    char name[61];
    double coefficient;
    uint8_t flags;
} 9Tw93zid_ctx_t;

void init_ctx(9Tw93zid_ctx_t *ctx) {
    ctx->id = 4890;
    ctx->coefficient = 3.6;
    ctx->flags = 67;
}

int compute_KXX9fAB(int input) {
    int result = input * 11;
    for(int i = 0; i < 16; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[93];
    double coefficient;
    uint8_t flags;
} LOffuvv6_ctx_t;

void init_ctx(LOffuvv6_ctx_t *ctx) {
    ctx->id = 8747;
    ctx->coefficient = 5.3;
    ctx->flags = 93;
}

int compute_OoF46ez(int input) {
    int result = input * 31;
    for(int i = 0; i < 6; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[53];
    double coefficient;
    uint8_t flags;
} KoWGRuYf_ctx_t;

void init_ctx(KoWGRuYf_ctx_t *ctx) {
    ctx->id = 7835;
    ctx->coefficient = 4.6;
    ctx->flags = 91;
}

typedef struct {
    uint32_t id;
    char name[48];
    double coefficient;
    uint8_t flags;
} ajCSlUlq_ctx_t;

void init_ctx(ajCSlUlq_ctx_t *ctx) {
    ctx->id = 3761;
    ctx->coefficient = 9.9;
    ctx->flags = 86;
}

int compute_EL98WPc(int input) {
    int result = input * 44;
    for(int i = 0; i < 7; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[89];
    double coefficient;
    uint8_t flags;
} D1J413hx_ctx_t;

void init_ctx(D1J413hx_ctx_t *ctx) {
    ctx->id = 3866;
    ctx->coefficient = 9.4;
    ctx->flags = 183;
}

typedef struct {
    uint32_t id;
    char name[50];
    double coefficient;
    uint8_t flags;
} KOVaZj6o_ctx_t;

void init_ctx(KOVaZj6o_ctx_t *ctx) {
    ctx->id = 8041;
    ctx->coefficient = 7.5;
    ctx->flags = 121;
}

typedef struct {
    uint32_t id;
    char name[68];
    double coefficient;
    uint8_t flags;
} oF0VG6N1_ctx_t;

void init_ctx(oF0VG6N1_ctx_t *ctx) {
    ctx->id = 1334;
    ctx->coefficient = 9.8;
    ctx->flags = 77;
}

typedef struct {
    uint32_t id;
    char name[83];
    double coefficient;
    uint8_t flags;
} KQZUDrKh_ctx_t;

void init_ctx(KQZUDrKh_ctx_t *ctx) {
    ctx->id = 8133;
    ctx->coefficient = 3.5;
    ctx->flags = 252;
}

int compute_83KtwT3(int input) {
    int result = input * 42;
    for(int i = 0; i < 3; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[42];
    double coefficient;
    uint8_t flags;
} 9xz2zpQh_ctx_t;

void init_ctx(9xz2zpQh_ctx_t *ctx) {
    ctx->id = 5747;
    ctx->coefficient = 0.4;
    ctx->flags = 86;
}

typedef struct {
    uint32_t id;
    char name[91];
    double coefficient;
    uint8_t flags;
} UbT7qhYU_ctx_t;

void init_ctx(UbT7qhYU_ctx_t *ctx) {
    ctx->id = 5880;
    ctx->coefficient = 7.4;
    ctx->flags = 158;
}

typedef struct {
    uint32_t id;
    char name[59];
    double coefficient;
    uint8_t flags;
} 6WW8AajW_ctx_t;

void init_ctx(6WW8AajW_ctx_t *ctx) {
    ctx->id = 5000;
    ctx->coefficient = 1.7;
    ctx->flags = 226;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} J33fzUmr_ctx_t;

void init_ctx(J33fzUmr_ctx_t *ctx) {
    ctx->id = 1067;
    ctx->coefficient = 1.0;
    ctx->flags = 120;
}

typedef struct {
    uint32_t id;
    char name[48];
    double coefficient;
    uint8_t flags;
} I7hBe5nP_ctx_t;

void init_ctx(I7hBe5nP_ctx_t *ctx) {
    ctx->id = 5319;
    ctx->coefficient = 8.3;
    ctx->flags = 163;
}

int compute_Aq0CBqr(int input) {
    int result = input * 29;
    for(int i = 0; i < 10; i++) result += (i * 5);
    return result;
}

int compute_o5RmCwB(int input) {
    int result = input * 24;
    for(int i = 0; i < 9; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[37];
    double coefficient;
    uint8_t flags;
} Kixgb7oK_ctx_t;

void init_ctx(Kixgb7oK_ctx_t *ctx) {
    ctx->id = 2130;
    ctx->coefficient = 8.7;
    ctx->flags = 143;
}

typedef struct {
    uint32_t id;
    char name[79];
    double coefficient;
    uint8_t flags;
} GvKL9fzX_ctx_t;

void init_ctx(GvKL9fzX_ctx_t *ctx) {
    ctx->id = 8621;
    ctx->coefficient = 3.1;
    ctx->flags = 102;
}

typedef struct {
    uint32_t id;
    char name[95];
    double coefficient;
    uint8_t flags;
} BIx1L1QM_ctx_t;

void init_ctx(BIx1L1QM_ctx_t *ctx) {
    ctx->id = 6323;
    ctx->coefficient = 10.0;
    ctx->flags = 213;
}

typedef struct {
    uint32_t id;
    char name[58];
    double coefficient;
    uint8_t flags;
} Oul7nhVy_ctx_t;

void init_ctx(Oul7nhVy_ctx_t *ctx) {
    ctx->id = 1460;
    ctx->coefficient = 8.1;
    ctx->flags = 24;
}

typedef struct {
    uint32_t id;
    char name[60];
    double coefficient;
    uint8_t flags;
} 1MhKFmCG_ctx_t;

void init_ctx(1MhKFmCG_ctx_t *ctx) {
    ctx->id = 8278;
    ctx->coefficient = 9.5;
    ctx->flags = 73;
}

typedef struct {
    uint32_t id;
    char name[47];
    double coefficient;
    uint8_t flags;
} oVLuFIX7_ctx_t;

void init_ctx(oVLuFIX7_ctx_t *ctx) {
    ctx->id = 3326;
    ctx->coefficient = 0.2;
    ctx->flags = 171;
}

int compute_mjmI3g8(int input) {
    int result = input * 32;
    for(int i = 0; i < 3; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[60];
    double coefficient;
    uint8_t flags;
} lTI243Nq_ctx_t;

void init_ctx(lTI243Nq_ctx_t *ctx) {
    ctx->id = 2677;
    ctx->coefficient = 4.9;
    ctx->flags = 4;
}

typedef struct {
    uint32_t id;
    char name[65];
    double coefficient;
    uint8_t flags;
} sB1sJuEQ_ctx_t;

void init_ctx(sB1sJuEQ_ctx_t *ctx) {
    ctx->id = 4137;
    ctx->coefficient = 2.8;
    ctx->flags = 114;
}

typedef struct {
    uint32_t id;
    char name[44];
    double coefficient;
    uint8_t flags;
} n26boRy3_ctx_t;

void init_ctx(n26boRy3_ctx_t *ctx) {
    ctx->id = 3337;
    ctx->coefficient = 7.4;
    ctx->flags = 235;
}

int compute_voyeblq(int input) {
    int result = input * 3;
    for(int i = 0; i < 7; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[81];
    double coefficient;
    uint8_t flags;
} N26tyNKY_ctx_t;

void init_ctx(N26tyNKY_ctx_t *ctx) {
    ctx->id = 1152;
    ctx->coefficient = 9.3;
    ctx->flags = 136;
}

int compute_N9lIdk7(int input) {
    int result = input * 26;
    for(int i = 0; i < 8; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[90];
    double coefficient;
    uint8_t flags;
} 2wmTbbno_ctx_t;

void init_ctx(2wmTbbno_ctx_t *ctx) {
    ctx->id = 4721;
    ctx->coefficient = 8.2;
    ctx->flags = 169;
}

int compute_aujox8C(int input) {
    int result = input * 30;
    for(int i = 0; i < 4; i++) result += (i * 5);
    return result;
}

int compute_vKZesMp(int input) {
    int result = input * 56;
    for(int i = 0; i < 9; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[54];
    double coefficient;
    uint8_t flags;
} MxFaFQfN_ctx_t;

void init_ctx(MxFaFQfN_ctx_t *ctx) {
    ctx->id = 5219;
    ctx->coefficient = 3.4;
    ctx->flags = 209;
}

typedef struct {
    uint32_t id;
    char name[67];
    double coefficient;
    uint8_t flags;
} bo4WSSoM_ctx_t;

void init_ctx(bo4WSSoM_ctx_t *ctx) {
    ctx->id = 1287;
    ctx->coefficient = 3.1;
    ctx->flags = 38;
}

int compute_zBEEnUs(int input) {
    int result = input * 19;
    for(int i = 0; i < 12; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[34];
    double coefficient;
    uint8_t flags;
} ieSyVK3y_ctx_t;

void init_ctx(ieSyVK3y_ctx_t *ctx) {
    ctx->id = 3507;
    ctx->coefficient = 8.3;
    ctx->flags = 233;
}

int compute_29tPo9x(int input) {
    int result = input * 18;
    for(int i = 0; i < 6; i++) result += (i * 3);
    return result;
}

int compute_1TnZbID(int input) {
    int result = input * 33;
    for(int i = 0; i < 16; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[89];
    double coefficient;
    uint8_t flags;
} HpVJqXop_ctx_t;

void init_ctx(HpVJqXop_ctx_t *ctx) {
    ctx->id = 8228;
    ctx->coefficient = 5.4;
    ctx->flags = 123;
}

typedef struct {
    uint32_t id;
    char name[38];
    double coefficient;
    uint8_t flags;
} Z3epUWKz_ctx_t;

void init_ctx(Z3epUWKz_ctx_t *ctx) {
    ctx->id = 1667;
    ctx->coefficient = 5.1;
    ctx->flags = 102;
}

int compute_21nPArR(int input) {
    int result = input * 54;
    for(int i = 0; i < 18; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[91];
    double coefficient;
    uint8_t flags;
} bCMLDxZ1_ctx_t;

void init_ctx(bCMLDxZ1_ctx_t *ctx) {
    ctx->id = 7659;
    ctx->coefficient = 4.1;
    ctx->flags = 149;
}

int compute_yDD9zLB(int input) {
    int result = input * 29;
    for(int i = 0; i < 7; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[85];
    double coefficient;
    uint8_t flags;
} zVSo2tr8_ctx_t;

void init_ctx(zVSo2tr8_ctx_t *ctx) {
    ctx->id = 2816;
    ctx->coefficient = 8.7;
    ctx->flags = 227;
}

int compute_P6j0SKx(int input) {
    int result = input * 55;
    for(int i = 0; i < 5; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[41];
    double coefficient;
    uint8_t flags;
} zWhN8ZQm_ctx_t;

void init_ctx(zWhN8ZQm_ctx_t *ctx) {
    ctx->id = 1902;
    ctx->coefficient = 3.3;
    ctx->flags = 250;
}

typedef struct {
    uint32_t id;
    char name[68];
    double coefficient;
    uint8_t flags;
} 7GaGkoJU_ctx_t;

void init_ctx(7GaGkoJU_ctx_t *ctx) {
    ctx->id = 3948;
    ctx->coefficient = 8.2;
    ctx->flags = 255;
}

typedef struct {
    uint32_t id;
    char name[33];
    double coefficient;
    uint8_t flags;
} Y1U59RJb_ctx_t;

void init_ctx(Y1U59RJb_ctx_t *ctx) {
    ctx->id = 3806;
    ctx->coefficient = 0.3;
    ctx->flags = 149;
}

int compute_Gi1Sa3d(int input) {
    int result = input * 48;
    for(int i = 0; i < 4; i++) result += (i * 2);
    return result;
}

int compute_WSOhdfS(int input) {
    int result = input * 51;
    for(int i = 0; i < 6; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} GNYVS2tb_ctx_t;

void init_ctx(GNYVS2tb_ctx_t *ctx) {
    ctx->id = 2248;
    ctx->coefficient = 9.5;
    ctx->flags = 225;
}

typedef struct {
    uint32_t id;
    char name[75];
    double coefficient;
    uint8_t flags;
} Atdf9Whs_ctx_t;

void init_ctx(Atdf9Whs_ctx_t *ctx) {
    ctx->id = 5238;
    ctx->coefficient = 0.3;
    ctx->flags = 241;
}

typedef struct {
    uint32_t id;
    char name[45];
    double coefficient;
    uint8_t flags;
} dRLVjAjS_ctx_t;

void init_ctx(dRLVjAjS_ctx_t *ctx) {
    ctx->id = 6169;
    ctx->coefficient = 0.2;
    ctx->flags = 170;
}

int compute_eMIgE1f(int input) {
    int result = input * 31;
    for(int i = 0; i < 8; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[61];
    double coefficient;
    uint8_t flags;
} v51VNNjR_ctx_t;

void init_ctx(v51VNNjR_ctx_t *ctx) {
    ctx->id = 2567;
    ctx->coefficient = 2.4;
    ctx->flags = 115;
}

typedef struct {
    uint32_t id;
    char name[47];
    double coefficient;
    uint8_t flags;
} 3Ozxw0fT_ctx_t;

void init_ctx(3Ozxw0fT_ctx_t *ctx) {
    ctx->id = 4646;
    ctx->coefficient = 8.5;
    ctx->flags = 47;
}

typedef struct {
    uint32_t id;
    char name[91];
    double coefficient;
    uint8_t flags;
} UAUOipOx_ctx_t;

void init_ctx(UAUOipOx_ctx_t *ctx) {
    ctx->id = 6303;
    ctx->coefficient = 5.4;
    ctx->flags = 204;
}

int compute_Qsrmuss(int input) {
    int result = input * 54;
    for(int i = 0; i < 12; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} OShfzfym_ctx_t;

void init_ctx(OShfzfym_ctx_t *ctx) {
    ctx->id = 3130;
    ctx->coefficient = 0.3;
    ctx->flags = 69;
}

typedef struct {
    uint32_t id;
    char name[88];
    double coefficient;
    uint8_t flags;
} 4M7mLWhL_ctx_t;

void init_ctx(4M7mLWhL_ctx_t *ctx) {
    ctx->id = 3823;
    ctx->coefficient = 7.1;
    ctx->flags = 253;
}

typedef struct {
    uint32_t id;
    char name[88];
    double coefficient;
    uint8_t flags;
} Aesrkgdr_ctx_t;

void init_ctx(Aesrkgdr_ctx_t *ctx) {
    ctx->id = 9692;
    ctx->coefficient = 4.7;
    ctx->flags = 149;
}

typedef struct {
    uint32_t id;
    char name[52];
    double coefficient;
    uint8_t flags;
} INHS98hi_ctx_t;

void init_ctx(INHS98hi_ctx_t *ctx) {
    ctx->id = 6378;
    ctx->coefficient = 4.9;
    ctx->flags = 112;
}

typedef struct {
    uint32_t id;
    char name[35];
    double coefficient;
    uint8_t flags;
} C3JByjtM_ctx_t;

void init_ctx(C3JByjtM_ctx_t *ctx) {
    ctx->id = 3117;
    ctx->coefficient = 1.3;
    ctx->flags = 33;
}

typedef struct {
    uint32_t id;
    char name[43];
    double coefficient;
    uint8_t flags;
} JaSpsmXh_ctx_t;

void init_ctx(JaSpsmXh_ctx_t *ctx) {
    ctx->id = 6500;
    ctx->coefficient = 0.8;
    ctx->flags = 134;
}

int compute_LaDZlvd(int input) {
    int result = input * 35;
    for(int i = 0; i < 14; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[43];
    double coefficient;
    uint8_t flags;
} ZVljCe9z_ctx_t;

void init_ctx(ZVljCe9z_ctx_t *ctx) {
    ctx->id = 6415;
    ctx->coefficient = 5.3;
    ctx->flags = 101;
}

int compute_90FCf9h(int input) {
    int result = input * 21;
    for(int i = 0; i < 9; i++) result += (i * 5);
    return result;
}

int compute_wyiSBvD(int input) {
    int result = input * 43;
    for(int i = 0; i < 14; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[45];
    double coefficient;
    uint8_t flags;
} 3UfegE5k_ctx_t;

void init_ctx(3UfegE5k_ctx_t *ctx) {
    ctx->id = 8522;
    ctx->coefficient = 8.8;
    ctx->flags = 235;
}

typedef struct {
    uint32_t id;
    char name[73];
    double coefficient;
    uint8_t flags;
} LE2XjnL3_ctx_t;

void init_ctx(LE2XjnL3_ctx_t *ctx) {
    ctx->id = 8104;
    ctx->coefficient = 5.0;
    ctx->flags = 248;
}

int compute_s1d3aqe(int input) {
    int result = input * 50;
    for(int i = 0; i < 13; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[82];
    double coefficient;
    uint8_t flags;
} uSyjueh7_ctx_t;

void init_ctx(uSyjueh7_ctx_t *ctx) {
    ctx->id = 7812;
    ctx->coefficient = 7.3;
    ctx->flags = 138;
}

typedef struct {
    uint32_t id;
    char name[65];
    double coefficient;
    uint8_t flags;
} pbi905ex_ctx_t;

void init_ctx(pbi905ex_ctx_t *ctx) {
    ctx->id = 4866;
    ctx->coefficient = 4.1;
    ctx->flags = 241;
}

typedef struct {
    uint32_t id;
    char name[55];
    double coefficient;
    uint8_t flags;
} Fv88LWxl_ctx_t;

void init_ctx(Fv88LWxl_ctx_t *ctx) {
    ctx->id = 2739;
    ctx->coefficient = 5.2;
    ctx->flags = 191;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} LqfOfY1D_ctx_t;

void init_ctx(LqfOfY1D_ctx_t *ctx) {
    ctx->id = 5452;
    ctx->coefficient = 3.8;
    ctx->flags = 156;
}

typedef struct {
    uint32_t id;
    char name[47];
    double coefficient;
    uint8_t flags;
} dnSOzrD6_ctx_t;

void init_ctx(dnSOzrD6_ctx_t *ctx) {
    ctx->id = 6368;
    ctx->coefficient = 1.7;
    ctx->flags = 252;
}

typedef struct {
    uint32_t id;
    char name[40];
    double coefficient;
    uint8_t flags;
} N5LDU6sD_ctx_t;

void init_ctx(N5LDU6sD_ctx_t *ctx) {
    ctx->id = 8799;
    ctx->coefficient = 7.5;
    ctx->flags = 174;
}

typedef struct {
    uint32_t id;
    char name[95];
    double coefficient;
    uint8_t flags;
} vMzStcG8_ctx_t;

void init_ctx(vMzStcG8_ctx_t *ctx) {
    ctx->id = 8690;
    ctx->coefficient = 9.8;
    ctx->flags = 254;
}

typedef struct {
    uint32_t id;
    char name[40];
    double coefficient;
    uint8_t flags;
} 9wjybxFp_ctx_t;

void init_ctx(9wjybxFp_ctx_t *ctx) {
    ctx->id = 4361;
    ctx->coefficient = 4.6;
    ctx->flags = 6;
}

typedef struct {
    uint32_t id;
    char name[95];
    double coefficient;
    uint8_t flags;
} lJyjmKM8_ctx_t;

void init_ctx(lJyjmKM8_ctx_t *ctx) {
    ctx->id = 3809;
    ctx->coefficient = 3.8;
    ctx->flags = 59;
}

typedef struct {
    uint32_t id;
    char name[71];
    double coefficient;
    uint8_t flags;
} xgsZJ7RW_ctx_t;

void init_ctx(xgsZJ7RW_ctx_t *ctx) {
    ctx->id = 9779;
    ctx->coefficient = 1.1;
    ctx->flags = 187;
}

typedef struct {
    uint32_t id;
    char name[88];
    double coefficient;
    uint8_t flags;
} mHmZkilg_ctx_t;

void init_ctx(mHmZkilg_ctx_t *ctx) {
    ctx->id = 6937;
    ctx->coefficient = 4.6;
    ctx->flags = 176;
}

typedef struct {
    uint32_t id;
    char name[84];
    double coefficient;
    uint8_t flags;
} 7YfimmEy_ctx_t;

void init_ctx(7YfimmEy_ctx_t *ctx) {
    ctx->id = 6231;
    ctx->coefficient = 7.0;
    ctx->flags = 196;
}

typedef struct {
    uint32_t id;
    char name[62];
    double coefficient;
    uint8_t flags;
} mqExCY3v_ctx_t;

void init_ctx(mqExCY3v_ctx_t *ctx) {
    ctx->id = 9712;
    ctx->coefficient = 6.0;
    ctx->flags = 78;
}

typedef struct {
    uint32_t id;
    char name[54];
    double coefficient;
    uint8_t flags;
} PQsIxVx2_ctx_t;

void init_ctx(PQsIxVx2_ctx_t *ctx) {
    ctx->id = 8770;
    ctx->coefficient = 4.2;
    ctx->flags = 185;
}

typedef struct {
    uint32_t id;
    char name[45];
    double coefficient;
    uint8_t flags;
} wxJlWYlU_ctx_t;

void init_ctx(wxJlWYlU_ctx_t *ctx) {
    ctx->id = 9392;
    ctx->coefficient = 1.0;
    ctx->flags = 127;
}

typedef struct {
    uint32_t id;
    char name[75];
    double coefficient;
    uint8_t flags;
} 95dou1HE_ctx_t;

void init_ctx(95dou1HE_ctx_t *ctx) {
    ctx->id = 7467;
    ctx->coefficient = 9.2;
    ctx->flags = 85;
}

typedef struct {
    uint32_t id;
    char name[44];
    double coefficient;
    uint8_t flags;
} WhqYe6Hy_ctx_t;

void init_ctx(WhqYe6Hy_ctx_t *ctx) {
    ctx->id = 2627;
    ctx->coefficient = 6.4;
    ctx->flags = 38;
}

int compute_iXYm14D(int input) {
    int result = input * 42;
    for(int i = 0; i < 11; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[57];
    double coefficient;
    uint8_t flags;
} NsI9IcGQ_ctx_t;

void init_ctx(NsI9IcGQ_ctx_t *ctx) {
    ctx->id = 1391;
    ctx->coefficient = 3.2;
    ctx->flags = 120;
}

int compute_yT0BZGe(int input) {
    int result = input * 20;
    for(int i = 0; i < 3; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[50];
    double coefficient;
    uint8_t flags;
} kR7usAXC_ctx_t;

void init_ctx(kR7usAXC_ctx_t *ctx) {
    ctx->id = 6814;
    ctx->coefficient = 7.4;
    ctx->flags = 103;
}

int compute_N4GKgOr(int input) {
    int result = input * 63;
    for(int i = 0; i < 10; i++) result += (i * 4);
    return result;
}

int compute_c0KXdWO(int input) {
    int result = input * 12;
    for(int i = 0; i < 3; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[40];
    double coefficient;
    uint8_t flags;
} APW8qP1K_ctx_t;

void init_ctx(APW8qP1K_ctx_t *ctx) {
    ctx->id = 6949;
    ctx->coefficient = 4.6;
    ctx->flags = 241;
}

typedef struct {
    uint32_t id;
    char name[69];
    double coefficient;
    uint8_t flags;
} t1ukXX8m_ctx_t;

void init_ctx(t1ukXX8m_ctx_t *ctx) {
    ctx->id = 6138;
    ctx->coefficient = 7.5;
    ctx->flags = 251;
}

int compute_EivaD3L(int input) {
    int result = input * 56;
    for(int i = 0; i < 5; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[38];
    double coefficient;
    uint8_t flags;
} 71Jao4JM_ctx_t;

void init_ctx(71Jao4JM_ctx_t *ctx) {
    ctx->id = 7179;
    ctx->coefficient = 2.5;
    ctx->flags = 56;
}

typedef struct {
    uint32_t id;
    char name[68];
    double coefficient;
    uint8_t flags;
} J8MglBe5_ctx_t;

void init_ctx(J8MglBe5_ctx_t *ctx) {
    ctx->id = 7822;
    ctx->coefficient = 7.3;
    ctx->flags = 203;
}

typedef struct {
    uint32_t id;
    char name[80];
    double coefficient;
    uint8_t flags;
} dDNV8tbn_ctx_t;

void init_ctx(dDNV8tbn_ctx_t *ctx) {
    ctx->id = 2293;
    ctx->coefficient = 4.4;
    ctx->flags = 137;
}

int compute_w2hoZ3Y(int input) {
    int result = input * 44;
    for(int i = 0; i < 10; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[37];
    double coefficient;
    uint8_t flags;
} P9bQqYRx_ctx_t;

void init_ctx(P9bQqYRx_ctx_t *ctx) {
    ctx->id = 7194;
    ctx->coefficient = 2.9;
    ctx->flags = 181;
}

int compute_aOrsftg(int input) {
    int result = input * 35;
    for(int i = 0; i < 4; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[79];
    double coefficient;
    uint8_t flags;
} Zs1W4fw7_ctx_t;

void init_ctx(Zs1W4fw7_ctx_t *ctx) {
    ctx->id = 9936;
    ctx->coefficient = 9.8;
    ctx->flags = 221;
}

typedef struct {
    uint32_t id;
    char name[68];
    double coefficient;
    uint8_t flags;
} hmEquIoF_ctx_t;

void init_ctx(hmEquIoF_ctx_t *ctx) {
    ctx->id = 1255;
    ctx->coefficient = 7.3;
    ctx->flags = 78;
}

typedef struct {
    uint32_t id;
    char name[84];
    double coefficient;
    uint8_t flags;
} bU1ZgNgb_ctx_t;

void init_ctx(bU1ZgNgb_ctx_t *ctx) {
    ctx->id = 4208;
    ctx->coefficient = 5.0;
    ctx->flags = 151;
}

typedef struct {
    uint32_t id;
    char name[88];
    double coefficient;
    uint8_t flags;
} PmLmRaz6_ctx_t;

void init_ctx(PmLmRaz6_ctx_t *ctx) {
    ctx->id = 3810;
    ctx->coefficient = 7.0;
    ctx->flags = 196;
}

typedef struct {
    uint32_t id;
    char name[35];
    double coefficient;
    uint8_t flags;
} 9l9PwoWD_ctx_t;

void init_ctx(9l9PwoWD_ctx_t *ctx) {
    ctx->id = 4277;
    ctx->coefficient = 9.7;
    ctx->flags = 96;
}

int compute_iQ3t6Fh(int input) {
    int result = input * 2;
    for(int i = 0; i < 8; i++) result += (i * 2);
    return result;
}

int compute_RcRMZBF(int input) {
    int result = input * 21;
    for(int i = 0; i < 11; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[75];
    double coefficient;
    uint8_t flags;
} wgdApLlX_ctx_t;

void init_ctx(wgdApLlX_ctx_t *ctx) {
    ctx->id = 8533;
    ctx->coefficient = 1.7;
    ctx->flags = 2;
}

typedef struct {
    uint32_t id;
    char name[76];
    double coefficient;
    uint8_t flags;
} wr5dmJNw_ctx_t;

void init_ctx(wr5dmJNw_ctx_t *ctx) {
    ctx->id = 6957;
    ctx->coefficient = 4.2;
    ctx->flags = 254;
}

int compute_egnSvgd(int input) {
    int result = input * 31;
    for(int i = 0; i < 8; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[37];
    double coefficient;
    uint8_t flags;
} AKvCtIZ3_ctx_t;

void init_ctx(AKvCtIZ3_ctx_t *ctx) {
    ctx->id = 2839;
    ctx->coefficient = 6.2;
    ctx->flags = 51;
}

typedef struct {
    uint32_t id;
    char name[88];
    double coefficient;
    uint8_t flags;
} e7uHGvuB_ctx_t;

void init_ctx(e7uHGvuB_ctx_t *ctx) {
    ctx->id = 9397;
    ctx->coefficient = 8.1;
    ctx->flags = 5;
}

int compute_w9B1Kmo(int input) {
    int result = input * 65;
    for(int i = 0; i < 6; i++) result += (i * 2);
    return result;
}

int compute_ij6izYL(int input) {
    int result = input * 56;
    for(int i = 0; i < 6; i++) result += (i * 1);
    return result;
}

int compute_V8RZDHI(int input) {
    int result = input * 47;
    for(int i = 0; i < 3; i++) result += (i * 1);
    return result;
}

int compute_Akrt0dL(int input) {
    int result = input * 31;
    for(int i = 0; i < 13; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[93];
    double coefficient;
    uint8_t flags;
} 66HddyZS_ctx_t;

void init_ctx(66HddyZS_ctx_t *ctx) {
    ctx->id = 5916;
    ctx->coefficient = 5.7;
    ctx->flags = 195;
}

typedef struct {
    uint32_t id;
    char name[33];
    double coefficient;
    uint8_t flags;
} DTSoePlN_ctx_t;

void init_ctx(DTSoePlN_ctx_t *ctx) {
    ctx->id = 4990;
    ctx->coefficient = 7.5;
    ctx->flags = 225;
}

typedef struct {
    uint32_t id;
    char name[62];
    double coefficient;
    uint8_t flags;
} ZHPs9j54_ctx_t;

void init_ctx(ZHPs9j54_ctx_t *ctx) {
    ctx->id = 7540;
    ctx->coefficient = 0.4;
    ctx->flags = 139;
}

int compute_ilJOBYa(int input) {
    int result = input * 9;
    for(int i = 0; i < 5; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[80];
    double coefficient;
    uint8_t flags;
} 3wIXlkig_ctx_t;

void init_ctx(3wIXlkig_ctx_t *ctx) {
    ctx->id = 5601;
    ctx->coefficient = 6.2;
    ctx->flags = 191;
}

typedef struct {
    uint32_t id;
    char name[60];
    double coefficient;
    uint8_t flags;
} TqW1oySo_ctx_t;

void init_ctx(TqW1oySo_ctx_t *ctx) {
    ctx->id = 8071;
    ctx->coefficient = 9.8;
    ctx->flags = 155;
}

typedef struct {
    uint32_t id;
    char name[85];
    double coefficient;
    uint8_t flags;
} OOUKyf3U_ctx_t;

void init_ctx(OOUKyf3U_ctx_t *ctx) {
    ctx->id = 3983;
    ctx->coefficient = 8.1;
    ctx->flags = 161;
}

typedef struct {
    uint32_t id;
    char name[42];
    double coefficient;
    uint8_t flags;
} YVdtJS89_ctx_t;

void init_ctx(YVdtJS89_ctx_t *ctx) {
    ctx->id = 1115;
    ctx->coefficient = 4.2;
    ctx->flags = 231;
}

int compute_mej7dZC(int input) {
    int result = input * 37;
    for(int i = 0; i < 17; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[67];
    double coefficient;
    uint8_t flags;
} Epfymvlw_ctx_t;

void init_ctx(Epfymvlw_ctx_t *ctx) {
    ctx->id = 5857;
    ctx->coefficient = 8.9;
    ctx->flags = 82;
}

typedef struct {
    uint32_t id;
    char name[91];
    double coefficient;
    uint8_t flags;
} kc2ziQEp_ctx_t;

void init_ctx(kc2ziQEp_ctx_t *ctx) {
    ctx->id = 8602;
    ctx->coefficient = 1.9;
    ctx->flags = 85;
}

int compute_27UYzoi(int input) {
    int result = input * 14;
    for(int i = 0; i < 17; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[62];
    double coefficient;
    uint8_t flags;
} Gy8ICHl3_ctx_t;

void init_ctx(Gy8ICHl3_ctx_t *ctx) {
    ctx->id = 5576;
    ctx->coefficient = 5.2;
    ctx->flags = 57;
}

int compute_A3x7dHW(int input) {
    int result = input * 5;
    for(int i = 0; i < 11; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[70];
    double coefficient;
    uint8_t flags;
} dwtv3xY6_ctx_t;

void init_ctx(dwtv3xY6_ctx_t *ctx) {
    ctx->id = 9801;
    ctx->coefficient = 0.2;
    ctx->flags = 101;
}

typedef struct {
    uint32_t id;
    char name[93];
    double coefficient;
    uint8_t flags;
} BTfMaJsy_ctx_t;

void init_ctx(BTfMaJsy_ctx_t *ctx) {
    ctx->id = 9806;
    ctx->coefficient = 9.1;
    ctx->flags = 70;
}

typedef struct {
    uint32_t id;
    char name[62];
    double coefficient;
    uint8_t flags;
} 9HN0IBo3_ctx_t;

void init_ctx(9HN0IBo3_ctx_t *ctx) {
    ctx->id = 7265;
    ctx->coefficient = 5.0;
    ctx->flags = 70;
}

typedef struct {
    uint32_t id;
    char name[94];
    double coefficient;
    uint8_t flags;
} h1NBET7V_ctx_t;

void init_ctx(h1NBET7V_ctx_t *ctx) {
    ctx->id = 9469;
    ctx->coefficient = 6.7;
    ctx->flags = 98;
}

int compute_7DZ3K2B(int input) {
    int result = input * 68;
    for(int i = 0; i < 9; i++) result += (i * 2);
    return result;
}

int compute_XiSiI2g(int input) {
    int result = input * 19;
    for(int i = 0; i < 17; i++) result += (i * 4);
    return result;
}

int compute_xVV3scq(int input) {
    int result = input * 25;
    for(int i = 0; i < 18; i++) result += (i * 2);
    return result;
}

int compute_ZAZhO8b(int input) {
    int result = input * 11;
    for(int i = 0; i < 16; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[49];
    double coefficient;
    uint8_t flags;
} 65ysYqv7_ctx_t;

void init_ctx(65ysYqv7_ctx_t *ctx) {
    ctx->id = 3503;
    ctx->coefficient = 5.3;
    ctx->flags = 85;
}

typedef struct {
    uint32_t id;
    char name[86];
    double coefficient;
    uint8_t flags;
} FfjYExSW_ctx_t;

void init_ctx(FfjYExSW_ctx_t *ctx) {
    ctx->id = 4930;
    ctx->coefficient = 4.4;
    ctx->flags = 39;
}

int compute_1YbunGb(int input) {
    int result = input * 10;
    for(int i = 0; i < 11; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[91];
    double coefficient;
    uint8_t flags;
} hqoZuAce_ctx_t;

void init_ctx(hqoZuAce_ctx_t *ctx) {
    ctx->id = 6181;
    ctx->coefficient = 2.9;
    ctx->flags = 133;
}

typedef struct {
    uint32_t id;
    char name[67];
    double coefficient;
    uint8_t flags;
} AyTXPft6_ctx_t;

void init_ctx(AyTXPft6_ctx_t *ctx) {
    ctx->id = 4200;
    ctx->coefficient = 8.9;
    ctx->flags = 245;
}

typedef struct {
    uint32_t id;
    char name[55];
    double coefficient;
    uint8_t flags;
} ueq951sh_ctx_t;

void init_ctx(ueq951sh_ctx_t *ctx) {
    ctx->id = 5950;
    ctx->coefficient = 7.9;
    ctx->flags = 159;
}

int compute_oFEhEdf(int input) {
    int result = input * 17;
    for(int i = 0; i < 6; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[56];
    double coefficient;
    uint8_t flags;
} hRBYyOjy_ctx_t;

void init_ctx(hRBYyOjy_ctx_t *ctx) {
    ctx->id = 8379;
    ctx->coefficient = 5.4;
    ctx->flags = 221;
}

typedef struct {
    uint32_t id;
    char name[90];
    double coefficient;
    uint8_t flags;
} GveBlqkl_ctx_t;

void init_ctx(GveBlqkl_ctx_t *ctx) {
    ctx->id = 5843;
    ctx->coefficient = 6.2;
    ctx->flags = 255;
}

typedef struct {
    uint32_t id;
    char name[64];
    double coefficient;
    uint8_t flags;
} l3x8SD4w_ctx_t;

void init_ctx(l3x8SD4w_ctx_t *ctx) {
    ctx->id = 5106;
    ctx->coefficient = 2.9;
    ctx->flags = 225;
}

typedef struct {
    uint32_t id;
    char name[73];
    double coefficient;
    uint8_t flags;
} 7NTeEPn5_ctx_t;

void init_ctx(7NTeEPn5_ctx_t *ctx) {
    ctx->id = 3479;
    ctx->coefficient = 8.2;
    ctx->flags = 2;
}

typedef struct {
    uint32_t id;
    char name[57];
    double coefficient;
    uint8_t flags;
} VdQMRLq5_ctx_t;

void init_ctx(VdQMRLq5_ctx_t *ctx) {
    ctx->id = 3482;
    ctx->coefficient = 2.1;
    ctx->flags = 21;
}

typedef struct {
    uint32_t id;
    char name[42];
    double coefficient;
    uint8_t flags;
} QxFfuDnv_ctx_t;

void init_ctx(QxFfuDnv_ctx_t *ctx) {
    ctx->id = 2356;
    ctx->coefficient = 6.6;
    ctx->flags = 23;
}

typedef struct {
    uint32_t id;
    char name[55];
    double coefficient;
    uint8_t flags;
} RDoxXC6b_ctx_t;

void init_ctx(RDoxXC6b_ctx_t *ctx) {
    ctx->id = 8106;
    ctx->coefficient = 7.6;
    ctx->flags = 186;
}

typedef struct {
    uint32_t id;
    char name[44];
    double coefficient;
    uint8_t flags;
} Wm6Q0nBa_ctx_t;

void init_ctx(Wm6Q0nBa_ctx_t *ctx) {
    ctx->id = 9033;
    ctx->coefficient = 6.5;
    ctx->flags = 157;
}

int compute_Sa7vukv(int input) {
    int result = input * 60;
    for(int i = 0; i < 3; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[35];
    double coefficient;
    uint8_t flags;
} be0wU7Er_ctx_t;

void init_ctx(be0wU7Er_ctx_t *ctx) {
    ctx->id = 9705;
    ctx->coefficient = 8.8;
    ctx->flags = 135;
}

int compute_pvo9AGm(int input) {
    int result = input * 30;
    for(int i = 0; i < 16; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[54];
    double coefficient;
    uint8_t flags;
} cRU12SWm_ctx_t;

void init_ctx(cRU12SWm_ctx_t *ctx) {
    ctx->id = 4313;
    ctx->coefficient = 3.7;
    ctx->flags = 165;
}

int compute_zHpgCx8(int input) {
    int result = input * 44;
    for(int i = 0; i < 15; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[50];
    double coefficient;
    uint8_t flags;
} uLGQ8reg_ctx_t;

void init_ctx(uLGQ8reg_ctx_t *ctx) {
    ctx->id = 8210;
    ctx->coefficient = 8.0;
    ctx->flags = 97;
}

int compute_fGJDLR8(int input) {
    int result = input * 2;
    for(int i = 0; i < 17; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[37];
    double coefficient;
    uint8_t flags;
} 7aZfMQa9_ctx_t;

void init_ctx(7aZfMQa9_ctx_t *ctx) {
    ctx->id = 6441;
    ctx->coefficient = 1.5;
    ctx->flags = 51;
}

typedef struct {
    uint32_t id;
    char name[39];
    double coefficient;
    uint8_t flags;
} C3BjQXs8_ctx_t;

void init_ctx(C3BjQXs8_ctx_t *ctx) {
    ctx->id = 7459;
    ctx->coefficient = 4.7;
    ctx->flags = 131;
}

typedef struct {
    uint32_t id;
    char name[41];
    double coefficient;
    uint8_t flags;
} gpvD1XeB_ctx_t;

void init_ctx(gpvD1XeB_ctx_t *ctx) {
    ctx->id = 3608;
    ctx->coefficient = 5.5;
    ctx->flags = 31;
}

int compute_HYJjsmU(int input) {
    int result = input * 47;
    for(int i = 0; i < 5; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[48];
    double coefficient;
    uint8_t flags;
} PSPGmi0B_ctx_t;

void init_ctx(PSPGmi0B_ctx_t *ctx) {
    ctx->id = 2210;
    ctx->coefficient = 7.1;
    ctx->flags = 68;
}

typedef struct {
    uint32_t id;
    char name[35];
    double coefficient;
    uint8_t flags;
} sqsNn6iW_ctx_t;

void init_ctx(sqsNn6iW_ctx_t *ctx) {
    ctx->id = 2369;
    ctx->coefficient = 3.3;
    ctx->flags = 218;
}

typedef struct {
    uint32_t id;
    char name[71];
    double coefficient;
    uint8_t flags;
} zoClyJEu_ctx_t;

void init_ctx(zoClyJEu_ctx_t *ctx) {
    ctx->id = 3664;
    ctx->coefficient = 0.7;
    ctx->flags = 192;
}

typedef struct {
    uint32_t id;
    char name[71];
    double coefficient;
    uint8_t flags;
} 8fv5SNeI_ctx_t;

void init_ctx(8fv5SNeI_ctx_t *ctx) {
    ctx->id = 5063;
    ctx->coefficient = 7.4;
    ctx->flags = 36;
}

typedef struct {
    uint32_t id;
    char name[47];
    double coefficient;
    uint8_t flags;
} uLtrBZ4Y_ctx_t;

void init_ctx(uLtrBZ4Y_ctx_t *ctx) {
    ctx->id = 6337;
    ctx->coefficient = 9.2;
    ctx->flags = 26;
}

typedef struct {
    uint32_t id;
    char name[60];
    double coefficient;
    uint8_t flags;
} YuyEoAgz_ctx_t;

void init_ctx(YuyEoAgz_ctx_t *ctx) {
    ctx->id = 7362;
    ctx->coefficient = 7.7;
    ctx->flags = 179;
}

int compute_BHuuXR7(int input) {
    int result = input * 63;
    for(int i = 0; i < 8; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[82];
    double coefficient;
    uint8_t flags;
} WIAuWSHp_ctx_t;

void init_ctx(WIAuWSHp_ctx_t *ctx) {
    ctx->id = 4881;
    ctx->coefficient = 7.2;
    ctx->flags = 223;
}

int compute_lPECo5o(int input) {
    int result = input * 49;
    for(int i = 0; i < 8; i++) result += (i * 1);
    return result;
}

int compute_DJM7rQy(int input) {
    int result = input * 37;
    for(int i = 0; i < 8; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[35];
    double coefficient;
    uint8_t flags;
} UCRA7MQN_ctx_t;

void init_ctx(UCRA7MQN_ctx_t *ctx) {
    ctx->id = 7673;
    ctx->coefficient = 8.6;
    ctx->flags = 183;
}

int compute_1kZfLRI(int input) {
    int result = input * 45;
    for(int i = 0; i < 5; i++) result += (i * 4);
    return result;
}

int compute_Lo6uj3N(int input) {
    int result = input * 6;
    for(int i = 0; i < 7; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[91];
    double coefficient;
    uint8_t flags;
} ej4SbpcV_ctx_t;

void init_ctx(ej4SbpcV_ctx_t *ctx) {
    ctx->id = 6550;
    ctx->coefficient = 8.4;
    ctx->flags = 224;
}

typedef struct {
    uint32_t id;
    char name[74];
    double coefficient;
    uint8_t flags;
} ijKSOhWP_ctx_t;

void init_ctx(ijKSOhWP_ctx_t *ctx) {
    ctx->id = 4571;
    ctx->coefficient = 6.8;
    ctx->flags = 166;
}

int compute_1YBrQnK(int input) {
    int result = input * 36;
    for(int i = 0; i < 4; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[39];
    double coefficient;
    uint8_t flags;
} TRjjlddp_ctx_t;

void init_ctx(TRjjlddp_ctx_t *ctx) {
    ctx->id = 4582;
    ctx->coefficient = 7.3;
    ctx->flags = 246;
}

typedef struct {
    uint32_t id;
    char name[88];
    double coefficient;
    uint8_t flags;
} S4XQKKfS_ctx_t;

void init_ctx(S4XQKKfS_ctx_t *ctx) {
    ctx->id = 1055;
    ctx->coefficient = 4.1;
    ctx->flags = 91;
}

typedef struct {
    uint32_t id;
    char name[60];
    double coefficient;
    uint8_t flags;
} WQtPMemv_ctx_t;

void init_ctx(WQtPMemv_ctx_t *ctx) {
    ctx->id = 2825;
    ctx->coefficient = 5.3;
    ctx->flags = 195;
}

typedef struct {
    uint32_t id;
    char name[70];
    double coefficient;
    uint8_t flags;
} y3E05Nkt_ctx_t;

void init_ctx(y3E05Nkt_ctx_t *ctx) {
    ctx->id = 6010;
    ctx->coefficient = 7.2;
    ctx->flags = 144;
}

typedef struct {
    uint32_t id;
    char name[73];
    double coefficient;
    uint8_t flags;
} 3lURUV65_ctx_t;

void init_ctx(3lURUV65_ctx_t *ctx) {
    ctx->id = 5092;
    ctx->coefficient = 1.4;
    ctx->flags = 147;
}

typedef struct {
    uint32_t id;
    char name[80];
    double coefficient;
    uint8_t flags;
} 5UwWWlFb_ctx_t;

void init_ctx(5UwWWlFb_ctx_t *ctx) {
    ctx->id = 8288;
    ctx->coefficient = 0.2;
    ctx->flags = 226;
}

typedef struct {
    uint32_t id;
    char name[50];
    double coefficient;
    uint8_t flags;
} gECaOfH8_ctx_t;

void init_ctx(gECaOfH8_ctx_t *ctx) {
    ctx->id = 9846;
    ctx->coefficient = 5.7;
    ctx->flags = 242;
}

typedef struct {
    uint32_t id;
    char name[65];
    double coefficient;
    uint8_t flags;
} UdxCFVtQ_ctx_t;

void init_ctx(UdxCFVtQ_ctx_t *ctx) {
    ctx->id = 1043;
    ctx->coefficient = 5.7;
    ctx->flags = 177;
}

int compute_YKOuKMP(int input) {
    int result = input * 11;
    for(int i = 0; i < 5; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[71];
    double coefficient;
    uint8_t flags;
} apIM61c4_ctx_t;

void init_ctx(apIM61c4_ctx_t *ctx) {
    ctx->id = 7687;
    ctx->coefficient = 8.8;
    ctx->flags = 212;
}

typedef struct {
    uint32_t id;
    char name[70];
    double coefficient;
    uint8_t flags;
} 7ApKKyNz_ctx_t;

void init_ctx(7ApKKyNz_ctx_t *ctx) {
    ctx->id = 7130;
    ctx->coefficient = 1.8;
    ctx->flags = 78;
}

typedef struct {
    uint32_t id;
    char name[61];
    double coefficient;
    uint8_t flags;
} J2nXr0Dz_ctx_t;

void init_ctx(J2nXr0Dz_ctx_t *ctx) {
    ctx->id = 5799;
    ctx->coefficient = 1.7;
    ctx->flags = 131;
}

int compute_ulOL1Hq(int input) {
    int result = input * 38;
    for(int i = 0; i < 4; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[51];
    double coefficient;
    uint8_t flags;
} U0Jid2IX_ctx_t;

void init_ctx(U0Jid2IX_ctx_t *ctx) {
    ctx->id = 1213;
    ctx->coefficient = 5.4;
    ctx->flags = 252;
}

typedef struct {
    uint32_t id;
    char name[93];
    double coefficient;
    uint8_t flags;
} dgsCtBrO_ctx_t;

void init_ctx(dgsCtBrO_ctx_t *ctx) {
    ctx->id = 3086;
    ctx->coefficient = 6.4;
    ctx->flags = 117;
}

typedef struct {
    uint32_t id;
    char name[91];
    double coefficient;
    uint8_t flags;
} hyfTZwk0_ctx_t;

void init_ctx(hyfTZwk0_ctx_t *ctx) {
    ctx->id = 8252;
    ctx->coefficient = 1.2;
    ctx->flags = 68;
}

typedef struct {
    uint32_t id;
    char name[66];
    double coefficient;
    uint8_t flags;
} sWk8dY9w_ctx_t;

void init_ctx(sWk8dY9w_ctx_t *ctx) {
    ctx->id = 2259;
    ctx->coefficient = 4.7;
    ctx->flags = 174;
}

int compute_Aar4wOK(int input) {
    int result = input * 55;
    for(int i = 0; i < 6; i++) result += (i * 3);
    return result;
}

int compute_oOCeQs1(int input) {
    int result = input * 46;
    for(int i = 0; i < 5; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[68];
    double coefficient;
    uint8_t flags;
} qkp96ddX_ctx_t;

void init_ctx(qkp96ddX_ctx_t *ctx) {
    ctx->id = 4724;
    ctx->coefficient = 6.2;
    ctx->flags = 44;
}

int compute_LqPRWQe(int input) {
    int result = input * 49;
    for(int i = 0; i < 4; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[83];
    double coefficient;
    uint8_t flags;
} WVk4T2jx_ctx_t;

void init_ctx(WVk4T2jx_ctx_t *ctx) {
    ctx->id = 3814;
    ctx->coefficient = 0.9;
    ctx->flags = 146;
}

typedef struct {
    uint32_t id;
    char name[85];
    double coefficient;
    uint8_t flags;
} 9G7ORLiY_ctx_t;

void init_ctx(9G7ORLiY_ctx_t *ctx) {
    ctx->id = 8665;
    ctx->coefficient = 6.0;
    ctx->flags = 145;
}

typedef struct {
    uint32_t id;
    char name[66];
    double coefficient;
    uint8_t flags;
} Y2TQKD7C_ctx_t;

void init_ctx(Y2TQKD7C_ctx_t *ctx) {
    ctx->id = 5807;
    ctx->coefficient = 1.2;
    ctx->flags = 120;
}

int compute_cSAC83E(int input) {
    int result = input * 54;
    for(int i = 0; i < 3; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[61];
    double coefficient;
    uint8_t flags;
} qggTpKw6_ctx_t;

void init_ctx(qggTpKw6_ctx_t *ctx) {
    ctx->id = 9340;
    ctx->coefficient = 3.0;
    ctx->flags = 212;
}

typedef struct {
    uint32_t id;
    char name[61];
    double coefficient;
    uint8_t flags;
} ZdnYNtDn_ctx_t;

void init_ctx(ZdnYNtDn_ctx_t *ctx) {
    ctx->id = 3289;
    ctx->coefficient = 8.2;
    ctx->flags = 145;
}

typedef struct {
    uint32_t id;
    char name[45];
    double coefficient;
    uint8_t flags;
} 0HK18cw4_ctx_t;

void init_ctx(0HK18cw4_ctx_t *ctx) {
    ctx->id = 1249;
    ctx->coefficient = 10.0;
    ctx->flags = 217;
}

typedef struct {
    uint32_t id;
    char name[82];
    double coefficient;
    uint8_t flags;
} u0zTZjdf_ctx_t;

void init_ctx(u0zTZjdf_ctx_t *ctx) {
    ctx->id = 8408;
    ctx->coefficient = 7.5;
    ctx->flags = 70;
}

int compute_dVvlWbP(int input) {
    int result = input * 62;
    for(int i = 0; i < 8; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[95];
    double coefficient;
    uint8_t flags;
} Cli9bhWE_ctx_t;

void init_ctx(Cli9bhWE_ctx_t *ctx) {
    ctx->id = 9328;
    ctx->coefficient = 9.2;
    ctx->flags = 42;
}

typedef struct {
    uint32_t id;
    char name[64];
    double coefficient;
    uint8_t flags;
} w8YQWKIW_ctx_t;

void init_ctx(w8YQWKIW_ctx_t *ctx) {
    ctx->id = 1854;
    ctx->coefficient = 6.3;
    ctx->flags = 8;
}

int compute_3m1qHir(int input) {
    int result = input * 60;
    for(int i = 0; i < 14; i++) result += (i * 5);
    return result;
}

int compute_Oui8y5l(int input) {
    int result = input * 36;
    for(int i = 0; i < 8; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[52];
    double coefficient;
    uint8_t flags;
} 4ejSjoZK_ctx_t;

void init_ctx(4ejSjoZK_ctx_t *ctx) {
    ctx->id = 1241;
    ctx->coefficient = 10.0;
    ctx->flags = 23;
}

int compute_6eLSkZi(int input) {
    int result = input * 43;
    for(int i = 0; i < 16; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[75];
    double coefficient;
    uint8_t flags;
} N5ExgX1P_ctx_t;

void init_ctx(N5ExgX1P_ctx_t *ctx) {
    ctx->id = 3934;
    ctx->coefficient = 8.3;
    ctx->flags = 170;
}

typedef struct {
    uint32_t id;
    char name[74];
    double coefficient;
    uint8_t flags;
} K7KA8jR4_ctx_t;

void init_ctx(K7KA8jR4_ctx_t *ctx) {
    ctx->id = 2243;
    ctx->coefficient = 8.3;
    ctx->flags = 28;
}

int compute_RJCcLMO(int input) {
    int result = input * 64;
    for(int i = 0; i < 10; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[55];
    double coefficient;
    uint8_t flags;
} nCYG7YE8_ctx_t;

void init_ctx(nCYG7YE8_ctx_t *ctx) {
    ctx->id = 1149;
    ctx->coefficient = 9.2;
    ctx->flags = 237;
}

int compute_os9Jm56(int input) {
    int result = input * 7;
    for(int i = 0; i < 7; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[57];
    double coefficient;
    uint8_t flags;
} 96RYjGSQ_ctx_t;

void init_ctx(96RYjGSQ_ctx_t *ctx) {
    ctx->id = 7383;
    ctx->coefficient = 0.2;
    ctx->flags = 165;
}

typedef struct {
    uint32_t id;
    char name[93];
    double coefficient;
    uint8_t flags;
} kNS9hXG5_ctx_t;

void init_ctx(kNS9hXG5_ctx_t *ctx) {
    ctx->id = 3289;
    ctx->coefficient = 1.0;
    ctx->flags = 118;
}

int compute_irmIZMF(int input) {
    int result = input * 56;
    for(int i = 0; i < 8; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[82];
    double coefficient;
    uint8_t flags;
} Un8mAM0m_ctx_t;

void init_ctx(Un8mAM0m_ctx_t *ctx) {
    ctx->id = 3458;
    ctx->coefficient = 8.8;
    ctx->flags = 226;
}

int compute_oXoA2lD(int input) {
    int result = input * 47;
    for(int i = 0; i < 5; i++) result += (i * 3);
    return result;
}

int compute_RJbFzAN(int input) {
    int result = input * 21;
    for(int i = 0; i < 4; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[85];
    double coefficient;
    uint8_t flags;
} YvFUo1XM_ctx_t;

void init_ctx(YvFUo1XM_ctx_t *ctx) {
    ctx->id = 5711;
    ctx->coefficient = 0.6;
    ctx->flags = 113;
}

int compute_ePWAL8E(int input) {
    int result = input * 30;
    for(int i = 0; i < 18; i++) result += (i * 1);
    return result;
}

int compute_fXS8Dit(int input) {
    int result = input * 65;
    for(int i = 0; i < 18; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[43];
    double coefficient;
    uint8_t flags;
} PIax59MI_ctx_t;

void init_ctx(PIax59MI_ctx_t *ctx) {
    ctx->id = 7991;
    ctx->coefficient = 1.4;
    ctx->flags = 73;
}

int compute_oKUcZws(int input) {
    int result = input * 54;
    for(int i = 0; i < 4; i++) result += (i * 2);
    return result;
}

int compute_HJk0tHJ(int input) {
    int result = input * 15;
    for(int i = 0; i < 8; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[65];
    double coefficient;
    uint8_t flags;
} FLYfEG8s_ctx_t;

void init_ctx(FLYfEG8s_ctx_t *ctx) {
    ctx->id = 9413;
    ctx->coefficient = 6.0;
    ctx->flags = 60;
}

int compute_3gESAdL(int input) {
    int result = input * 16;
    for(int i = 0; i < 5; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[39];
    double coefficient;
    uint8_t flags;
} BNrve60f_ctx_t;

void init_ctx(BNrve60f_ctx_t *ctx) {
    ctx->id = 6897;
    ctx->coefficient = 3.5;
    ctx->flags = 111;
}

typedef struct {
    uint32_t id;
    char name[50];
    double coefficient;
    uint8_t flags;
} NE5IlCvB_ctx_t;

void init_ctx(NE5IlCvB_ctx_t *ctx) {
    ctx->id = 2401;
    ctx->coefficient = 8.6;
    ctx->flags = 218;
}

int compute_OAKKcYS(int input) {
    int result = input * 21;
    for(int i = 0; i < 11; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[91];
    double coefficient;
    uint8_t flags;
} ligb6Gf5_ctx_t;

void init_ctx(ligb6Gf5_ctx_t *ctx) {
    ctx->id = 5067;
    ctx->coefficient = 4.9;
    ctx->flags = 61;
}

typedef struct {
    uint32_t id;
    char name[66];
    double coefficient;
    uint8_t flags;
} rzzoD8BF_ctx_t;

void init_ctx(rzzoD8BF_ctx_t *ctx) {
    ctx->id = 7851;
    ctx->coefficient = 0.9;
    ctx->flags = 142;
}

typedef struct {
    uint32_t id;
    char name[40];
    double coefficient;
    uint8_t flags;
} soQUKtOH_ctx_t;

void init_ctx(soQUKtOH_ctx_t *ctx) {
    ctx->id = 3675;
    ctx->coefficient = 5.2;
    ctx->flags = 254;
}

int compute_GGLTYvH(int input) {
    int result = input * 47;
    for(int i = 0; i < 6; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[93];
    double coefficient;
    uint8_t flags;
} 7roIg0qz_ctx_t;

void init_ctx(7roIg0qz_ctx_t *ctx) {
    ctx->id = 8694;
    ctx->coefficient = 9.6;
    ctx->flags = 83;
}

typedef struct {
    uint32_t id;
    char name[65];
    double coefficient;
    uint8_t flags;
} hwrxmNJB_ctx_t;

void init_ctx(hwrxmNJB_ctx_t *ctx) {
    ctx->id = 4725;
    ctx->coefficient = 7.0;
    ctx->flags = 100;
}

int compute_1rnTK34(int input) {
    int result = input * 60;
    for(int i = 0; i < 14; i++) result += (i * 5);
    return result;
}

int compute_YE6UIKc(int input) {
    int result = input * 15;
    for(int i = 0; i < 13; i++) result += (i * 3);
    return result;
}

int compute_6f5amsU(int input) {
    int result = input * 66;
    for(int i = 0; i < 8; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[69];
    double coefficient;
    uint8_t flags;
} FYXqI8V3_ctx_t;

void init_ctx(FYXqI8V3_ctx_t *ctx) {
    ctx->id = 2408;
    ctx->coefficient = 2.3;
    ctx->flags = 220;
}

int compute_teGr6r7(int input) {
    int result = input * 6;
    for(int i = 0; i < 14; i++) result += (i * 4);
    return result;
}

int compute_gAt2jrV(int input) {
    int result = input * 25;
    for(int i = 0; i < 4; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[86];
    double coefficient;
    uint8_t flags;
} SiC6Vxlg_ctx_t;

void init_ctx(SiC6Vxlg_ctx_t *ctx) {
    ctx->id = 8380;
    ctx->coefficient = 3.8;
    ctx->flags = 138;
}

int compute_REplZLs(int input) {
    int result = input * 64;
    for(int i = 0; i < 12; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[60];
    double coefficient;
    uint8_t flags;
} wh0L5QZa_ctx_t;

void init_ctx(wh0L5QZa_ctx_t *ctx) {
    ctx->id = 3172;
    ctx->coefficient = 8.7;
    ctx->flags = 137;
}

typedef struct {
    uint32_t id;
    char name[46];
    double coefficient;
    uint8_t flags;
} ND36Xlt0_ctx_t;

void init_ctx(ND36Xlt0_ctx_t *ctx) {
    ctx->id = 9206;
    ctx->coefficient = 7.1;
    ctx->flags = 130;
}

typedef struct {
    uint32_t id;
    char name[62];
    double coefficient;
    uint8_t flags;
} cOYj3MzX_ctx_t;

void init_ctx(cOYj3MzX_ctx_t *ctx) {
    ctx->id = 4870;
    ctx->coefficient = 3.1;
    ctx->flags = 89;
}

int compute_biM8uyD(int input) {
    int result = input * 26;
    for(int i = 0; i < 16; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[57];
    double coefficient;
    uint8_t flags;
} kGhJxfDe_ctx_t;

void init_ctx(kGhJxfDe_ctx_t *ctx) {
    ctx->id = 2556;
    ctx->coefficient = 7.4;
    ctx->flags = 84;
}

typedef struct {
    uint32_t id;
    char name[36];
    double coefficient;
    uint8_t flags;
} qay3q0Yf_ctx_t;

void init_ctx(qay3q0Yf_ctx_t *ctx) {
    ctx->id = 8520;
    ctx->coefficient = 4.4;
    ctx->flags = 114;
}

int compute_oYe6Xkr(int input) {
    int result = input * 35;
    for(int i = 0; i < 8; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[50];
    double coefficient;
    uint8_t flags;
} DE57GRlC_ctx_t;

void init_ctx(DE57GRlC_ctx_t *ctx) {
    ctx->id = 7843;
    ctx->coefficient = 2.3;
    ctx->flags = 215;
}

typedef struct {
    uint32_t id;
    char name[38];
    double coefficient;
    uint8_t flags;
} WyIlCfps_ctx_t;

void init_ctx(WyIlCfps_ctx_t *ctx) {
    ctx->id = 3808;
    ctx->coefficient = 2.9;
    ctx->flags = 11;
}

typedef struct {
    uint32_t id;
    char name[82];
    double coefficient;
    uint8_t flags;
} qAC9Qun2_ctx_t;

void init_ctx(qAC9Qun2_ctx_t *ctx) {
    ctx->id = 5788;
    ctx->coefficient = 9.2;
    ctx->flags = 59;
}

int compute_30577Xg(int input) {
    int result = input * 17;
    for(int i = 0; i < 11; i++) result += (i * 1);
    return result;
}

int compute_FTvjIVx(int input) {
    int result = input * 59;
    for(int i = 0; i < 15; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[38];
    double coefficient;
    uint8_t flags;
} fZkDvxOY_ctx_t;

void init_ctx(fZkDvxOY_ctx_t *ctx) {
    ctx->id = 5194;
    ctx->coefficient = 7.4;
    ctx->flags = 165;
}

typedef struct {
    uint32_t id;
    char name[55];
    double coefficient;
    uint8_t flags;
} MZA0R4ic_ctx_t;

void init_ctx(MZA0R4ic_ctx_t *ctx) {
    ctx->id = 6442;
    ctx->coefficient = 5.3;
    ctx->flags = 182;
}

int compute_DbAT5Ji(int input) {
    int result = input * 28;
    for(int i = 0; i < 13; i++) result += (i * 4);
    return result;
}

int compute_SsBcZcE(int input) {
    int result = input * 19;
    for(int i = 0; i < 3; i++) result += (i * 4);
    return result;
}

int compute_B3N8Jed(int input) {
    int result = input * 61;
    for(int i = 0; i < 6; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[86];
    double coefficient;
    uint8_t flags;
} J10GxIN7_ctx_t;

void init_ctx(J10GxIN7_ctx_t *ctx) {
    ctx->id = 7570;
    ctx->coefficient = 8.0;
    ctx->flags = 27;
}

typedef struct {
    uint32_t id;
    char name[81];
    double coefficient;
    uint8_t flags;
} TPr94uCo_ctx_t;

void init_ctx(TPr94uCo_ctx_t *ctx) {
    ctx->id = 5848;
    ctx->coefficient = 2.6;
    ctx->flags = 210;
}

typedef struct {
    uint32_t id;
    char name[85];
    double coefficient;
    uint8_t flags;
} xNr8BfVX_ctx_t;

void init_ctx(xNr8BfVX_ctx_t *ctx) {
    ctx->id = 4585;
    ctx->coefficient = 0.6;
    ctx->flags = 6;
}

typedef struct {
    uint32_t id;
    char name[94];
    double coefficient;
    uint8_t flags;
} ucHH4lM7_ctx_t;

void init_ctx(ucHH4lM7_ctx_t *ctx) {
    ctx->id = 6315;
    ctx->coefficient = 9.7;
    ctx->flags = 118;
}

int compute_fZZ0Avd(int input) {
    int result = input * 2;
    for(int i = 0; i < 9; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[67];
    double coefficient;
    uint8_t flags;
} Gk6doSw4_ctx_t;

void init_ctx(Gk6doSw4_ctx_t *ctx) {
    ctx->id = 3337;
    ctx->coefficient = 2.9;
    ctx->flags = 89;
}

typedef struct {
    uint32_t id;
    char name[47];
    double coefficient;
    uint8_t flags;
} s7EqhTD8_ctx_t;

void init_ctx(s7EqhTD8_ctx_t *ctx) {
    ctx->id = 8387;
    ctx->coefficient = 9.1;
    ctx->flags = 17;
}

int compute_RucnFSm(int input) {
    int result = input * 54;
    for(int i = 0; i < 6; i++) result += (i * 1);
    return result;
}

int compute_x41yYf2(int input) {
    int result = input * 22;
    for(int i = 0; i < 3; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[80];
    double coefficient;
    uint8_t flags;
} C8C40Oqn_ctx_t;

void init_ctx(C8C40Oqn_ctx_t *ctx) {
    ctx->id = 4855;
    ctx->coefficient = 1.6;
    ctx->flags = 63;
}

typedef struct {
    uint32_t id;
    char name[83];
    double coefficient;
    uint8_t flags;
} S4lMQ99F_ctx_t;

void init_ctx(S4lMQ99F_ctx_t *ctx) {
    ctx->id = 6363;
    ctx->coefficient = 7.0;
    ctx->flags = 222;
}

int compute_13dFKDx(int input) {
    int result = input * 32;
    for(int i = 0; i < 17; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[84];
    double coefficient;
    uint8_t flags;
} ABpRCTVc_ctx_t;

void init_ctx(ABpRCTVc_ctx_t *ctx) {
    ctx->id = 9288;
    ctx->coefficient = 3.9;
    ctx->flags = 241;
}

typedef struct {
    uint32_t id;
    char name[36];
    double coefficient;
    uint8_t flags;
} 1xfM4Dr4_ctx_t;

void init_ctx(1xfM4Dr4_ctx_t *ctx) {
    ctx->id = 8360;
    ctx->coefficient = 4.5;
    ctx->flags = 75;
}

typedef struct {
    uint32_t id;
    char name[74];
    double coefficient;
    uint8_t flags;
} QLoueqpc_ctx_t;

void init_ctx(QLoueqpc_ctx_t *ctx) {
    ctx->id = 6303;
    ctx->coefficient = 8.2;
    ctx->flags = 207;
}

int compute_yxrLfxd(int input) {
    int result = input * 50;
    for(int i = 0; i < 4; i++) result += (i * 5);
    return result;
}

int compute_Qfk8v69(int input) {
    int result = input * 40;
    for(int i = 0; i < 15; i++) result += (i * 5);
    return result;
}

int compute_CbPjAyF(int input) {
    int result = input * 57;
    for(int i = 0; i < 15; i++) result += (i * 2);
    return result;
}

int compute_I6FDKLx(int input) {
    int result = input * 9;
    for(int i = 0; i < 16; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[89];
    double coefficient;
    uint8_t flags;
} gvmDL1G9_ctx_t;

void init_ctx(gvmDL1G9_ctx_t *ctx) {
    ctx->id = 2764;
    ctx->coefficient = 6.9;
    ctx->flags = 128;
}

typedef struct {
    uint32_t id;
    char name[41];
    double coefficient;
    uint8_t flags;
} RUc6LoxO_ctx_t;

void init_ctx(RUc6LoxO_ctx_t *ctx) {
    ctx->id = 8636;
    ctx->coefficient = 6.0;
    ctx->flags = 169;
}

int compute_aGPuUEm(int input) {
    int result = input * 12;
    for(int i = 0; i < 12; i++) result += (i * 1);
    return result;
}

int compute_xE3oAzd(int input) {
    int result = input * 13;
    for(int i = 0; i < 6; i++) result += (i * 5);
    return result;
}

int compute_0owafp7(int input) {
    int result = input * 8;
    for(int i = 0; i < 3; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[44];
    double coefficient;
    uint8_t flags;
} SLcsumSz_ctx_t;

void init_ctx(SLcsumSz_ctx_t *ctx) {
    ctx->id = 8804;
    ctx->coefficient = 2.4;
    ctx->flags = 122;
}

int compute_O1PEtFo(int input) {
    int result = input * 36;
    for(int i = 0; i < 3; i++) result += (i * 5);
    return result;
}

int compute_aryN8MW(int input) {
    int result = input * 4;
    for(int i = 0; i < 14; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[88];
    double coefficient;
    uint8_t flags;
} 2sjsOakA_ctx_t;

void init_ctx(2sjsOakA_ctx_t *ctx) {
    ctx->id = 9692;
    ctx->coefficient = 2.7;
    ctx->flags = 173;
}

typedef struct {
    uint32_t id;
    char name[66];
    double coefficient;
    uint8_t flags;
} jJrZok8p_ctx_t;

void init_ctx(jJrZok8p_ctx_t *ctx) {
    ctx->id = 6684;
    ctx->coefficient = 7.0;
    ctx->flags = 91;
}

typedef struct {
    uint32_t id;
    char name[78];
    double coefficient;
    uint8_t flags;
} 9cGxH9xk_ctx_t;

void init_ctx(9cGxH9xk_ctx_t *ctx) {
    ctx->id = 5717;
    ctx->coefficient = 10.0;
    ctx->flags = 178;
}

typedef struct {
    uint32_t id;
    char name[60];
    double coefficient;
    uint8_t flags;
} 3dLsCM2K_ctx_t;

void init_ctx(3dLsCM2K_ctx_t *ctx) {
    ctx->id = 1077;
    ctx->coefficient = 1.8;
    ctx->flags = 181;
}

typedef struct {
    uint32_t id;
    char name[43];
    double coefficient;
    uint8_t flags;
} fzFposEu_ctx_t;

void init_ctx(fzFposEu_ctx_t *ctx) {
    ctx->id = 3942;
    ctx->coefficient = 7.0;
    ctx->flags = 123;
}

typedef struct {
    uint32_t id;
    char name[64];
    double coefficient;
    uint8_t flags;
} 9bS4Wyjz_ctx_t;

void init_ctx(9bS4Wyjz_ctx_t *ctx) {
    ctx->id = 5300;
    ctx->coefficient = 3.2;
    ctx->flags = 251;
}

typedef struct {
    uint32_t id;
    char name[55];
    double coefficient;
    uint8_t flags;
} DE7AVQhU_ctx_t;

void init_ctx(DE7AVQhU_ctx_t *ctx) {
    ctx->id = 7497;
    ctx->coefficient = 8.0;
    ctx->flags = 243;
}

typedef struct {
    uint32_t id;
    char name[64];
    double coefficient;
    uint8_t flags;
} hu1kXg8d_ctx_t;

void init_ctx(hu1kXg8d_ctx_t *ctx) {
    ctx->id = 8457;
    ctx->coefficient = 7.2;
    ctx->flags = 223;
}

int compute_YffqXu1(int input) {
    int result = input * 53;
    for(int i = 0; i < 11; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[77];
    double coefficient;
    uint8_t flags;
} xUZYyAkA_ctx_t;

void init_ctx(xUZYyAkA_ctx_t *ctx) {
    ctx->id = 8774;
    ctx->coefficient = 3.3;
    ctx->flags = 190;
}

typedef struct {
    uint32_t id;
    char name[90];
    double coefficient;
    uint8_t flags;
} 5vtAJaNP_ctx_t;

void init_ctx(5vtAJaNP_ctx_t *ctx) {
    ctx->id = 8137;
    ctx->coefficient = 4.9;
    ctx->flags = 12;
}

typedef struct {
    uint32_t id;
    char name[56];
    double coefficient;
    uint8_t flags;
} 2ntZpczc_ctx_t;

void init_ctx(2ntZpczc_ctx_t *ctx) {
    ctx->id = 5097;
    ctx->coefficient = 0.7;
    ctx->flags = 226;
}

int compute_p8TA9Ru(int input) {
    int result = input * 54;
    for(int i = 0; i < 4; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[57];
    double coefficient;
    uint8_t flags;
} u02CS3xF_ctx_t;

void init_ctx(u02CS3xF_ctx_t *ctx) {
    ctx->id = 7716;
    ctx->coefficient = 3.4;
    ctx->flags = 227;
}

typedef struct {
    uint32_t id;
    char name[65];
    double coefficient;
    uint8_t flags;
} YTj09cq8_ctx_t;

void init_ctx(YTj09cq8_ctx_t *ctx) {
    ctx->id = 9897;
    ctx->coefficient = 3.3;
    ctx->flags = 240;
}

typedef struct {
    uint32_t id;
    char name[36];
    double coefficient;
    uint8_t flags;
} LpeW7bS7_ctx_t;

void init_ctx(LpeW7bS7_ctx_t *ctx) {
    ctx->id = 6950;
    ctx->coefficient = 8.4;
    ctx->flags = 117;
}

int compute_6brZMQY(int input) {
    int result = input * 44;
    for(int i = 0; i < 8; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[34];
    double coefficient;
    uint8_t flags;
} 7M9ZcCgI_ctx_t;

void init_ctx(7M9ZcCgI_ctx_t *ctx) {
    ctx->id = 5391;
    ctx->coefficient = 3.8;
    ctx->flags = 183;
}

typedef struct {
    uint32_t id;
    char name[43];
    double coefficient;
    uint8_t flags;
} FAtxq7TP_ctx_t;

void init_ctx(FAtxq7TP_ctx_t *ctx) {
    ctx->id = 6075;
    ctx->coefficient = 0.8;
    ctx->flags = 42;
}

int compute_dLTrjuO(int input) {
    int result = input * 69;
    for(int i = 0; i < 6; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[44];
    double coefficient;
    uint8_t flags;
} Gsn6JaI5_ctx_t;

void init_ctx(Gsn6JaI5_ctx_t *ctx) {
    ctx->id = 6212;
    ctx->coefficient = 4.8;
    ctx->flags = 222;
}

typedef struct {
    uint32_t id;
    char name[34];
    double coefficient;
    uint8_t flags;
} QUHOe1k4_ctx_t;

void init_ctx(QUHOe1k4_ctx_t *ctx) {
    ctx->id = 5215;
    ctx->coefficient = 3.3;
    ctx->flags = 26;
}

typedef struct {
    uint32_t id;
    char name[87];
    double coefficient;
    uint8_t flags;
} 4GUasooF_ctx_t;

void init_ctx(4GUasooF_ctx_t *ctx) {
    ctx->id = 6346;
    ctx->coefficient = 2.2;
    ctx->flags = 222;
}

typedef struct {
    uint32_t id;
    char name[82];
    double coefficient;
    uint8_t flags;
} 72p5UZWZ_ctx_t;

void init_ctx(72p5UZWZ_ctx_t *ctx) {
    ctx->id = 6417;
    ctx->coefficient = 0.4;
    ctx->flags = 46;
}

int compute_4M6oCIB(int input) {
    int result = input * 47;
    for(int i = 0; i < 6; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[43];
    double coefficient;
    uint8_t flags;
} QTMMyS8S_ctx_t;

void init_ctx(QTMMyS8S_ctx_t *ctx) {
    ctx->id = 6760;
    ctx->coefficient = 7.4;
    ctx->flags = 25;
}

typedef struct {
    uint32_t id;
    char name[91];
    double coefficient;
    uint8_t flags;
} or2zw7yd_ctx_t;

void init_ctx(or2zw7yd_ctx_t *ctx) {
    ctx->id = 2270;
    ctx->coefficient = 1.2;
    ctx->flags = 151;
}

typedef struct {
    uint32_t id;
    char name[72];
    double coefficient;
    uint8_t flags;
} obzzG6aI_ctx_t;

void init_ctx(obzzG6aI_ctx_t *ctx) {
    ctx->id = 9373;
    ctx->coefficient = 2.9;
    ctx->flags = 6;
}

int compute_ulBXqhH(int input) {
    int result = input * 48;
    for(int i = 0; i < 12; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[71];
    double coefficient;
    uint8_t flags;
} Eoj1Z3Al_ctx_t;

void init_ctx(Eoj1Z3Al_ctx_t *ctx) {
    ctx->id = 9333;
    ctx->coefficient = 7.0;
    ctx->flags = 227;
}

typedef struct {
    uint32_t id;
    char name[46];
    double coefficient;
    uint8_t flags;
} AV39JOWD_ctx_t;

void init_ctx(AV39JOWD_ctx_t *ctx) {
    ctx->id = 6262;
    ctx->coefficient = 5.8;
    ctx->flags = 248;
}

typedef struct {
    uint32_t id;
    char name[89];
    double coefficient;
    uint8_t flags;
} 5qmx6Shq_ctx_t;

void init_ctx(5qmx6Shq_ctx_t *ctx) {
    ctx->id = 9562;
    ctx->coefficient = 8.2;
    ctx->flags = 96;
}

int compute_9Bq4s0I(int input) {
    int result = input * 23;
    for(int i = 0; i < 7; i++) result += (i * 4);
    return result;
}

int compute_rGre5I5(int input) {
    int result = input * 58;
    for(int i = 0; i < 4; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[52];
    double coefficient;
    uint8_t flags;
} YLQarIKv_ctx_t;

void init_ctx(YLQarIKv_ctx_t *ctx) {
    ctx->id = 4275;
    ctx->coefficient = 7.7;
    ctx->flags = 133;
}

typedef struct {
    uint32_t id;
    char name[44];
    double coefficient;
    uint8_t flags;
} 6lHl6gPd_ctx_t;

void init_ctx(6lHl6gPd_ctx_t *ctx) {
    ctx->id = 1080;
    ctx->coefficient = 0.6;
    ctx->flags = 30;
}

int compute_s8hlCfH(int input) {
    int result = input * 24;
    for(int i = 0; i < 4; i++) result += (i * 1);
    return result;
}

