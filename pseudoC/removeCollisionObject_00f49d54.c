// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: removeCollisionObject
// Entry Point: 00f49d54
// Size: 204 bytes
// Signature: undefined __thiscall removeCollisionObject(btCollisionWorld * this, btCollisionObject * param_1)


/* btCollisionWorld::removeCollisionObject(btCollisionObject*) */

void __thiscall
btCollisionWorld::removeCollisionObject(btCollisionWorld *this,btCollisionObject *param_1)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar6 = *(long *)(param_1 + 0xc0);
  if (lVar6 != 0) {
    plVar2 = (long *)(**(code **)(**(long **)(this + 0x60) + 0x48))();
    (**(code **)(*plVar2 + 0x50))(plVar2,lVar6,*(undefined8 *)(this + 0x28));
    (**(code **)(**(long **)(this + 0x60) + 0x18))
              (*(long **)(this + 0x60),lVar6,*(undefined8 *)(this + 0x28));
    *(undefined8 *)(param_1 + 0xc0) = 0;
  }
  uVar1 = *(uint *)(this + 0xc);
  if (0 < (int)uVar1) {
    uVar3 = 0;
    lVar6 = *(long *)(this + 0x18);
    do {
      if (*(btCollisionObject **)(lVar6 + uVar3 * 8) == param_1) {
        if ((int)uVar1 <= (int)uVar3) {
          return;
        }
        lVar4 = (ulong)(uVar1 - 1) * 8;
        uVar5 = *(undefined8 *)(lVar6 + uVar3 * 8);
        *(uint *)(this + 0xc) = uVar1 - 1;
        *(undefined8 *)(lVar6 + uVar3 * 8) = *(undefined8 *)(lVar6 + lVar4);
        *(undefined8 *)(*(long *)(this + 0x18) + lVar4) = uVar5;
        return;
      }
      uVar3 = uVar3 + 1;
    } while (uVar1 != uVar3);
  }
  return;
}


