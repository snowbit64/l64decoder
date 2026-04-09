// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~DensityMapModifier
// Entry Point: 00b89c60
// Size: 52 bytes
// Signature: undefined __thiscall ~DensityMapModifier(DensityMapModifier * this)


/* DensityMapModifier::~DensityMapModifier() */

void __thiscall DensityMapModifier::~DensityMapModifier(DensityMapModifier *this)

{
  *(undefined ***)this = &PTR__DensityMapModifier_00fea768;
  if (*(long *)(this + 8) != 0) {
                    /* try { // try from 00b89c88 to 00b89c8b has its CatchHandler @ 00b89c94 */
    IDensityPixelSource::removeDeletedListener
              ((IDensityPixelSource *)(*(long *)(this + 8) + 0x58),(DeletedListener *)this);
  }
  return;
}


