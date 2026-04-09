// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: calculateShapeNewClipDistance
// Entry Point: 00985ea4
// Size: 184 bytes
// Signature: undefined __cdecl calculateShapeNewClipDistance(MeshSplitShape * param_1, Geometry * param_2)


/* MeshSplitManager::calculateShapeNewClipDistance(MeshSplitShape*, Geometry*) const */

float MeshSplitManager::calculateShapeNewClipDistance(MeshSplitShape *param_1,Geometry *param_2)

{
  int iVar1;
  long lVar2;
  LODTransformGroup *this;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  this = *(LODTransformGroup **)(param_2 + 0x20);
  fVar6 = *(float *)(param_2 + 0x124);
  fVar3 = fVar6;
  if ((this != (LODTransformGroup *)0x0) && (((byte)this[0x10] >> 6 & 1) != 0)) {
    iVar1 = LODTransformGroup::getNumLevels();
    fVar3 = (float)LODTransformGroup::getDistance(this,iVar1 - 1);
    if (fVar6 <= fVar3) {
      fVar3 = fVar6;
    }
  }
  if (*(float *)(param_1 + 0x34) < fVar3) {
    lVar2 = Geometry::getBoundingVolume();
    fVar3 = (float)NEON_fmin(*(float *)(lVar2 + 0x18) / *(float *)(param_1 + 0x28),0x3f800000);
    fVar6 = powf(fVar3,*(float *)(param_1 + 0x2c));
    fVar5 = *(float *)(param_1 + 0x30);
    fVar3 = *(float *)(param_2 + 0x124);
    if (fVar5 <= *(float *)(param_2 + 0x124)) {
      fVar3 = fVar5;
    }
    fVar4 = *(float *)(param_1 + 0x34);
    if (*(float *)(param_1 + 0x34) <= fVar5 * fVar6) {
      fVar4 = fVar5 * fVar6;
    }
    if (fVar4 <= fVar3) {
      fVar3 = fVar4;
    }
  }
  return fVar3;
}


