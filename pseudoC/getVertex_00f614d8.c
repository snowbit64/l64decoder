// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getVertex
// Entry Point: 00f614d8
// Size: 48 bytes
// Signature: undefined __thiscall getVertex(btConvexHullShape * this, int param_1, btVector3 * param_2)


/* btConvexHullShape::getVertex(int, btVector3&) const */

void __thiscall btConvexHullShape::getVertex(btConvexHullShape *this,int param_1,btVector3 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  float fVar3;
  undefined8 uVar4;
  float fVar5;
  
  uVar2 = *(undefined8 *)(this + 0x1c);
  fVar3 = *(float *)(this + 0x24);
  puVar1 = (undefined8 *)(*(long *)(this + 0x88) + (long)param_1 * 0x10);
  uVar4 = *puVar1;
  fVar5 = *(float *)(puVar1 + 1);
  *(undefined4 *)(param_2 + 0xc) = 0;
  *(ulong *)param_2 =
       CONCAT44((float)((ulong)uVar2 >> 0x20) * (float)((ulong)uVar4 >> 0x20),
                (float)uVar2 * (float)uVar4);
  *(float *)(param_2 + 8) = fVar3 * fVar5;
  return;
}


