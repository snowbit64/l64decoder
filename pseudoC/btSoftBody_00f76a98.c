// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~btSoftBody
// Entry Point: 00f76a98
// Size: 64 bytes
// Signature: undefined __thiscall ~btSoftBody(btSoftBody * this)


/* btSoftBody::~btSoftBody() */

void __thiscall btSoftBody::~btSoftBody(btSoftBody *this)

{
  ~btSoftBody(this);
  gNumAlignedFree = gNumAlignedFree + 1;
                    /* WARNING: Could not recover jumptable at 0x00f76ad4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_FUN_01048e40)(this);
  return;
}


