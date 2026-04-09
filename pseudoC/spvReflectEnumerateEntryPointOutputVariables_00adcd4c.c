// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: spvReflectEnumerateEntryPointOutputVariables
// Entry Point: 00adcd4c
// Size: 216 bytes
// Signature: undefined spvReflectEnumerateEntryPointOutputVariables(void)


undefined8
spvReflectEnumerateEntryPointOutputVariables(long param_1,char *param_2,uint *param_3,long param_4)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  uint *puVar5;
  ulong uVar6;
  
  uVar3 = 5;
  if ((param_1 != 0) && (param_3 != (uint *)0x0)) {
    if ((param_2 != (char *)0x0) &&
       (uVar6 = (ulong)*(uint *)(param_1 + 0x14), *(uint *)(param_1 + 0x14) != 0)) {
      puVar5 = (uint *)(*(long *)(param_1 + 0x18) + 0x20);
      do {
        iVar2 = strcmp(*(char **)(puVar5 + -8),param_2);
        if (iVar2 == 0) {
          if (param_4 == 0) {
            *param_3 = *puVar5;
            return 0;
          }
          uVar1 = *param_3;
          if (uVar1 == *puVar5) {
            if (uVar1 != 0) {
              lVar4 = 0;
              do {
                *(undefined8 *)(param_4 + lVar4) = *(undefined8 *)(*(long *)(puVar5 + 2) + lVar4);
                lVar4 = lVar4 + 8;
              } while ((ulong)uVar1 * 8 - lVar4 != 0);
              return 0;
            }
            return 0;
          }
          return 7;
        }
        puVar5 = puVar5 + 0x22;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
    uVar3 = 8;
  }
  return uVar3;
}


