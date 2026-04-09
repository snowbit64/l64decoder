// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: rayTest
// Entry Point: 00f86240
// Size: 132 bytes
// Signature: undefined __thiscall rayTest(btSoftBody * this, btVector3 * param_1, btVector3 * param_2, sRayCast * param_3)


/* btSoftBody::rayTest(btVector3 const&, btVector3 const&, btSoftBody::sRayCast&) */

bool __thiscall
btSoftBody::rayTest(btSoftBody *this,btVector3 *param_1,btVector3 *param_2,sRayCast *param_3)

{
  int iVar1;
  
  if ((*(int *)(this + 0x3b4) != 0) && (*(long *)(this + 0x518) == 0)) {
    initializeFaceTree();
  }
  *(undefined8 *)(param_3 + 8) = 0xffffffff00000000;
  *(btSoftBody **)param_3 = this;
  *(float *)(param_3 + 0x10) = 1.0;
  iVar1 = rayTest(this,param_1,param_2,(float *)(param_3 + 0x10),(_ *)(param_3 + 8),
                  (int *)(param_3 + 0xc),false);
  return iVar1 != 0;
}


