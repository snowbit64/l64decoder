// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: synchronizeSingleMotionState
// Entry Point: 00f379d0
// Size: 176 bytes
// Signature: undefined __thiscall synchronizeSingleMotionState(btDiscreteDynamicsWorld * this, btRigidBody * param_1)


/* btDiscreteDynamicsWorld::synchronizeSingleMotionState(btRigidBody*) */

void __thiscall
btDiscreteDynamicsWorld::synchronizeSingleMotionState
          (btDiscreteDynamicsWorld *this,btRigidBody *param_1)

{
  long lVar1;
  float fVar2;
  btTransform abStack_68 [64];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if ((*(long *)(param_1 + 0x228) != 0) && (((byte)param_1[0xe0] & 3) == 0)) {
    if ((this[0x1a4] == (btDiscreteDynamicsWorld)0x0) || (*(float *)(this + 0x174) == 0.0)) {
      fVar2 = *(float *)(param_1 + 0x114) * *(float *)(this + 0x170);
    }
    else {
      fVar2 = *(float *)(this + 0x170) - *(float *)(this + 0x174);
    }
    btTransformUtil::integrateTransform
              ((btTransform *)(param_1 + 0x48),(btVector3 *)(param_1 + 0x88),
               (btVector3 *)(param_1 + 0x98),fVar2,abStack_68);
    (**(code **)(**(long **)(param_1 + 0x228) + 0x18))(*(long **)(param_1 + 0x228),abStack_68);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


