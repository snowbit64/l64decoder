// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: seek
// Entry Point: 00b34248
// Size: 28 bytes
// Signature: undefined __thiscall seek(MemoryBufferedFile * this, ulonglong param_1)


/* MemoryBufferedFile::seek(unsigned long long) */

undefined8 __thiscall MemoryBufferedFile::seek(MemoryBufferedFile *this,ulonglong param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(this + 0x14);
  if (param_1 <= *(uint *)(this + 0x14)) {
    uVar1 = (uint)param_1;
  }
  *(uint *)(this + 0x18) = uVar1;
  return 1;
}


