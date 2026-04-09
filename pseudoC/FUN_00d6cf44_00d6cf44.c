// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d6cf44
// Entry Point: 00d6cf44
// Size: 152 bytes
// Signature: undefined FUN_00d6cf44(void)


void FUN_00d6cf44(long param_1,long param_2,undefined8 param_3,long *param_4)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  jcopy_sample_rows(param_3,0,param_4,0,*(undefined4 *)(param_1 + 0x154),
                    *(undefined4 *)(param_1 + 0x30));
  uVar1 = *(uint *)(param_1 + 0x30);
  iVar2 = *(int *)(param_2 + 0x24) * *(int *)(param_2 + 0x1c);
  if ((0 < (int)(iVar2 - uVar1)) &&
     (uVar3 = (ulong)*(uint *)(param_1 + 0x154), 0 < (int)*(uint *)(param_1 + 0x154))) {
    do {
      memset((void *)(*param_4 + (ulong)uVar1),
             (uint)*(byte *)((long)(void *)(*param_4 + (ulong)uVar1) + -1),
             (ulong)(iVar2 + ~uVar1) + 1);
      uVar3 = uVar3 - 1;
      param_4 = param_4 + 1;
    } while (uVar3 != 0);
  }
  return;
}


