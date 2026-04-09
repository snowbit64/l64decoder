// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getChunkCenterOfMass
// Entry Point: 00925998
// Size: 132 bytes
// Signature: undefined __thiscall getChunkCenterOfMass(DestructionShape * this, uint param_1, Vector3 * param_2)


/* DestructionShape::getChunkCenterOfMass(unsigned int, Vector3&) */

void __thiscall
DestructionShape::getChunkCenterOfMass(DestructionShape *this,uint param_1,Vector3 *param_2)

{
  DestructionGeometryShared *this_00;
  undefined8 *puVar1;
  undefined8 *puVar2;
  float fVar3;
  float fVar4;
  
  this_00 = (DestructionGeometryShared *)DestructionGeometry::getShared();
  DestructionGeometryShared::getChunk(this_00,param_1);
  puVar1 = (undefined8 *)DestructionChunk::getHullMax();
  DestructionGeometryShared::getChunk(this_00,param_1);
  puVar2 = (undefined8 *)DestructionChunk::getHullMin();
  fVar3 = *(float *)(puVar1 + 1);
  fVar4 = *(float *)(puVar2 + 1);
  *(ulong *)param_2 =
       CONCAT44(((float)((ulong)*puVar1 >> 0x20) + (float)((ulong)*puVar2 >> 0x20)) * 0.5,
                ((float)*puVar1 + (float)*puVar2) * 0.5);
  *(float *)(param_2 + 8) = (fVar3 + fVar4) * 0.5;
  return;
}


