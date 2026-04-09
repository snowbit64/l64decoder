// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b44e8
// Entry Point: 007b44e8
// Size: 56 bytes
// Signature: undefined FUN_007b44e8(void)


void FUN_007b44e8(long param_1,char **param_2)

{
  byte bVar1;
  
  bVar1 = GeoMipMappingTerrain::saveOccludersCache
                    ((GeoMipMappingTerrain *)(param_1 + 0x170),*param_2);
  *(undefined4 *)(param_2 + 0x21) = 3;
  *(byte *)(param_2 + 0x20) = bVar1 & 1;
  return;
}


