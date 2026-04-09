// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: removeRigidBody
// Entry Point: 00f33f0c
// Size: 296 bytes
// Signature: undefined __thiscall removeRigidBody(btDiscreteDynamicsWorld * this, btRigidBody * param_1)


/* btDiscreteDynamicsWorld::removeRigidBody(btRigidBody*) */

void __thiscall
btDiscreteDynamicsWorld::removeRigidBody(btDiscreteDynamicsWorld *this,btRigidBody *param_1)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  
  uVar1 = *(uint *)(this + 0x144);
  if (0 < (int)uVar1) {
    uVar4 = 0;
    lVar3 = *(long *)(this + 0x150);
    do {
      if (*(btRigidBody **)(lVar3 + uVar4 * 8) == param_1) {
        if ((int)uVar4 < (int)uVar1) {
          lVar5 = (ulong)(uVar1 - 1) * 8;
          uVar6 = *(undefined8 *)(lVar3 + uVar4 * 8);
          *(uint *)(this + 0x144) = uVar1 - 1;
          *(undefined8 *)(lVar3 + uVar4 * 8) = *(undefined8 *)(lVar3 + lVar5);
          *(undefined8 *)(*(long *)(this + 0x150) + lVar5) = uVar6;
        }
        break;
      }
      uVar4 = uVar4 + 1;
    } while (uVar1 != uVar4);
  }
  lVar3 = *(long *)(param_1 + 0xc0);
  if (lVar3 != 0) {
    plVar2 = (long *)(**(code **)(**(long **)(this + 0x60) + 0x48))();
    (**(code **)(*plVar2 + 0x50))(plVar2,lVar3,*(undefined8 *)(this + 0x28));
    (**(code **)(**(long **)(this + 0x60) + 0x18))
              (*(long **)(this + 0x60),lVar3,*(undefined8 *)(this + 0x28));
    *(undefined8 *)(param_1 + 0xc0) = 0;
  }
  uVar1 = *(uint *)(this + 0xc);
  if (0 < (int)uVar1) {
    uVar4 = 0;
    lVar3 = *(long *)(this + 0x18);
    do {
      if (*(btRigidBody **)(lVar3 + uVar4 * 8) == param_1) {
        if ((int)uVar1 <= (int)uVar4) {
          return;
        }
        lVar5 = (ulong)(uVar1 - 1) * 8;
        uVar6 = *(undefined8 *)(lVar3 + uVar4 * 8);
        *(uint *)(this + 0xc) = uVar1 - 1;
        *(undefined8 *)(lVar3 + uVar4 * 8) = *(undefined8 *)(lVar3 + lVar5);
        *(undefined8 *)(*(long *)(this + 0x18) + lVar5) = uVar6;
        return;
      }
      uVar4 = uVar4 + 1;
    } while (uVar1 != uVar4);
  }
  return;
}


