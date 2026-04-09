// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: pop
// Entry Point: 00c28484
// Size: 72 bytes
// Signature: undefined pop(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* GsTSymbolTable::pop() */

void GsTSymbolTable::pop(void)

{
  long *in_x0;
  GsTSymbolTableLevel *this;
  long lVar1;
  
  lVar1 = in_x0[1];
  this = *(GsTSymbolTableLevel **)
          (*in_x0 + ((lVar1 - *in_x0) * 0x20000000 + -0x100000000 >> 0x20) * 8);
  if (this != (GsTSymbolTableLevel *)0x0) {
    GsTSymbolTableLevel::~GsTSymbolTableLevel(this);
    lVar1 = in_x0[1];
  }
  in_x0[1] = lVar1 + -8;
  return;
}


