// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: removeSoftBody
// Entry Point: 00bb2cb4
// Size: 96 bytes
// Signature: undefined __thiscall removeSoftBody(Bt2World * this, btSoftBody * param_1)


/* Bt2World::removeSoftBody(btSoftBody*) */

void __thiscall Bt2World::removeSoftBody(Bt2World *this,btSoftBody *param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  uVar1 = *(uint *)(this + 0x20c);
  if (0 < (int)uVar1) {
    uVar3 = 0;
    lVar2 = *(long *)(this + 0x218);
    do {
      if (*(btSoftBody **)(lVar2 + uVar3 * 8) == param_1) {
        if ((int)uVar3 < (int)uVar1) {
          uVar1 = uVar1 - 1;
          uVar4 = -(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3;
          uVar5 = *(undefined8 *)(lVar2 + uVar3 * 8);
          *(uint *)(this + 0x20c) = uVar1;
          *(undefined8 *)(lVar2 + uVar3 * 8) = *(undefined8 *)(lVar2 + uVar4);
          *(undefined8 *)(*(long *)(this + 0x218) + uVar4) = uVar5;
          btCollisionWorld::removeCollisionObject
                    ((btCollisionWorld *)this,(btCollisionObject *)param_1);
          return;
        }
        break;
      }
      uVar3 = uVar3 + 1;
    } while (uVar1 != uVar3);
  }
  btCollisionWorld::removeCollisionObject((btCollisionWorld *)this,(btCollisionObject *)param_1);
  return;
}


