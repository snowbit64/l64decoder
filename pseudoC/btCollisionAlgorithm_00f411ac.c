// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: btCollisionAlgorithm
// Entry Point: 00f411ac
// Size: 24 bytes
// Signature: undefined __thiscall btCollisionAlgorithm(btCollisionAlgorithm * this, btCollisionAlgorithmConstructionInfo * param_1)


/* btCollisionAlgorithm::btCollisionAlgorithm(btCollisionAlgorithmConstructionInfo const&) */

void __thiscall
btCollisionAlgorithm::btCollisionAlgorithm
          (btCollisionAlgorithm *this,btCollisionAlgorithmConstructionInfo *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)param_1;
  *(undefined ***)this = &PTR__btCollisionAlgorithm_01018d80;
  *(undefined8 *)(this + 8) = uVar1;
  return;
}


