// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: oc_quant_params_unpack
// Entry Point: 00df33e8
// Size: 996 bytes
// Signature: undefined oc_quant_params_unpack(void)


undefined4 oc_quant_params_unpack(undefined8 param_1,long param_2)

{
  bool bVar1;
  undefined8 *puVar2;
  uint uVar3;
  long lVar4;
  undefined uVar5;
  undefined2 uVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  int iVar11;
  void *__ptr;
  void *pvVar12;
  int iVar13;
  undefined8 *puVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  uint uVar19;
  long lVar20;
  ulong uVar21;
  int iVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  int local_270 [64];
  int local_170 [64];
  long local_70;
  
  lVar4 = tpidr_el0;
  local_70 = *(long *)(lVar4 + 0x28);
  uVar7 = oc_pack_read(param_1,3);
  lVar20 = 0;
  do {
    uVar5 = oc_pack_read(param_1,uVar7);
    *(undefined *)(param_2 + 0x100 + lVar20) = uVar5;
    lVar20 = lVar20 + 1;
  } while (lVar20 != 0x40);
  iVar8 = oc_pack_read(param_1,4);
  lVar20 = 0;
  do {
    uVar6 = oc_pack_read(param_1,iVar8 + 1);
    *(undefined2 *)(param_2 + 0x80 + lVar20) = uVar6;
    lVar20 = lVar20 + 2;
  } while (lVar20 != 0x80);
  iVar8 = oc_pack_read(param_1,4);
  lVar20 = 0;
  do {
    uVar6 = oc_pack_read(param_1,iVar8 + 1);
    *(undefined2 *)(param_2 + lVar20) = uVar6;
    lVar20 = lVar20 + 2;
  } while (lVar20 != 0x80);
  uVar9 = oc_pack_read(param_1,9);
  __ptr = malloc((long)(((ulong)uVar9 << 0x20) + 0x100000000) >> 0x1a);
  if (__ptr == (void *)0x0) {
    uVar7 = 0xffffffff;
    if (*(long *)(lVar4 + 0x28) != local_70) goto LAB_00df3778;
  }
  else {
    if (-1 < (int)uVar9) {
      uVar16 = 0;
      pvVar12 = __ptr;
      do {
        lVar20 = 0;
        do {
          uVar5 = oc_pack_read(param_1,8);
          *(undefined *)((long)pvVar12 + lVar20) = uVar5;
          lVar20 = lVar20 + 1;
        } while (lVar20 != 0x40);
        uVar16 = uVar16 + 1;
        pvVar12 = (void *)((long)pvVar12 + 0x40);
      } while (uVar16 != uVar9 + 1);
    }
    uVar7 = oc_ilog(uVar9);
    uVar19 = 0;
    do {
      while( true ) {
        uVar3 = (uVar19 & 0xff) / 3;
        uVar16 = (ulong)uVar3;
        uVar17 = (ulong)(uVar19 + uVar3 * -3);
        uVar15 = uVar17 & 0xff;
        lVar20 = param_2 + uVar16 * 0x48 + uVar15 * 0x18;
        if ((uVar19 == 0) || (iVar8 = oc_pack_read1(param_1), iVar8 != 0)) break;
        if (uVar19 < 3) {
          uVar16 = 0;
          uVar3 = (uVar19 - 1 & 0xff) / 3;
LAB_00df3728:
          uVar17 = (ulong)((uVar19 - 1) + uVar3 * -3);
        }
        else {
          iVar8 = oc_pack_read1(param_1);
          if (iVar8 == 0) {
            uVar3 = (uVar19 - 1 & 0xff) / 3;
            uVar16 = (ulong)uVar3;
            goto LAB_00df3728;
          }
          uVar16 = 0;
        }
        lVar18 = param_2 + uVar16 * 0x48 + (uVar17 & 0xff) * 0x18;
        uVar24 = *(undefined8 *)(lVar18 + 0x148);
        uVar23 = *(undefined8 *)(lVar18 + 0x140);
        *(undefined8 *)(lVar20 + 0x150) = *(undefined8 *)(lVar18 + 0x150);
        *(undefined8 *)(lVar20 + 0x148) = uVar24;
        *(undefined8 *)(lVar20 + 0x140) = uVar23;
        uVar19 = uVar19 + 1;
        if (uVar19 == 6) goto LAB_00df375c;
      }
      local_270[0] = oc_pack_read(param_1,uVar7);
      iVar8 = 0;
      lVar18 = 0;
      uVar21 = 0;
      iVar22 = 0;
      uVar17 = 0x40;
      iVar11 = 1;
      do {
        iVar13 = iVar11;
        uVar10 = oc_ilog(0x3e - iVar22);
        iVar11 = oc_pack_read(param_1,uVar10);
        iVar22 = iVar11 + 1 + iVar22;
        *(int *)((long)local_170 + uVar21) = iVar11 + 1;
        uVar10 = oc_pack_read(param_1,uVar7);
        uVar17 = uVar17 + 0x40;
        lVar18 = lVar18 + 0x100000000;
        *(undefined4 *)((long)local_270 + uVar21 + 4) = uVar10;
        uVar21 = uVar21 + 4;
        iVar8 = iVar8 + 1;
        iVar11 = iVar13 + 1;
      } while (iVar22 < 0x3f);
      if (iVar22 != 0x3f) {
LAB_00df3788:
        uVar7 = 0xffffffec;
        goto LAB_00df378c;
      }
      *(int *)(undefined8 *)(lVar20 + 0x140) = iVar8;
      pvVar12 = malloc(uVar21 & 0x3fffffffc);
      *(void **)(param_2 + uVar16 * 0x48 + uVar15 * 0x18 + 0x148) = pvVar12;
      if (pvVar12 == (void *)0x0) {
LAB_00df377c:
        uVar7 = 0xffffffff;
        goto LAB_00df378c;
      }
      memcpy(pvVar12,local_170,uVar21 & 0x3fffffffc);
      pvVar12 = malloc(uVar17 & 0x3fffffffc0);
      if (pvVar12 == (void *)0x0) goto LAB_00df377c;
      puVar14 = (undefined8 *)((long)pvVar12 + (long)iVar13 * 0x40);
      *(void **)(param_2 + uVar16 * 0x48 + uVar15 * 0x18 + 0x150) = pvVar12;
      lVar20 = lVar18 >> 0x20;
      do {
        if ((int)uVar9 < local_270[lVar20]) goto LAB_00df3788;
        puVar2 = (undefined8 *)((long)__ptr + (long)local_270[lVar20] * 0x40);
        uVar23 = *puVar2;
        uVar25 = puVar2[3];
        uVar24 = puVar2[2];
        uVar27 = puVar2[5];
        uVar26 = puVar2[4];
        uVar29 = puVar2[7];
        uVar28 = puVar2[6];
        puVar14[1] = puVar2[1];
        *puVar14 = uVar23;
        puVar14[3] = uVar25;
        puVar14[2] = uVar24;
        puVar14[5] = uVar27;
        puVar14[4] = uVar26;
        puVar14[7] = uVar29;
        puVar14[6] = uVar28;
        puVar14 = puVar14 + -8;
        bVar1 = 0 < lVar20;
        lVar20 = lVar20 + -1;
      } while (bVar1);
      uVar19 = uVar19 + 1;
    } while (uVar19 != 6);
LAB_00df375c:
    uVar7 = 0;
LAB_00df378c:
    free(__ptr);
    if (*(long *)(lVar4 + 0x28) != local_70) {
LAB_00df3778:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
  return uVar7;
}


