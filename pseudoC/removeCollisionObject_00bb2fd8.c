// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: removeCollisionObject
// Entry Point: 00bb2fd8
// Size: 384 bytes
// Signature: undefined __thiscall removeCollisionObject(Bt2World * this, btCollisionObject * param_1)


/* Bt2World::removeCollisionObject(btCollisionObject*) */

void __thiscall Bt2World::removeCollisionObject(Bt2World *this,btCollisionObject *param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  uVar1 = *(uint *)(param_1 + 0x100);
  if ((param_1 == (btCollisionObject *)0x0) || (uVar1 != 8)) {
    if ((param_1 != (btCollisionObject *)0x0) && ((uVar1 >> 1 & 1) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00bb3054. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)this + 0xb8))(this,param_1);
      return;
    }
    if ((param_1 != (btCollisionObject *)0x0) && (uVar1 == 4)) {
      uVar1 = *(uint *)(this + 0x1ec);
      if (0 < (int)uVar1) {
        uVar3 = 0;
        lVar2 = *(long *)(this + 0x1f8);
        do {
          if (*(btCollisionObject **)(lVar2 + uVar3 * 8) == param_1) {
            if ((int)uVar3 < (int)uVar1) {
              uVar1 = uVar1 - 1;
              uVar4 = -(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3;
              uVar5 = *(undefined8 *)(lVar2 + uVar3 * 8);
              *(uint *)(this + 0x1ec) = uVar1;
              *(undefined8 *)(lVar2 + uVar3 * 8) = *(undefined8 *)(lVar2 + uVar4);
              *(undefined8 *)(*(long *)(this + 0x1f8) + uVar4) = uVar5;
            }
            break;
          }
          uVar3 = uVar3 + 1;
        } while (uVar1 != uVar3);
      }
    }
    uVar1 = *(uint *)(this + 0x1cc);
    if (0 < (int)uVar1) {
      lVar2 = 0;
      do {
        (**(code **)**(undefined8 **)(*(long *)(this + 0x1d8) + lVar2))
                  (*(undefined8 **)(*(long *)(this + 0x1d8) + lVar2),param_1,this);
        lVar2 = lVar2 + 8;
      } while ((ulong)uVar1 * 8 - lVar2 != 0);
    }
    btDiscreteDynamicsWorld::removeCollisionObject((btDiscreteDynamicsWorld *)this,param_1);
    return;
  }
  uVar1 = *(uint *)(this + 0x20c);
  if (0 < (int)uVar1) {
    uVar3 = 0;
    lVar2 = *(long *)(this + 0x218);
    do {
      if (*(btCollisionObject **)(lVar2 + uVar3 * 8) == param_1) {
        if ((int)uVar3 < (int)uVar1) {
          uVar1 = uVar1 - 1;
          uVar4 = -(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3;
          uVar5 = *(undefined8 *)(lVar2 + uVar3 * 8);
          *(uint *)(this + 0x20c) = uVar1;
          *(undefined8 *)(lVar2 + uVar3 * 8) = *(undefined8 *)(lVar2 + uVar4);
          *(undefined8 *)(*(long *)(this + 0x218) + uVar4) = uVar5;
        }
        break;
      }
      uVar3 = uVar3 + 1;
    } while (uVar1 != uVar3);
  }
  btCollisionWorld::removeCollisionObject((btCollisionWorld *)this,param_1);
  return;
}


