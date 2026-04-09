// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: appendAnchor
// Entry Point: 009bb6b4
// Size: 12 bytes
// Signature: undefined __thiscall appendAnchor(Bt2Rope * this, uint param_1, btRigidBody * param_2, btVector3 * param_3, bool param_4)


/* Bt2Rope::appendAnchor(unsigned int, btRigidBody*, btVector3 const&, bool) */

void __thiscall
Bt2Rope::appendAnchor
          (Bt2Rope *this,uint param_1,btRigidBody *param_2,btVector3 *param_3,bool param_4)

{
  btSoftBody::appendAnchor(*(btSoftBody **)this,param_1,param_2,param_3,param_4,1.0);
  return;
}


