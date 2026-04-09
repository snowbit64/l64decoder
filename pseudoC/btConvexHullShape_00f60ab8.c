// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: btConvexHullShape
// Entry Point: 00f60ab8
// Size: 388 bytes
// Signature: undefined __thiscall btConvexHullShape(btConvexHullShape * this, float * param_1, int param_2, int param_3)


/* btConvexHullShape::btConvexHullShape(float const*, int, int) */

void __thiscall
btConvexHullShape::btConvexHullShape(btConvexHullShape *this,float *param_1,int param_2,int param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  float *pfVar6;
  undefined8 uVar7;
  float fVar8;
  
  uVar5 = (ulong)(uint)param_2;
  *(undefined4 *)(this + 0x18) = 0xffffffff;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x3c) = 0x3d23d70a;
  *(undefined8 *)(this + 0x24) = 0x3f800000;
  *(undefined8 *)(this + 0x1c) = 0x3f8000003f800000;
  this[0x90] = (btConvexHullShape)0x1;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined ***)this = &PTR__btConvexHullShape_0101a558;
  *(undefined8 *)(this + 0x58) = 0x3f800000;
  *(undefined8 *)(this + 0x50) = 0x3f8000003f800000;
  *(undefined8 *)(this + 0x68) = 0xbf800000;
  *(undefined8 *)(this + 0x60) = 0xbf800000bf800000;
  this[0x70] = (btConvexHullShape)0x0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined4 *)(this + 0x7c) = 0;
  *(undefined4 *)(this + 0x80) = 0;
  *(undefined4 *)(this + 8) = 4;
  if (param_2 < 1) {
    *(int *)(this + 0x7c) = param_2;
  }
  else {
    gNumAlignedAllocs = gNumAlignedAllocs + 1;
    lVar3 = (*(code *)PTR_FUN_01048e38)(uVar5 << 4,0x10);
    uVar2 = *(uint *)(this + 0x7c);
    if (0 < (int)uVar2) {
      lVar4 = 0;
      do {
        uVar7 = *(undefined8 *)(*(long *)(this + 0x88) + lVar4);
        ((undefined8 *)(lVar3 + lVar4))[1] = ((undefined8 *)(*(long *)(this + 0x88) + lVar4))[1];
        *(undefined8 *)(lVar3 + lVar4) = uVar7;
        lVar4 = lVar4 + 0x10;
      } while ((ulong)uVar2 * 0x10 - lVar4 != 0);
    }
    if ((*(long *)(this + 0x88) != 0) && (this[0x90] != (btConvexHullShape)0x0)) {
      gNumAlignedFree = gNumAlignedFree + 1;
      (*(code *)PTR_FUN_01048e40)();
    }
    lVar4 = 0;
    pfVar6 = param_1 + 2;
    *(long *)(this + 0x88) = lVar3;
    this[0x90] = (btConvexHullShape)0x1;
    *(int *)(this + 0x7c) = param_2;
    *(int *)(this + 0x80) = param_2;
    while( true ) {
      uVar5 = uVar5 - 1;
      puVar1 = (undefined8 *)(lVar3 + lVar4);
      fVar8 = *pfVar6;
      *puVar1 = *(undefined8 *)(pfVar6 + -2);
      *(float *)(puVar1 + 1) = fVar8;
      *(undefined4 *)((long)puVar1 + 0xc) = 0;
      if (uVar5 == 0) break;
      lVar3 = *(long *)(this + 0x88);
      lVar4 = lVar4 + 0x10;
      pfVar6 = (float *)((long)pfVar6 + (long)param_3);
    }
  }
  btPolyhedralConvexAabbCachingShape::recalcLocalAabb();
  return;
}


