// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getDetailLayerName
// Entry Point: 008eab44
// Size: 36 bytes
// Signature: undefined __thiscall getDetailLayerName(BaseTerrain * this, uint param_1)


/* BaseTerrain::getDetailLayerName(unsigned int) const */

long __thiscall BaseTerrain::getDetailLayerName(BaseTerrain *this,uint param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(this + 8) + (ulong)param_1 * 0xb0;
  lVar1 = lVar2 + 0x11;
  if ((*(byte *)(lVar2 + 0x10) & 1) != 0) {
    lVar1 = *(long *)(lVar2 + 0x20);
  }
  return lVar1;
}


