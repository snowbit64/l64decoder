// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: cancelUpdateAndReturnTileIndex
// Entry Point: 00961880
// Size: 56 bytes
// Signature: undefined __thiscall cancelUpdateAndReturnTileIndex(MultiresTextureGpuUpdater * this, uint param_1)


/* MultiresTextureGpuUpdater::cancelUpdateAndReturnTileIndex(unsigned int) */

undefined4 __thiscall
MultiresTextureGpuUpdater::cancelUpdateAndReturnTileIndex
          (MultiresTextureGpuUpdater *this,uint param_1)

{
  long lVar1;
  int *piVar2;
  
  lVar1 = *(long *)(this + 0x120);
  piVar2 = (int *)(lVar1 + (ulong)(param_1 - 1) * 0xf8 + 0x48);
  if (*piVar2 == 1) {
    *piVar2 = 0;
    return *(undefined4 *)(lVar1 + (ulong)(param_1 - 1) * 0xf8);
  }
  return 0;
}


