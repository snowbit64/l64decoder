// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00e1460c
// Entry Point: 00e1460c
// Size: 952 bytes
// Signature: undefined FUN_00e1460c(void)


uint * FUN_00e1460c(undefined8 param_1,uint *param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  uint *puVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  uint **ppuVar14;
  uint *puVar15;
  ulong uVar16;
  undefined8 *puVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  long lVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  uint *local_260 [4];
  long alStack_240 [61];
  long local_58;
  
  lVar6 = tpidr_el0;
  local_58 = *(long *)(lVar6 + 0x28);
  puVar8 = (uint *)calloc(1,0x530);
  uVar9 = *param_2;
  uVar11 = (ulong)uVar9;
  uVar24 = param_2[0xd2];
  puVar2 = param_2 + 0xd1;
  *(uint **)(puVar8 + 0x144) = param_2;
  puVar8[0x142] = uVar24;
  if ((int)uVar9 < 1) {
    uVar9 = 2;
    uVar24 = 0;
    puVar8[0x141] = 2;
  }
  else {
    if (uVar9 == 1) {
      uVar16 = 0;
      uVar24 = 0;
LAB_00e146cc:
      puVar15 = param_2 + uVar16;
      lVar12 = uVar11 - uVar16;
      do {
        puVar15 = puVar15 + 1;
        lVar12 = lVar12 + -1;
        uVar24 = param_2[(long)(int)*puVar15 + 0x20] + uVar24;
      } while (lVar12 != 0);
    }
    else {
      uVar16 = uVar11 & 0xfffffffe;
      iVar18 = 0;
      iVar19 = 0;
      puVar15 = param_2 + 2;
      uVar10 = uVar16;
      do {
        puVar1 = puVar15 + -1;
        puVar4 = puVar15 + 1;
        puVar15 = puVar15 + 2;
        uVar10 = uVar10 - 2;
        iVar18 = param_2[(long)(int)*puVar1 + 0x20] + iVar18;
        iVar19 = param_2[(long)(int)*puVar4 + 0x20] + iVar19;
      } while (uVar10 != 0);
      uVar24 = iVar19 + iVar18;
      if (uVar16 != uVar11) goto LAB_00e146cc;
    }
    uVar9 = uVar24 + 2;
    puVar8[0x141] = uVar9;
    if (uVar24 == 0xfffffffe || (int)(uVar24 + 2) < 0 != SCARRY4(uVar24,2)) {
      qsort(local_260,(long)(int)uVar9,8,FUN_00e14f9c);
      uVar9 = param_2[0xd0];
      goto joined_r0x00e148c0;
    }
  }
  uVar20 = uVar9;
  if ((int)uVar9 < 2) {
    uVar20 = 1;
  }
  uVar11 = (ulong)uVar20;
  if (uVar20 < 4) {
    uVar16 = 0;
LAB_00e1476c:
    puVar15 = param_2 + uVar16 + 0xd1;
    lVar12 = uVar11 - uVar16;
    ppuVar14 = local_260 + uVar16;
    do {
      *ppuVar14 = puVar15;
      puVar15 = puVar15 + 1;
      lVar12 = lVar12 + -1;
      ppuVar14 = ppuVar14 + 1;
    } while (lVar12 != 0);
  }
  else {
    uVar16 = uVar11 & 0x7ffffffc;
    ppuVar14 = local_260 + 2;
    uVar10 = uVar16;
    lVar12 = 0;
    lVar21 = 1;
    do {
      uVar10 = uVar10 - 4;
      ppuVar14[-1] = puVar2 + lVar21;
      ppuVar14[-2] = puVar2 + lVar12;
      ppuVar14[1] = puVar2 + lVar21 + 2;
      *ppuVar14 = puVar2 + lVar12 + 2;
      ppuVar14 = ppuVar14 + 4;
      lVar12 = lVar12 + 4;
      lVar21 = lVar21 + 4;
    } while (uVar10 != 0);
    if (uVar16 != uVar11) goto LAB_00e1476c;
  }
  qsort(local_260,(long)(int)uVar9,8,FUN_00e14f9c);
  if (uVar20 < 8) {
    uVar16 = 0;
LAB_00e14810:
    lVar12 = uVar11 - uVar16;
    ppuVar14 = local_260 + uVar16;
    puVar15 = puVar8 + uVar16 + 0x41;
    do {
      lVar12 = lVar12 + -1;
      *puVar15 = (uint)((ulong)((long)*ppuVar14 - (long)puVar2) >> 2);
      ppuVar14 = ppuVar14 + 1;
      puVar15 = puVar15 + 1;
    } while (lVar12 != 0);
  }
  else {
    uVar16 = uVar11 & 0x7ffffff8;
    puVar17 = (undefined8 *)(puVar8 + 0x45);
    plVar13 = alStack_240;
    uVar10 = uVar16;
    do {
      lVar21 = plVar13[-3];
      lVar12 = plVar13[-4];
      uVar10 = uVar10 - 8;
      lVar26 = plVar13[1];
      lVar25 = *plVar13;
      lVar28 = plVar13[3];
      lVar27 = plVar13[2];
      puVar17[-1] = CONCAT44((int)((ulong)(plVar13[-1] - (long)puVar2) >> 2),
                             (int)((ulong)(plVar13[-2] - (long)puVar2) >> 2));
      puVar17[-2] = CONCAT44((int)((ulong)(lVar21 - (long)puVar2) >> 2),
                             (int)((ulong)(lVar12 - (long)puVar2) >> 2));
      puVar17[1] = CONCAT44((int)((ulong)(lVar28 - (long)puVar2) >> 2),
                            (int)((ulong)(lVar27 - (long)puVar2) >> 2));
      *puVar17 = CONCAT44((int)((ulong)(lVar26 - (long)puVar2) >> 2),
                          (int)((ulong)(lVar25 - (long)puVar2) >> 2));
      puVar17 = puVar17 + 4;
      plVar13 = plVar13 + 8;
    } while (uVar10 != 0);
    if (uVar16 != uVar11) goto LAB_00e14810;
  }
  uVar10 = 0;
  do {
    puVar8[(long)(int)puVar8[uVar10 + 0x41] + 0x82] = (uint)uVar10;
    uVar10 = uVar10 + 1;
  } while (uVar11 != uVar10);
  if (uVar20 < 2) {
    uVar16 = 0;
LAB_00e14898:
    lVar12 = uVar11 - uVar16;
    puVar15 = puVar8 + uVar16;
    do {
      lVar12 = lVar12 + -1;
      *puVar15 = puVar2[(int)puVar15[0x41]];
      puVar15 = puVar15 + 1;
    } while (lVar12 != 0);
  }
  else {
    uVar16 = uVar11 & 0x7ffffffe;
    uVar10 = uVar16;
    puVar15 = puVar8;
    do {
      uVar10 = uVar10 - 2;
      uVar9 = puVar2[(int)puVar15[0x42]];
      *puVar15 = puVar2[(int)puVar15[0x41]];
      puVar15[1] = uVar9;
      puVar15 = puVar15 + 2;
    } while (uVar10 != 0);
    if (uVar16 != uVar11) goto LAB_00e14898;
  }
  uVar9 = param_2[0xd0];
joined_r0x00e148c0:
  if (uVar9 - 1 < 4) {
    puVar8[0x143] = *(uint *)(&DAT_004c57a0 + (long)(int)(uVar9 - 1) * 4);
  }
  if (0 < (int)uVar24) {
    lVar12 = 2;
    uVar11 = 0;
    do {
      lVar21 = 0;
      uVar9 = 0;
      uVar20 = 1;
      uVar22 = 0;
      uVar23 = puVar8[0x142];
      do {
        uVar5 = puVar2[lVar21];
        uVar3 = uVar5;
        uVar7 = (uint)lVar21;
        if ((int)uVar5 <= (int)uVar22 || (int)puVar2[uVar11 + 2] <= (int)uVar5) {
          uVar3 = uVar22;
          uVar7 = uVar9;
        }
        uVar9 = uVar7;
        uVar22 = (uint)lVar21;
        if ((int)uVar23 <= (int)uVar5 || (int)uVar5 <= (int)puVar2[uVar11 + 2]) {
          uVar5 = uVar23;
          uVar22 = uVar20;
        }
        uVar20 = uVar22;
        lVar21 = lVar21 + 1;
        uVar22 = uVar3;
        uVar23 = uVar5;
      } while (lVar12 != lVar21);
      uVar10 = uVar11 + 1;
      lVar12 = lVar12 + 1;
      puVar8[uVar11 + 0x102] = uVar9;
      puVar8[uVar11 + 0xc3] = uVar20;
      uVar11 = uVar10;
    } while (uVar10 != uVar24);
  }
  if (*(long *)(lVar6 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar8;
}


