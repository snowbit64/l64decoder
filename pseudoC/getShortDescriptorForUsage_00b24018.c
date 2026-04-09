// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getShortDescriptorForUsage
// Entry Point: 00b24018
// Size: 204 bytes
// Signature: undefined __cdecl getShortDescriptorForUsage(uint param_1, char * param_2)


/* USBUtil::getShortDescriptorForUsage(unsigned int, char*) */

char * USBUtil::getShortDescriptorForUsage(uint param_1,char *param_2)

{
  uint uVar1;
  undefined **ppuVar2;
  ulong uVar3;
  ushort *puVar4;
  
  if ((param_1 & 0xffff) == 0) {
    *(undefined2 *)(param_2 + 8) = 100;
    *(undefined8 *)param_2 = 0x656e696665646e55;
    return param_2;
  }
  uVar3 = 0xfffffffffffffffb;
  ppuVar2 = &PTR_s_genericDesktopPage_00fe8d38;
  do {
    if ((uint)*(ushort *)(ppuVar2 + -1) == param_1 >> 0x10) {
      if (0x19 < uVar3) {
        uVar1 = *(uint *)(ppuVar2 + 1);
        if (uVar1 < 2) {
          uVar1 = 1;
        }
        uVar3 = (ulong)uVar1;
        puVar4 = (ushort *)(*ppuVar2 + 8);
        do {
          if ((uint)*puVar4 == (param_1 & 0xffff)) {
            strcpy(param_2,*(char **)(puVar4 + -4));
            return param_2;
          }
          puVar4 = puVar4 + 8;
          uVar3 = uVar3 - 1;
        } while (uVar3 != 0);
      }
      break;
    }
    uVar3 = uVar3 + 1;
    ppuVar2 = ppuVar2 + 4;
  } while (uVar3 != 0x1a);
  FUN_00b23f74(param_2,0xffffffffffffffff,"0x%4.4X",param_1 & 0xffff);
  return param_2;
}


