// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: saveKinematicState
// Entry Point: 00f40010
// Size: 284 bytes
// Signature: undefined __thiscall saveKinematicState(btRigidBody * this, float param_1)


/* btRigidBody::saveKinematicState(float) */

void __thiscall btRigidBody::saveKinematicState(btRigidBody *this,float param_1)

{
  long lVar1;
  long *plVar2;
  float fVar3;
  float local_4c;
  undefined8 local_48;
  float local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_1 != 0.0) {
    plVar2 = *(long **)(this + 0x228);
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2,this + 8);
    }
    fVar3 = 1.0 / param_1;
    *(undefined4 *)(this + 0x188) = 0;
    *(ulong *)(this + 0x17c) =
         CONCAT44(((float)((ulong)*(undefined8 *)(this + 0x38) >> 0x20) -
                  (float)((ulong)*(undefined8 *)(this + 0x78) >> 0x20)) * fVar3,
                  ((float)*(undefined8 *)(this + 0x38) - (float)*(undefined8 *)(this + 0x78)) *
                  fVar3);
    *(float *)(this + 0x184) = (*(float *)(this + 0x40) - *(float *)(this + 0x80)) * fVar3;
    btTransformUtil::calculateDiffAxisAngle
              ((btTransform *)(this + 0x48),(btTransform *)(this + 8),(btVector3 *)&local_48,
               &local_4c);
    *(undefined4 *)(this + 0x198) = 0;
    local_4c = local_4c * fVar3;
    *(undefined8 *)(this + 0x50) = *(undefined8 *)(this + 0x10);
    *(undefined8 *)(this + 0x48) = *(undefined8 *)(this + 8);
    *(undefined8 *)(this + 0x70) = *(undefined8 *)(this + 0x30);
    *(undefined8 *)(this + 0x68) = *(undefined8 *)(this + 0x28);
    *(ulong *)(this + 0x18c) =
         CONCAT44((float)((ulong)local_48 >> 0x20) * local_4c,(float)local_48 * local_4c);
    *(float *)(this + 0x194) = local_40 * local_4c;
    *(undefined8 *)(this + 0x60) = *(undefined8 *)(this + 0x20);
    *(undefined8 *)(this + 0x58) = *(undefined8 *)(this + 0x18);
    *(undefined8 *)(this + 0x90) = *(undefined8 *)(this + 0x184);
    *(undefined8 *)(this + 0x88) = *(undefined8 *)(this + 0x17c);
    *(undefined8 *)(this + 0xa0) = *(undefined8 *)(this + 0x194);
    *(undefined8 *)(this + 0x98) = *(undefined8 *)(this + 0x18c);
    *(undefined8 *)(this + 0x80) = *(undefined8 *)(this + 0x40);
    *(undefined8 *)(this + 0x78) = *(undefined8 *)(this + 0x38);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


