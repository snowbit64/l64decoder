// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~btQuantizedBvh
// Entry Point: 00f59b28
// Size: 64 bytes
// Signature: undefined __thiscall ~btQuantizedBvh(btQuantizedBvh * this)


/* btQuantizedBvh::~btQuantizedBvh() */

void __thiscall btQuantizedBvh::~btQuantizedBvh(btQuantizedBvh *this)

{
  ~btQuantizedBvh(this);
  gNumAlignedFree = gNumAlignedFree + 1;
                    /* WARNING: Could not recover jumptable at 0x00f59b64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_FUN_01048e40)(this);
  return;
}


