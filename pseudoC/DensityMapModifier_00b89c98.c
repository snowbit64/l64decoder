// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~DensityMapModifier
// Entry Point: 00b89c98
// Size: 68 bytes
// Signature: undefined __thiscall ~DensityMapModifier(DensityMapModifier * this)


/* DensityMapModifier::~DensityMapModifier() */

void __thiscall DensityMapModifier::~DensityMapModifier(DensityMapModifier *this)

{
  *(undefined ***)this = &PTR__DensityMapModifier_00fea768;
  if (*(long *)(this + 8) != 0) {
                    /* try { // try from 00b89cc4 to 00b89ccb has its CatchHandler @ 00b89cdc */
    IDensityPixelSource::removeDeletedListener
              ((IDensityPixelSource *)(*(long *)(this + 8) + 0x58),(DeletedListener *)this);
  }
  operator_delete(this);
  return;
}


