// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setIgnoreCollisionCheck
// Entry Point: 009a8ef8
// Size: 328 bytes
// Signature: undefined __thiscall setIgnoreCollisionCheck(btCollisionObject * this, btCollisionObject * param_1, bool param_2)


/* btCollisionObject::setIgnoreCollisionCheck(btCollisionObject const*, bool) */

void __thiscall
btCollisionObject::setIgnoreCollisionCheck
          (btCollisionObject *this,btCollisionObject *param_1,bool param_2)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  uVar3 = *(uint *)(this + 300);
  uVar4 = (ulong)uVar3;
  if (param_2) {
    if (uVar3 == *(uint *)(this + 0x130)) {
      uVar1 = uVar3 << 1;
      if (uVar3 == 0) {
        uVar1 = 1;
      }
      if ((int)uVar3 < (int)uVar1) {
        if (uVar1 == 0) {
          lVar2 = 0;
        }
        else {
          lVar2 = btAlignedAllocInternal
                            (-(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3,0x10);
          uVar3 = *(uint *)(this + 300);
          uVar4 = (ulong)uVar3;
        }
        if (0 < (int)uVar3) {
          uVar3 = (uint)uVar4;
          lVar5 = 0;
          do {
            *(undefined8 *)(lVar2 + lVar5) = *(undefined8 *)(*(long *)(this + 0x138) + lVar5);
            lVar5 = lVar5 + 8;
          } while (uVar4 * 8 - lVar5 != 0);
        }
        if ((*(void **)(this + 0x138) != (void *)0x0) && (this[0x140] != (btCollisionObject)0x0)) {
          btAlignedFreeInternal(*(void **)(this + 0x138));
          uVar3 = *(uint *)(this + 300);
        }
        *(long *)(this + 0x138) = lVar2;
        *(uint *)(this + 0x130) = uVar1;
        this[0x140] = (btCollisionObject)0x1;
      }
    }
    *(btCollisionObject **)(*(long *)(this + 0x138) + (long)(int)uVar3 * 8) = param_1;
    uVar3 = uVar3 + 1;
    *(uint *)(this + 300) = uVar3;
  }
  else if (0 < (int)uVar3) {
    uVar6 = 0;
    lVar2 = *(long *)(this + 0x138);
    do {
      if (*(btCollisionObject **)(lVar2 + uVar6 * 8) == param_1) {
        if ((int)uVar6 < (int)uVar3) {
          uVar3 = uVar3 - 1;
          uVar4 = -(ulong)(uVar3 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar3 << 3;
          uVar7 = *(undefined8 *)(lVar2 + uVar6 * 8);
          *(uint *)(this + 300) = uVar3;
          *(undefined8 *)(lVar2 + uVar6 * 8) = *(undefined8 *)(lVar2 + uVar4);
          *(undefined8 *)(*(long *)(this + 0x138) + uVar4) = uVar7;
        }
        break;
      }
      uVar6 = uVar6 + 1;
    } while (uVar4 != uVar6);
  }
  *(uint *)(this + 0x120) = (uint)(0 < (int)uVar3);
  return;
}


