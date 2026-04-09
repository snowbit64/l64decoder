// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~DensityMapFilterLua
// Entry Point: 007636c8
// Size: 48 bytes
// Signature: undefined __thiscall ~DensityMapFilterLua(DensityMapFilterLua * this)


/* DensityMapFilterLua::~DensityMapFilterLua() */

void __thiscall DensityMapFilterLua::~DensityMapFilterLua(DensityMapFilterLua *this)

{
  *(undefined ***)this = &PTR__DensityMapFilterLua_00fdb548;
  if (*(IDensityPixelSource **)(this + 8) != (IDensityPixelSource *)0x0) {
                    /* try { // try from 007636ec to 007636ef has its CatchHandler @ 007636f8 */
    IDensityPixelSource::removeDeletedListener
              (*(IDensityPixelSource **)(this + 8),(DeletedListener *)this);
  }
  return;
}


