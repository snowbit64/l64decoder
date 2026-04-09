// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~ProceduralDensityPixelSource
// Entry Point: 007896d8
// Size: 64 bytes
// Signature: undefined __thiscall ~ProceduralDensityPixelSource(ProceduralDensityPixelSource * this)


/* ProceduralDensityPixelSource::~ProceduralDensityPixelSource() */

void __thiscall
ProceduralDensityPixelSource::~ProceduralDensityPixelSource(ProceduralDensityPixelSource *this)

{
  *(undefined ***)this = &PTR__ProceduralDensityPixelSource_00fdb630;
  if (((byte)this[0x20] & 1) != 0) {
    operator_delete(*(void **)(this + 0x30));
  }
  IDensityPixelSource::~IDensityPixelSource((IDensityPixelSource *)this);
  return;
}


