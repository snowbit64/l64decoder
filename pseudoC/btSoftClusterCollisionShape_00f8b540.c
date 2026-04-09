// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~btSoftClusterCollisionShape
// Entry Point: 00f8b540
// Size: 32 bytes
// Signature: undefined __thiscall ~btSoftClusterCollisionShape(btSoftClusterCollisionShape * this)


/* btSoftClusterCollisionShape::~btSoftClusterCollisionShape() */

void __thiscall
btSoftClusterCollisionShape::~btSoftClusterCollisionShape(btSoftClusterCollisionShape *this)

{
  gNumAlignedFree = gNumAlignedFree + 1;
                    /* WARNING: Could not recover jumptable at 0x00f8b55c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_FUN_01048e40)();
  return;
}


