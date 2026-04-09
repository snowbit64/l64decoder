// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: spvReflectEnumerateDescriptorSets
// Entry Point: 00adc6fc
// Size: 216 bytes
// Signature: undefined spvReflectEnumerateDescriptorSets(void)


ulong spvReflectEnumerateDescriptorSets(long param_1,uint *param_2,long param_3)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  uVar2 = 5;
  if ((param_1 != 0) && (param_2 != (uint *)0x0)) {
    if (param_3 == 0) {
      uVar2 = 0;
      *param_2 = *(uint *)(param_1 + 0x50);
    }
    else {
      uVar1 = *param_2;
      uVar2 = (ulong)uVar1;
      if (uVar1 != *(uint *)(param_1 + 0x50)) {
        return 7;
      }
      if (uVar1 != 0) {
        if (uVar1 < 4) {
          uVar3 = 0;
        }
        else {
          uVar3 = uVar2 & 0xfffffffc;
          plVar4 = (long *)(param_3 + 0x10);
          lVar7 = 1;
          lVar6 = 0;
          uVar5 = uVar3;
          do {
            lVar8 = lVar6 * 0x10;
            lVar9 = lVar7 * 0x10;
            uVar5 = uVar5 - 4;
            lVar6 = lVar6 + 4;
            lVar7 = lVar7 + 4;
            lVar8 = param_1 + lVar8;
            lVar9 = param_1 + lVar9;
            plVar4[-1] = lVar9 + 0x58;
            plVar4[-2] = lVar8 + 0x58;
            plVar4[1] = lVar9 + 0x78;
            *plVar4 = lVar8 + 0x78;
            plVar4 = plVar4 + 4;
          } while (uVar5 != 0);
          if (uVar3 == uVar2) {
            return 0;
          }
        }
        lVar6 = param_1 + uVar3 * 0x10 + 0x58;
        uVar2 = uVar2 - uVar3;
        plVar4 = (long *)(param_3 + uVar3 * 8);
        do {
          *plVar4 = lVar6;
          lVar6 = lVar6 + 0x10;
          uVar2 = uVar2 - 1;
          plVar4 = plVar4 + 1;
        } while (uVar2 != 0);
      }
    }
  }
  return uVar2 & 0xffffffff;
}


