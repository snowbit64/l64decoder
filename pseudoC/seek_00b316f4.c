// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: seek
// Entry Point: 00b316f4
// Size: 28 bytes
// Signature: undefined __thiscall seek(CompressedFile * this, ulonglong param_1)


/* CompressedFile::seek(unsigned long long) */

undefined8 __thiscall CompressedFile::seek(CompressedFile *this,ulonglong param_1)

{
  ulonglong uVar1;
  
  uVar1 = (ulong)*(uint *)(this + 0x220);
  if (param_1 <= *(uint *)(this + 0x220)) {
    uVar1 = param_1;
  }
  *(int *)(this + 0x224) = (int)uVar1;
  return 1;
}


