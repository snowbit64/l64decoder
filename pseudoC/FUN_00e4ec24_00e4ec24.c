// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00e4ec24
// Entry Point: 00e4ec24
// Size: 380 bytes
// Signature: undefined FUN_00e4ec24(void)


void FUN_00e4ec24(uint param_1,long param_2,int param_3,ulong param_4,undefined4 *param_5)

{
  float *pfVar1;
  undefined4 *puVar2;
  float *pfVar3;
  float *pfVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  if (3 < (int)param_1) {
    uVar5 = (param_1 >> 2) + 1;
    pfVar4 = (float *)(param_2 + (long)param_3 * 4 + -0xc);
    do {
      pfVar3 = (float *)((long)pfVar4 +
                        (-(param_4 >> 0x1f & 1) & 0xfffffffc00000000 | (param_4 & 0xffffffff) << 2))
      ;
      uVar5 = uVar5 - 1;
      fVar8 = pfVar4[2] - pfVar3[2];
      fVar6 = pfVar4[3] - pfVar3[3];
      pfVar4[3] = pfVar4[3] + pfVar3[3];
      pfVar4[2] = pfVar4[2] + pfVar3[2];
      fVar7 = (float)NEON_fmadd(fVar6,*param_5,(float)param_5[1] * -fVar8);
      pfVar3[3] = fVar7;
      fVar6 = (float)NEON_fmadd(fVar8,*param_5,fVar6 * (float)param_5[1]);
      pfVar3[2] = fVar6;
      fVar8 = *pfVar4 - *pfVar3;
      fVar6 = pfVar4[1] - pfVar3[1];
      pfVar4[1] = pfVar4[1] + pfVar3[1];
      *pfVar4 = *pfVar4 + *pfVar3;
      fVar7 = (float)NEON_fmadd(fVar6,param_5[8],(float)param_5[9] * -fVar8);
      pfVar3[1] = fVar7;
      fVar6 = (float)NEON_fmadd(fVar8,param_5[8],fVar6 * (float)param_5[9]);
      *pfVar3 = fVar6;
      fVar8 = pfVar4[-2] - pfVar3[-2];
      fVar6 = pfVar4[-1] - pfVar3[-1];
      pfVar4[-1] = pfVar4[-1] + pfVar3[-1];
      pfVar4[-2] = pfVar4[-2] + pfVar3[-2];
      fVar7 = (float)NEON_fmadd(fVar6,param_5[0x10],(float)param_5[0x11] * -fVar8);
      pfVar3[-1] = fVar7;
      fVar6 = (float)NEON_fmadd(fVar8,param_5[0x10],fVar6 * (float)param_5[0x11]);
      pfVar3[-2] = fVar6;
      fVar8 = pfVar4[-4] - pfVar3[-4];
      fVar6 = pfVar4[-3] - pfVar3[-3];
      pfVar4[-3] = pfVar4[-3] + pfVar3[-3];
      pfVar4[-4] = pfVar4[-4] + pfVar3[-4];
      pfVar4 = pfVar4 + -8;
      fVar7 = (float)NEON_fmadd(fVar6,param_5[0x18],(float)param_5[0x19] * -fVar8);
      pfVar3[-3] = fVar7;
      pfVar1 = (float *)(param_5 + 0x19);
      puVar2 = param_5 + 0x18;
      param_5 = param_5 + 0x20;
      fVar6 = (float)NEON_fmadd(fVar8,*puVar2,fVar6 * *pfVar1);
      pfVar3[-4] = fVar6;
    } while (1 < uVar5);
  }
  return;
}


