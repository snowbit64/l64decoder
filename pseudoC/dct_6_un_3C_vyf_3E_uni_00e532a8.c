// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: dct_6___un_3C_vyf_3E_uni
// Entry Point: 00e532a8
// Size: 680 bytes
// Signature: undefined dct_6___un_3C_vyf_3E_uni(void)


float dct_6___un_3C_vyf_3E_uni(undefined param_1 [16],undefined8 *param_2,int param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  int iVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined8 uVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined8 uVar35;
  float fVar36;
  float fVar37;
  undefined8 uVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  undefined8 local_60 [4];
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  undefined8 uStack_8;
  
  uVar28 = (param_2 + (long)(param_3 * 5) * 2)[1];
  uVar19 = param_2[(long)(param_3 * 5) * 2];
  uVar20 = (param_2 + (long)(param_3 * 4) * 2)[1];
  uVar17 = param_2[(long)(param_3 * 4) * 2];
  uVar18 = (param_2 + (long)param_3 * 2)[1];
  uVar16 = param_2[(long)param_3 * 2];
  uVar38 = (param_2 + (long)(param_3 * 2) * 2)[1];
  uVar35 = param_2[(long)(param_3 * 2) * 2];
  fVar15 = (float)*param_2;
  fVar24 = (float)uVar19;
  fVar21 = (float)((ulong)*param_2 >> 0x20);
  fVar26 = (float)((ulong)uVar19 >> 0x20);
  fVar22 = (float)param_2[1];
  fVar27 = (float)uVar28;
  fVar23 = (float)((ulong)param_2[1] >> 0x20);
  fVar29 = (float)((ulong)uVar28 >> 0x20);
  uVar28 = (param_2 + (long)(param_3 * 3) * 2)[1];
  uVar19 = param_2[(long)(param_3 * 3) * 2];
  fVar12 = (float)uVar16;
  fVar30 = (float)uVar17;
  fVar25 = (float)((ulong)uVar16 >> 0x20);
  fVar31 = (float)((ulong)uVar17 >> 0x20);
  fVar13 = (float)uVar18;
  fVar32 = (float)uVar20;
  fVar14 = (float)((ulong)uVar18 >> 0x20);
  fVar33 = (float)((ulong)uVar20 >> 0x20);
  uVar11 = (uint)(param_1[0] & 1) + (uint)(param_1[4] & 2) +
           (uint)(param_1[8] & 4) + (uint)(param_1[12] & 8);
  fVar34 = (float)uVar35;
  fVar40 = (float)uVar19;
  fVar36 = (float)((ulong)uVar35 >> 0x20);
  fVar41 = (float)((ulong)uVar19 >> 0x20);
  fVar37 = (float)uVar38;
  fVar42 = (float)uVar28;
  fVar39 = (float)((ulong)uVar38 >> 0x20);
  fVar43 = (float)((ulong)uVar28 >> 0x20);
  local_60[1] = CONCAT44(fVar23 + fVar29,fVar22 + fVar27);
  local_60[0] = CONCAT44(fVar21 + fVar26,fVar15 + fVar24);
  local_60[3] = CONCAT44(fVar14 + fVar33,fVar13 + fVar32);
  local_60[2] = CONCAT44(fVar25 + fVar31,fVar12 + fVar30);
  uStack_38 = CONCAT44(fVar39 + fVar43,fVar37 + fVar42);
  local_40 = CONCAT44(fVar36 + fVar41,fVar34 + fVar40);
  uStack_28 = CONCAT44(fVar23 - fVar29,fVar22 - fVar27);
  uStack_30 = CONCAT44(fVar21 - fVar26,fVar15 - fVar24);
  uStack_18 = CONCAT44(fVar14 - fVar33,fVar13 - fVar32);
  local_20 = CONCAT44(fVar25 - fVar31,fVar12 - fVar30);
  uStack_8 = CONCAT44(fVar39 - fVar43,fVar37 - fVar42);
  uStack_10 = CONCAT44(fVar36 - fVar41,fVar34 - fVar40);
  iVar6 = 0;
  uVar7 = 0;
  uVar8 = 0;
  uVar9 = 0;
  iVar10 = 0x18;
  iVar4 = 0x18;
  if ((uVar11 & 1) == 0) {
    do {
      uVar2 = iVar10 + (uVar7 / 0x18) * 0x18;
      if (uVar7 % 0x18 < 0xd) {
        uVar2 = uVar7 % 0x18;
      }
      uVar3 = 0xc - uVar2;
      if ((int)uVar2 < 7) {
        uVar3 = uVar2;
      }
      uVar5 = uVar9 & 1;
      fVar25 = (float)(&DAT_00563a50)[uVar9];
      fVar12 = -(float)(&DAT_00563a50)[(int)uVar3];
      if ((int)uVar2 < 7) {
        fVar12 = (float)(&DAT_00563a50)[(int)uVar3];
      }
      uVar18 = local_60[uVar5 * 6 + 1];
      uVar16 = local_60[uVar5 * 6 + 3];
      uVar2 = iVar4 + (uVar8 / 0x18) * 0x18;
      if (uVar8 % 0x18 < 0xd) {
        uVar2 = uVar8 % 0x18;
      }
      uVar3 = 0xc - uVar2;
      if ((int)uVar2 < 7) {
        uVar3 = uVar2;
      }
      fVar13 = -(float)(&DAT_00563a50)[(int)uVar3];
      if ((int)uVar2 < 7) {
        fVar13 = (float)(&DAT_00563a50)[(int)uVar3];
      }
      uVar19 = local_60[uVar5 * 6 + 5];
      fVar14 = (float)(&DAT_004c6928)[uVar9 != 0];
      fVar15 = ((float)local_60[uVar5 * 6] * fVar25 + 0.0 + (float)local_60[uVar5 * 6 + 2] * fVar12
               + (float)local_60[uVar5 * 6 + 4] * fVar13) * fVar14;
      if ((uVar11 >> 1 & 1) != 0) {
        *(float *)((long)param_2 + (long)iVar6 * 0x10 + 4) =
             ((float)((ulong)local_60[uVar5 * 6] >> 0x20) * fVar25 + 0.0 +
              (float)((ulong)local_60[uVar5 * 6 + 2] >> 0x20) * fVar12 +
             (float)((ulong)local_60[uVar5 * 6 + 4] >> 0x20) * fVar13) * fVar14;
      }
      if ((uVar11 >> 2 & 1) != 0) {
        *(float *)(param_2 + (long)iVar6 * 2 + 1) =
             ((float)uVar18 * fVar25 + 0.0 + (float)uVar16 * fVar12 + (float)uVar19 * fVar13) *
             fVar14;
      }
      if ((uVar11 >> 3 & 1) != 0) {
        *(float *)((long)param_2 + (long)iVar6 * 0x10 + 0xc) =
             ((float)((ulong)uVar18 >> 0x20) * fVar25 + 0.0 +
              (float)((ulong)uVar16 >> 0x20) * fVar12 + (float)((ulong)uVar19 >> 0x20) * fVar13) *
             fVar14;
      }
      uVar9 = uVar9 + 1;
      uVar8 = uVar8 + 5;
      iVar4 = iVar4 + -5;
      uVar7 = uVar7 + 3;
      iVar10 = iVar10 + -3;
      iVar6 = iVar6 + param_3;
    } while (uVar9 != 6);
  }
  else {
    do {
      uVar2 = iVar10 + (uVar7 / 0x18) * 0x18;
      if (uVar7 % 0x18 < 0xd) {
        uVar2 = uVar7 % 0x18;
      }
      uVar3 = 0xc - uVar2;
      if ((int)uVar2 < 7) {
        uVar3 = uVar2;
      }
      uVar5 = uVar9 & 1;
      fVar25 = (float)(&DAT_00563a50)[uVar9];
      fVar12 = -(float)(&DAT_00563a50)[(int)uVar3];
      if ((int)uVar2 < 7) {
        fVar12 = (float)(&DAT_00563a50)[(int)uVar3];
      }
      uVar28 = local_60[uVar5 * 6 + 1];
      uVar19 = local_60[uVar5 * 6];
      uVar18 = local_60[uVar5 * 6 + 3];
      uVar16 = local_60[uVar5 * 6 + 2];
      uVar2 = iVar4 + (uVar8 / 0x18) * 0x18;
      if (uVar8 % 0x18 < 0xd) {
        uVar2 = uVar8 % 0x18;
      }
      uVar3 = 0xc - uVar2;
      if ((int)uVar2 < 7) {
        uVar3 = uVar2;
      }
      fVar13 = -(float)(&DAT_00563a50)[(int)uVar3];
      if ((int)uVar2 < 7) {
        fVar13 = (float)(&DAT_00563a50)[(int)uVar3];
      }
      uVar20 = local_60[uVar5 * 6 + 5];
      uVar17 = local_60[uVar5 * 6 + 4];
      fVar14 = (float)(&DAT_004c6928)[uVar9 != 0];
      fVar15 = ((float)uVar19 * fVar25 + 0.0 + (float)uVar16 * fVar12 + (float)uVar17 * fVar13) *
               fVar14;
      puVar1 = param_2 + (long)iVar6 * 2;
      *(float *)puVar1 = fVar15;
      if ((uVar11 >> 1 & 1) != 0) {
        *(float *)((long)puVar1 + 4) =
             ((float)((ulong)uVar19 >> 0x20) * fVar25 + 0.0 +
              (float)((ulong)uVar16 >> 0x20) * fVar12 + (float)((ulong)uVar17 >> 0x20) * fVar13) *
             fVar14;
      }
      if ((uVar11 >> 2 & 1) != 0) {
        *(float *)(puVar1 + 1) =
             ((float)uVar28 * fVar25 + 0.0 + (float)uVar18 * fVar12 + (float)uVar20 * fVar13) *
             fVar14;
      }
      if ((uVar11 >> 3 & 1) != 0) {
        *(float *)((long)puVar1 + 0xc) =
             ((float)((ulong)uVar28 >> 0x20) * fVar25 + 0.0 +
              (float)((ulong)uVar18 >> 0x20) * fVar12 + (float)((ulong)uVar20 >> 0x20) * fVar13) *
             fVar14;
      }
      uVar9 = uVar9 + 1;
      uVar8 = uVar8 + 5;
      iVar4 = iVar4 + -5;
      uVar7 = uVar7 + 3;
      iVar10 = iVar10 + -3;
      iVar6 = iVar6 + param_3;
    } while (uVar9 != 6);
  }
  return fVar15;
}


