// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: process
// Entry Point: 009b1424
// Size: 260 bytes
// Signature: undefined __thiscall process(SphereOnEntityContactResultCallback * this, btBroadphaseProxy * param_1)


/* Bt2SceneQueryUtil::SphereOnEntityContactResultCallback::process(btBroadphaseProxy const*) */

undefined8 __thiscall
Bt2SceneQueryUtil::SphereOnEntityContactResultCallback::process
          (SphereOnEntityContactResultCallback *this,btBroadphaseProxy *param_1)

{
  ulong uVar1;
  uint uVar2;
  long *plVar3;
  uint *puVar4;
  long lVar5;
  
  lVar5 = *(long *)param_1;
  if (((((lVar5 != *(long *)(this + 0x18)) &&
        (this[0x3c] == (SphereOnEntityContactResultCallback)0x0)) &&
       (plVar3 = *(long **)(lVar5 + 0xc0),
       (ushort)(*(ushort *)(this + 10) & *(ushort *)((long)plVar3 + 10) |
               *(ushort *)(this + 8) & *(ushort *)(plVar3 + 1)) != 0)) &&
      (((*(uint *)(this + 0x34) & *(uint *)(*plVar3 + 0xe0)) == *(uint *)(this + 0x38) &&
       (uVar1 = MathUtil::sphereAABBIntersect
                          ((float *)(this + 0x40),*(float *)(this + 0x4c),(float *)(param_1 + 0x1c),
                           (float *)(param_1 + 0x2c)), (uVar1 & 1) != 0)))) &&
     (*(long *)(this + 0x20) != lVar5)) {
    puVar4 = *(uint **)(lVar5 + 0x108);
    if ((puVar4 != (uint *)0x0) && ((*puVar4 & 0x101) == 1)) {
      if ((*puVar4 >> 3 & 1) == 0) {
        uVar2 = 0xffffffff;
      }
      else {
        uVar2 = puVar4[8];
      }
      uVar1 = (**(code **)(**(long **)(this + 0x28) + 0x20))
                        (*(long **)(this + 0x28),puVar4[4],uVar2,lVar5,0);
      if ((uVar1 & 1) == 0) {
        this[0x3c] = (SphereOnEntityContactResultCallback)0x1;
      }
      *(int *)(this + 0x30) = *(int *)(this + 0x30) + 1;
    }
    *(long *)(this + 0x20) = lVar5;
  }
  return 1;
}


