// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setSettings
// Entry Point: 008b9b64
// Size: 92 bytes
// Signature: undefined __thiscall setSettings(GranularSynthesisSoundGenerator * this, GranularSynthesisRuntimeSettings * param_1)


/* GranularSynthesisSoundGenerator::setSettings(GranularSynthesisRuntimeSettings const*) */

undefined8 __thiscall
GranularSynthesisSoundGenerator::setSettings
          (GranularSynthesisSoundGenerator *this,GranularSynthesisRuntimeSettings *param_1)

{
  void *pvVar1;
  ulong uVar2;
  
  *(GranularSynthesisRuntimeSettings **)(this + 0x20) = param_1;
  if (*(void **)(this + 0x28) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x28));
  }
  uVar2 = (long)*(int *)(param_1 + 0x54) << 2;
  if ((ulong)(long)*(int *)(param_1 + 0x54) >> 0x3e != 0) {
    uVar2 = 0xffffffffffffffff;
  }
  pvVar1 = operator_new__(uVar2);
  *(void **)(this + 0x28) = pvVar1;
  (**(code **)(*(long *)this + 0x48))(this);
  return 1;
}


