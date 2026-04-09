// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: removeDeletedListener
// Entry Point: 00b8cbe0
// Size: 144 bytes
// Signature: undefined __thiscall removeDeletedListener(IDensityPixelSource * this, DeletedListener * param_1)


/* IDensityPixelSource::removeDeletedListener(IDensityPixelSource::DeletedListener*) */

void __thiscall
IDensityPixelSource::removeDeletedListener(IDensityPixelSource *this,DeletedListener *param_1)

{
  DeletedListener **__dest;
  size_t __n;
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar2 = *(long *)(this + 8);
  lVar1 = *(long *)(this + 0x10);
  if (0 < (int)((ulong)(lVar1 - lVar2) >> 3)) {
    uVar3 = (ulong)(lVar1 - lVar2) >> 3 & 0xffffffff;
    while( true ) {
      __dest = (DeletedListener **)(lVar2 + (ulong)((int)uVar3 - 1) * 8);
      if (*__dest == param_1) {
        __n = lVar1 - (long)(__dest + 1);
        if (__n != 0) {
          memmove(__dest,__dest + 1,__n);
        }
        lVar1 = (long)__dest + __n;
        *(long *)(this + 0x10) = lVar1;
      }
      if (uVar3 < 2) break;
      lVar2 = *(long *)(this + 8);
      uVar3 = uVar3 - 1;
    }
  }
  return;
}


