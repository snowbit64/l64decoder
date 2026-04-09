// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d969e4
// Entry Point: 00d969e4
// Size: 1392 bytes
// Signature: undefined FUN_00d969e4(void)


void FUN_00d969e4(long param_1)

{
  long lVar1;
  byte bVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  byte *pbVar8;
  int iVar9;
  uint uVar10;
  int aiStack_228 [4];
  int local_218 [124];
  long local_28;
  
  lVar4 = tpidr_el0;
  local_28 = *(long *)(lVar4 + 0x28);
  lVar7 = 4;
  do {
    bVar2 = *(byte *)(param_1 + lVar7 + 0x304dc);
    uVar10 = (bVar2 >> 1) - 1;
    if (uVar10 == 0) {
      iVar9 = 0;
    }
    else {
      iVar9 = 0;
      uVar3 = (bVar2 & 1 | 2) << (ulong)(uVar10 & 0x1f);
      uVar6 = 1;
      uVar5 = (int)lVar7 - uVar3;
      do {
        lVar1 = uVar6 * 2;
        uVar10 = uVar10 - 1;
        uVar6 = (ulong)(uVar5 & 1 | (int)uVar6 << 1);
        iVar9 = *(int *)(param_1 + (ulong)((-(uVar5 & 1) & 0x7f0 ^
                                           (uint)*(ushort *)
                                                  (param_1 + (ulong)uVar3 * 2 + (ulong)bVar2 * -2 +
                                                   0x3414e + lVar1)) >> 4) * 4 + 0x324dc) + iVar9;
        uVar5 = uVar5 >> 1;
      } while (uVar10 != 0);
    }
    aiStack_228[lVar7] = iVar9;
    lVar7 = lVar7 + 1;
  } while (lVar7 != 0x80);
  if (*(int *)(param_1 + 0x33bd0) != 0) {
    uVar6 = 0;
    do {
      iVar9 = 0;
      uVar10 = (uint)uVar6 | 0x40;
      do {
        uVar3 = uVar10 >> 1;
        iVar9 = *(int *)(param_1 + (ulong)((-(uVar10 & 1) & 0x7f0 ^
                                           (uint)*(ushort *)
                                                  (param_1 + (ulong)(uVar10 & 0xfffffffe) + 0x33f50)
                                           ) >> 4) * 4 + 0x324dc) + iVar9;
        uVar10 = uVar3;
      } while (uVar3 != 1);
      lVar7 = uVar6 * 4;
      uVar6 = uVar6 + 1;
      *(int *)(param_1 + lVar7 + 0x32f8c) = iVar9;
    } while (uVar6 < *(uint *)(param_1 + 0x33bd0));
    if (0xe < *(uint *)(param_1 + 0x33bd0)) {
      lVar7 = 0;
      uVar10 = 0x20;
      do {
        uVar3 = uVar10 & 0xfffffff0;
        uVar10 = uVar10 + 8;
        uVar6 = lVar7 + 0xf;
        *(uint *)(param_1 + 0x32fc4 + lVar7 * 4) = *(int *)(param_1 + 0x32fc4 + lVar7 * 4) + uVar3;
        lVar7 = lVar7 + 1;
      } while (uVar6 < *(uint *)(param_1 + 0x33bd0));
    }
  }
  lVar7 = 0;
  *(undefined8 *)(param_1 + 0x33394) = *(undefined8 *)(param_1 + 0x32f94);
  *(undefined8 *)(param_1 + 0x3338c) = *(undefined8 *)(param_1 + 0x32f8c);
  pbVar8 = (byte *)(param_1 + 0x304e0);
  do {
    *(int *)(param_1 + 0x3339c + lVar7) =
         *(int *)((long)local_218 + lVar7) + *(int *)(param_1 + (ulong)*pbVar8 * 4 + 0x32f8c);
    lVar7 = lVar7 + 4;
    pbVar8 = pbVar8 + 1;
  } while (lVar7 != 0x1f0);
  if (*(int *)(param_1 + 0x33bd0) != 0) {
    uVar6 = 0;
    do {
      iVar9 = 0;
      uVar10 = (uint)uVar6 | 0x40;
      do {
        uVar3 = uVar10 >> 1;
        iVar9 = *(int *)(param_1 + (ulong)((-(uVar10 & 1) & 0x7f0 ^
                                           (uint)*(ushort *)
                                                  (param_1 + (ulong)(uVar10 & 0xfffffffe) + 0x33fd0)
                                           ) >> 4) * 4 + 0x324dc) + iVar9;
        uVar10 = uVar3;
      } while (uVar3 != 1);
      lVar7 = uVar6 * 4;
      uVar6 = uVar6 + 1;
      *(int *)(param_1 + lVar7 + 0x3308c) = iVar9;
    } while (uVar6 < *(uint *)(param_1 + 0x33bd0));
    if (0xe < *(uint *)(param_1 + 0x33bd0)) {
      lVar7 = 0;
      uVar10 = 0x20;
      do {
        uVar3 = uVar10 & 0xfffffff0;
        uVar10 = uVar10 + 8;
        uVar6 = lVar7 + 0xf;
        *(uint *)(param_1 + 0x330c4 + lVar7 * 4) = *(int *)(param_1 + 0x330c4 + lVar7 * 4) + uVar3;
        lVar7 = lVar7 + 1;
      } while (uVar6 < *(uint *)(param_1 + 0x33bd0));
    }
  }
  *(undefined8 *)(param_1 + 0x33594) = *(undefined8 *)(param_1 + 0x33094);
  *(undefined8 *)(param_1 + 0x3358c) = *(undefined8 *)(param_1 + 0x3308c);
  lVar7 = 0;
  do {
    lVar1 = lVar7 + 1;
    *(int *)(param_1 + 0x3359c + lVar7 * 4) =
         local_218[lVar7] +
         *(int *)(param_1 + (ulong)*(byte *)(param_1 + 0x304e0 + lVar7) * 4 + 0x3308c);
    lVar7 = lVar1;
  } while (lVar1 != 0x7c);
  if (*(int *)(param_1 + 0x33bd0) != 0) {
    uVar6 = 0;
    do {
      iVar9 = 0;
      uVar10 = (uint)uVar6 | 0x40;
      do {
        uVar3 = uVar10 >> 1;
        iVar9 = *(int *)(param_1 + (ulong)((-(uVar10 & 1) & 0x7f0 ^
                                           (uint)*(ushort *)
                                                  (param_1 + (ulong)(uVar10 & 0xfffffffe) + 0x34050)
                                           ) >> 4) * 4 + 0x324dc) + iVar9;
        uVar10 = uVar3;
      } while (uVar3 != 1);
      lVar7 = uVar6 * 4;
      uVar6 = uVar6 + 1;
      *(int *)(param_1 + lVar7 + 0x3318c) = iVar9;
    } while (uVar6 < *(uint *)(param_1 + 0x33bd0));
    if (0xe < *(uint *)(param_1 + 0x33bd0)) {
      lVar7 = 0;
      uVar10 = 0x20;
      do {
        uVar3 = uVar10 & 0xfffffff0;
        uVar10 = uVar10 + 8;
        uVar6 = lVar7 + 0xf;
        *(uint *)(param_1 + 0x331c4 + lVar7 * 4) = *(int *)(param_1 + 0x331c4 + lVar7 * 4) + uVar3;
        lVar7 = lVar7 + 1;
      } while (uVar6 < *(uint *)(param_1 + 0x33bd0));
    }
  }
  *(undefined8 *)(param_1 + 0x33794) = *(undefined8 *)(param_1 + 0x33194);
  *(undefined8 *)(param_1 + 0x3378c) = *(undefined8 *)(param_1 + 0x3318c);
  lVar7 = 0;
  do {
    lVar1 = lVar7 + 1;
    *(int *)(param_1 + 0x3379c + lVar7 * 4) =
         local_218[lVar7] +
         *(int *)(param_1 + (ulong)*(byte *)(param_1 + 0x304e0 + lVar7) * 4 + 0x3318c);
    lVar7 = lVar1;
  } while (lVar1 != 0x7c);
  if (*(int *)(param_1 + 0x33bd0) != 0) {
    uVar6 = 0;
    do {
      iVar9 = 0;
      uVar10 = (uint)uVar6 | 0x40;
      do {
        uVar3 = uVar10 >> 1;
        iVar9 = *(int *)(param_1 + (ulong)((-(uVar10 & 1) & 0x7f0 ^
                                           (uint)*(ushort *)
                                                  (param_1 + (ulong)(uVar10 & 0xfffffffe) + 0x340d0)
                                           ) >> 4) * 4 + 0x324dc) + iVar9;
        uVar10 = uVar3;
      } while (uVar3 != 1);
      lVar7 = uVar6 * 4;
      uVar6 = uVar6 + 1;
      *(int *)(param_1 + lVar7 + 0x3328c) = iVar9;
    } while (uVar6 < *(uint *)(param_1 + 0x33bd0));
    if (0xe < *(uint *)(param_1 + 0x33bd0)) {
      lVar7 = 0;
      uVar10 = 0x20;
      do {
        uVar3 = uVar10 & 0xfffffff0;
        uVar10 = uVar10 + 8;
        uVar6 = lVar7 + 0xf;
        *(uint *)(param_1 + 0x332c4 + lVar7 * 4) = *(int *)(param_1 + 0x332c4 + lVar7 * 4) + uVar3;
        lVar7 = lVar7 + 1;
      } while (uVar6 < *(uint *)(param_1 + 0x33bd0));
    }
  }
  *(undefined8 *)(param_1 + 0x33994) = *(undefined8 *)(param_1 + 0x33294);
  *(undefined8 *)(param_1 + 0x3398c) = *(undefined8 *)(param_1 + 0x3328c);
  lVar7 = 0;
  do {
    lVar1 = lVar7 + 1;
    *(int *)(param_1 + 0x3399c + lVar7 * 4) =
         local_218[lVar7] +
         *(int *)(param_1 + (ulong)*(byte *)(param_1 + 0x304e0 + lVar7) * 4 + 0x3328c);
    lVar7 = lVar1;
  } while (lVar1 != 0x7c);
  *(undefined4 *)(param_1 + 0x3d348) = 0;
  if (*(long *)(lVar4 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


