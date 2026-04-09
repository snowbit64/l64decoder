// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d9cea4
// Entry Point: 00d9cea4
// Size: 340 bytes
// Signature: undefined FUN_00d9cea4(void)


void FUN_00d9cea4(long param_1)

{
  long lVar1;
  ulong uVar2;
  char *pcVar3;
  char *pcVar4;
  long lVar5;
  
  uVar2 = *(ulong *)(param_1 + 8);
  if (uVar2 >> 0x18 == 0xff) {
    *(ulong *)(param_1 + 8) = (ulong)(uint)((int)uVar2 << 8);
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 1;
    return;
  }
  pcVar3 = *(char **)(param_1 + 0x18) + 1;
  **(char **)(param_1 + 0x18) = *(char *)(param_1 + 4) + (char)(uVar2 >> 0x20);
  *(char **)(param_1 + 0x18) = pcVar3;
  if ((pcVar3 == *(char **)(param_1 + 0x20)) && (*(int *)(param_1 + 0x40) == 0)) {
    lVar5 = (long)pcVar3 - *(long *)(param_1 + 0x28);
    lVar1 = (***(code ***)(param_1 + 0x30))
                      (*(code ***)(param_1 + 0x30),*(long *)(param_1 + 0x28),lVar5);
    if (lVar5 != lVar1) {
      *(undefined4 *)(param_1 + 0x40) = 9;
    }
    pcVar3 = *(char **)(param_1 + 0x28);
    *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x38) + lVar5;
    *(char **)(param_1 + 0x18) = pcVar3;
  }
  lVar1 = *(long *)(param_1 + 0x10) + -1;
  *(long *)(param_1 + 0x10) = lVar1;
  while (lVar1 != 0) {
    pcVar4 = pcVar3 + 1;
    *pcVar3 = *(char *)(param_1 + 0xc) + -1;
    *(char **)(param_1 + 0x18) = pcVar4;
    if ((pcVar4 == *(char **)(param_1 + 0x20)) && (*(int *)(param_1 + 0x40) == 0)) {
      lVar5 = (long)pcVar4 - *(long *)(param_1 + 0x28);
      lVar1 = (***(code ***)(param_1 + 0x30))
                        (*(code ***)(param_1 + 0x30),*(long *)(param_1 + 0x28),lVar5);
      if (lVar5 != lVar1) {
        *(undefined4 *)(param_1 + 0x40) = 9;
      }
      pcVar4 = *(char **)(param_1 + 0x28);
      *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x38) + lVar5;
      *(char **)(param_1 + 0x18) = pcVar4;
    }
    lVar1 = *(long *)(param_1 + 0x10) + -1;
    *(long *)(param_1 + 0x10) = lVar1;
    pcVar3 = pcVar4;
  }
  *(char *)(param_1 + 4) = (char)((ulong)*(undefined8 *)(param_1 + 8) >> 0x18);
  *(ulong *)(param_1 + 8) = (ulong)(uint)((int)*(undefined8 *)(param_1 + 8) << 8);
  *(undefined8 *)(param_1 + 0x10) = 1;
  return;
}


