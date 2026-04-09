// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: serialize
// Entry Point: 00ac7c70
// Size: 620 bytes
// Signature: undefined __thiscall serialize(VulkanShaderSerializer * this, uchar * * param_1, uint * param_2, uchar * param_3, uint param_4)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VulkanShaderSerializer::serialize(unsigned char*&, unsigned int&, unsigned char*, unsigned int)
    */

void __thiscall
VulkanShaderSerializer::serialize
          (VulkanShaderSerializer *this,uchar **param_1,uint *param_2,uchar *param_3,uint param_4)

{
  undefined (*pauVar1) [16];
  uint uVar2;
  int *piVar3;
  long lVar4;
  undefined (*pauVar5) [16];
  undefined (*pauVar6) [16];
  undefined auVar7 [16];
  int *piVar8;
  char *pcVar9;
  ulong uVar10;
  int *piVar11;
  uchar *puVar12;
  undefined4 *puVar13;
  long lVar14;
  ulong uVar15;
  undefined8 *puVar16;
  undefined (*pauVar17) [16];
  long lVar18;
  int iVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  int iVar23;
  long lVar24;
  undefined auVar25 [16];
  undefined auVar26 [16];
  
  uVar22 = *(long *)(this + 0x28) - *(long *)(this + 0x20);
  uVar21 = (ulong)(*(int *)(this + 0x38) + 8) & 0xfffffffc;
  iVar23 = (int)(uVar22 >> 2);
  uVar20 = (ulong)(iVar23 + 8) & 0xfffffffc;
  iVar19 = (int)uVar20;
  uVar2 = param_4 + (int)uVar21 + iVar19 + 8;
  *param_2 = uVar2;
  piVar8 = (int *)operator_new__((ulong)uVar2);
  *param_1 = (uchar *)piVar8;
  lVar14 = *(long *)(this + 8);
  lVar18 = *(long *)(this + 0x10);
  *piVar8 = (int)uVar21;
  uVar10 = (lVar18 - lVar14 >> 3) * -0x3333333333333333;
  *(uchar *)(piVar8 + 1) = (uchar)uVar10;
  if ((int)uVar10 != 0) {
    lVar18 = 0;
    puVar12 = (uchar *)((long)piVar8 + 5);
    lVar24 = *(long *)(this + 8);
    do {
      lVar14 = lVar14 + lVar18;
      uVar2 = (uint)(*(byte *)(lVar14 + 8) >> 1);
      if ((*(byte *)(lVar14 + 8) & 1) != 0) {
        uVar2 = (uint)*(undefined8 *)(lVar14 + 0x10);
      }
      *puVar12 = (uchar)uVar2;
      pcVar9 = (char *)(lVar14 + 9);
      if ((*(byte *)(lVar14 + 8) & 1) != 0) {
        pcVar9 = *(char **)(lVar14 + 0x18);
      }
      pcVar9 = strcpy((char *)(puVar12 + 1),pcVar9);
      puVar13 = (undefined4 *)(lVar24 + lVar18);
      pcVar9 = pcVar9 + (uVar2 + 1);
      lVar18 = lVar18 + 0x28;
      puVar12 = (uchar *)(pcVar9 + 2);
      *pcVar9 = (char)puVar13[8];
      pcVar9[1] = (char)*puVar13;
      lVar14 = lVar24;
    } while (((uVar10 & 0xffffffff) + (uVar10 & 0xffffffff) * 4) * 8 - lVar18 != 0);
  }
  piVar3 = (int *)((long)piVar8 + uVar21);
  *piVar3 = iVar19;
  piVar11 = piVar3 + 1;
  *(uchar *)piVar11 = (uchar)(uVar22 >> 2);
  auVar7 = _DAT_004c3bd0;
  if (iVar23 == 0) goto LAB_00ac7de8;
  puVar12 = *(uchar **)(this + 0x20);
  uVar10 = uVar22 >> 2 & 0xffffffff;
  if ((uVar10 < 8) ||
     (((uchar *)((long)piVar8 + uVar21 + 5) < puVar12 + uVar10 * 4 &&
      (puVar12 < (uchar *)((long)piVar8 + uVar10 + uVar21 + 5))))) {
    lVar14 = 0;
  }
  else {
    if (uVar10 < 0x20) {
      lVar14 = 0;
    }
    else {
      uVar15 = uVar22 >> 2 & 0x1f;
      lVar14 = uVar10 - uVar15;
      puVar16 = (undefined8 *)((long)piVar8 + uVar21 + 0x15);
      pauVar17 = (undefined (*) [16])(puVar12 + 0x40);
      lVar18 = lVar14;
      do {
        lVar18 = lVar18 + -0x20;
        auVar26 = *pauVar17;
        pauVar5 = pauVar17 + 1;
        auVar25 = a64_TBL(ZEXT816(0),pauVar17[-4],pauVar17[-3],pauVar17[-2],pauVar17[-1],auVar7);
        pauVar1 = pauVar17 + 2;
        pauVar6 = pauVar17 + 3;
        pauVar17 = pauVar17 + 8;
        auVar26 = a64_TBL(ZEXT816(0),auVar26,*pauVar5,*pauVar1,*pauVar6,auVar7);
        puVar16[-1] = auVar25._8_8_;
        puVar16[-2] = auVar25._0_8_;
        puVar16[1] = auVar26._8_8_;
        *puVar16 = auVar26._0_8_;
        puVar16 = puVar16 + 4;
      } while (lVar18 != 0);
      if (uVar15 == 0) goto LAB_00ac7de8;
      if (uVar15 < 8) {
        piVar11 = (int *)((long)piVar11 + lVar14);
        goto LAB_00ac7dcc;
      }
    }
    auVar7 = _DAT_004c4870;
    uVar22 = uVar22 >> 2 & 7;
    lVar4 = lVar14 + uVar21;
    lVar24 = lVar14 + uVar22;
    lVar18 = lVar14 * 4;
    lVar14 = uVar10 - uVar22;
    piVar11 = (int *)((long)piVar11 + lVar14);
    lVar24 = lVar24 - uVar10;
    pauVar17 = (undefined (*) [16])(puVar12 + lVar18);
    puVar16 = (undefined8 *)((long)piVar8 + lVar4 + 5);
    do {
      lVar24 = lVar24 + 8;
      auVar26 = a64_TBL(ZEXT816(0),*pauVar17,pauVar17[1],auVar7);
      *puVar16 = auVar26._0_8_;
      pauVar17 = pauVar17 + 2;
      puVar16 = puVar16 + 1;
    } while (lVar24 != 0);
    if (uVar22 == 0) goto LAB_00ac7de8;
  }
LAB_00ac7dcc:
  lVar18 = uVar10 - lVar14;
  puVar13 = (undefined4 *)(puVar12 + lVar14 * 4);
  do {
    piVar11 = (int *)((long)piVar11 + 1);
    lVar18 = lVar18 + -1;
    *(uchar *)piVar11 = (uchar)*puVar13;
    puVar13 = puVar13 + 1;
  } while (lVar18 != 0);
LAB_00ac7de8:
  puVar13 = (undefined4 *)((long)piVar3 + uVar20);
  *puVar13 = *(undefined4 *)(this + 0x3c);
  puVar13[1] = param_4;
  memcpy(puVar13 + 2,param_3,(ulong)param_4);
  return;
}


