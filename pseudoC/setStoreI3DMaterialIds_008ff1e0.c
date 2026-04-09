// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setStoreI3DMaterialIds
// Entry Point: 008ff1e0
// Size: 8 bytes
// Signature: undefined __thiscall setStoreI3DMaterialIds(I3DLoad * this, map * param_1)


/* I3DLoad::setStoreI3DMaterialIds(std::__ndk1::map<GsMaterial*, unsigned int,
   std::__ndk1::less<GsMaterial*>, std::__ndk1::allocator<std::__ndk1::pair<GsMaterial* const,
   unsigned int> > >*) */

void __thiscall I3DLoad::setStoreI3DMaterialIds(I3DLoad *this,map *param_1)

{
  *(map **)(this + 0x80) = param_1;
  return;
}


