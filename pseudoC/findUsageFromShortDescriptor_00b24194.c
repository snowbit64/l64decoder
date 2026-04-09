// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: findUsageFromShortDescriptor
// Entry Point: 00b24194
// Size: 160 bytes
// Signature: undefined __cdecl findUsageFromShortDescriptor(char * param_1, ushort param_2)


/* USBUtil::findUsageFromShortDescriptor(char const*, unsigned short) */

undefined4 USBUtil::findUsageFromShortDescriptor(char *param_1,ushort param_2)

{
  uint uVar1;
  int iVar2;
  undefined **ppuVar3;
  ulong uVar4;
  undefined2 *puVar5;
  
  uVar4 = 0xfffffffffffffffb;
  ppuVar3 = &PTR_s_genericDesktopPage_00fe8d38;
  do {
    if (*(ushort *)(ppuVar3 + -1) == param_2) {
      if (uVar4 < 0x1a) {
        return 0;
      }
      uVar1 = *(uint *)(ppuVar3 + 1);
      if (uVar1 < 2) {
        uVar1 = 1;
      }
      uVar4 = (ulong)uVar1;
      puVar5 = (undefined2 *)(*ppuVar3 + 8);
      do {
        iVar2 = strcasecmp(param_1,*(char **)(puVar5 + -4));
        if (iVar2 == 0) {
          return CONCAT22(param_2,*puVar5);
        }
        puVar5 = puVar5 + 8;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
      return 0;
    }
    uVar4 = uVar4 + 1;
    ppuVar3 = ppuVar3 + 4;
  } while (uVar4 != 0x1a);
  return 0;
}


