// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~btConvexPolyhedron
// Entry Point: 00f6845c
// Size: 64 bytes
// Signature: undefined __thiscall ~btConvexPolyhedron(btConvexPolyhedron * this)


/* btConvexPolyhedron::~btConvexPolyhedron() */

void __thiscall btConvexPolyhedron::~btConvexPolyhedron(btConvexPolyhedron *this)

{
  ~btConvexPolyhedron(this);
  gNumAlignedFree = gNumAlignedFree + 1;
                    /* WARNING: Could not recover jumptable at 0x00f68498. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_FUN_01048e40)(this);
  return;
}


