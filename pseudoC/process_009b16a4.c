// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: process
// Entry Point: 009b16a4
// Size: 296 bytes
// Signature: undefined __thiscall process(PointCloudArrayContactResultCallback * this, btBroadphaseProxy * param_1)


/* Bt2SceneQueryUtil::PointCloudArrayContactResultCallback::process(btBroadphaseProxy const*) */

undefined8 __thiscall
Bt2SceneQueryUtil::PointCloudArrayContactResultCallback::process
          (PointCloudArrayContactResultCallback *this,btBroadphaseProxy *param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar7 = *(long *)param_1;
  if (lVar7 == *(long *)(this + 0x18)) {
    uVar3 = 1;
  }
  else {
    plVar5 = *(long **)(lVar7 + 0xc0);
    if (((ushort)(*(ushort *)(this + 10) & *(ushort *)((long)plVar5 + 10) |
                 *(ushort *)(this + 8) & *(ushort *)(plVar5 + 1)) == 0) ||
       ((*(uint *)(this + 0x34) & *(uint *)(*plVar5 + 0xe0)) != *(uint *)(this + 0x38))) {
      uVar3 = 0;
    }
    else {
      lVar8 = *(long *)(this + 0x40);
      uVar4 = *(uint *)(lVar8 + 4);
      if (uVar4 == *(uint *)(lVar8 + 8)) {
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
                              (-(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3,0x10
                              );
            uVar4 = *(uint *)(lVar8 + 4);
          }
          if (0 < (int)uVar4) {
            lVar6 = 0;
            do {
              *(undefined8 *)(lVar2 + lVar6) = *(undefined8 *)(*(long *)(lVar8 + 0x10) + lVar6);
              lVar6 = lVar6 + 8;
            } while ((ulong)uVar4 * 8 - lVar6 != 0);
          }
          if ((*(void **)(lVar8 + 0x10) != (void *)0x0) && (*(char *)(lVar8 + 0x18) != '\0')) {
            btAlignedFreeInternal(*(void **)(lVar8 + 0x10));
            uVar4 = *(uint *)(lVar8 + 4);
          }
          *(long *)(lVar8 + 0x10) = lVar2;
          *(uint *)(lVar8 + 8) = uVar1;
          *(undefined *)(lVar8 + 0x18) = 1;
        }
      }
      uVar3 = 1;
      *(long *)(*(long *)(lVar8 + 0x10) + (long)(int)uVar4 * 8) = lVar7;
      *(uint *)(lVar8 + 4) = uVar4 + 1;
    }
  }
  return uVar3;
}


