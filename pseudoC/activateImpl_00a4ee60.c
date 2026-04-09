// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: activateImpl
// Entry Point: 00a4ee60
// Size: 84 bytes
// Signature: undefined __thiscall activateImpl(AudioSourceSample * this, IAudioDevice * param_1)


/* AudioSourceSample::activateImpl(IAudioDevice&) */

void __thiscall AudioSourceSample::activateImpl(AudioSourceSample *this,IAudioDevice *param_1)

{
  uint uVar1;
  
  if (*(int *)(this + 0xb0) != 0) {
    uVar1 = 0;
    do {
      activateElementAt(this,uVar1,param_1);
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)(this + 0xb0));
  }
  return;
}


