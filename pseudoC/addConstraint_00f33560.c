// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addConstraint
// Entry Point: 00f33560
// Size: 328 bytes
// Signature: undefined __thiscall addConstraint(btDiscreteDynamicsWorld * this, btTypedConstraint * param_1, bool param_2)


/* btDiscreteDynamicsWorld::addConstraint(btTypedConstraint*, bool) */

void __thiscall
btDiscreteDynamicsWorld::addConstraint
          (btDiscreteDynamicsWorld *this,btTypedConstraint *param_1,bool param_2)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  
  uVar3 = *(uint *)(this + 0x124);
  if (uVar3 == *(uint *)(this + 0x128)) {
    uVar1 = uVar3 << 1;
    if (uVar3 == 0) {
      uVar1 = 1;
    }
    if ((int)uVar3 < (int)uVar1) {
      if (uVar1 == 0) {
        lVar2 = 0;
      }
      else {
        gNumAlignedAllocs = gNumAlignedAllocs + 1;
        lVar2 = (*(code *)PTR_FUN_01048e38)
                          (-(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3,0x10);
        uVar3 = *(uint *)(this + 0x124);
      }
      if (0 < (int)uVar3) {
        lVar4 = 0;
        do {
          *(undefined8 *)(lVar2 + lVar4) = *(undefined8 *)(*(long *)(this + 0x130) + lVar4);
          lVar4 = lVar4 + 8;
        } while ((ulong)uVar3 * 8 - lVar4 != 0);
      }
      if ((*(long *)(this + 0x130) != 0) && (this[0x138] != (btDiscreteDynamicsWorld)0x0)) {
        gNumAlignedFree = gNumAlignedFree + 1;
        (*(code *)PTR_FUN_01048e40)();
        uVar3 = *(uint *)(this + 0x124);
      }
      *(long *)(this + 0x130) = lVar2;
      *(uint *)(this + 0x128) = uVar1;
      this[0x138] = (btDiscreteDynamicsWorld)0x1;
    }
  }
  *(btTypedConstraint **)(*(long *)(this + 0x130) + (long)(int)uVar3 * 8) = param_1;
  *(uint *)(this + 0x124) = uVar3 + 1;
  if (param_2) {
    btRigidBody::addConstraintRef(*(btRigidBody **)(param_1 + 0x28),param_1);
    btRigidBody::addConstraintRef(*(btRigidBody **)(param_1 + 0x30),param_1);
    return;
  }
  return;
}


