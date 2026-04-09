// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: process
// Entry Point: 009b12c4
// Size: 328 bytes
// Signature: undefined __thiscall process(SphereArrayContactResultCallback * this, btBroadphaseProxy * param_1)


/* Bt2SceneQueryUtil::SphereArrayContactResultCallback::process(btBroadphaseProxy const*) */

undefined8 __thiscall
Bt2SceneQueryUtil::SphereArrayContactResultCallback::process
          (SphereArrayContactResultCallback *this,btBroadphaseProxy *param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  uint uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  lVar8 = *(long *)param_1;
  if (lVar8 == *(long *)(this + 0x18)) {
    uVar4 = 1;
  }
  else {
    plVar6 = *(long **)(lVar8 + 0xc0);
    if ((((ushort)(*(ushort *)(this + 10) & *(ushort *)((long)plVar6 + 10) |
                  *(ushort *)(this + 8) & *(ushort *)(plVar6 + 1)) == 0) ||
        ((*(uint *)(this + 0x34) & *(uint *)(*plVar6 + 0xe0)) != *(uint *)(this + 0x38))) ||
       (uVar2 = MathUtil::sphereAABBIntersect
                          ((float *)(this + 0x40),*(float *)(this + 0x4c),(float *)(param_1 + 0x1c),
                           (float *)(param_1 + 0x2c)), (uVar2 & 1) == 0)) {
      uVar4 = 0;
    }
    else {
      lVar9 = *(long *)(this + 0x50);
      uVar5 = *(uint *)(lVar9 + 4);
      if (uVar5 == *(uint *)(lVar9 + 8)) {
        uVar1 = uVar5 << 1;
        if (uVar5 == 0) {
          uVar1 = 1;
        }
        if ((int)uVar5 < (int)uVar1) {
          if (uVar1 == 0) {
            lVar3 = 0;
          }
          else {
            lVar3 = btAlignedAllocInternal
                              (-(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3,0x10
                              );
            uVar5 = *(uint *)(lVar9 + 4);
          }
          if (0 < (int)uVar5) {
            lVar7 = 0;
            do {
              *(undefined8 *)(lVar3 + lVar7) = *(undefined8 *)(*(long *)(lVar9 + 0x10) + lVar7);
              lVar7 = lVar7 + 8;
            } while ((ulong)uVar5 * 8 - lVar7 != 0);
          }
          if ((*(void **)(lVar9 + 0x10) != (void *)0x0) && (*(char *)(lVar9 + 0x18) != '\0')) {
            btAlignedFreeInternal(*(void **)(lVar9 + 0x10));
            uVar5 = *(uint *)(lVar9 + 4);
          }
          *(long *)(lVar9 + 0x10) = lVar3;
          *(uint *)(lVar9 + 8) = uVar1;
          *(undefined *)(lVar9 + 0x18) = 1;
        }
      }
      uVar4 = 1;
      *(long *)(*(long *)(lVar9 + 0x10) + (long)(int)uVar5 * 8) = lVar8;
      *(uint *)(lVar9 + 4) = uVar5 + 1;
    }
  }
  return uVar4;
}


