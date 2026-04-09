// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getSamplesValuesFromGrainIdx
// Entry Point: 008a4b60
// Size: 248 bytes
// Signature: undefined __thiscall getSamplesValuesFromGrainIdx(GranularSynthesisRuntimeSettings * this, int param_1, short * param_2, uint * param_3)


/* GranularSynthesisRuntimeSettings::getSamplesValuesFromGrainIdx(int, short*, unsigned int&) const
    */

void __thiscall
GranularSynthesisRuntimeSettings::getSamplesValuesFromGrainIdx
          (GranularSynthesisRuntimeSettings *this,int param_1,short *param_2,uint *param_3)

{
  uint *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  short *psVar9;
  int iVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  *param_3 = 0;
  if (param_1 < 0) {
    return;
  }
  if ((int)((ulong)(*(long *)(this + 0x38) - *(long *)(this + 0x30)) >> 4) < param_1) {
    return;
  }
  puVar1 = (uint *)(*(long *)(this + 0x30) + (ulong)(uint)param_1 * 0x10);
  uVar5 = *puVar1;
  uVar8 = (ulong)uVar5;
  if ((int)uVar5 < 0) {
    return;
  }
  lVar4 = *(long *)(this + 0x18);
  iVar10 = (int)((ulong)(*(long *)(this + 0x20) - lVar4) >> 1);
  if (iVar10 <= (int)uVar5) {
    return;
  }
  uVar6 = puVar1[1];
  if ((int)uVar6 < 0) {
    return;
  }
  if (iVar10 <= (int)uVar6) {
    return;
  }
  if ((int)uVar6 < (int)uVar5) {
    return;
  }
  if (uVar6 - uVar5 < 0xf) {
LAB_008a4bec:
    uVar11 = 0;
  }
  else {
    psVar9 = (short *)(lVar4 + uVar8 * 2);
    if ((param_2 < (short *)(lVar4 + (uVar8 + (uVar6 - uVar5)) * 2 + 2)) &&
       (psVar9 < param_2 + (ulong)(uVar6 - uVar5) + 1)) goto LAB_008a4bec;
    uVar2 = (ulong)(uVar6 - uVar5) + 1;
    uVar12 = 0;
    uVar11 = uVar2 & 0x1fffffff0;
    puVar13 = (undefined8 *)(psVar9 + 8);
    uVar8 = uVar11 + uVar8;
    do {
      puVar7 = puVar13 + -1;
      uVar15 = puVar13[-2];
      uVar17 = puVar13[1];
      uVar16 = *puVar13;
      uVar14 = uVar12 & 0xfffffff0;
      uVar12 = uVar12 + 0x10;
      puVar13 = puVar13 + 4;
      puVar3 = (undefined8 *)(param_2 + uVar14);
      puVar3[1] = *puVar7;
      *puVar3 = uVar15;
      puVar3[3] = uVar17;
      puVar3[2] = uVar16;
    } while (uVar11 != uVar12);
    if (uVar2 == uVar11) goto LAB_008a4c10;
  }
  iVar10 = (uVar6 - (int)uVar8) + 1;
  psVar9 = (short *)(lVar4 + uVar8 * 2);
  do {
    iVar10 = iVar10 + -1;
    param_2[uVar11 & 0xffffffff] = *psVar9;
    uVar11 = (ulong)((int)uVar11 + 1);
    psVar9 = psVar9 + 1;
  } while (iVar10 != 0);
LAB_008a4c10:
  *param_3 = (uint)uVar11;
  return;
}


