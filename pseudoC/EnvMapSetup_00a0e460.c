// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~EnvMapSetup
// Entry Point: 00a0e460
// Size: 124 bytes
// Signature: undefined __thiscall ~EnvMapSetup(EnvMapSetup * this)


/* EnvMapBlender::EnvMapSetup::~EnvMapSetup() */

void __thiscall EnvMapBlender::EnvMapSetup::~EnvMapSetup(EnvMapSetup *this)

{
  EnvMapSetup EVar1;
  
  if (((byte)this[0x48] & 1) == 0) {
    EVar1 = this[0x30];
  }
  else {
    operator_delete(*(void **)(this + 0x58));
    EVar1 = this[0x30];
  }
  if (((byte)EVar1 & 1) == 0) {
    EVar1 = this[0x18];
  }
  else {
    operator_delete(*(void **)(this + 0x40));
    EVar1 = this[0x18];
  }
  if (((byte)EVar1 & 1) == 0) {
    EVar1 = *this;
  }
  else {
    operator_delete(*(void **)(this + 0x28));
    EVar1 = *this;
  }
  if (((byte)EVar1 & 1) != 0) {
    operator_delete(*(void **)(this + 0x10));
    return;
  }
  return;
}


