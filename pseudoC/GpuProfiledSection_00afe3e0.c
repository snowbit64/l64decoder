// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~GpuProfiledSection
// Entry Point: 00afe3e0
// Size: 84 bytes
// Signature: undefined __thiscall ~GpuProfiledSection(GpuProfiledSection * this)


/* GpuProfilerManager::GpuProfiledSection::~GpuProfiledSection() */

void __thiscall
GpuProfilerManager::GpuProfiledSection::~GpuProfiledSection(GpuProfiledSection *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(this + 0x50);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x58) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x38);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x40) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x20);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x28) = pvVar1;
    operator_delete(pvVar1);
    return;
  }
  return;
}


