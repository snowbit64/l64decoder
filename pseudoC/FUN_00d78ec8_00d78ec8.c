// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d78ec8
// Entry Point: 00d78ec8
// Size: 776 bytes
// Signature: undefined FUN_00d78ec8(void)


void FUN_00d78ec8(long param_1,long *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  long lVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  undefined8 uVar9;
  long lVar10;
  uint uVar11;
  ulong uVar12;
  int iVar13;
  undefined8 *puVar14;
  ulong uVar15;
  long lVar16;
  uint uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  undefined8 local_90;
  undefined8 uStack_88;
  long local_80;
  uint local_78;
  long local_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  lVar18 = *(long *)(param_1 + 0x250);
  if ((*(int *)(param_1 + 0x15c) != 0) && (*(int *)(lVar18 + 0x40) == 0)) {
    iVar2 = *(int *)(lVar18 + 0x20);
    lVar10 = *(long *)(param_1 + 0x248);
    iVar13 = iVar2 + 7;
    if (-1 < iVar2) {
      iVar13 = iVar2;
    }
    *(int *)(lVar10 + 0x20) = *(int *)(lVar10 + 0x20) + (iVar13 >> 3);
    *(undefined4 *)(lVar18 + 0x20) = 0;
    cVar6 = (**(code **)(lVar10 + 0x10))(param_1);
    if (cVar6 == '\0') {
LAB_00d79160:
      uVar9 = 0;
      if (*(long *)(lVar5 + 0x28) == local_68) {
        return;
      }
      goto LAB_00d79174;
    }
    if (0 < *(int *)(param_1 + 0x1a0)) {
      lVar10 = 0;
      do {
        *(undefined4 *)(lVar18 + 0x2c + lVar10 * 4) = 0;
        lVar10 = lVar10 + 1;
      } while (lVar10 < *(int *)(param_1 + 0x1a0));
    }
    *(undefined4 *)(lVar18 + 0x28) = 0;
    *(undefined4 *)(lVar18 + 0x40) = *(undefined4 *)(param_1 + 0x15c);
    if (*(int *)(param_1 + 0x21c) == 0) {
      *(undefined *)(lVar18 + 0x3c) = 0;
    }
  }
  if (*(char *)(lVar18 + 0x3c) == '\0') {
    if (*(int *)(lVar18 + 0x28) == 0) {
      iVar2 = *(int *)(param_1 + 0x200);
      iVar13 = *(int *)(param_1 + 0x1fc);
      local_90 = **(undefined8 **)(param_1 + 0x28);
      uStack_88 = (*(undefined8 **)(param_1 + 0x28))[1];
      lVar10 = *(long *)(lVar18 + 0x18);
      uVar11 = *(uint *)(lVar18 + 0x20);
      uVar12 = (ulong)uVar11;
      local_70 = param_1;
      if (iVar13 <= iVar2) {
        uVar3 = *(uint *)(param_1 + 0x208);
        lVar20 = *(long *)(param_1 + 0x210);
        lVar19 = *param_2;
        lVar16 = *(long *)(lVar18 + 0x68);
        do {
          while (7 < (int)uVar12) {
LAB_00d790d0:
            uVar15 = lVar10 >> ((ulong)((int)uVar12 - 8) & 0x3f);
            iVar1 = *(int *)(lVar16 + (uVar15 & 0xff) * 4 + 0x120);
            if (iVar1 == 0) {
              uVar9 = 9;
              goto LAB_00d79128;
            }
            uVar12 = (ulong)(uint)((int)uVar12 - iVar1);
            bVar4 = *(byte *)(lVar16 + (uVar15 & 0xff) + 0x520);
            uVar7 = (uint)bVar4;
            uVar17 = (uint)(bVar4 >> 4);
            uVar8 = (uint)bVar4;
            if ((bVar4 & 0xf) == 0) goto LAB_00d79100;
LAB_00d79144:
            uVar8 = uVar8 & 0xf;
            uVar11 = (uint)uVar12;
            if (((int)(uint)uVar12 < (int)uVar8) &&
               (cVar6 = FUN_00d7b638(&local_90,lVar10,uVar12,(ulong)uVar8), lVar10 = local_80,
               uVar11 = local_78, cVar6 == '\0')) goto LAB_00d79160;
            uVar11 = uVar11 - uVar8;
            uVar12 = (ulong)uVar11;
            iVar1 = uVar17 + iVar13;
            uVar17 = *(uint *)(&DAT_00548b04 + (ulong)uVar8 * 4) & (uint)(lVar10 >> (uVar12 & 0x3f))
            ;
            uVar7 = 0;
            if ((int)uVar17 <= *(int *)(&DAT_00548b04 + (ulong)(uVar8 - 1) * 4)) {
              uVar7 = *(uint *)(&DAT_00548b04 + (ulong)uVar8 * 4);
            }
            *(short *)(lVar19 + (long)*(int *)(lVar20 + (long)iVar1 * 4) * 2) =
                 (short)(uVar17 - uVar7 << (ulong)(uVar3 & 0x1f));
            iVar13 = iVar1 + 1;
            if (iVar2 <= iVar1) goto LAB_00d78fcc;
          }
          cVar6 = FUN_00d7b638(&local_90,lVar10,uVar12,0);
          if (cVar6 == '\0') goto LAB_00d79160;
          uVar12 = (ulong)local_78;
          lVar10 = local_80;
          if (7 < (int)local_78) goto LAB_00d790d0;
          uVar9 = 1;
LAB_00d79128:
          uVar8 = FUN_00d7b7dc(&local_90,lVar10,uVar12,lVar16,uVar9);
          if ((int)uVar8 < 0) goto LAB_00d79160;
          uVar12 = (ulong)local_78;
          uVar17 = uVar8 >> 4;
          lVar10 = local_80;
          uVar7 = uVar8;
          if ((uVar8 & 0xf) != 0) goto LAB_00d79144;
LAB_00d79100:
          uVar11 = (uint)uVar12;
          if (uVar17 != 0xf) {
            if (0xf < uVar7) {
              if (((int)uVar11 < (int)uVar17) &&
                 (cVar6 = FUN_00d7b638(&local_90,lVar10,uVar12,uVar17), lVar10 = local_80,
                 uVar11 = local_78, cVar6 == '\0')) goto LAB_00d79160;
              uVar11 = uVar11 - uVar17;
              iVar13 = (*(uint *)(&DAT_00548b04 + (ulong)uVar17 * 4) &
                       (uint)(lVar10 >> ((ulong)uVar11 & 0x3f))) + ~(-1 << (ulong)(uVar17 & 0x1f));
              goto LAB_00d78fd0;
            }
            break;
          }
          iVar1 = iVar13 + 0xf;
          iVar13 = iVar13 + 0x10;
        } while (iVar1 < iVar2);
      }
LAB_00d78fcc:
      iVar13 = 0;
LAB_00d78fd0:
      puVar14 = *(undefined8 **)(param_1 + 0x28);
      *puVar14 = local_90;
      puVar14[1] = uStack_88;
      *(long *)(lVar18 + 0x18) = lVar10;
      *(uint *)(lVar18 + 0x20) = uVar11;
    }
    else {
      iVar13 = *(int *)(lVar18 + 0x28) + -1;
    }
    *(int *)(lVar18 + 0x28) = iVar13;
  }
  uVar9 = 1;
  *(int *)(lVar18 + 0x40) = *(int *)(lVar18 + 0x40) + -1;
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return;
  }
LAB_00d79174:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar9);
}


