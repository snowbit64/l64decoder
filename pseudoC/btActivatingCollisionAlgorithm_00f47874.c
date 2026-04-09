// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: btActivatingCollisionAlgorithm
// Entry Point: 00f47874
// Size: 24 bytes
// Signature: undefined __thiscall btActivatingCollisionAlgorithm(btActivatingCollisionAlgorithm * this, btCollisionAlgorithmConstructionInfo * param_1)


/* btActivatingCollisionAlgorithm::btActivatingCollisionAlgorithm(btCollisionAlgorithmConstructionInfo
   const&) */

void __thiscall
btActivatingCollisionAlgorithm::btActivatingCollisionAlgorithm
          (btActivatingCollisionAlgorithm *this,btCollisionAlgorithmConstructionInfo *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)param_1;
  *(undefined ***)this = &PTR__btActivatingCollisionAlgorithm_01019268;
  *(undefined8 *)(this + 8) = uVar1;
  return;
}


