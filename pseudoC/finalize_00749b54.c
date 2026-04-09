// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: finalize
// Entry Point: 00749b54
// Size: 180 bytes
// Signature: undefined finalize(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* KeyframedTransformation::finalize() */

void KeyframedTransformation::finalize(void)

{
  long lVar1;
  float **ppfVar2;
  long in_x0;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  ppfVar2 = *(float ***)(in_x0 + 8);
  *(undefined2 *)(in_x0 + 0x20) = 0;
  *(undefined4 *)(in_x0 + 0xa0) = 0;
  uVar7 = *(long *)(in_x0 + 0x10) - (long)ppfVar2;
  uVar4 = (long)uVar7 >> 3;
  uVar3 = (uint)uVar4;
  if (uVar3 != 0) {
    fVar8 = **ppfVar2;
    fVar9 = *ppfVar2[uVar3 - 1] - fVar8;
    if (0.0 < fVar9) {
      uVar5 = 0;
      uVar6 = 0;
      *(float *)(in_x0 + 0xa0) = 64.0 / fVar9;
      do {
        if ((uint)uVar6 < uVar3) {
          uVar6 = uVar6 & 0xffffffff;
          fVar10 = (float)NEON_fmadd(fVar9 * 0.015625,(float)(uVar5 & 0xffffffff),fVar8);
          do {
            if (fVar10 < *ppfVar2[uVar6]) goto LAB_00749bb8;
            uVar6 = uVar6 + 1;
          } while ((uVar7 >> 3 & 0xffffffff) != uVar6);
          uVar6 = uVar4 & 0xffffffff;
        }
LAB_00749bb8:
        lVar1 = uVar5 * 2;
        uVar5 = uVar5 + 1;
        *(short *)(in_x0 + lVar1 + 0x20) = (short)uVar6;
      } while (uVar5 != 0x40);
    }
  }
  return;
}


