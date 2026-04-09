// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d78bdc
// Entry Point: 00d78bdc
// Size: 748 bytes
// Signature: undefined FUN_00d78bdc(void)


void FUN_00d78bdc(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  long lVar5;
  char cVar6;
  uint uVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  undefined8 *puVar11;
  int iVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined2 *puVar18;
  undefined8 local_a8;
  undefined8 uStack_a0;
  long local_98;
  uint local_90;
  long local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  lVar16 = *(long *)(param_1 + 0x250);
  uVar2 = *(uint *)(param_1 + 0x208);
  if ((*(int *)(param_1 + 0x15c) != 0) && (*(int *)(lVar16 + 0x40) == 0)) {
    iVar3 = *(int *)(lVar16 + 0x20);
    lVar9 = *(long *)(param_1 + 0x248);
    iVar12 = iVar3 + 7;
    if (-1 < iVar3) {
      iVar12 = iVar3;
    }
    *(int *)(lVar9 + 0x20) = *(int *)(lVar9 + 0x20) + (iVar12 >> 3);
    *(undefined4 *)(lVar16 + 0x20) = 0;
    cVar6 = (**(code **)(lVar9 + 0x10))(param_1);
    if (cVar6 == '\0') {
      uVar8 = 0;
      if (*(long *)(lVar5 + 0x28) == local_68) {
        return;
      }
      goto LAB_00d78ec4;
    }
    if (0 < *(int *)(param_1 + 0x1a0)) {
      lVar9 = 0;
      do {
        *(undefined4 *)(lVar16 + 0x2c + lVar9 * 4) = 0;
        lVar9 = lVar9 + 1;
      } while (lVar9 < *(int *)(param_1 + 0x1a0));
    }
    *(undefined4 *)(lVar16 + 0x28) = 0;
    *(undefined4 *)(lVar16 + 0x40) = *(undefined4 *)(param_1 + 0x15c);
    if (*(int *)(param_1 + 0x21c) == 0) {
      *(undefined *)(lVar16 + 0x3c) = 0;
    }
  }
  if (*(char *)(lVar16 + 0x3c) == '\0') {
    puVar11 = *(undefined8 **)(param_1 + 0x28);
    lVar9 = *(long *)(lVar16 + 0x18);
    local_a8 = *puVar11;
    uStack_a0 = puVar11[1];
    local_80 = *(undefined8 *)(lVar16 + 0x28);
    uVar7 = *(uint *)(lVar16 + 0x20);
    uVar10 = (ulong)uVar7;
    uStack_78 = *(undefined8 *)(lVar16 + 0x30);
    local_70 = *(undefined4 *)(lVar16 + 0x38);
    local_88 = param_1;
    if (0 < *(int *)(param_1 + 0x1d0)) {
      lVar17 = 0;
      do {
        lVar15 = (long)*(int *)(param_1 + 0x1d4 + lVar17 * 4);
        puVar18 = *(undefined2 **)(param_2 + lVar17 * 8);
        lVar13 = *(long *)(lVar16 + (long)*(int *)(*(long *)(param_1 + lVar15 * 8 + 0x1a8) + 0x14) *
                                    8 + 0x48);
        if (7 < (int)uVar10) {
LAB_00d78d30:
          uVar14 = lVar9 >> ((ulong)((int)uVar10 - 8) & 0x3f);
          iVar12 = *(int *)(lVar13 + (uVar14 & 0xff) * 4 + 0x120);
          if (iVar12 == 0) {
            uVar7 = FUN_00d7b7dc(&local_a8,lVar9,uVar10,lVar13,9);
            if (-1 < (int)uVar7) goto LAB_00d78d78;
          }
          else {
            uVar10 = (ulong)(uint)((int)uVar10 - iVar12);
            bVar4 = *(byte *)(lVar13 + (uVar14 & 0xff) + 0x520);
            uVar14 = (ulong)bVar4;
            if (bVar4 == 0) goto LAB_00d78d58;
LAB_00d78d84:
            iVar12 = (int)uVar14;
            uVar7 = (uint)uVar10;
            if ((iVar12 <= (int)(uint)uVar10) ||
               (cVar6 = FUN_00d7b638(&local_a8,lVar9,uVar10,uVar14), lVar9 = local_98,
               uVar7 = local_90, cVar6 != '\0')) {
              uVar10 = (ulong)(uVar7 - iVar12);
              uVar7 = *(uint *)(&DAT_00548b04 + uVar14 * 4) & (uint)(lVar9 >> (uVar10 & 0x3f));
              uVar1 = 0;
              if ((int)uVar7 <= *(int *)(&DAT_00548b04 + (ulong)(iVar12 - 1) * 4)) {
                uVar1 = *(uint *)(&DAT_00548b04 + uVar14 * 4);
              }
              iVar12 = uVar7 - uVar1;
              goto LAB_00d78ca0;
            }
          }
LAB_00d78e28:
          uVar8 = 0;
          if (*(long *)(lVar5 + 0x28) == local_68) {
            return;
          }
          goto LAB_00d78ec4;
        }
        cVar6 = FUN_00d7b638(&local_a8,lVar9,uVar10,0);
        if (cVar6 == '\0') goto LAB_00d78e28;
        uVar10 = (ulong)local_90;
        lVar9 = local_98;
        if (7 < (int)local_90) goto LAB_00d78d30;
        uVar7 = FUN_00d7b7dc(&local_a8,local_98,uVar10,lVar13,1);
        if ((int)uVar7 < 0) goto LAB_00d78e28;
LAB_00d78d78:
        uVar14 = (ulong)uVar7;
        uVar10 = (ulong)local_90;
        lVar9 = local_98;
        if (uVar7 != 0) goto LAB_00d78d84;
LAB_00d78d58:
        iVar12 = 0;
LAB_00d78ca0:
        uVar7 = (uint)uVar10;
        lVar17 = lVar17 + 1;
        lVar15 = lVar15 * 4;
        iVar12 = *(int *)((long)&local_80 + lVar15 + 4) + iVar12;
        *(int *)((long)&local_80 + lVar15 + 4) = iVar12;
        *puVar18 = (short)(iVar12 << (ulong)(uVar2 & 0x1f));
      } while (lVar17 < *(int *)(param_1 + 0x1d0));
      puVar11 = *(undefined8 **)(param_1 + 0x28);
    }
    *puVar11 = local_a8;
    puVar11[1] = uStack_a0;
    *(long *)(lVar16 + 0x18) = lVar9;
    *(uint *)(lVar16 + 0x20) = uVar7;
    *(undefined8 *)(lVar16 + 0x30) = uStack_78;
    *(undefined8 *)(lVar16 + 0x28) = local_80;
    *(undefined4 *)(lVar16 + 0x38) = local_70;
  }
  uVar8 = 1;
  *(int *)(lVar16 + 0x40) = *(int *)(lVar16 + 0x40) + -1;
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return;
  }
LAB_00d78ec4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar8);
}


