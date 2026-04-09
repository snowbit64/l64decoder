// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~I3DAssetPtr
// Entry Point: 008fcc24
// Size: 120 bytes
// Signature: undefined __thiscall ~I3DAssetPtr(I3DAssetPtr * this)


/* I3DAssetPtr::~I3DAssetPtr() */

void __thiscall I3DAssetPtr::~I3DAssetPtr(I3DAssetPtr *this)

{
  I3DManager *this_00;
  I3DStreamingManager *this_01;
  
  if (*(int *)(this + 4) != 0) {
    if (*this == (I3DAssetPtr)0x0) {
      this_01 = (I3DStreamingManager *)I3DStreamingManager::getInstance();
      I3DStreamingManager::cancelI3DLoadTask(this_01,*(uint *)(this + 4),true);
    }
    else {
                    /* try { // try from 008fcc44 to 008fcc67 has its CatchHandler @ 008fcc9c */
      this_00 = (I3DManager *)I3DManager::getInstance();
      I3DManager::releaseSharedI3D(this_00,*(uint *)(this + 4),false);
    }
  }
  *this = (I3DAssetPtr)0x0;
  *(undefined4 *)(this + 4) = 0;
  if (*(long **)(this + 8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 8) + 8))();
  }
  *(undefined8 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  return;
}


