// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getTerrainLoadDirectory
// Entry Point: 00750264
// Size: 44 bytes
// Signature: undefined getTerrainLoadDirectory(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* EngineManager::getTerrainLoadDirectory() const */

long EngineManager::getTerrainLoadDirectory(void)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long in_x0;
  
  lVar1 = in_x0 + 0x2f9;
  uVar3 = (ulong)(*(byte *)(in_x0 + 0x2f8) >> 1);
  if ((*(byte *)(in_x0 + 0x2f8) & 1) != 0) {
    lVar1 = *(long *)(in_x0 + 0x308);
    uVar3 = *(ulong *)(in_x0 + 0x300);
  }
  lVar2 = 0;
  if (uVar3 != 0) {
    lVar2 = lVar1;
  }
  return lVar2;
}


