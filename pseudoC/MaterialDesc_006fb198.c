// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~MaterialDesc
// Entry Point: 006fb198
// Size: 4 bytes
// Signature: undefined __thiscall ~MaterialDesc(MaterialDesc * this)


/* MaterialDesc::~MaterialDesc() */

void __thiscall MaterialDesc::~MaterialDesc(MaterialDesc *this)

{
  operator_delete(this);
  return;
}


