/*
 *   (c) Yury Kuchura
 *   kuchura@gmail.com
 *
 *   This code can be used on terms of WTFPL Version 2 (http://www.wtfpl.net/).
 */

#ifndef PANVSWR2_H_
#define PANVSWR2_H_
// ** WK ** // DL8MBY:
typedef enum
{
    BS2, BS4, BS10, BS20, BS40, BS100, BS150, BS200, BS250, BS300, BS400, BS500 ,BS1000, BS2M, BS4M,
BS10M, BS20M, BS30M, BS40M, BS60M, BS100M, BS200M, BS250M, BS300M, BS350M,
BS400M, BS450M, BS500M, BS700M, BS1000M
} BANDSPAN;

extern const char* BSSTR[];
extern const char* BSSTR_HALF[];
extern const uint32_t BSVALUES[];
extern float DSP_CalcX(void);
static uint32_t multi_fr[5];
void PANVSWR2_Proc(void);
typedef struct
{
    uint32_t flo;
    uint32_t fhi;
} HAM_BANDS;
unsigned long GetUpper(int i);
unsigned long GetLower(int i);
int GetBandNr(unsigned long frequ);
void Sleep(uint32_t nms);
void Tune_SWR_Proc(void);

void Quartz_proc(void);
uint8_t AUDIO1;
static uint8_t loudness;
void  setup_GPIO(void);
void ShowFr(int digits);
static float freqMHzf;
void SWR_SetFrequency(void);
int IsFinHamBands(uint32_t f_kHz);

#endif
