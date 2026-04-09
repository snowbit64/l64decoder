// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~Stats
// Entry Point: 00964288
// Size: 128 bytes
// Signature: undefined __thiscall ~Stats(Stats * this)


/* TextureStreamingManager::Stats::~Stats() */

void __thiscall TextureStreamingManager::Stats::~Stats(Stats *this)

{
  void *pvVar1;
  long lVar2;
  
  pvVar1 = *(void **)(this + 0x12b0);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x12b8) = pvVar1;
    operator_delete(pvVar1);
  }
  Mutex::~Mutex((Mutex *)(this + 0x1288));
  pvVar1 = *(void **)(this + 0x1270);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x1278) = pvVar1;
    operator_delete(pvVar1);
  }
  Mutex::~Mutex((Mutex *)(this + 0x1248));
  lVar2 = 0x960;
  do {
    if (((byte)this[lVar2 + 0x8c0] & 1) != 0) {
      operator_delete(*(void **)(this + lVar2 + 0x8d0));
    }
    lVar2 = lVar2 + -0x18;
  } while (lVar2 != 0);
  Mutex::~Mutex((Mutex *)(this + 0x8b0));
  return;
}


