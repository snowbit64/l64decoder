// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~btOptimizedBvh
// Entry Point: 00f639bc
// Size: 64 bytes
// Signature: undefined __thiscall ~btOptimizedBvh(btOptimizedBvh * this)


/* btOptimizedBvh::~btOptimizedBvh() */

void __thiscall btOptimizedBvh::~btOptimizedBvh(btOptimizedBvh *this)

{
  btQuantizedBvh::~btQuantizedBvh((btQuantizedBvh *)this);
  gNumAlignedFree = gNumAlignedFree + 1;
                    /* WARNING: Could not recover jumptable at 0x00f639f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_FUN_01048e40)(this);
  return;
}


