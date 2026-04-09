// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: spvReflectEnumerateDescriptorBindings
// Entry Point: 00adc4b8
// Size: 268 bytes
// Signature: undefined spvReflectEnumerateDescriptorBindings(void)


ulong spvReflectEnumerateDescriptorBindings(long param_1,uint *param_2,ulong param_3)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  
  uVar2 = 5;
  if ((param_1 != 0) && (param_2 != (uint *)0x0)) {
    if (param_3 == 0) {
      *param_2 = *(uint *)(param_1 + 0x40);
      return 0;
    }
    uVar1 = *param_2;
    uVar2 = (ulong)uVar1;
    if (uVar1 != *(uint *)(param_1 + 0x40)) {
      return 7;
    }
    if (uVar1 != 0) {
      if ((uVar1 < 4) ||
         ((param_3 < param_1 + 0x50U && ((long *)(param_1 + 0x48U) < (long *)(param_3 + uVar2 * 8)))
         )) {
        uVar3 = 0;
      }
      else {
        uVar3 = uVar2 & 0xfffffffc;
        lVar4 = *(long *)(param_1 + 0x48U);
        plVar5 = (long *)(param_3 + 0x10);
        uVar6 = uVar3;
        lVar7 = 0;
        lVar8 = 1;
        do {
          uVar6 = uVar6 - 4;
          plVar5[-1] = lVar4 + lVar8 * 0x248;
          plVar5[-2] = lVar4 + lVar7 * 0x248;
          plVar5[1] = lVar8 * 0x248 + lVar4 + 0x490;
          *plVar5 = lVar7 * 0x248 + lVar4 + 0x490;
          plVar5 = plVar5 + 4;
          lVar7 = lVar7 + 4;
          lVar8 = lVar8 + 4;
        } while (uVar6 != 0);
        if (uVar3 == uVar2) {
          return 0;
        }
      }
      uVar2 = uVar2 - uVar3;
      lVar4 = uVar3 * 0x248;
      plVar5 = (long *)(param_3 + uVar3 * 8);
      do {
        uVar2 = uVar2 - 1;
        lVar7 = *(long *)(param_1 + 0x48) + lVar4;
        lVar4 = lVar4 + 0x248;
        *plVar5 = lVar7;
        plVar5 = plVar5 + 1;
      } while (uVar2 != 0);
    }
  }
  return uVar2 & 0xffffffff;
}


