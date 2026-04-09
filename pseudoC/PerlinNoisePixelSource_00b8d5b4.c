// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~PerlinNoisePixelSource
// Entry Point: 00b8d5b4
// Size: 72 bytes
// Signature: undefined __thiscall ~PerlinNoisePixelSource(PerlinNoisePixelSource * this)


/* PerlinNoisePixelSource::~PerlinNoisePixelSource() */

void __thiscall PerlinNoisePixelSource::~PerlinNoisePixelSource(PerlinNoisePixelSource *this)

{
  *(undefined ***)this = &PTR__ProceduralDensityPixelSource_00fdb630;
  if (((byte)this[0x20] & 1) != 0) {
    operator_delete(*(void **)(this + 0x30));
  }
  IDensityPixelSource::~IDensityPixelSource((IDensityPixelSource *)this);
  operator_delete(this);
  return;
}


