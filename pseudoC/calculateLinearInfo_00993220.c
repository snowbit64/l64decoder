// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: calculateLinearInfo
// Entry Point: 00993220
// Size: 452 bytes
// Signature: undefined calculateLinearInfo(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Bt2D6Joint::calculateLinearInfo() */

void Bt2D6Joint::calculateLinearInfo(void)

{
  long in_x0;
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  fVar5 = *(float *)(in_x0 + 0x300) - *(float *)(in_x0 + 0x2c0);
  fVar16 = *(float *)(in_x0 + 0x304) - *(float *)(in_x0 + 0x2c4);
  fVar15 = *(float *)(in_x0 + 200);
  fVar2 = *(float *)(in_x0 + 0x308) - *(float *)(in_x0 + 0x2c8);
  fVar12 = (float)*(undefined8 *)(in_x0 + 0x2a0);
  fVar13 = (float)((ulong)*(undefined8 *)(in_x0 + 0x2a0) >> 0x20);
  fVar3 = (float)*(undefined8 *)(in_x0 + 0x290);
  fVar4 = (float)((ulong)*(undefined8 *)(in_x0 + 0x290) >> 0x20);
  fVar7 = (float)*(undefined8 *)(in_x0 + 0x2b0);
  fVar8 = (float)((ulong)*(undefined8 *)(in_x0 + 0x2b0) >> 0x20);
  if (fVar15 == 0.0) {
    fVar3 = fVar12 * fVar16 + fVar3 * fVar5 + fVar7 * fVar2;
    fVar4 = fVar13 * fVar16 + fVar4 * fVar5 + fVar8 * fVar2;
  }
  else {
    *(undefined4 *)(in_x0 + 0x31c) = 0;
    *(undefined4 *)(in_x0 + 0x32c) = 0;
    fVar14 = *(float *)(in_x0 + 0x2c4) + fVar15 * fVar12;
    fVar10 = *(float *)(in_x0 + 0x2c0) + fVar15 * fVar3;
    fVar11 = *(float *)(in_x0 + 0x304) + fVar15 * *(float *)(in_x0 + 0x2e0);
    *(float *)(in_x0 + 0x314) = fVar14;
    fVar9 = *(float *)(in_x0 + 0x2c8) + fVar15 * fVar7;
    *(float *)(in_x0 + 0x310) = fVar10;
    fVar17 = *(float *)(in_x0 + 0x300) + fVar15 * *(float *)(in_x0 + 0x2d0);
    fVar14 = fVar11 - fVar14;
    *(float *)(in_x0 + 0x324) = fVar11;
    *(float *)(in_x0 + 0x318) = fVar9;
    fVar15 = *(float *)(in_x0 + 0x308) + fVar15 * *(float *)(in_x0 + 0x2f0);
    fVar10 = fVar17 - fVar10;
    *(float *)(in_x0 + 800) = fVar17;
    fVar9 = fVar15 - fVar9;
    *(float *)(in_x0 + 0x328) = fVar15;
    fVar3 = fVar12 * fVar14 + fVar3 * fVar10 + fVar7 * fVar9;
    fVar4 = fVar13 * fVar14 + fVar4 * fVar10 + fVar8 * fVar9;
  }
  fVar7 = *(float *)(in_x0 + 0xcc);
  uVar6 = NEON_fmadd(*(undefined4 *)(in_x0 + 0x298),fVar5,fVar16 * *(float *)(in_x0 + 0x2a8));
  fVar5 = *(float *)(in_x0 + 0xdc);
  *(float *)(in_x0 + 0x1a4) = fVar3;
  if (fVar7 <= fVar5) {
    *(float *)(in_x0 + 0x184) = fVar3 - fVar7;
    if (fVar7 == fVar5) {
      uVar1 = 3;
    }
    else {
      uVar1 = 4;
      *(float *)(in_x0 + 0x194) = fVar3 - fVar5;
    }
  }
  else {
    uVar1 = 0;
    *(undefined4 *)(in_x0 + 0x184) = 0;
  }
  fVar3 = *(float *)(in_x0 + 0xd0);
  fVar2 = (float)NEON_fmadd(*(undefined4 *)(in_x0 + 0x2b8),fVar2,uVar6);
  fVar5 = *(float *)(in_x0 + 0xe0);
  *(undefined4 *)(in_x0 + 0x1b4) = uVar1;
  *(float *)(in_x0 + 0x1a8) = fVar4;
  if (fVar3 <= fVar5) {
    *(float *)(in_x0 + 0x188) = fVar4 - fVar3;
    if (fVar3 == fVar5) {
      uVar6 = 3;
    }
    else {
      uVar6 = 4;
      *(float *)(in_x0 + 0x198) = fVar4 - fVar5;
    }
  }
  else {
    uVar6 = 0;
    *(undefined4 *)(in_x0 + 0x188) = 0;
  }
  fVar3 = *(float *)(in_x0 + 0xd4);
  *(undefined4 *)(in_x0 + 0x1b8) = uVar6;
  fVar5 = *(float *)(in_x0 + 0xe4);
  *(float *)(in_x0 + 0x1ac) = fVar2;
  if (fVar5 < fVar3) {
    *(undefined4 *)(in_x0 + 0x18c) = 0;
    *(undefined4 *)(in_x0 + 0x1bc) = 0;
    return;
  }
  *(float *)(in_x0 + 0x18c) = fVar2 - fVar3;
  if (fVar3 == fVar5) {
    *(undefined4 *)(in_x0 + 0x1bc) = 3;
    return;
  }
  *(undefined4 *)(in_x0 + 0x1bc) = 4;
  *(float *)(in_x0 + 0x19c) = fVar2 - fVar5;
  return;
}


