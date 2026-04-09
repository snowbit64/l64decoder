// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~StaticSoundRuntimeSettings
// Entry Point: 008afd2c
// Size: 84 bytes
// Signature: undefined __thiscall ~StaticSoundRuntimeSettings(StaticSoundRuntimeSettings * this)


/* StaticSoundRuntimeSettings::~StaticSoundRuntimeSettings() */

void __thiscall
StaticSoundRuntimeSettings::~StaticSoundRuntimeSettings(StaticSoundRuntimeSettings *this)

{
  if (*(void **)(this + 0x18) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x18));
  }
  *(undefined8 *)(this + 0x18) = 0;
  if (*(void **)(this + 0x20) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x20));
  }
  *(undefined8 *)(this + 0x20) = 0;
  if (((byte)*this & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(this + 0x10));
  return;
}


