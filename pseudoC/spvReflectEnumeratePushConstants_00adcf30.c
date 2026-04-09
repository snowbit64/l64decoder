// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: spvReflectEnumeratePushConstants
// Entry Point: 00adcf30
// Size: 268 bytes
// Signature: undefined spvReflectEnumeratePushConstants(void)


ulong spvReflectEnumeratePushConstants(long param_1,uint *param_2,ulong param_3)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  
  uVar2 = 5;
  if ((param_1 != 0) && (param_2 != (uint *)0x0)) {
    if (param_3 == 0) {
      *param_2 = *(uint *)(param_1 + 0x488);
      return 0;
    }
    uVar1 = *param_2;
    uVar2 = (ulong)uVar1;
    if (uVar1 != *(uint *)(param_1 + 0x488)) {
      return 7;
    }
    if (uVar1 != 0) {
      if ((uVar1 < 4) ||
         ((param_3 < param_1 + 0x498U &&
          ((long *)(param_1 + 0x490U) < (long *)(param_3 + uVar2 * 8))))) {
        uVar3 = 0;
      }
      else {
        uVar3 = uVar2 & 0xfffffffc;
        lVar5 = *(long *)(param_1 + 0x490U);
        plVar4 = (long *)(param_3 + 0x10);
        uVar6 = uVar3;
        lVar7 = 0;
        lVar8 = 1;
        do {
          uVar6 = uVar6 - 4;
          plVar4[-1] = lVar5 + lVar8 * 0x160;
          plVar4[-2] = lVar5 + lVar7 * 0x160;
          plVar4[1] = lVar8 * 0x160 + lVar5 + 0x2c0;
          *plVar4 = lVar7 * 0x160 + lVar5 + 0x2c0;
          plVar4 = plVar4 + 4;
          lVar7 = lVar7 + 4;
          lVar8 = lVar8 + 4;
        } while (uVar6 != 0);
        if (uVar3 == uVar2) {
          return 0;
        }
      }
      uVar2 = uVar2 - uVar3;
      lVar5 = uVar3 * 0x160;
      plVar4 = (long *)(param_3 + uVar3 * 8);
      do {
        uVar2 = uVar2 - 1;
        lVar7 = *(long *)(param_1 + 0x490) + lVar5;
        lVar5 = lVar5 + 0x160;
        *plVar4 = lVar7;
        plVar4 = plVar4 + 1;
      } while (uVar2 != 0);
    }
  }
  return uVar2 & 0xffffffff;
}


