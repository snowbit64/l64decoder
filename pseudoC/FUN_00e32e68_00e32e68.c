// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00e32e68
// Entry Point: 00e32e68
// Size: 688 bytes
// Signature: undefined FUN_00e32e68(void)


void FUN_00e32e68(long param_1,undefined8 param_2,ulong *param_3)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  byte local_6c [4];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  iVar2 = (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x38),param_2,local_6c,1);
  if (iVar2 == 1) {
    uVar6 = (ulong)local_6c[0];
  }
  else {
    iVar2 = (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x38),param_2);
    if (iVar2 != 0) {
      uVar3 = 0xffffffff;
      *param_3 = 0;
      if (*(long *)(lVar1 + 0x28) == local_68) {
        return;
      }
      goto LAB_00e33114;
    }
    uVar6 = 0;
  }
  iVar2 = (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x38),param_2,local_6c,1);
  if (iVar2 == 1) {
    uVar4 = (ulong)local_6c[0] << 8;
    uVar7 = (ulong)local_6c[0];
LAB_00e32f40:
    iVar2 = (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x38),param_2,local_6c,1);
    if (iVar2 == 1) {
      uVar7 = (ulong)local_6c[0];
    }
    else {
      iVar2 = (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x38),param_2);
      if (iVar2 != 0) goto LAB_00e330a8;
    }
    iVar2 = (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x38),param_2,local_6c,1);
    if (iVar2 == 1) {
      uVar8 = (ulong)local_6c[0];
    }
    else {
      iVar2 = (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x38),param_2);
      uVar8 = uVar7;
      if (iVar2 != 0) goto LAB_00e330a8;
    }
    iVar2 = (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x38),param_2,local_6c,1);
    if (iVar2 == 1) {
      uVar9 = (ulong)local_6c[0];
    }
    else {
      iVar2 = (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x38),param_2);
      uVar9 = uVar8;
      if (iVar2 != 0) goto LAB_00e330a8;
    }
    iVar2 = (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x38),param_2,local_6c,1);
    if (iVar2 == 1) {
      uVar10 = (ulong)local_6c[0];
    }
    else {
      iVar2 = (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x38),param_2);
      uVar10 = uVar9;
      if (iVar2 != 0) goto LAB_00e330a8;
    }
    iVar2 = (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x38),param_2,local_6c,1);
    if (iVar2 == 1) {
      uVar11 = (ulong)local_6c[0];
    }
    else {
      iVar2 = (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x38),param_2);
      uVar11 = uVar10;
      if (iVar2 != 0) goto LAB_00e330a8;
    }
    iVar2 = (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x38),param_2,local_6c,1);
    if (iVar2 == 1) {
      uVar5 = (ulong)local_6c[0];
    }
    else {
      iVar2 = (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x38),param_2);
      uVar5 = uVar11;
      if (iVar2 != 0) goto LAB_00e330a8;
    }
    uVar3 = 0;
    *param_3 = uVar6 | uVar4 | uVar7 << 0x10 | uVar8 << 0x18 | uVar9 << 0x20 | uVar10 << 0x28 |
               uVar11 << 0x30 | uVar5 << 0x38;
    if (*(long *)(lVar1 + 0x28) == local_68) {
      return;
    }
  }
  else {
    iVar2 = (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x38),param_2);
    if (iVar2 == 0) {
      uVar4 = (ulong)(uint)((int)uVar6 << 8);
      uVar7 = uVar6;
      goto LAB_00e32f40;
    }
LAB_00e330a8:
    uVar3 = 0xffffffff;
    *param_3 = 0;
    if (*(long *)(lVar1 + 0x28) == local_68) {
      return;
    }
  }
LAB_00e33114:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


