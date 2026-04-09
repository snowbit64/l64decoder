// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getElementFilenameAt
// Entry Point: 00a4cfd0
// Size: 60 bytes
// Signature: undefined __thiscall getElementFilenameAt(AudioSourceSample * this, uint param_1)


/* AudioSourceSample::getElementFilenameAt(unsigned int) const */

long __thiscall AudioSourceSample::getElementFilenameAt(AudioSourceSample *this,uint param_1)

{
  uint *puVar1;
  long lVar2;
  
  puVar1 = (uint *)((long)(this + 0xb0) + ((ulong)param_1 * 0xe + 1) * 4);
  if (1 < *(uint *)(this + 0xb0)) {
    puVar1 = (uint *)(*(long *)(this + 0xf0) + (ulong)param_1 * 0x38);
  }
  lVar2 = (long)puVar1 + 9;
  if ((*(byte *)(puVar1 + 2) & 1) != 0) {
    lVar2 = *(long *)(puVar1 + 6);
  }
  return lVar2;
}


