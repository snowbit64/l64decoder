// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: spvReflectChangeDescriptorBindingNumber
// Entry Point: 00ade2b8
// Size: 184 bytes
// Signature: undefined spvReflectChangeDescriptorBindingNumber(void)


undefined8
spvReflectChangeDescriptorBindingNumber(long param_1,long param_2,int param_3,int param_4)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    return 5;
  }
  if (*(uint *)(param_1 + 0x40) != 0) {
    lVar3 = 0;
    lVar4 = *(long *)(param_1 + 0x48);
    do {
      if (lVar4 + lVar3 == param_2) {
        if (lVar4 != 0) {
          lVar5 = *(long *)(param_1 + 0x498);
          uVar1 = *(uint *)(lVar4 + lVar3 + 0x240);
          if (*(int *)(lVar5 + 0x18) - 1U < uVar1) {
            return 4;
          }
          if (param_3 != -1) {
            *(int *)(*(long *)(lVar5 + 0x10) + (ulong)uVar1 * 4) = param_3;
            *(int *)(lVar4 + lVar3 + 0x10) = param_3;
          }
          if (param_4 == -1) {
            return 0;
          }
          *(int *)(*(long *)(lVar5 + 0x10) + (ulong)*(uint *)(lVar4 + lVar3 + 0x244) * 4) = param_4;
          *(int *)(lVar4 + lVar3 + 0x18) = param_4;
          uVar2 = FUN_00adde2c();
          return uVar2;
        }
        break;
      }
      lVar3 = lVar3 + 0x248;
    } while ((ulong)*(uint *)(param_1 + 0x40) * 0x248 - lVar3 != 0);
  }
  if (param_4 == -1) {
    return 0;
  }
  uVar2 = FUN_00adde2c();
  return uVar2;
}


