// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getNormalMapFormatForNormalMap
// Entry Point: 00946040
// Size: 40 bytes
// Signature: undefined __cdecl getNormalMapFormatForNormalMap(Texture * param_1)


/* GsMaterial::getNormalMapFormatForNormalMap(Texture*) */

Texture * GsMaterial::getNormalMapFormatForNormalMap(Texture *param_1)

{
  uint uVar1;
  
  if (param_1 != (Texture *)0x0) {
    if ((*(ushort *)(param_1 + 0x48) >> 2 & 1) != 0) {
      return (Texture *)0x3;
    }
    uVar1 = 1;
    if (*(int *)(param_1 + 0x4c) != 0xf) {
      uVar1 = 2;
    }
    param_1 = (Texture *)(ulong)uVar1;
  }
  return param_1;
}


