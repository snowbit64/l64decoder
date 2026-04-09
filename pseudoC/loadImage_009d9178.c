// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: loadImage
// Entry Point: 009d9178
// Size: 488 bytes
// Signature: undefined loadImage(void)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* ProceduralPlacementMask::loadImage() */

void ProceduralPlacementMask::loadImage(void)

{
  char *pcVar1;
  uint uVar2;
  long lVar3;
  undefined auVar4 [16];
  undefined auVar5 [16];
  long in_x0;
  ulong uVar6;
  undefined8 *puVar7;
  int iVar8;
  byte *pbVar9;
  int iVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  float *pfVar14;
  ulong *puVar15;
  undefined8 *puVar16;
  undefined (*pauVar17) [16];
  undefined auVar18 [16];
  undefined auVar19 [16];
  undefined auVar20 [16];
  undefined auVar21 [16];
  undefined auVar22 [16];
  undefined auVar23 [16];
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  undefined (*local_68) [16];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined2 local_48;
  undefined4 local_44;
  undefined2 local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  local_80 = 0;
  uStack_78 = 0;
  local_90 = 0;
  local_88 = 0x100000001;
  local_50 = 0;
  local_70 = 0;
  local_48 = 0;
  pcVar1 = (char *)(in_x0 + 0x39);
  if ((*(byte *)(in_x0 + 0x38) & 1) != 0) {
    pcVar1 = *(char **)(in_x0 + 0x48);
  }
  local_44 = 0;
  local_40 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_68 = (undefined (*) [16])0x0;
  uVar6 = ImageLoadUtil::loadImage(pcVar1,0,(ImageDesc *)&local_90,0);
  if ((uVar6 & 1) == 0) goto LAB_009d9268;
  *(int *)(in_x0 + 0x50) = (int)local_90;
  *(int *)(in_x0 + 0x54) = local_90._4_4_;
  iVar10 = (int)local_90;
  iVar8 = local_90._4_4_;
  if (*(void **)(in_x0 + 0x58) != (void *)0x0) {
    operator_delete__(*(void **)(in_x0 + 0x58));
    iVar10 = *(int *)(in_x0 + 0x50);
    iVar8 = *(int *)(in_x0 + 0x54);
  }
  uVar2 = iVar10 * iVar8;
  uVar6 = (ulong)uVar2;
  puVar7 = (undefined8 *)operator_new__(uVar6 << 2);
  *(undefined8 **)(in_x0 + 0x58) = puVar7;
  auVar19 = _DAT_004c4f40;
  auVar18 = _DAT_004c4d70;
  auVar5 = _DAT_004c4a50;
  auVar4 = _DAT_004c37b0;
  if (uVar2 == 0) goto LAB_009d9268;
  if ((uVar2 < 8) ||
     ((puVar7 < *local_68 + uVar6 && (local_68 < (undefined (*) [16])((long)puVar7 + uVar6 * 4)))))
  {
    uVar11 = 0;
  }
  else {
    if (uVar2 < 0x10) {
      uVar13 = 0;
    }
    else {
      uVar11 = uVar6 & 0xfffffff0;
      uVar13 = uVar11;
      puVar16 = puVar7;
      pauVar17 = local_68;
      do {
        uVar13 = uVar13 - 0x10;
        auVar20 = a64_TBL(ZEXT816(0),*pauVar17,ZEXT816(0),auVar5);
        auVar21 = a64_TBL(ZEXT816(0),*pauVar17,ZEXT816(0),auVar4);
        auVar22 = a64_TBL(ZEXT816(0),*pauVar17,ZEXT816(0),auVar18);
        auVar23 = a64_TBL(ZEXT816(0),*pauVar17,ZEXT816(0),auVar19);
        auVar20 = NEON_ucvtf(auVar20,4);
        auVar21 = NEON_ucvtf(auVar21,4);
        auVar22 = NEON_ucvtf(auVar22,4);
        auVar23 = NEON_ucvtf(auVar23,4);
        puVar16[5] = auVar21._8_8_;
        puVar16[4] = auVar21._0_8_;
        puVar16[7] = auVar20._8_8_;
        puVar16[6] = auVar20._0_8_;
        puVar16[1] = auVar23._8_8_;
        *puVar16 = auVar23._0_8_;
        puVar16[3] = auVar22._8_8_;
        puVar16[2] = auVar22._0_8_;
        puVar16 = puVar16 + 8;
        pauVar17 = pauVar17 + 1;
      } while (uVar13 != 0);
      if (uVar11 == uVar6) goto LAB_009d9268;
      uVar13 = uVar11;
      if ((uVar2 >> 3 & 1) == 0) goto LAB_009d9248;
    }
    auVar5 = _DAT_004c4f40;
    auVar4 = _DAT_004c4d70;
    uVar11 = uVar6 & 0xfffffff8;
    lVar12 = uVar13 - uVar11;
    puVar15 = (ulong *)(*local_68 + uVar13);
    puVar16 = (undefined8 *)((long)puVar7 + uVar13 * 4);
    do {
      lVar12 = lVar12 + 8;
      auVar18._8_8_ = 0;
      auVar18._0_8_ = *puVar15;
      auVar18 = a64_TBL(ZEXT816(0),auVar18,ZEXT816(0),auVar4);
      auVar19._8_8_ = 0;
      auVar19._0_8_ = *puVar15;
      auVar19 = a64_TBL(ZEXT816(0),auVar19,ZEXT816(0),auVar5);
      auVar18 = NEON_ucvtf(auVar18,4);
      auVar19 = NEON_ucvtf(auVar19,4);
      puVar16[1] = auVar19._8_8_;
      *puVar16 = auVar19._0_8_;
      puVar16[3] = auVar18._8_8_;
      puVar16[2] = auVar18._0_8_;
      puVar15 = puVar15 + 1;
      puVar16 = puVar16 + 4;
    } while (lVar12 != 0);
    if (uVar11 == uVar6) goto LAB_009d9268;
  }
LAB_009d9248:
  lVar12 = uVar6 - uVar11;
  pbVar9 = *local_68 + uVar11;
  pfVar14 = (float *)((long)puVar7 + uVar11 * 4);
  do {
    lVar12 = lVar12 + -1;
    *pfVar14 = (float)(ulong)*pbVar9;
    pbVar9 = pbVar9 + 1;
    pfVar14 = pfVar14 + 1;
  } while (lVar12 != 0);
LAB_009d9268:
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


