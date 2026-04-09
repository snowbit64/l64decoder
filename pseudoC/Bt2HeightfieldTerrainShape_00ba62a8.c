// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~Bt2HeightfieldTerrainShape
// Entry Point: 00ba62a8
// Size: 40 bytes
// Signature: undefined __thiscall ~Bt2HeightfieldTerrainShape(Bt2HeightfieldTerrainShape * this)


/* Bt2HeightfieldTerrainShape::~Bt2HeightfieldTerrainShape() */

void __thiscall
Bt2HeightfieldTerrainShape::~Bt2HeightfieldTerrainShape(Bt2HeightfieldTerrainShape *this)

{
  btConcaveShape::~btConcaveShape((btConcaveShape *)this);
                    /* try { // try from 00ba62bc to 00ba62c3 has its CatchHandler @ 00ba62d0 */
  btAlignedFreeInternal(this);
  return;
}


