// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~HeightMapSaveHelper
// Entry Point: 008ec630
// Size: 68 bytes
// Signature: undefined __thiscall ~HeightMapSaveHelper(HeightMapSaveHelper * this)


/* BaseTerrain::HeightMapSaveHelper::~HeightMapSaveHelper() */

void __thiscall BaseTerrain::HeightMapSaveHelper::~HeightMapSaveHelper(HeightMapSaveHelper *this)

{
  *(undefined ***)this = &PTR__HeightMapSaveHelper_00fde6d0;
  if (*(void **)(this + 0x58) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x58));
  }
  SaveHelper::~SaveHelper((SaveHelper *)this);
  operator_delete(this);
  return;
}


