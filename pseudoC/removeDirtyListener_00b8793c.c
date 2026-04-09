// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: removeDirtyListener
// Entry Point: 00b8793c
// Size: 160 bytes
// Signature: undefined __thiscall removeDirtyListener(DensityMap * this, DirtyListener * param_1)


/* DensityMap::removeDirtyListener(DensityMap::DirtyListener*) */

void __thiscall DensityMap::removeDirtyListener(DensityMap *this,DirtyListener *param_1)

{
  size_t __n;
  long lVar1;
  long lVar2;
  ulong uVar3;
  DirtyListener **__dest;
  
  lVar2 = *(long *)(this + 0x78);
  lVar1 = *(long *)(this + 0x80);
  uVar3 = (lVar1 - lVar2 >> 3) * -0x5555555555555555;
  if (0 < (int)uVar3) {
    uVar3 = uVar3 & 0xffffffff;
    while( true ) {
      __dest = (DirtyListener **)(lVar2 + (ulong)((int)uVar3 - 1) * 0x18);
      if (*__dest == param_1) {
        __n = lVar1 - (long)(__dest + 3);
        if (__n != 0) {
          memmove(__dest,__dest + 3,__n);
        }
        lVar1 = (long)__dest + __n;
        *(long *)(this + 0x80) = lVar1;
      }
      if (uVar3 < 2) break;
      lVar2 = *(long *)(this + 0x78);
      uVar3 = uVar3 - 1;
    }
  }
  return;
}


