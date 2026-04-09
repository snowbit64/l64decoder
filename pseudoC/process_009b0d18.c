// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: process
// Entry Point: 009b0d18
// Size: 448 bytes
// Signature: undefined __thiscall process(OBBArrayContactResultCallback * this, btBroadphaseProxy * param_1)


/* Bt2SceneQueryUtil::OBBArrayContactResultCallback::process(btBroadphaseProxy const*) */

void __thiscall
Bt2SceneQueryUtil::OBBArrayContactResultCallback::process
          (OBBArrayContactResultCallback *this,btBroadphaseProxy *param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  uint uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 local_68;
  float local_60;
  undefined4 local_5c;
  undefined8 local_58;
  float local_50;
  undefined4 local_4c;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  lVar9 = *(long *)param_1;
  if (lVar9 == *(long *)(this + 0x18)) {
    uVar5 = 1;
  }
  else {
    plVar7 = *(long **)(lVar9 + 0xc0);
    if (((ushort)(*(ushort *)(this + 10) & *(ushort *)((long)plVar7 + 10) |
                 *(ushort *)(this + 8) & *(ushort *)(plVar7 + 1)) != 0) &&
       ((*(uint *)(this + 0x34) & *(uint *)(*plVar7 + 0xe0)) == *(uint *)(this + 0x38))) {
      fVar11 = (float)*(undefined8 *)(param_1 + 0x1c);
      fVar12 = (float)((ulong)*(undefined8 *)(param_1 + 0x1c) >> 0x20);
      local_4c = 0;
      local_5c = 0;
      fVar13 = (fVar11 + (float)*(undefined8 *)(param_1 + 0x2c)) * 0.5;
      fVar14 = (fVar12 + (float)((ulong)*(undefined8 *)(param_1 + 0x2c) >> 0x20)) * 0.5;
      local_58 = CONCAT44(fVar14,fVar13);
      local_50 = (*(float *)(param_1 + 0x24) + *(float *)(param_1 + 0x34)) * 0.5;
      local_68 = CONCAT44(fVar14 - fVar12,fVar13 - fVar11);
      local_60 = local_50 - *(float *)(param_1 + 0x24);
      uVar3 = MathUtil::obbAABBIntersect
                        ((float *)(this + 0x40),(float *)(this + 100),(float *)(this + 0x70),
                         (float *)&local_58,(float *)&local_68);
      if ((uVar3 & 1) != 0) {
        lVar10 = *(long *)(this + 0x80);
        uVar6 = *(uint *)(lVar10 + 4);
        if (uVar6 == *(uint *)(lVar10 + 8)) {
          uVar1 = uVar6 << 1;
          if (uVar6 == 0) {
            uVar1 = 1;
          }
          if ((int)uVar6 < (int)uVar1) {
            if (uVar1 == 0) {
              lVar4 = 0;
            }
            else {
              lVar4 = btAlignedAllocInternal
                                (-(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3,
                                 0x10);
              uVar6 = *(uint *)(lVar10 + 4);
            }
            if (0 < (int)uVar6) {
              lVar8 = 0;
              do {
                *(undefined8 *)(lVar4 + lVar8) = *(undefined8 *)(*(long *)(lVar10 + 0x10) + lVar8);
                lVar8 = lVar8 + 8;
              } while ((ulong)uVar6 * 8 - lVar8 != 0);
            }
            if ((*(void **)(lVar10 + 0x10) != (void *)0x0) && (*(char *)(lVar10 + 0x18) != '\0')) {
              btAlignedFreeInternal(*(void **)(lVar10 + 0x10));
              uVar6 = *(uint *)(lVar10 + 4);
            }
            *(long *)(lVar10 + 0x10) = lVar4;
            *(uint *)(lVar10 + 8) = uVar1;
            *(undefined *)(lVar10 + 0x18) = 1;
          }
        }
        uVar5 = 1;
        *(long *)(*(long *)(lVar10 + 0x10) + (long)(int)uVar6 * 8) = lVar9;
        *(uint *)(lVar10 + 4) = uVar6 + 1;
        goto LAB_009b0eac;
      }
    }
    uVar5 = 0;
  }
LAB_009b0eac:
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


