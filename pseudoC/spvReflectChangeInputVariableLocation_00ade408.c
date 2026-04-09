// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: spvReflectChangeInputVariableLocation
// Entry Point: 00ade408
// Size: 112 bytes
// Signature: undefined spvReflectChangeInputVariableLocation(void)


undefined4 spvReflectChangeInputVariableLocation(long param_1,long param_2,undefined4 param_3)

{
  ulong uVar1;
  long *plVar2;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    uVar1 = (ulong)*(uint *)(param_1 + 0x458);
    if (*(uint *)(param_1 + 0x458) != 0) {
      plVar2 = *(long **)(param_1 + 0x460);
      do {
        if (*plVar2 == param_2) {
          if (*(uint *)(param_2 + 0x168) <= *(int *)(*(long *)(param_1 + 0x498) + 0x18) - 1U) {
            *(undefined4 *)
             (*(long *)(*(long *)(param_1 + 0x498) + 0x10) + (ulong)*(uint *)(param_2 + 0x168) * 4)
                 = param_3;
            *(undefined4 *)(param_2 + 0x10) = param_3;
            return 0;
          }
          return 4;
        }
        plVar2 = plVar2 + 1;
        uVar1 = uVar1 - 1;
      } while (uVar1 != 0);
    }
    return 8;
  }
  return 5;
}


