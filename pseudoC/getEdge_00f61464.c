// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getEdge
// Entry Point: 00f61464
// Size: 116 bytes
// Signature: undefined __thiscall getEdge(btConvexHullShape * this, int param_1, btVector3 * param_2, btVector3 * param_3)


/* btConvexHullShape::getEdge(int, btVector3&, btVector3&) const */

void __thiscall
btConvexHullShape::getEdge
          (btConvexHullShape *this,int param_1,btVector3 *param_2,btVector3 *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  float fVar5;
  undefined8 uVar6;
  float fVar7;
  
  iVar2 = *(int *)(this + 0x7c);
  uVar4 = *(undefined8 *)(this + 0x1c);
  iVar3 = 0;
  if (iVar2 != 0) {
    iVar3 = param_1 / iVar2;
  }
  fVar5 = *(float *)(this + 0x24);
  puVar1 = (undefined8 *)(*(long *)(this + 0x88) + (long)(param_1 - iVar3 * iVar2) * 0x10);
  uVar6 = *puVar1;
  fVar7 = *(float *)(puVar1 + 1);
  iVar3 = 0;
  if (iVar2 != 0) {
    iVar3 = (param_1 + 1) / iVar2;
  }
  *(undefined4 *)(param_2 + 0xc) = 0;
  *(ulong *)param_2 =
       CONCAT44((float)((ulong)uVar4 >> 0x20) * (float)((ulong)uVar6 >> 0x20),
                (float)uVar4 * (float)uVar6);
  *(float *)(param_2 + 8) = fVar5 * fVar7;
  uVar4 = *(undefined8 *)(this + 0x1c);
  fVar5 = *(float *)(this + 0x24);
  puVar1 = (undefined8 *)(*(long *)(this + 0x88) + (long)((param_1 + 1) - iVar3 * iVar2) * 0x10);
  uVar6 = *puVar1;
  fVar7 = *(float *)(puVar1 + 1);
  *(undefined4 *)(param_3 + 0xc) = 0;
  *(ulong *)param_3 =
       CONCAT44((float)((ulong)uVar4 >> 0x20) * (float)((ulong)uVar6 >> 0x20),
                (float)uVar4 * (float)uVar6);
  *(float *)(param_3 + 8) = fVar5 * fVar7;
  return;
}


