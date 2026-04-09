// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~FileReader
// Entry Point: 00b3263c
// Size: 24 bytes
// Signature: undefined __thiscall ~FileReader(FileReader * this)


/* FileReader::~FileReader() */

void __thiscall FileReader::~FileReader(FileReader *this)

{
  if (*(long **)this != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00b3264c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)this + 8))();
    return;
  }
  return;
}


