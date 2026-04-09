// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: operator++
// Entry Point: 00c5f240
// Size: 16 bytes
// Signature: undefined __thiscall operator++(FileIterator * this)


/* NativeFileUtil::FileIterator::TEMPNAMEPLACEHOLDERVALUE() */

void __thiscall NativeFileUtil::FileIterator::operator++(FileIterator *this)

{
  *(long *)(this + 0x30) = *(long *)(this + 0x30) + 0x30;
  return;
}


