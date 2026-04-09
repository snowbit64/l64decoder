// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: downmix_float
// Entry Point: 00e7d3e0
// Size: 356 bytes
// Signature: undefined downmix_float(void)


void downmix_float(long param_1,int *param_2,uint param_3,int param_4,int param_5,uint param_6,
                  uint param_7)

{
  ulong uVar1;
  float *pfVar2;
  ulong uVar3;
  int *piVar4;
  ulong uVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  
  if (0 < (int)param_3) {
    uVar1 = (ulong)param_3;
    pfVar2 = (float *)(param_1 + ((long)param_5 + (long)(int)param_7 * (long)param_4) * 4);
    uVar3 = uVar1;
    piVar4 = param_2;
    do {
      fVar7 = *pfVar2;
      pfVar2 = (float *)((long)pfVar2 +
                        (-(ulong)(param_7 >> 0x1f) & 0xfffffffc00000000 | (ulong)param_7 << 2));
      uVar3 = uVar3 - 1;
      fVar8 = fVar7 * 32768.0;
      if (fVar7 * 32768.0 <= -32768.0) {
        fVar8 = -32768.0;
      }
      fVar8 = (float)NEON_fminnm(fVar8,0x46fffe00);
      *piVar4 = (int)(short)(long)(float)(int)fVar8;
      piVar4 = piVar4 + 1;
    } while (uVar3 != 0);
    if (-1 < (int)param_6) {
      if ((int)param_3 < 1) {
        return;
      }
      pfVar2 = (float *)(param_1 + ((ulong)param_6 + (long)(int)param_7 * (long)param_4) * 4);
      do {
        fVar7 = *pfVar2;
        pfVar2 = (float *)((long)pfVar2 +
                          (-(ulong)(param_7 >> 0x1f) & 0xfffffffc00000000 | (ulong)param_7 << 2));
        uVar1 = uVar1 - 1;
        fVar8 = fVar7 * 32768.0;
        if (fVar7 * 32768.0 <= -32768.0) {
          fVar8 = -32768.0;
        }
        fVar8 = (float)NEON_fminnm(fVar8,0x46fffe00);
        *param_2 = *param_2 + (int)(short)(long)(float)(int)fVar8;
        param_2 = param_2 + 1;
      } while (uVar1 != 0);
      return;
    }
  }
  if (((param_6 == 0xfffffffe) && (1 < (int)param_7)) && (0 < (int)param_3)) {
    uVar1 = (ulong)param_7;
    uVar3 = 1;
    pfVar2 = (float *)(param_1 + (long)param_4 * uVar1 * 4);
    do {
      pfVar2 = pfVar2 + 1;
      uVar5 = (ulong)param_3;
      pfVar6 = pfVar2;
      piVar4 = param_2;
      do {
        fVar7 = *pfVar6;
        pfVar6 = pfVar6 + uVar1;
        uVar5 = uVar5 - 1;
        fVar8 = fVar7 * 32768.0;
        if (fVar7 * 32768.0 <= -32768.0) {
          fVar8 = -32768.0;
        }
        fVar8 = (float)NEON_fminnm(fVar8,0x46fffe00);
        *piVar4 = *piVar4 + (int)(short)(long)(float)(int)fVar8;
        piVar4 = piVar4 + 1;
      } while (uVar5 != 0);
      uVar3 = uVar3 + 1;
    } while (uVar3 != uVar1);
  }
  return;
}


