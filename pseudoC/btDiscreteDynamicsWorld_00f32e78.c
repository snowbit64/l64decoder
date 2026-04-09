// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~btDiscreteDynamicsWorld
// Entry Point: 00f32e78
// Size: 64 bytes
// Signature: undefined __thiscall ~btDiscreteDynamicsWorld(btDiscreteDynamicsWorld * this)


/* btDiscreteDynamicsWorld::~btDiscreteDynamicsWorld() */

void __thiscall btDiscreteDynamicsWorld::~btDiscreteDynamicsWorld(btDiscreteDynamicsWorld *this)

{
  ~btDiscreteDynamicsWorld(this);
  gNumAlignedFree = gNumAlignedFree + 1;
                    /* WARNING: Could not recover jumptable at 0x00f32eb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_FUN_01048e40)(this);
  return;
}


