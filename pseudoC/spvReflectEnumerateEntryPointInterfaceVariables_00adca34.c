// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: spvReflectEnumerateEntryPointInterfaceVariables
// Entry Point: 00adca34
// Size: 368 bytes
// Signature: undefined spvReflectEnumerateEntryPointInterfaceVariables(void)


undefined8
spvReflectEnumerateEntryPointInterfaceVariables
          (long param_1,char *param_2,uint *param_3,ulong param_4)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  
  uVar3 = 5;
  if ((param_1 != 0) && (param_3 != (uint *)0x0)) {
    if ((param_2 != (char *)0x0) &&
       (uVar10 = (ulong)*(uint *)(param_1 + 0x14), *(uint *)(param_1 + 0x14) != 0)) {
      uVar9 = *(long *)(param_1 + 0x18) + 0x40;
      do {
        iVar2 = strcmp(*(char **)(uVar9 - 0x40),param_2);
        if (iVar2 == 0) {
          if (param_4 == 0) {
            *param_3 = *(uint *)(uVar9 - 0x10);
            return 0;
          }
          uVar1 = *param_3;
          uVar10 = (ulong)uVar1;
          if (uVar1 == *(uint *)(uVar9 - 0x10)) {
            if (uVar1 == 0) {
              return 0;
            }
            if ((uVar1 < 4) ||
               ((param_4 < uVar9 && ((long *)(uVar9 - 8) < (long *)(param_4 + uVar10 * 8))))) {
              uVar5 = 0;
            }
            else {
              uVar5 = uVar10 & 0xfffffffc;
              lVar6 = *(long *)(uVar9 - 8);
              plVar7 = (long *)(param_4 + 0x10);
              uVar8 = uVar5;
              lVar4 = 0;
              lVar11 = 1;
              do {
                uVar8 = uVar8 - 4;
                plVar7[-1] = lVar6 + lVar11 * 0x170;
                plVar7[-2] = lVar6 + lVar4 * 0x170;
                plVar7[1] = lVar11 * 0x170 + lVar6 + 0x2e0;
                *plVar7 = lVar4 * 0x170 + lVar6 + 0x2e0;
                plVar7 = plVar7 + 4;
                lVar4 = lVar4 + 4;
                lVar11 = lVar11 + 4;
              } while (uVar8 != 0);
              if (uVar5 == uVar10) {
                return 0;
              }
            }
            lVar4 = uVar10 - uVar5;
            lVar6 = uVar5 * 0x170;
            plVar7 = (long *)(param_4 + uVar5 * 8);
            do {
              lVar4 = lVar4 + -1;
              lVar11 = *(long *)(uVar9 - 8) + lVar6;
              lVar6 = lVar6 + 0x170;
              *plVar7 = lVar11;
              plVar7 = plVar7 + 1;
            } while (lVar4 != 0);
            return 0;
          }
          return 7;
        }
        uVar9 = uVar9 + 0x88;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
    uVar3 = 8;
  }
  return uVar3;
}


