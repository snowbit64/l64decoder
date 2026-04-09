// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00e4eda0
// Entry Point: 00e4eda0
// Size: 396 bytes
// Signature: undefined FUN_00e4eda0(void)


void FUN_00e4eda0(uint param_1,long param_2,int param_3,ulong param_4,undefined4 *param_5,
                 int param_6)

{
  float *pfVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  float *pfVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  if (3 < (int)param_1) {
    pfVar4 = (float *)(param_2 + (long)param_3 * 4);
    uVar5 = (param_1 >> 2) + 1;
    do {
      pfVar1 = (float *)((long)pfVar4 +
                        ((-(param_4 >> 0x1f & 1) & 0xfffffffc00000000 | (param_4 & 0xffffffff) << 2)
                        - 0x1c));
      puVar2 = param_5 + param_6;
      uVar5 = uVar5 - 1;
      fVar8 = pfVar4[-1] - pfVar1[6];
      fVar6 = *pfVar4 - pfVar1[7];
      *pfVar4 = *pfVar4 + pfVar1[7];
      pfVar4[-1] = pfVar4[-1] + pfVar1[6];
      fVar7 = (float)NEON_fmadd(fVar6,*param_5,(float)param_5[1] * -fVar8);
      pfVar1[7] = fVar7;
      fVar6 = (float)NEON_fmadd(fVar8,*param_5,fVar6 * (float)param_5[1]);
      pfVar1[6] = fVar6;
      fVar8 = pfVar4[-3] - pfVar1[4];
      fVar6 = pfVar4[-2] - pfVar1[5];
      pfVar4[-2] = pfVar4[-2] + pfVar1[5];
      pfVar4[-3] = pfVar4[-3] + pfVar1[4];
      fVar7 = (float)NEON_fmadd(fVar6,*puVar2,(float)puVar2[1] * -fVar8);
      pfVar1[5] = fVar7;
      puVar3 = puVar2 + param_6;
      fVar6 = (float)NEON_fmadd(fVar8,*puVar2,fVar6 * (float)puVar2[1]);
      pfVar1[4] = fVar6;
      fVar8 = pfVar4[-5] - pfVar1[2];
      fVar6 = pfVar4[-4] - pfVar1[3];
      pfVar4[-4] = pfVar4[-4] + pfVar1[3];
      pfVar4[-5] = pfVar4[-5] + pfVar1[2];
      fVar7 = (float)NEON_fmadd(fVar6,*puVar3,(float)puVar3[1] * -fVar8);
      pfVar1[3] = fVar7;
      puVar2 = puVar3 + param_6;
      param_5 = puVar2 + param_6;
      fVar6 = (float)NEON_fmadd(fVar8,*puVar3,fVar6 * (float)puVar3[1]);
      pfVar1[2] = fVar6;
      fVar8 = pfVar4[-7] - *pfVar1;
      fVar6 = pfVar4[-6] - pfVar1[1];
      pfVar4[-6] = pfVar4[-6] + pfVar1[1];
      pfVar4[-7] = pfVar4[-7] + *pfVar1;
      pfVar4 = pfVar4 + -8;
      fVar7 = (float)NEON_fmadd(fVar6,*puVar2,(float)puVar2[1] * -fVar8);
      pfVar1[1] = fVar7;
      fVar6 = (float)NEON_fmadd(fVar8,*puVar2,fVar6 * (float)puVar2[1]);
      *pfVar1 = fVar6;
    } while (1 < uVar5);
  }
  return;
}


