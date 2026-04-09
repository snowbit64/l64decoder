// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: registerKeyStorageArea
// Entry Point: 00749b4c
// Size: 8 bytes
// Signature: undefined __thiscall registerKeyStorageArea(KeyframedTransformation * this, uchar * param_1)


/* KeyframedTransformation::registerKeyStorageArea(unsigned char*) */

void __thiscall
KeyframedTransformation::registerKeyStorageArea(KeyframedTransformation *this,uchar *param_1)

{
  *(uchar **)(this + 200) = param_1;
  return;
}


