// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: spvReflectChangeDescriptorSetNumber
// Entry Point: 00ade370
// Size: 152 bytes
// Signature: undefined spvReflectChangeDescriptorSetNumber(void)


ulong spvReflectChangeDescriptorSetNumber(long param_1,int *param_2,int param_3)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  uVar1 = 5;
  if ((param_1 != 0) && (param_2 != (int *)0x0)) {
    lVar3 = 0x58;
    do {
      if (*(int *)(param_1 + lVar3) == *param_2) {
        if (param_3 != -1) {
          if (param_2[1] != 0) {
            uVar2 = 0;
            lVar3 = *(long *)(param_2 + 2);
            lVar4 = *(long *)(param_1 + 0x498);
            do {
              lVar5 = *(long *)(lVar3 + uVar2 * 8);
              uVar1 = *(uint *)(lVar5 + 0x244);
              if (*(int *)(lVar4 + 0x18) - 1U < uVar1) {
                return 4;
              }
              uVar2 = uVar2 + 1;
              *(int *)(*(long *)(lVar4 + 0x10) + (ulong)uVar1 * 4) = param_3;
              uVar1 = param_2[1];
              *(int *)(lVar5 + 0x18) = param_3;
            } while (uVar2 < uVar1);
          }
          uVar2 = FUN_00adde2c();
          return uVar2;
        }
        break;
      }
      lVar3 = lVar3 + 0x10;
    } while (lVar3 != 0x458);
    uVar1 = 0;
  }
  return (ulong)uVar1;
}


