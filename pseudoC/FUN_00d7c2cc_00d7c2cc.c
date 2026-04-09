// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d7c2cc
// Entry Point: 00d7c2cc
// Size: 288 bytes
// Signature: undefined FUN_00d7c2cc(void)


void FUN_00d7c2cc(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 undefined8 param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  uint uVar5;
  
  lVar4 = *(long *)(param_1 + 0x238);
  uVar5 = *(uint *)(lVar4 + 0x28);
  if (uVar5 == 0) {
    uVar3 = (**(code **)(*(long *)(param_1 + 8) + 0x38))
                      (param_1,*(undefined8 *)(lVar4 + 0x10),*(undefined4 *)(lVar4 + 0x24),
                       *(undefined4 *)(lVar4 + 0x20),1);
    uVar5 = *(uint *)(lVar4 + 0x28);
    *(undefined8 *)(lVar4 + 0x18) = uVar3;
  }
  else {
    uVar3 = *(undefined8 *)(lVar4 + 0x18);
  }
  (**(code **)(*(long *)(param_1 + 0x260) + 8))
            (param_1,param_2,param_3,param_4,uVar3,(uint *)(lVar4 + 0x28),
             *(undefined4 *)(lVar4 + 0x20));
  uVar1 = *(uint *)(lVar4 + 0x28);
  iVar2 = uVar1 - uVar5;
  if (uVar1 < uVar5 || iVar2 == 0) {
    uVar5 = *(uint *)(lVar4 + 0x20);
    if (uVar5 <= uVar1) {
LAB_00d7c3c8:
      *(uint *)(lVar4 + 0x24) = *(int *)(lVar4 + 0x24) + uVar5;
      *(undefined4 *)(lVar4 + 0x28) = 0;
      return;
    }
  }
  else {
    (**(code **)(*(long *)(param_1 + 0x270) + 8))
              (param_1,*(long *)(lVar4 + 0x18) + (ulong)uVar5 * 8,0,iVar2);
    *param_6 = *param_6 + iVar2;
    uVar5 = *(uint *)(lVar4 + 0x20);
    if (uVar5 <= *(uint *)(lVar4 + 0x28)) goto LAB_00d7c3c8;
  }
  return;
}


