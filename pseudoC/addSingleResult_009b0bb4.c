// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addSingleResult
// Entry Point: 009b0bb4
// Size: 356 bytes
// Signature: undefined __cdecl addSingleResult(btManifoldPoint * param_1, btCollisionObjectWrapper * param_2, int param_3, int param_4, btCollisionObjectWrapper * param_5, int param_6, int param_7)


/* Bt2SceneQueryUtil::OBBArrayContactResultCallback::addSingleResult(btManifoldPoint&,
   btCollisionObjectWrapper const*, int, int, btCollisionObjectWrapper const*, int, int) */

undefined  [16]
Bt2SceneQueryUtil::OBBArrayContactResultCallback::addSingleResult
          (btManifoldPoint *param_1,btCollisionObjectWrapper *param_2,int param_3,int param_4,
          btCollisionObjectWrapper *param_5,int param_6,int param_7)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  
  if (0.0 <= *(float *)(param_2 + 0x50)) goto LAB_009b0d04;
  lVar5 = *(long *)((ulong)(uint)param_3 + 0x10);
  lVar4 = *(long *)(param_1 + 0x80);
  if (lVar5 == *(long *)(param_1 + 0x18)) {
    uVar2 = *(uint *)(lVar4 + 4);
    lVar5 = *(long *)((ulong)(uint)param_6 + 0x10);
    if (uVar2 == *(uint *)(lVar4 + 8)) {
      uVar6 = uVar2 << 1;
      if (uVar2 == 0) {
        uVar6 = 1;
      }
      if ((int)uVar2 < (int)uVar6) {
        if (uVar6 == 0) {
          lVar1 = 0;
        }
        else {
          lVar1 = btAlignedAllocInternal
                            (-(ulong)(uVar6 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar6 << 3,0x10);
          uVar2 = *(uint *)(lVar4 + 4);
        }
        if (0 < (int)uVar2) {
          lVar3 = 0;
          do {
            *(undefined8 *)(lVar1 + lVar3) = *(undefined8 *)(*(long *)(lVar4 + 0x10) + lVar3);
            lVar3 = lVar3 + 8;
          } while ((ulong)uVar2 * 8 - lVar3 != 0);
        }
        goto LAB_009b0ccc;
      }
    }
  }
  else {
    uVar2 = *(uint *)(lVar4 + 4);
    if (uVar2 == *(uint *)(lVar4 + 8)) {
      uVar6 = uVar2 << 1;
      if (uVar2 == 0) {
        uVar6 = 1;
      }
      if ((int)uVar2 < (int)uVar6) {
        if (uVar6 == 0) {
          lVar1 = 0;
        }
        else {
          lVar1 = btAlignedAllocInternal
                            (-(ulong)(uVar6 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar6 << 3,0x10);
          uVar2 = *(uint *)(lVar4 + 4);
        }
        if (0 < (int)uVar2) {
          lVar3 = 0;
          do {
            *(undefined8 *)(lVar1 + lVar3) = *(undefined8 *)(*(long *)(lVar4 + 0x10) + lVar3);
            lVar3 = lVar3 + 8;
          } while ((ulong)uVar2 * 8 - lVar3 != 0);
        }
LAB_009b0ccc:
        if ((*(void **)(lVar4 + 0x10) != (void *)0x0) && (*(char *)(lVar4 + 0x18) != '\0')) {
          btAlignedFreeInternal(*(void **)(lVar4 + 0x10));
          uVar2 = *(uint *)(lVar4 + 4);
        }
        *(long *)(lVar4 + 0x10) = lVar1;
        *(uint *)(lVar4 + 8) = uVar6;
        *(undefined *)(lVar4 + 0x18) = 1;
      }
    }
  }
  *(long *)(*(long *)(lVar4 + 0x10) + (long)(int)uVar2 * 8) = lVar5;
  *(uint *)(lVar4 + 4) = uVar2 + 1;
LAB_009b0d04:
  return ZEXT816(0);
}


