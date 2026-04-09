// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: spvReflectGetPushConstantBlock
// Entry Point: 00addbc0
// Size: 80 bytes
// Signature: undefined spvReflectGetPushConstantBlock(void)


long spvReflectGetPushConstantBlock(long param_1,uint param_2,undefined4 *param_3)

{
  long lVar1;
  undefined4 uVar2;
  
  if ((param_1 == 0) || (*(uint *)(param_1 + 0x488) <= param_2)) {
    lVar1 = 0;
  }
  else {
    lVar1 = *(long *)(param_1 + 0x490) + (ulong)param_2 * 0x160;
  }
  if (param_3 != (undefined4 *)0x0) {
    uVar2 = 5;
    if (param_1 != 0) {
      uVar2 = 8;
    }
    if (lVar1 != 0) {
      uVar2 = 0;
    }
    *param_3 = uVar2;
  }
  return lVar1;
}


