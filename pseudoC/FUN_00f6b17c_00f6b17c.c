// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f6b17c
// Entry Point: 00f6b17c
// Size: 268 bytes
// Signature: undefined FUN_00f6b17c(void)


void FUN_00f6b17c(long param_1,float *param_2)

{
  float *pfVar1;
  ulong uVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  
  uVar6 = NEON_fminnm(*param_2,param_2[4]);
  fVar7 = (float)NEON_fminnm(uVar6,param_2[8]);
  if (fVar7 <= *(float *)(param_1 + 0x20)) {
    uVar2 = (ulong)(*param_2 <= param_2[4]);
    lVar3 = uVar2 * 0x10;
    if (param_2[uVar2 * 4] <= param_2[8]) {
      lVar3 = 0x20;
    }
    if (*(float *)(param_1 + 0x10) <= *(float *)((long)param_2 + lVar3)) {
      fVar7 = param_2[2];
      fVar4 = param_2[6];
      fVar5 = param_2[10];
      uVar6 = NEON_fminnm(fVar7,fVar4);
      fVar8 = (float)NEON_fminnm(uVar6,fVar5);
      if (fVar8 <= *(float *)(param_1 + 0x28)) {
        pfVar1 = param_2 + 2;
        if (fVar7 <= fVar4) {
          pfVar1 = param_2 + 6;
        }
        if (*pfVar1 <= fVar5) {
          pfVar1 = param_2 + 10;
        }
        if (*(float *)(param_1 + 0x18) <= *pfVar1) {
          fVar7 = param_2[1];
          fVar4 = param_2[5];
          fVar5 = param_2[9];
          uVar6 = NEON_fminnm(fVar7,fVar4);
          fVar8 = (float)NEON_fminnm(uVar6,fVar5);
          if (fVar8 <= *(float *)(param_1 + 0x24)) {
            pfVar1 = param_2 + 1;
            if (fVar7 <= fVar4) {
              pfVar1 = param_2 + 5;
            }
            if (*pfVar1 <= fVar5) {
              pfVar1 = param_2 + 9;
            }
            if (*(float *)(param_1 + 0x14) <= *pfVar1) {
              (**(code **)(**(long **)(param_1 + 8) + 0x10))();
            }
          }
        }
      }
    }
  }
  return;
}


