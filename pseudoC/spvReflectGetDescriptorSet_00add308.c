// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: spvReflectGetDescriptorSet
// Entry Point: 00add308
// Size: 108 bytes
// Signature: undefined spvReflectGetDescriptorSet(void)


int * spvReflectGetDescriptorSet(long param_1,int param_2,undefined4 *param_3)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  ulong uVar4;
  int *piVar5;
  
  if (param_1 == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    uVar4 = (ulong)*(uint *)(param_1 + 0x50);
    if (*(uint *)(param_1 + 0x50) == 0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar1 = (int *)0x0;
      piVar5 = (int *)(param_1 + 0x58);
      do {
        piVar2 = piVar5;
        if (*piVar5 != param_2) {
          piVar2 = piVar1;
        }
        uVar4 = uVar4 - 1;
        piVar1 = piVar2;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
  }
  if (param_3 != (undefined4 *)0x0) {
    uVar3 = 5;
    if (param_1 != 0) {
      uVar3 = 8;
    }
    if (piVar2 != (int *)0x0) {
      uVar3 = 0;
    }
    *param_3 = uVar3;
  }
  return piVar2;
}


