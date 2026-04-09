// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~DxcManager
// Entry Point: 00ac4fc0
// Size: 44 bytes
// Signature: undefined __thiscall ~DxcManager(DxcManager * this)


/* DxcManager::~DxcManager() */

void __thiscall DxcManager::~DxcManager(DxcManager *this)

{
  *(undefined8 *)(this + 8) = 0;
                    /* try { // try from 00ac4fd8 to 00ac4fdb has its CatchHandler @ 00ac4fec */
  LibraryUtil::unloadModule(*(uint *)this);
  *(undefined4 *)this = 0;
  return;
}


