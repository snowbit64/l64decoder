// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~DensityMapFilterLua
// Entry Point: 007636fc
// Size: 64 bytes
// Signature: undefined __thiscall ~DensityMapFilterLua(DensityMapFilterLua * this)


/* DensityMapFilterLua::~DensityMapFilterLua() */

void __thiscall DensityMapFilterLua::~DensityMapFilterLua(DensityMapFilterLua *this)

{
  *(undefined ***)this = &PTR__DensityMapFilterLua_00fdb548;
  if (*(IDensityPixelSource **)(this + 8) != (IDensityPixelSource *)0x0) {
                    /* try { // try from 00763724 to 0076372b has its CatchHandler @ 0076373c */
    IDensityPixelSource::removeDeletedListener
              (*(IDensityPixelSource **)(this + 8),(DeletedListener *)this);
  }
  operator_delete(this);
  return;
}


