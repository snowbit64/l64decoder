// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addSoftBody
// Entry Point: 00bb2bb4
// Size: 256 bytes
// Signature: undefined __thiscall addSoftBody(Bt2World * this, btSoftBody * param_1, short param_2, short param_3)


/* Bt2World::addSoftBody(btSoftBody*, short, short) */

void __thiscall
Bt2World::addSoftBody(Bt2World *this,btSoftBody *param_1,short param_2,short param_3)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  
  uVar3 = *(uint *)(this + 0x20c);
  if (uVar3 == *(uint *)(this + 0x210)) {
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
        uVar3 = *(uint *)(this + 0x20c);
      }
      if (0 < (int)uVar3) {
        lVar4 = 0;
        do {
          *(undefined8 *)(lVar2 + lVar4) = *(undefined8 *)(*(long *)(this + 0x218) + lVar4);
          lVar4 = lVar4 + 8;
        } while ((ulong)uVar3 * 8 - lVar4 != 0);
      }
      if ((*(void **)(this + 0x218) != (void *)0x0) && (this[0x220] != (Bt2World)0x0)) {
        btAlignedFreeInternal(*(void **)(this + 0x218));
        uVar3 = *(uint *)(this + 0x20c);
      }
      *(long *)(this + 0x218) = lVar2;
      *(uint *)(this + 0x210) = uVar1;
      this[0x220] = (Bt2World)0x1;
    }
  }
  *(btSoftBody **)(*(long *)(this + 0x218) + (long)(int)uVar3 * 8) = param_1;
  *(uint *)(this + 0x20c) = uVar3 + 1;
  *(undefined8 *)(param_1 + 0x170) = *(undefined8 *)(this + 0x2a0);
  btCollisionWorld::addCollisionObject
            ((btCollisionWorld *)this,(btCollisionObject *)param_1,param_2,param_3);
  return;
}


