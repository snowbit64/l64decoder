// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f2b324
// Entry Point: 00f2b324
// Size: 448 bytes
// Signature: undefined FUN_00f2b324(void)


void FUN_00f2b324(long param_1,long param_2,undefined4 *param_3)

{
  long lVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar5 = (float)param_3[4];
  fVar6 = (float)param_3[5];
  uVar2 = NEON_fmadd(*(undefined4 *)(param_1 + 0x44),fVar6,*(float *)(param_1 + 0x40) * fVar5);
  uVar2 = NEON_fmadd(*(undefined4 *)(param_1 + 0x48),param_3[6],uVar2);
  fVar3 = (float)NEON_fmadd(*(undefined4 *)(param_1 + 0x50),*param_3,uVar2);
  fVar3 = (float)NEON_fmadd(*(undefined4 *)(param_2 + 0x40),param_3[0xc],
                            fVar3 + (float)*(undefined8 *)(param_1 + 0x54) *
                                    (float)*(undefined8 *)(param_3 + 1) +
                                    (float)((ulong)*(undefined8 *)(param_1 + 0x54) >> 0x20) *
                                    (float)((ulong)*(undefined8 *)(param_3 + 1) >> 0x20));
  fVar7 = (float)param_3[0x19];
  fVar3 = (float)NEON_fmadd(*(undefined4 *)(param_2 + 0x50),param_3[8],
                            fVar3 + (float)*(undefined8 *)(param_2 + 0x44) *
                                    (float)*(undefined8 *)(param_3 + 0xd) +
                                    (float)((ulong)*(undefined8 *)(param_2 + 0x44) >> 0x20) *
                                    (float)((ulong)*(undefined8 *)(param_3 + 0xd) >> 0x20));
  fVar8 = (float)param_3[0x1e];
  fVar4 = (float)NEON_fmadd(fVar3 + (float)*(undefined8 *)(param_2 + 0x54) *
                                    (float)*(undefined8 *)(param_3 + 9) +
                                    (float)((ulong)*(undefined8 *)(param_2 + 0x54) >> 0x20) *
                                    (float)((ulong)*(undefined8 *)(param_3 + 9) >> 0x20),
                            param_3[0x1b],(float)param_3[0x1d] * fVar7);
  fVar4 = (float)param_3[0x1c] - fVar4;
  fVar3 = fVar4 + fVar7;
  if ((fVar3 < fVar8) || (fVar8 = (float)param_3[0x1f], fVar8 < fVar3)) {
    fVar4 = fVar8 - fVar7;
    fVar3 = fVar8;
  }
  lVar1 = *(long *)(param_1 + 0xf0);
  param_3[0x19] = fVar3;
  if (lVar1 != 0) {
    uVar2 = NEON_fmadd(*(float *)(param_1 + 0x88) * fVar4 * (float)param_3[6],
                       *(undefined4 *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x48));
    *(undefined4 *)(param_1 + 0x48) = uVar2;
    *(ulong *)(param_1 + 0x40) =
         CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x40) >> 0x20) +
                  (float)((ulong)*(undefined8 *)(param_1 + 0x70) >> 0x20) *
                  *(float *)(param_1 + 0x84) * fVar4 * fVar6,
                  (float)*(undefined8 *)(param_1 + 0x40) +
                  (float)*(undefined8 *)(param_1 + 0x70) *
                  fVar5 * fVar4 * *(float *)(param_1 + 0x80));
    uVar2 = NEON_fmadd(*(float *)(param_1 + 0x68) * fVar4,param_3[0x12],
                       *(undefined4 *)(param_1 + 0x58));
    *(ulong *)(param_1 + 0x50) =
         CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x50) >> 0x20) +
                  (float)((ulong)*(undefined8 *)(param_3 + 0x10) >> 0x20) *
                  (float)((ulong)*(undefined8 *)(param_1 + 0x60) >> 0x20) * fVar4,
                  (float)*(undefined8 *)(param_1 + 0x50) +
                  (float)*(undefined8 *)(param_3 + 0x10) *
                  (float)*(undefined8 *)(param_1 + 0x60) * fVar4);
    *(undefined4 *)(param_1 + 0x58) = uVar2;
  }
  if (*(long *)(param_2 + 0xf0) != 0) {
    uVar2 = NEON_fmadd(*(float *)(param_2 + 0x88) * fVar4 * (float)param_3[0xe],
                       *(undefined4 *)(param_2 + 0x78),*(undefined4 *)(param_2 + 0x48));
    *(ulong *)(param_2 + 0x40) =
         CONCAT44((float)((ulong)*(undefined8 *)(param_2 + 0x40) >> 0x20) +
                  (float)((ulong)*(undefined8 *)(param_2 + 0x70) >> 0x20) *
                  (float)((ulong)*(undefined8 *)(param_2 + 0x80) >> 0x20) * fVar4 *
                  (float)((ulong)*(undefined8 *)(param_3 + 0xc) >> 0x20),
                  (float)*(undefined8 *)(param_2 + 0x40) +
                  (float)*(undefined8 *)(param_2 + 0x70) *
                  (float)*(undefined8 *)(param_2 + 0x80) * fVar4 *
                  (float)*(undefined8 *)(param_3 + 0xc));
    *(undefined4 *)(param_2 + 0x48) = uVar2;
    uVar2 = NEON_fmadd(*(float *)(param_2 + 0x68) * fVar4,param_3[0x16],
                       *(undefined4 *)(param_2 + 0x58));
    *(ulong *)(param_2 + 0x50) =
         CONCAT44((float)((ulong)*(undefined8 *)(param_2 + 0x50) >> 0x20) +
                  (float)((ulong)*(undefined8 *)(param_3 + 0x14) >> 0x20) *
                  (float)((ulong)*(undefined8 *)(param_2 + 0x60) >> 0x20) * fVar4,
                  (float)*(undefined8 *)(param_2 + 0x50) +
                  (float)*(undefined8 *)(param_3 + 0x14) *
                  (float)*(undefined8 *)(param_2 + 0x60) * fVar4);
    *(undefined4 *)(param_2 + 0x58) = uVar2;
  }
  return;
}


