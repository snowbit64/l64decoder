// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createTopMesh
// Entry Point: 008d2678
// Size: 256 bytes
// Signature: undefined createTopMesh(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* FillPlaneGeometry::createTopMesh() */

IndexedTriangleSet * FillPlaneGeometry::createTopMesh(void)

{
  long in_x0;
  IndexedTriangleSet *this;
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  skinning();
  this = (IndexedTriangleSet *)operator_new(0x90);
                    /* try { // try from 008d26a0 to 008d26a3 has its CatchHandler @ 008d2778 */
  IndexedTriangleSet::IndexedTriangleSet(this);
  uVar3 = (*(long *)(in_x0 + 0x160) - *(long *)(in_x0 + 0x158) >> 2) * -0x5555555555555555;
  TriangleSet::setNumVertices((TriangleSet *)this,(uint)uVar3,1);
  if ((uint)uVar3 != 0) {
    lVar4 = 0;
    uVar1 = 0;
    do {
      TriangleSet::setPosition
                ((TriangleSet *)this,(float *)(*(long *)(in_x0 + 0x158) + lVar4),uVar1);
      TriangleSet::setNormal((TriangleSet *)this,(float *)(*(long *)(in_x0 + 0x170) + lVar4),uVar1);
      uVar1 = uVar1 + 1;
      lVar4 = lVar4 + 0xc;
    } while (((uVar3 & 0xffffffff) + (uVar3 & 0xffffffff) * 2) * 4 - lVar4 != 0);
  }
  uVar3 = *(long *)(in_x0 + 0x100) - *(long *)(in_x0 + 0xf8);
  uVar1 = (uint)(uVar3 >> 1);
  IndexedTriangleSet::setNumIndices(this,uVar1);
  if (uVar1 != 0) {
    uVar2 = 0;
    do {
      IndexedTriangleSet::setIndex
                (this,(uint)*(ushort *)(*(long *)(in_x0 + 0xf8) + uVar2 * 2),(uint)uVar2);
      uVar2 = uVar2 + 1;
    } while ((uVar3 >> 1 & 0xffffffff) != uVar2);
  }
  return this;
}


