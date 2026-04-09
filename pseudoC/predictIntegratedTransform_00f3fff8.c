// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: predictIntegratedTransform
// Entry Point: 00f3fff8
// Size: 24 bytes
// Signature: undefined __thiscall predictIntegratedTransform(btRigidBody * this, float param_1, btTransform * param_2)


/* btRigidBody::predictIntegratedTransform(float, btTransform&) */

void __thiscall
btRigidBody::predictIntegratedTransform(btRigidBody *this,float param_1,btTransform *param_2)

{
  btTransformUtil::integrateTransform
            ((btTransform *)(this + 8),(btVector3 *)(this + 0x17c),(btVector3 *)(this + 0x18c),
             param_1,param_2);
  return;
}


