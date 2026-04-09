// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~FoliageDataPlane
// Entry Point: 00a63c2c
// Size: 152 bytes
// Signature: undefined __thiscall ~FoliageDataPlane(FoliageDataPlane * this)


/* FoliageDataPlane::~FoliageDataPlane() */

void __thiscall FoliageDataPlane::~FoliageDataPlane(FoliageDataPlane *this)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  
  pbVar2 = *(byte **)(this + 0xb0);
  *(undefined ***)this = &PTR__FoliageDataPlane_00fe3a98;
  if (pbVar2 != (byte *)0x0) {
    pbVar1 = *(byte **)(this + 0xb8);
    pbVar3 = pbVar2;
    if (pbVar1 != pbVar2) {
      do {
        pbVar3 = pbVar1 + -0x18;
        if ((*pbVar3 & 1) != 0) {
          operator_delete(*(void **)(pbVar1 + -8));
        }
        pbVar1 = pbVar3;
      } while (pbVar3 != pbVar2);
      pbVar3 = *(byte **)(this + 0xb0);
    }
    *(byte **)(this + 0xb8) = pbVar2;
    operator_delete(pbVar3);
  }
  if (((byte)this[0x88] & 1) != 0) {
    operator_delete(*(void **)(this + 0x98));
  }
  TerrainDataPlane::~TerrainDataPlane((TerrainDataPlane *)this);
  return;
}


