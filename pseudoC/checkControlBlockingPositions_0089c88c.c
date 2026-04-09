// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: checkControlBlockingPositions
// Entry Point: 0089c88c
// Size: 324 bytes
// Signature: undefined checkControlBlockingPositions(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* SimulatedPedestrian::checkControlBlockingPositions() */

void SimulatedPedestrian::checkControlBlockingPositions(void)

{
  long lVar1;
  long in_x0;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  float *pfVar6;
  long lVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  
  lVar2 = *(long *)(in_x0 + 0x78);
  fVar8 = *(float *)(lVar2 + 0x24);
  lVar1 = *(long *)(lVar2 + 0x50);
  fVar10 = fVar8 * 2.5;
  uVar11 = *(undefined4 *)(in_x0 + 0x80);
  uVar9 = *(undefined4 *)(in_x0 + 0x84);
  lVar2 = *(long *)(lVar2 + 0x58) - lVar1;
  if (lVar2 != 0) {
    fVar12 = (float)NEON_fmadd(fVar10,uVar11,uVar9);
    uVar3 = 0;
    uVar4 = (lVar2 >> 2) * 0x6db6db6db6db6db7;
    do {
      pfVar6 = (float *)(lVar1 + uVar3 * 0x1c);
      if (ABS(fVar12 - *pfVar6) < fVar10 + pfVar6[1]) {
        lVar2 = lVar1 + uVar3 * 0x1c;
        *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
      }
      uVar3 = (ulong)((int)uVar3 + 1);
    } while (uVar3 <= uVar4 && uVar4 - uVar3 != 0);
  }
  fVar10 = (float)NEON_fmadd(fVar10 + fVar10,uVar11,uVar9);
  if (fVar10 <= 1.0) {
    if (0.0 <= fVar10) {
      return;
    }
    fVar10 = -fVar10;
  }
  else {
    fVar10 = 1.0 - fVar10;
  }
  fVar10 = fVar10 / fVar8;
  if (0.0 < fVar10) {
    lVar5 = *(long *)(in_x0 + 200);
    lVar7 = *(long *)(lVar5 + 0x10);
    lVar1 = *(long *)(lVar7 + 0x50);
    lVar2 = *(long *)(lVar7 + 0x58) - lVar1;
    if (lVar2 != 0) {
      uVar3 = 0;
      fVar8 = fVar10 * *(float *)(lVar7 + 0x24) * 0.5;
      fVar10 = (float)NEON_fmadd(fVar8,*(undefined4 *)(lVar5 + 0x20),*(undefined4 *)(lVar5 + 0x18));
      uVar4 = (lVar2 >> 2) * 0x6db6db6db6db6db7;
      do {
        pfVar6 = (float *)(lVar1 + uVar3 * 0x1c);
        if (ABS(fVar10 - *pfVar6) < fVar8 + pfVar6[1]) {
          lVar2 = lVar1 + uVar3 * 0x1c;
          *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
        }
        uVar3 = (ulong)((int)uVar3 + 1);
      } while (uVar3 <= uVar4 && uVar4 - uVar3 != 0);
    }
  }
  return;
}


