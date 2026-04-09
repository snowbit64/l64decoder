// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: initSlicedFindPath
// Entry Point: 00dd5540
// Size: 412 bytes
// Signature: undefined __thiscall initSlicedFindPath(dtNavMeshQuery * this, uint param_1, uint param_2, float * param_3, float * param_4, dtQueryFilter * param_5)


/* dtNavMeshQuery::initSlicedFindPath(unsigned int, unsigned int, float const*, float const*,
   dtQueryFilter const*) */

undefined4 __thiscall
dtNavMeshQuery::initSlicedFindPath
          (dtNavMeshQuery *this,uint param_1,uint param_2,float *param_3,float *param_4,
          dtQueryFilter *param_5)

{
  dtNodePool *this_00;
  int iVar1;
  ulong uVar2;
  float *pfVar3;
  dtNodeQueue *this_01;
  undefined8 *puVar4;
  float fVar5;
  undefined4 uVar6;
  
  uVar6 = 0x80000008;
  puVar4 = (undefined8 *)(this + 8);
  *(undefined8 *)(this + 0x10) = 0;
  *puVar4 = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  fVar5 = *param_3;
  *(undefined4 *)puVar4 = 0x80000000;
  *(uint *)(this + 0x1c) = param_1;
  *(uint *)(this + 0x20) = param_2;
  *(dtQueryFilter **)(this + 0x40) = param_5;
  *(float *)(this + 0x24) = fVar5;
  *(float *)(this + 0x28) = param_3[1];
  *(float *)(this + 0x2c) = param_3[2];
  *(float *)(this + 0x30) = *param_4;
  *(float *)(this + 0x34) = param_4[1];
  *(float *)(this + 0x38) = param_4[2];
  if ((((param_1 != 0) && (param_2 != 0)) &&
      (uVar2 = dtNavMesh::isValidPolyRef(*(dtNavMesh **)this,param_1), (uVar2 & 1) != 0)) &&
     (uVar2 = dtNavMesh::isValidPolyRef(*(dtNavMesh **)this,param_2), uVar6 = 0x80000008,
     (uVar2 & 1) != 0)) {
    if (param_1 == param_2) {
      uVar6 = 0x40000000;
      *(undefined4 *)puVar4 = 0x40000000;
    }
    else {
      dtNodePool::clear();
      this_00 = *(dtNodePool **)(this + 0x50);
      *(undefined4 *)(*(long *)(this + 0x58) + 0xc) = 0;
      pfVar3 = (float *)dtNodePool::getNode(this_00,param_1);
      *pfVar3 = *param_3;
      pfVar3[1] = param_3[1];
      fVar5 = param_3[2];
      pfVar3[3] = 0.0;
      pfVar3[5] = (float)((uint)pfVar3[5] & 0xc0000000);
      pfVar3[2] = fVar5;
      uVar6 = NEON_fmadd(*param_4 - *param_3,*param_4 - *param_3,
                         (param_4[1] - param_3[1]) * (param_4[1] - param_3[1]));
      fVar5 = (float)NEON_fmadd(param_4[2] - param_3[2],param_4[2] - param_3[2],uVar6);
      fVar5 = (float)dtSqrt(fVar5);
      pfVar3[5] = (float)((uint)pfVar3[5] & 0x3fffffff | 0x40000000);
      pfVar3[6] = (float)param_1;
      this_01 = *(dtNodeQueue **)(this + 0x58);
      iVar1 = *(int *)(this_01 + 0xc);
      pfVar3[4] = fVar5 * 0.999;
      *(int *)(this_01 + 0xc) = iVar1 + 1;
      dtNodeQueue::bubbleUp(this_01,iVar1,(dtNode *)pfVar3);
      uVar6 = 0x20000000;
      fVar5 = pfVar3[4];
      *(float **)(this + 0x10) = pfVar3;
      *(undefined4 *)(this + 8) = 0x20000000;
      *(float *)(this + 0x18) = fVar5;
    }
  }
  return uVar6;
}


