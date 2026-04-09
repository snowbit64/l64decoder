// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getElementIsStereoAt
// Entry Point: 00a4d4f4
// Size: 116 bytes
// Signature: undefined __thiscall getElementIsStereoAt(AudioSourceSample * this, uint param_1)


/* AudioSourceSample::getElementIsStereoAt(unsigned int) const */

bool __thiscall AudioSourceSample::getElementIsStereoAt(AudioSourceSample *this,uint param_1)

{
  uint *puVar1;
  int iVar2;
  
  puVar1 = (uint *)((long)(this + 0xb0) + ((ulong)param_1 * 0xe + 1) * 4);
  if (1 < *(uint *)(this + 0xb0)) {
    puVar1 = (uint *)(*(long *)(this + 0xf0) + (ulong)param_1 * 0x38);
  }
  if ((*(long *)(puVar1 + 10) == 0) && (*(long *)(puVar1 + 8) != 0)) {
    iVar2 = (**(code **)(**(long **)(*(long *)(puVar1 + 8) + 0x48) + 0x10))();
    if (iVar2 - 1U < 5) {
      return (iVar2 - 1U & 1) == 0;
    }
  }
  return false;
}


