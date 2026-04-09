// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~AliveTextures
// Entry Point: 00964d6c
// Size: 84 bytes
// Signature: undefined __thiscall ~AliveTextures(AliveTextures * this)


/* TextureStreamingManager::AliveTextures::~AliveTextures() */

void __thiscall TextureStreamingManager::AliveTextures::~AliveTextures(AliveTextures *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(this + 0x30);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x38) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x18);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x20) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)this;
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 8) = pvVar1;
    operator_delete(pvVar1);
    return;
  }
  return;
}


