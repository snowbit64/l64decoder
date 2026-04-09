// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~GpuProfilerManager
// Entry Point: 00afe434
// Size: 172 bytes
// Signature: undefined __thiscall ~GpuProfilerManager(GpuProfilerManager * this)


/* GpuProfilerManager::~GpuProfilerManager() */

void __thiscall GpuProfilerManager::~GpuProfilerManager(GpuProfilerManager *this)

{
  void *pvVar1;
  long lVar2;
  
  pvVar1 = *(void **)(this + 0x1398);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x13a0) = pvVar1;
    operator_delete(pvVar1);
  }
  if (((byte)this[0x1378] & 1) != 0) {
    operator_delete(*(void **)(this + 5000));
  }
  if (((byte)this[0x1360] & 1) != 0) {
    operator_delete(*(void **)(this + 0x1370));
  }
  lVar2 = 0x12c0;
  do {
    pvVar1 = *(void **)(this + lVar2 + -0x28);
    if (pvVar1 != (void *)0x0) {
      *(void **)(this + lVar2 + -0x20) = pvVar1;
      operator_delete(pvVar1);
    }
    pvVar1 = *(void **)(this + lVar2 + -0x40);
    if (pvVar1 != (void *)0x0) {
      *(void **)(this + lVar2 + -0x38) = pvVar1;
      operator_delete(pvVar1);
    }
    pvVar1 = *(void **)(this + lVar2 + -0x58);
    if (pvVar1 != (void *)0x0) {
      *(void **)(this + lVar2 + -0x50) = pvVar1;
      operator_delete(pvVar1);
    }
    lVar2 = lVar2 + -0x78;
  } while (lVar2 != 0);
  return;
}


