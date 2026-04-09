// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: removeConstraint
// Entry Point: 00f336a8
// Size: 140 bytes
// Signature: undefined __thiscall removeConstraint(btDiscreteDynamicsWorld * this, btTypedConstraint * param_1)


/* btDiscreteDynamicsWorld::removeConstraint(btTypedConstraint*) */

void __thiscall
btDiscreteDynamicsWorld::removeConstraint(btDiscreteDynamicsWorld *this,btTypedConstraint *param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar1 = *(uint *)(this + 0x124);
  if (0 < (int)uVar1) {
    uVar3 = 0;
    lVar2 = *(long *)(this + 0x130);
    do {
      if (*(btTypedConstraint **)(lVar2 + uVar3 * 8) == param_1) {
        if ((int)uVar3 < (int)uVar1) {
          lVar4 = (ulong)(uVar1 - 1) * 8;
          uVar5 = *(undefined8 *)(lVar2 + uVar3 * 8);
          *(uint *)(this + 0x124) = uVar1 - 1;
          *(undefined8 *)(lVar2 + uVar3 * 8) = *(undefined8 *)(lVar2 + lVar4);
          *(undefined8 *)(*(long *)(this + 0x130) + lVar4) = uVar5;
        }
        break;
      }
      uVar3 = uVar3 + 1;
    } while (uVar1 != uVar3);
  }
  btRigidBody::removeConstraintRef(*(btRigidBody **)(param_1 + 0x28),param_1);
  btRigidBody::removeConstraintRef(*(btRigidBody **)(param_1 + 0x30),param_1);
  return;
}


