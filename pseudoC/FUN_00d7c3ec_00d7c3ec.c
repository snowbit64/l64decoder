// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d7c3ec
// Entry Point: 00d7c3ec
// Size: 228 bytes
// Signature: undefined FUN_00d7c3ec(void)


void FUN_00d7c3ec(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long in_x4;
  uint *in_x5;
  int in_w6;
  long lVar6;
  
  lVar6 = *(long *)(param_1 + 0x238);
  uVar1 = *(uint *)(lVar6 + 0x28);
  if (uVar1 == 0) {
    lVar5 = (**(code **)(*(long *)(param_1 + 8) + 0x38))
                      (param_1,*(undefined8 *)(lVar6 + 0x10),*(undefined4 *)(lVar6 + 0x24),
                       *(undefined4 *)(lVar6 + 0x20),0);
    uVar1 = *(uint *)(lVar6 + 0x28);
    *(long *)(lVar6 + 0x18) = lVar5;
  }
  else {
    lVar5 = *(long *)(lVar6 + 0x18);
  }
  uVar2 = *(int *)(lVar6 + 0x20) - uVar1;
  uVar3 = in_w6 - *in_x5;
  uVar4 = *(int *)(param_1 + 0x78) - *(int *)(lVar6 + 0x24);
  if (uVar2 <= uVar3) {
    uVar3 = uVar2;
  }
  if (uVar3 <= uVar4) {
    uVar4 = uVar3;
  }
  (**(code **)(*(long *)(param_1 + 0x270) + 8))
            (param_1,lVar5 + (ulong)uVar1 * 8,in_x4 + (ulong)*in_x5 * 8,uVar4);
  *in_x5 = *in_x5 + uVar4;
  uVar4 = *(int *)(lVar6 + 0x28) + uVar4;
  *(uint *)(lVar6 + 0x28) = uVar4;
  if (*(uint *)(lVar6 + 0x20) <= uVar4) {
    *(uint *)(lVar6 + 0x24) = *(int *)(lVar6 + 0x24) + *(uint *)(lVar6 + 0x20);
    *(undefined4 *)(lVar6 + 0x28) = 0;
  }
  return;
}


