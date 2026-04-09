// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: removeAction
// Entry Point: 00f33844
// Size: 96 bytes
// Signature: undefined __thiscall removeAction(btDiscreteDynamicsWorld * this, btActionInterface * param_1)


/* btDiscreteDynamicsWorld::removeAction(btActionInterface*) */

void __thiscall
btDiscreteDynamicsWorld::removeAction(btDiscreteDynamicsWorld *this,btActionInterface *param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar1 = *(uint *)(this + 0x184);
  if (0 < (int)uVar1) {
    uVar3 = 0;
    lVar2 = *(long *)(this + 400);
    do {
      if (*(btActionInterface **)(lVar2 + uVar3 * 8) == param_1) {
        if ((int)uVar1 <= (int)uVar3) {
          return;
        }
        lVar4 = (ulong)(uVar1 - 1) * 8;
        uVar5 = *(undefined8 *)(lVar2 + uVar3 * 8);
        *(uint *)(this + 0x184) = uVar1 - 1;
        *(undefined8 *)(lVar2 + uVar3 * 8) = *(undefined8 *)(lVar2 + lVar4);
        *(undefined8 *)(*(long *)(this + 400) + lVar4) = uVar5;
        return;
      }
      uVar3 = uVar3 + 1;
    } while (uVar1 != uVar3);
  }
  return;
}


