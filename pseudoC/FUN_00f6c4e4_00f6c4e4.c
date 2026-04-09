// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f6c4e4
// Entry Point: 00f6c4e4
// Size: 440 bytes
// Signature: undefined FUN_00f6c4e4(void)


void FUN_00f6c4e4(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4,
                 undefined8 *param_5,undefined8 *param_6,uint param_7)

{
  code *pcVar1;
  float fVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  float fVar19;
  float fVar20;
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  
  *(undefined4 *)(param_5 + 4) = 0;
  param_5[1] = 0;
  *param_5 = 0;
  param_5[3] = 0;
  param_5[2] = 0;
  fVar6 = *(float *)param_4;
  fVar11 = *(float *)((long)param_4 + 4);
  uVar3 = *param_2;
  *param_6 = param_1;
  param_6[1] = param_3;
  fVar8 = *(float *)(param_2 + 1);
  fVar20 = *(float *)(param_4 + 1);
  fVar2 = (float)uVar3;
  fVar4 = (float)((ulong)uVar3 >> 0x20);
  fVar16 = *(float *)(param_4 + 2);
  fVar19 = *(float *)((long)param_4 + 0x14);
  uVar15 = *(undefined4 *)(param_2 + 3);
  fVar23 = *(float *)(param_4 + 3);
  fVar5 = (float)param_2[2];
  fVar10 = (float)((ulong)param_2[2] >> 0x20);
  uVar7 = NEON_fmadd(uVar15,fVar16,fVar8 * fVar6);
  uVar12 = NEON_fmadd(fVar19,uVar15,fVar11 * fVar8);
  fVar22 = *(float *)(param_4 + 4);
  fVar17 = *(float *)((long)param_4 + 0x24);
  uVar9 = NEON_fmadd(fVar23,uVar15,fVar20 * fVar8);
  uVar3 = param_2[4];
  uVar18 = *(undefined4 *)(param_2 + 5);
  fVar8 = *(float *)(param_4 + 5);
  *(undefined4 *)((long)param_6 + 0x1c) = 0;
  fVar13 = (float)uVar3;
  fVar14 = (float)((ulong)uVar3 >> 0x20);
  uVar15 = NEON_fmadd(uVar18,fVar22,uVar7);
  uVar12 = NEON_fmadd(fVar17,uVar18,uVar12);
  uVar7 = NEON_fmadd(fVar8,uVar18,uVar9);
  *(undefined4 *)((long)param_6 + 0x2c) = 0;
  param_6[2] = CONCAT44(fVar4 * fVar6 + fVar10 * fVar16 + fVar14 * fVar22,
                        fVar2 * fVar6 + fVar5 * fVar16 + fVar13 * fVar22);
  *(undefined4 *)(param_6 + 3) = uVar15;
  param_6[4] = CONCAT44(fVar4 * fVar11 + fVar10 * fVar19 + fVar14 * fVar17,
                        fVar2 * fVar11 + fVar5 * fVar19 + fVar13 * fVar17);
  *(undefined4 *)(param_6 + 5) = uVar12;
  param_6[6] = CONCAT44(fVar4 * fVar20 + fVar10 * fVar23 + fVar14 * fVar8,
                        fVar2 * fVar20 + fVar5 * fVar23 + fVar13 * fVar8);
  *(undefined4 *)(param_6 + 7) = uVar7;
  *(undefined4 *)((long)param_6 + 0x3c) = 0;
  fVar14 = *(float *)param_2;
  fVar2 = *(float *)(param_4 + 6) - *(float *)(param_2 + 6);
  fVar5 = *(float *)((long)param_2 + 4);
  fVar23 = *(float *)(param_2 + 1);
  fVar19 = *(float *)(param_4 + 1);
  fVar10 = *(float *)(param_4 + 7) - *(float *)(param_2 + 7);
  fVar6 = (float)*param_4;
  fVar11 = (float)((ulong)*param_4 >> 0x20);
  fVar22 = *(float *)(param_2 + 2);
  fVar13 = *(float *)((long)param_2 + 0x14);
  fVar4 = *(float *)((long)param_4 + 0x34) - *(float *)((long)param_2 + 0x34);
  fVar8 = *(float *)(param_4 + 3);
  fVar16 = (float)param_4[2];
  fVar17 = (float)((ulong)param_4[2] >> 0x20);
  fVar26 = *(float *)(param_2 + 3);
  fVar25 = *(float *)(param_2 + 4);
  fVar27 = *(float *)((long)param_2 + 0x24);
  uVar15 = NEON_fmadd(fVar8,fVar22,fVar19 * fVar14);
  uVar9 = NEON_fmadd(fVar13,fVar8,fVar5 * fVar19);
  uVar7 = NEON_fmadd(fVar26,fVar8,fVar23 * fVar19);
  fVar24 = *(float *)(param_4 + 5);
  fVar8 = *(float *)(param_2 + 5);
  fVar19 = (float)param_4[4];
  fVar20 = (float)((ulong)param_4[4] >> 0x20);
  uVar21 = NEON_fmadd(fVar24,fVar25,uVar15);
  uVar18 = NEON_fmadd(fVar27,fVar24,uVar9);
  uVar12 = NEON_fmadd(fVar8,fVar24,uVar7);
  uVar15 = NEON_fmadd(fVar22,fVar4,fVar14 * fVar2);
  uVar9 = NEON_fmadd(fVar13,fVar4,fVar5 * fVar2);
  uVar7 = NEON_fmadd(fVar26,fVar4,fVar23 * fVar2);
  param_6[8] = CONCAT44(fVar11 * fVar14 + fVar17 * fVar22 + fVar20 * fVar25,
                        fVar6 * fVar14 + fVar16 * fVar22 + fVar19 * fVar25);
  *(undefined4 *)(param_6 + 9) = uVar21;
  *(undefined4 *)((long)param_6 + 0x4c) = 0;
  param_6[10] = CONCAT44(fVar11 * fVar5 + fVar17 * fVar13 + fVar20 * fVar27,
                         fVar6 * fVar5 + fVar16 * fVar13 + fVar19 * fVar27);
  uVar15 = NEON_fmadd(fVar25,fVar10,uVar15);
  *(undefined4 *)(param_6 + 0xb) = uVar18;
  uVar9 = NEON_fmadd(fVar27,fVar10,uVar9);
  *(undefined4 *)((long)param_6 + 0x5c) = 0;
  uVar7 = NEON_fmadd(fVar8,fVar10,uVar7);
  param_6[0xc] = CONCAT44(fVar11 * fVar23 + fVar17 * fVar26 + fVar20 * fVar8,
                          fVar6 * fVar23 + fVar16 * fVar26 + fVar19 * fVar8);
  *(undefined4 *)(param_6 + 0xd) = uVar12;
  *(undefined4 *)((long)param_6 + 0x6c) = 0;
  *(undefined4 *)(param_6 + 0xe) = uVar15;
  *(undefined4 *)((long)param_6 + 0x74) = uVar9;
  pcVar1 = btConvexShape::localGetSupportVertexNonVirtual;
  if ((param_7 & 1) == 0) {
    pcVar1 = btConvexShape::localGetSupportVertexWithoutMarginNonVirtual;
  }
  *(undefined4 *)(param_6 + 0xf) = uVar7;
  *(undefined4 *)((long)param_6 + 0x7c) = 0;
  param_6[0x10] = pcVar1;
  param_6[0x11] = 0;
  return;
}


