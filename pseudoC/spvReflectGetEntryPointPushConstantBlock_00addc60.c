// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: spvReflectGetEntryPointPushConstantBlock
// Entry Point: 00addc60
// Size: 276 bytes
// Signature: undefined spvReflectGetEntryPointPushConstantBlock(void)


long spvReflectGetEntryPointPushConstantBlock(long param_1,char *param_2,undefined4 *param_3)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  undefined4 uVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  
  lVar5 = param_1;
  if (param_1 == 0) {
joined_r0x00addd34:
    if (param_3 == (undefined4 *)0x0) {
      return lVar5;
    }
    uVar6 = 5;
    if (param_1 != 0) {
      uVar6 = 8;
    }
    if (lVar5 != 0) {
      uVar6 = 0;
    }
  }
  else {
    if ((param_2 != (char *)0x0) &&
       (uVar10 = (ulong)*(uint *)(param_1 + 0x14), *(uint *)(param_1 + 0x14) != 0)) {
      plVar9 = (long *)(*(long *)(param_1 + 0x18) + 0x68);
      do {
        iVar4 = strcmp((char *)plVar9[-0xd],param_2);
        if (iVar4 == 0) {
          if (*(uint *)(param_1 + 0x488) == 0) {
            lVar5 = 0;
          }
          else {
            uVar10 = 0;
            do {
              uVar7 = 0;
              uVar2 = *(uint *)(*(long *)(param_1 + 0x490) + uVar10 * 0x160);
              uVar8 = (ulong)*(uint *)(plVar9 + -1);
              while (uVar7 <= uVar8 && uVar8 - uVar7 != 0) {
                uVar1 = uVar7 + (uVar8 - uVar7 >> 1);
                uVar3 = *(uint *)(*plVar9 + uVar1 * 4);
                if (uVar3 < uVar2) {
                  uVar7 = uVar1 + 1;
                  uVar1 = uVar8;
                }
                uVar8 = uVar1;
                if (uVar3 == uVar2) {
                  lVar5 = *(long *)(param_1 + 0x490) + (uVar10 & 0xffffffff) * 0x160;
                  goto joined_r0x00addd34;
                }
              }
              lVar5 = 0;
              uVar10 = uVar10 + 1;
            } while (uVar10 != *(uint *)(param_1 + 0x488));
          }
          goto joined_r0x00addd34;
        }
        plVar9 = plVar9 + 0x11;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
    lVar5 = 0;
    if (param_3 == (undefined4 *)0x0) {
      return 0;
    }
    uVar6 = 8;
  }
  *param_3 = uVar6;
  return lVar5;
}


