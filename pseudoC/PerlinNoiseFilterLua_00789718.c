// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~PerlinNoiseFilterLua
// Entry Point: 00789718
// Size: 120 bytes
// Signature: undefined __thiscall ~PerlinNoiseFilterLua(PerlinNoiseFilterLua * this)


/* PerlinNoiseFilterLua::~PerlinNoiseFilterLua() */

void __thiscall PerlinNoiseFilterLua::~PerlinNoiseFilterLua(PerlinNoiseFilterLua *this)

{
  *(undefined ***)this = &PTR__PerlinNoiseFilterLua_00fdb5f0;
  *(undefined ***)(this + 0x40) = &PTR__ProceduralDensityPixelSource_00fdb630;
  if (((byte)this[0x60] & 1) != 0) {
    operator_delete(*(void **)(this + 0x70));
  }
  IDensityPixelSource::~IDensityPixelSource((IDensityPixelSource *)(this + 0x40));
  *(undefined ***)this = &PTR__DensityMapFilterLua_00fdb548;
  if (*(IDensityPixelSource **)(this + 8) != (IDensityPixelSource *)0x0) {
                    /* try { // try from 0078977c to 00789783 has its CatchHandler @ 00789790 */
    IDensityPixelSource::removeDeletedListener
              (*(IDensityPixelSource **)(this + 8),(DeletedListener *)this);
  }
  return;
}


