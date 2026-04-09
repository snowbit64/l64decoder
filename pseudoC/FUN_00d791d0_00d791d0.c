// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d791d0
// Entry Point: 00d791d0
// Size: 444 bytes
// Signature: undefined FUN_00d791d0(void)


void FUN_00d791d0(long param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  char cVar5;
  undefined8 uVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  ushort *puVar12;
  long lVar13;
  long lVar14;
  undefined8 local_70;
  undefined8 uStack_68;
  ulong local_60;
  int local_58;
  long local_50;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  lVar13 = *(long *)(param_1 + 0x250);
  if ((*(int *)(param_1 + 0x15c) != 0) && (*(int *)(lVar13 + 0x40) == 0)) {
    iVar3 = *(int *)(lVar13 + 0x20);
    lVar14 = *(long *)(param_1 + 0x248);
    iVar1 = iVar3 + 7;
    if (-1 < iVar3) {
      iVar1 = iVar3;
    }
    *(int *)(lVar14 + 0x20) = *(int *)(lVar14 + 0x20) + (iVar1 >> 3);
    *(undefined4 *)(lVar13 + 0x20) = 0;
    cVar5 = (**(code **)(lVar14 + 0x10))(param_1);
    if (cVar5 == '\0') {
LAB_00d79374:
      uVar6 = 0;
      if (*(long *)(lVar4 + 0x28) == local_48) {
        return;
      }
      goto LAB_00d79388;
    }
    if (0 < *(int *)(param_1 + 0x1a0)) {
      lVar14 = 0;
      do {
        *(undefined4 *)(lVar13 + 0x2c + lVar14 * 4) = 0;
        lVar14 = lVar14 + 1;
      } while (lVar14 < *(int *)(param_1 + 0x1a0));
    }
    *(undefined4 *)(lVar13 + 0x28) = 0;
    *(undefined4 *)(lVar13 + 0x40) = *(undefined4 *)(param_1 + 0x15c);
    if (*(int *)(param_1 + 0x21c) == 0) {
      *(undefined *)(lVar13 + 0x3c) = 0;
    }
  }
  puVar10 = *(undefined8 **)(param_1 + 0x28);
  uVar7 = *(ulong *)(lVar13 + 0x18);
  local_70 = *puVar10;
  uStack_68 = puVar10[1];
  uVar8 = *(uint *)(lVar13 + 0x20);
  uVar9 = (ulong)uVar8;
  local_50 = param_1;
  if (0 < *(int *)(param_1 + 0x1d0)) {
    uVar2 = *(uint *)(param_1 + 0x208);
    lVar14 = 0;
    do {
      if ((int)uVar9 < 1) {
        cVar5 = FUN_00d7b638(&local_70,uVar7,uVar9,1);
        if (cVar5 == '\0') goto LAB_00d79374;
        uVar9 = (ulong)(local_58 - 1);
        uVar11 = local_60 >> (uVar9 & 0x3f);
        uVar7 = local_60;
      }
      else {
        uVar9 = (ulong)((int)uVar9 - 1);
        uVar11 = uVar7 >> (uVar9 & 0x3f);
      }
      if ((uVar11 & 1) != 0) {
        puVar12 = *(ushort **)(param_2 + lVar14 * 8);
        *puVar12 = *puVar12 | (ushort)(1 << (ulong)(uVar2 & 0x1f));
      }
      uVar8 = (uint)uVar9;
      lVar14 = lVar14 + 1;
    } while (lVar14 < *(int *)(param_1 + 0x1d0));
    puVar10 = *(undefined8 **)(param_1 + 0x28);
  }
  *puVar10 = local_70;
  puVar10[1] = uStack_68;
  uVar6 = 1;
  *(ulong *)(lVar13 + 0x18) = uVar7;
  *(uint *)(lVar13 + 0x20) = uVar8;
  *(int *)(lVar13 + 0x40) = *(int *)(lVar13 + 0x40) + -1;
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return;
  }
LAB_00d79388:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}


