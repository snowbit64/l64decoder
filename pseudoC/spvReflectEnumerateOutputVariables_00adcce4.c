// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: spvReflectEnumerateOutputVariables
// Entry Point: 00adcce4
// Size: 104 bytes
// Signature: undefined spvReflectEnumerateOutputVariables(void)


undefined4 spvReflectEnumerateOutputVariables(long param_1,uint *param_2,long param_3)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  
  uVar2 = 5;
  if ((param_1 != 0) && (param_2 != (uint *)0x0)) {
    if (param_3 != 0) {
      uVar1 = *param_2;
      if (uVar1 == *(uint *)(param_1 + 0x468)) {
        if (uVar1 != 0) {
          lVar3 = 0;
          do {
            *(undefined8 *)(param_3 + lVar3) = *(undefined8 *)(*(long *)(param_1 + 0x470) + lVar3);
            lVar3 = lVar3 + 8;
          } while ((ulong)uVar1 * 8 - lVar3 != 0);
        }
        return 0;
      }
      return 7;
    }
    uVar2 = 0;
    *param_2 = *(uint *)(param_1 + 0x468);
  }
  return uVar2;
}


