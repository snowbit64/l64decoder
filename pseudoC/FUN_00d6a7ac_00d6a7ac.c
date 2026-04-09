// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d6a7ac
// Entry Point: 00d6a7ac
// Size: 468 bytes
// Signature: undefined FUN_00d6a7ac(void)


void FUN_00d6a7ac(long *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  long lVar9;
  code **ppcVar10;
  ulong uVar11;
  long lVar12;
  
  iVar7 = *(int *)((long)param_1 + 0x164);
  if (iVar7 == 1) {
    lVar9 = param_1[0x2d];
    uVar2 = *(uint *)(lVar9 + 0x20);
    uVar8 = *(uint *)(lVar9 + 0xc);
    uVar4 = 0;
    if (uVar8 != 0) {
      uVar4 = uVar2 / uVar8;
    }
    *(undefined4 *)(param_1 + 0x31) = *(undefined4 *)(lVar9 + 0x1c);
    *(uint *)((long)param_1 + 0x18c) = uVar2;
    *(undefined8 *)(lVar9 + 0x38) = 0x100000001;
    uVar2 = uVar2 - uVar4 * uVar8;
    if (uVar2 != 0) {
      uVar8 = uVar2;
    }
    *(undefined4 *)(lVar9 + 0x40) = 1;
    *(undefined4 *)(lVar9 + 0x44) = *(undefined4 *)(lVar9 + 0x24);
    *(undefined4 *)(lVar9 + 0x48) = 1;
    *(uint *)(lVar9 + 0x4c) = uVar8;
    param_1[0x32] = 1;
  }
  else {
    if (iVar7 - 5U < 0xfffffffc) {
      lVar12 = *param_1;
      *(int *)(lVar12 + 0x2c) = iVar7;
      lVar9 = *param_1;
      *(undefined4 *)(lVar12 + 0x28) = 0x1b;
      *(undefined4 *)(lVar9 + 0x30) = 4;
      (**(code **)*param_1)(param_1);
    }
    uVar6 = jdiv_round_up(*(undefined4 *)(param_1 + 10),
                          (long)*(int *)((long)param_1 + 0x1cc) * (long)*(int *)(param_1 + 0x2a));
    *(undefined4 *)(param_1 + 0x31) = uVar6;
    uVar6 = jdiv_round_up(*(undefined4 *)((long)param_1 + 0x54),
                          (long)*(int *)((long)param_1 + 0x1cc) *
                          (long)*(int *)((long)param_1 + 0x154));
    *(undefined4 *)((long)param_1 + 0x18c) = uVar6;
    *(undefined4 *)(param_1 + 0x32) = 0;
    if (0 < *(int *)((long)param_1 + 0x164)) {
      iVar7 = 0;
      lVar9 = 0;
      while( true ) {
        lVar12 = param_1[lVar9 + 0x2d];
        uVar2 = *(uint *)(lVar12 + 8);
        uVar8 = *(uint *)(lVar12 + 0xc);
        uVar4 = 0;
        if (uVar2 != 0) {
          uVar4 = *(uint *)(lVar12 + 0x1c) / uVar2;
        }
        iVar3 = uVar8 * uVar2;
        *(uint *)(lVar12 + 0x38) = uVar2;
        *(uint *)(lVar12 + 0x3c) = uVar8;
        uVar4 = *(uint *)(lVar12 + 0x1c) - uVar4 * uVar2;
        uVar5 = 0;
        if (uVar8 != 0) {
          uVar5 = *(uint *)(lVar12 + 0x20) / uVar8;
        }
        uVar1 = uVar2;
        if (uVar4 != 0) {
          uVar1 = uVar4;
        }
        *(int *)(lVar12 + 0x40) = iVar3;
        *(uint *)(lVar12 + 0x44) = *(int *)(lVar12 + 0x24) * uVar2;
        uVar2 = *(uint *)(lVar12 + 0x20) - uVar5 * uVar8;
        if (uVar2 != 0) {
          uVar8 = uVar2;
        }
        *(uint *)(lVar12 + 0x48) = uVar1;
        *(uint *)(lVar12 + 0x4c) = uVar8;
        if (10 < iVar7 + iVar3) {
          ppcVar10 = (code **)*param_1;
          *(undefined4 *)(ppcVar10 + 5) = 0xe;
          (**ppcVar10)(param_1);
        }
        if (0 < iVar3) {
          uVar8 = iVar3 + 1;
          do {
            iVar7 = *(int *)(param_1 + 0x32);
            uVar8 = uVar8 - 1;
            *(int *)(param_1 + 0x32) = iVar7 + 1;
            *(int *)((long)param_1 + (long)iVar7 * 4 + 0x194) = (int)lVar9;
          } while (1 < uVar8);
        }
        lVar9 = lVar9 + 1;
        if (*(int *)((long)param_1 + 0x164) <= lVar9) break;
        iVar7 = *(int *)(param_1 + 0x32);
      }
    }
  }
  if (0 < (int)*(uint *)((long)param_1 + 0x134)) {
    uVar11 = (ulong)*(uint *)(param_1 + 0x31) * (ulong)*(uint *)((long)param_1 + 0x134);
    if (0xfffe < uVar11) {
      uVar11 = 0xffff;
    }
    *(int *)(param_1 + 0x26) = (int)uVar11;
  }
  return;
}


