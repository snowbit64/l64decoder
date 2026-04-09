// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: btEmptyAlgorithm
// Entry Point: 00f9422c
// Size: 24 bytes
// Signature: undefined __thiscall btEmptyAlgorithm(btEmptyAlgorithm * this, btCollisionAlgorithmConstructionInfo * param_1)


/* btEmptyAlgorithm::btEmptyAlgorithm(btCollisionAlgorithmConstructionInfo const&) */

void __thiscall
btEmptyAlgorithm::btEmptyAlgorithm
          (btEmptyAlgorithm *this,btCollisionAlgorithmConstructionInfo *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)param_1;
  *(undefined ***)this = &PTR__btCollisionAlgorithm_0101c1d0;
  *(undefined8 *)(this + 8) = uVar1;
  return;
}


