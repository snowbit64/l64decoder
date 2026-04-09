// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addCollisionObject
// Entry Point: 00bb2ed0
// Size: 264 bytes
// Signature: undefined __cdecl addCollisionObject(btCollisionObject * param_1, short param_2, short param_3)


/* Bt2World::addCollisionObject(btCollisionObject*, short, short) */

void Bt2World::addCollisionObject(btCollisionObject *param_1,short param_2,short param_3)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  long lVar5;
  
  uVar3 = (ulong)(ushort)param_2;
  if ((uVar3 != 0) && (*(int *)(uVar3 + 0x100) == 4)) {
    uVar4 = *(uint *)(param_1 + 0x1ec);
    if (uVar4 == *(uint *)(param_1 + 0x1f0)) {
      uVar1 = uVar4 << 1;
      if (uVar4 == 0) {
        uVar1 = 1;
      }
      if ((int)uVar4 < (int)uVar1) {
        if (uVar1 == 0) {
          lVar2 = 0;
        }
        else {
          lVar2 = btAlignedAllocInternal
                            (-(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3,0x10);
          uVar4 = *(uint *)(param_1 + 0x1ec);
        }
        if (0 < (int)uVar4) {
          lVar5 = 0;
          do {
            *(undefined8 *)(lVar2 + lVar5) = *(undefined8 *)(*(long *)(param_1 + 0x1f8) + lVar5);
            lVar5 = lVar5 + 8;
          } while ((ulong)uVar4 * 8 - lVar5 != 0);
        }
        if ((*(void **)(param_1 + 0x1f8) != (void *)0x0) &&
           (param_1[0x200] != (btCollisionObject)0x0)) {
          btAlignedFreeInternal(*(void **)(param_1 + 0x1f8));
          uVar4 = *(uint *)(param_1 + 0x1ec);
        }
        *(long *)(param_1 + 0x1f8) = lVar2;
        *(uint *)(param_1 + 0x1f0) = uVar1;
        param_1[0x200] = (btCollisionObject)0x1;
      }
    }
    *(ulong *)(*(long *)(param_1 + 0x1f8) + (long)(int)uVar4 * 8) = uVar3;
    *(uint *)(param_1 + 0x1ec) = uVar4 + 1;
  }
  btDiscreteDynamicsWorld::addCollisionObject(param_1,param_2,param_3);
  return;
}


