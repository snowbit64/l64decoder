// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: computeUvDensitySet
// Entry Point: 00979588
// Size: 420 bytes
// Signature: undefined computeUvDensitySet(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* MeshSplitAttachmentGeometry::computeUvDensitySet() */

void MeshSplitAttachmentGeometry::computeUvDensitySet(void)

{
  long in_x0;
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  float fVar6;
  
  lVar3 = *(long *)(in_x0 + 0x90);
  if (lVar3 != *(long *)(in_x0 + 0x98)) {
    uVar5 = 0;
    *(undefined4 *)(in_x0 + 0x80) = 0;
    do {
      lVar1 = IndexedTriangleSet::getSubset
                        (*(IndexedTriangleSet **)(*(long *)(in_x0 + 0x68) + 0x28),
                         (uint)*(ushort *)(lVar3 + uVar5 * 4 + 2));
      lVar3 = *(long *)(in_x0 + 0x90);
      lVar2 = *(long *)(in_x0 + 0x98);
      uVar5 = (ulong)((int)uVar5 + 1);
      fVar6 = *(float *)(lVar1 + 0x10) + *(float *)(in_x0 + 0x80);
      uVar4 = lVar2 - lVar3 >> 2;
      *(float *)(in_x0 + 0x80) = fVar6;
    } while (uVar5 < uVar4);
    *(undefined4 *)(in_x0 + 0x84) = 0;
    *(float *)(in_x0 + 0x80) = fVar6 / (float)(unkuint9)uVar4;
    if (lVar2 == lVar3) {
      fVar6 = NAN;
    }
    else {
      uVar5 = 0;
      do {
        lVar1 = IndexedTriangleSet::getSubset
                          (*(IndexedTriangleSet **)(*(long *)(in_x0 + 0x68) + 0x28),
                           (uint)*(ushort *)(lVar3 + uVar5 * 4 + 2));
        lVar3 = *(long *)(in_x0 + 0x90);
        lVar2 = *(long *)(in_x0 + 0x98);
        uVar5 = (ulong)((int)uVar5 + 1);
        fVar6 = *(float *)(lVar1 + 0x14) + *(float *)(in_x0 + 0x84);
        uVar4 = lVar2 - lVar3 >> 2;
        *(float *)(in_x0 + 0x84) = fVar6;
      } while (uVar5 < uVar4);
      fVar6 = fVar6 / (float)(unkuint9)uVar4;
    }
    *(float *)(in_x0 + 0x84) = fVar6;
    *(undefined4 *)(in_x0 + 0x88) = 0;
    if (lVar2 == lVar3) {
      fVar6 = NAN;
    }
    else {
      uVar5 = 0;
      do {
        lVar1 = IndexedTriangleSet::getSubset
                          (*(IndexedTriangleSet **)(*(long *)(in_x0 + 0x68) + 0x28),
                           (uint)*(ushort *)(lVar3 + uVar5 * 4 + 2));
        lVar3 = *(long *)(in_x0 + 0x90);
        lVar2 = *(long *)(in_x0 + 0x98);
        uVar5 = (ulong)((int)uVar5 + 1);
        fVar6 = *(float *)(lVar1 + 0x18) + *(float *)(in_x0 + 0x88);
        uVar4 = lVar2 - lVar3 >> 2;
        *(float *)(in_x0 + 0x88) = fVar6;
      } while (uVar5 < uVar4);
      fVar6 = fVar6 / (float)(unkuint9)uVar4;
    }
    *(float *)(in_x0 + 0x88) = fVar6;
    *(undefined4 *)(in_x0 + 0x8c) = 0;
    if (lVar2 == lVar3) {
      fVar6 = NAN;
    }
    else {
      uVar5 = 0;
      do {
        lVar2 = IndexedTriangleSet::getSubset
                          (*(IndexedTriangleSet **)(*(long *)(in_x0 + 0x68) + 0x28),
                           (uint)*(ushort *)(lVar3 + uVar5 * 4 + 2));
        lVar3 = *(long *)(in_x0 + 0x90);
        uVar5 = (ulong)((int)uVar5 + 1);
        fVar6 = *(float *)(lVar2 + 0x1c) + *(float *)(in_x0 + 0x8c);
        uVar4 = *(long *)(in_x0 + 0x98) - lVar3 >> 2;
        *(float *)(in_x0 + 0x8c) = fVar6;
      } while (uVar5 < uVar4);
      fVar6 = fVar6 / (float)(unkuint9)uVar4;
    }
    *(float *)(in_x0 + 0x8c) = fVar6;
  }
  return;
}


