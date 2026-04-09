// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: DecrSortEigenStuff
// Entry Point: 00eb6228
// Size: 464 bytes
// Signature: undefined DecrSortEigenStuff(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* FLOAT_MATH::Eigen<float>::DecrSortEigenStuff() */

void FLOAT_MATH::Eigen<float>::DecrSortEigenStuff(void)

{
  ulong uVar1;
  undefined8 *in_x0;
  byte bVar2;
  long lVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  
  fVar8 = *(float *)((long)in_x0 + 4);
  fVar11 = *(float *)(in_x0 + 1);
  fVar7 = *(float *)(in_x0 + 2);
  uVar6 = *(undefined4 *)((long)in_x0 + 0x14);
  fVar9 = *(float *)(in_x0 + 4);
  *(undefined4 *)(in_x0 + 7) = 0;
  *(undefined4 *)((long)in_x0 + 0x24) = *(undefined4 *)in_x0;
  if (fVar11 == 0.0) {
    fVar12 = 0.0;
    fVar15 = 1.0;
    fVar16 = 1.0;
  }
  else {
    fVar14 = (float)NEON_fmadd(fVar8,fVar8,fVar11 * fVar11);
    fVar16 = 1.0 / SQRT(fVar14);
    fVar15 = fVar8 * fVar16;
    fVar12 = fVar11 * fVar16;
    fVar16 = -(fVar8 * fVar16);
    uVar17 = NEON_fmadd(fVar15 + fVar15,uVar6,(fVar9 - fVar7) * fVar12);
    fVar7 = (float)NEON_fmadd(fVar12,uVar17,fVar7);
    fVar9 = (float)NEON_fmsub(fVar12,uVar17,fVar9);
    uVar6 = NEON_fmsub(fVar15,uVar17,uVar6);
    fVar8 = SQRT(fVar14);
  }
  *(float *)(in_x0 + 6) = fVar8;
  *(undefined4 *)((long)in_x0 + 0x34) = uVar6;
  *(float *)(in_x0 + 5) = fVar7;
  *(float *)((long)in_x0 + 0x2c) = fVar9;
  *(float *)(in_x0 + 2) = fVar15;
  *(float *)((long)in_x0 + 0x14) = fVar12;
  *(undefined4 *)(in_x0 + 3) = 0;
  *(float *)((long)in_x0 + 0x1c) = fVar12;
  *(float *)(in_x0 + 4) = fVar16;
  *(bool *)((long)in_x0 + 0x3c) = fVar11 == 0.0;
  in_x0[1] = 0;
  *in_x0 = 0x3f800000;
  QLAlgorithm();
  fVar11 = *(float *)((long)in_x0 + 0x24);
  fVar9 = *(float *)(in_x0 + 5);
  fVar7 = *(float *)((long)in_x0 + 0x2c);
  fVar8 = fVar9;
  if (fVar9 <= fVar11) {
    fVar8 = fVar11;
  }
  uVar1 = 2;
  if (fVar7 <= fVar8) {
    uVar1 = (ulong)(fVar11 < fVar9);
  }
  bVar2 = *(byte *)((long)in_x0 + 0x3c);
  if (uVar1 != 0) {
    lVar3 = uVar1 * 4;
    if (fVar7 <= fVar8) {
      fVar7 = fVar8;
    }
    uVar10 = *(undefined4 *)((long)in_x0 + lVar3);
    *(undefined4 *)((long)in_x0 + lVar3) = *(undefined4 *)in_x0;
    bVar2 = bVar2 ^ 1;
    puVar4 = (undefined4 *)((long)in_x0 + 0xc);
    uVar13 = puVar4[uVar1];
    puVar4[uVar1] = *puVar4;
    *(float *)((long)in_x0 + 0x24) = fVar7;
    puVar5 = in_x0 + 3;
    uVar6 = *(undefined4 *)puVar5;
    ((float *)((long)in_x0 + 0x24))[uVar1] = fVar11;
    uVar17 = *(undefined4 *)((long)puVar5 + lVar3);
    *(undefined4 *)((long)puVar5 + lVar3) = uVar6;
    fVar9 = *(float *)(in_x0 + 5);
    fVar7 = *(float *)((long)in_x0 + 0x2c);
    *puVar4 = uVar13;
    *(undefined4 *)in_x0 = uVar10;
    *(undefined4 *)puVar5 = uVar17;
    *(byte *)((long)in_x0 + 0x3c) = bVar2;
  }
  if (fVar9 < fVar7) {
    bVar2 = bVar2 ^ 1;
    *(float *)((long)in_x0 + 0x2c) = fVar9;
    uVar6 = *(undefined4 *)((long)in_x0 + 4);
    *(float *)(in_x0 + 5) = fVar7;
    *(byte *)((long)in_x0 + 0x3c) = bVar2;
    *(undefined4 *)((long)in_x0 + 4) = *(undefined4 *)(in_x0 + 1);
    uVar17 = *(undefined4 *)(in_x0 + 2);
    *(undefined4 *)(in_x0 + 1) = uVar6;
    *(undefined4 *)(in_x0 + 2) = *(undefined4 *)((long)in_x0 + 0x14);
    uVar6 = *(undefined4 *)((long)in_x0 + 0x1c);
    *(undefined4 *)((long)in_x0 + 0x14) = uVar17;
    *(undefined4 *)((long)in_x0 + 0x1c) = *(undefined4 *)(in_x0 + 4);
    *(undefined4 *)(in_x0 + 4) = uVar6;
  }
  if (bVar2 == 0) {
    *(float *)in_x0 = -*(float *)in_x0;
    *(float *)((long)in_x0 + 0xc) = -*(float *)((long)in_x0 + 0xc);
    *(float *)(in_x0 + 3) = -*(float *)(in_x0 + 3);
    return;
  }
  return;
}


