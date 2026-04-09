// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: removeConstraintRef
// Entry Point: 00f4103c
// Size: 368 bytes
// Signature: undefined __thiscall removeConstraintRef(btRigidBody * this, btTypedConstraint * param_1)


/* btRigidBody::removeConstraintRef(btTypedConstraint*) */

void __thiscall btRigidBody::removeConstraintRef(btRigidBody *this,btTypedConstraint *param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar1 = *(uint *)(this + 0x234);
  if (0 < (int)uVar1) {
    uVar3 = 0;
    lVar2 = *(long *)(this + 0x240);
    do {
      if (*(btTypedConstraint **)(lVar2 + uVar3 * 8) == param_1) {
        if ((int)uVar1 <= (int)uVar3) {
          return;
        }
        uVar3 = 0;
        goto LAB_00f41078;
      }
      uVar3 = uVar3 + 1;
    } while (uVar1 != uVar3);
  }
  return;
  while (uVar3 = uVar3 + 1, uVar1 != uVar3) {
LAB_00f41078:
    if (*(btTypedConstraint **)(lVar2 + uVar3 * 8) == param_1) {
      if ((int)uVar3 < (int)uVar1) {
        lVar4 = (ulong)(uVar1 - 1) * 8;
        uVar5 = *(undefined8 *)(lVar2 + uVar3 * 8);
        *(uint *)(this + 0x234) = uVar1 - 1;
        *(undefined8 *)(lVar2 + uVar3 * 8) = *(undefined8 *)(lVar2 + lVar4);
        *(undefined8 *)(*(long *)(this + 0x240) + lVar4) = uVar5;
      }
      break;
    }
  }
  lVar2 = *(long *)(param_1 + 0x30);
  if (*(btRigidBody **)(param_1 + 0x28) == this) {
    uVar1 = *(uint *)(this + 300);
    if (0 < (int)uVar1) {
      uVar3 = 0;
      lVar4 = *(long *)(this + 0x138);
      do {
        if (*(long *)(lVar4 + uVar3 * 8) == lVar2) {
          if ((int)uVar3 < (int)uVar1) {
            uVar1 = uVar1 - 1;
            uVar5 = *(undefined8 *)(lVar4 + uVar3 * 8);
            *(uint *)(this + 300) = uVar1;
            *(undefined8 *)(lVar4 + uVar3 * 8) = *(undefined8 *)(lVar4 + (ulong)uVar1 * 8);
            *(undefined8 *)(*(long *)(this + 0x138) + (ulong)uVar1 * 8) = uVar5;
          }
          break;
        }
        uVar3 = uVar3 + 1;
      } while (uVar1 != uVar3);
    }
    *(uint *)(this + 0x120) = (uint)(0 < (int)uVar1);
    return;
  }
  uVar1 = *(uint *)(lVar2 + 300);
  if (0 < (int)uVar1) {
    uVar3 = 0;
    lVar4 = *(long *)(lVar2 + 0x138);
    do {
      if (*(btRigidBody **)(lVar4 + uVar3 * 8) == *(btRigidBody **)(param_1 + 0x28)) {
        if ((int)uVar3 < (int)uVar1) {
          uVar1 = uVar1 - 1;
          uVar5 = *(undefined8 *)(lVar4 + uVar3 * 8);
          *(uint *)(lVar2 + 300) = uVar1;
          *(undefined8 *)(lVar4 + uVar3 * 8) = *(undefined8 *)(lVar4 + (ulong)uVar1 * 8);
          *(undefined8 *)(*(long *)(lVar2 + 0x138) + (ulong)uVar1 * 8) = uVar5;
        }
        break;
      }
      uVar3 = uVar3 + 1;
    } while (uVar1 != uVar3);
  }
  *(uint *)(lVar2 + 0x120) = (uint)(0 < (int)uVar1);
  return;
}


