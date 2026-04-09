// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: spvReflectGetDescriptorBinding
// Entry Point: 00add174
// Size: 104 bytes
// Signature: undefined spvReflectGetDescriptorBinding(void)


long spvReflectGetDescriptorBinding(long param_1,int param_2,int param_3,undefined4 *param_4)

{
  long lVar1;
  undefined4 uVar2;
  ulong uVar3;
  
  if ((param_1 != 0) && (uVar3 = (ulong)*(uint *)(param_1 + 0x40), *(uint *)(param_1 + 0x40) != 0))
  {
    lVar1 = *(long *)(param_1 + 0x48);
    do {
      if ((*(int *)(lVar1 + 0x10) == param_2) && (*(int *)(lVar1 + 0x18) == param_3))
      goto LAB_00add1b4;
      lVar1 = lVar1 + 0x248;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  lVar1 = 0;
LAB_00add1b4:
  if (param_4 != (undefined4 *)0x0) {
    uVar2 = 5;
    if (param_1 != 0) {
      uVar2 = 8;
    }
    if (lVar1 != 0) {
      uVar2 = 0;
    }
    *param_4 = uVar2;
  }
  return lVar1;
}


