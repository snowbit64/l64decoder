// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~TerrainDetailDistanceConstructor
// Entry Point: 007609a4
// Size: 140 bytes
// Signature: undefined __thiscall ~TerrainDetailDistanceConstructor(TerrainDetailDistanceConstructor * this)


/* TerrainDetailDistanceConstructor::~TerrainDetailDistanceConstructor() */

void __thiscall
TerrainDetailDistanceConstructor::~TerrainDetailDistanceConstructor
          (TerrainDetailDistanceConstructor *this)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(this + 0x10);
  *(undefined ***)this = &PTR__TerrainDetailDistanceConstructor_00fdb4e8;
  if (lVar2 != 0) {
    lVar1 = *(long *)(lVar2 + -8);
    if (lVar1 != 0) {
      lVar1 = lVar1 * 0x18;
      do {
        if ((*(byte *)(lVar2 + lVar1 + -0x18) & 1) != 0) {
          operator_delete(*(void **)(lVar2 + lVar1 + -8));
        }
        lVar1 = lVar1 + -0x18;
      } while (lVar1 != 0);
    }
    operator_delete__((long *)(lVar2 + -8));
  }
  if (*(void **)(this + 0x18) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x18));
  }
  operator_delete(this);
  return;
}


