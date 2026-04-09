// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~GranularSynthesisRuntimeSettings
// Entry Point: 008a3d30
// Size: 80 bytes
// Signature: undefined __thiscall ~GranularSynthesisRuntimeSettings(GranularSynthesisRuntimeSettings * this)


/* GranularSynthesisRuntimeSettings::~GranularSynthesisRuntimeSettings() */

void __thiscall
GranularSynthesisRuntimeSettings::~GranularSynthesisRuntimeSettings
          (GranularSynthesisRuntimeSettings *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(this + 0x30);
  *(undefined ***)this = &PTR__GranularSynthesisRuntimeSettings_00fdd4a8;
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x38) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x18);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x20) = pvVar1;
    operator_delete(pvVar1);
  }
  operator_delete(this);
  return;
}


