// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: processConvexTriangleCollision
// Entry Point: 00ba7d98
// Size: 704 bytes
// Signature: undefined __thiscall processConvexTriangleCollision(Bt2HeightfieldTerrainShape * this, btVector3 * param_1, btVector3 * param_2, btVector3 * param_3, int param_4, int param_5, int param_6, int param_7, int param_8, int param_9, int param_10, int param_11, float param_12, btCollisionObjectWrapper * param_13, btCollisionObjectWrapper * param_14, btVoronoiSimplexSolver * param_15, btConvexPenetrationDepthSolver * param_16, btManifoldResult * param_17, bool param_18)


/* Bt2HeightfieldTerrainShape::processConvexTriangleCollision(btVector3 const&, btVector3 const&,
   btVector3*, int, int, int, int, int, int, int, int, float, btCollisionObjectWrapper const*,
   btCollisionObjectWrapper const*, btVoronoiSimplexSolver*, btConvexPenetrationDepthSolver*,
   btManifoldResult*, bool) const */

void __thiscall
Bt2HeightfieldTerrainShape::processConvexTriangleCollision
          (Bt2HeightfieldTerrainShape *this,btVector3 *param_1,btVector3 *param_2,btVector3 *param_3
          ,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,
          int param_11,float param_12,btCollisionObjectWrapper *param_13,
          btCollisionObjectWrapper *param_14,btVoronoiSimplexSolver *param_15,
          btConvexPenetrationDepthSolver *param_16,btManifoldResult *param_17,bool param_18)

{
  long lVar1;
  long lVar2;
  float *pfVar3;
  undefined8 *puVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  btCollisionObjectWrapper *local_260;
  undefined ***pppuStack_258;
  long local_250;
  undefined8 uStack_248;
  int local_240;
  int iStack_23c;
  btGjkPairDetector abStack_238 [104];
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  float local_150;
  undefined **local_148;
  btManifoldResult *pbStack_140;
  int local_138;
  int iStack_134;
  int local_130;
  int iStack_12c;
  int local_128;
  int iStack_124;
  btVector3 *local_120;
  btCollisionObjectWrapper *local_118;
  Bt2HeightfieldTerrainShape *pBStack_110;
  undefined **local_108;
  undefined4 local_100;
  float local_cc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  long local_88;
  
  lVar2 = tpidr_el0;
  local_88 = *(long *)(lVar2 + 0x28);
  pfVar3 = (float *)(param_3 + 4);
  fVar9 = *pfVar3;
  pfVar7 = (float *)(param_3 + 0x14);
  fVar11 = *pfVar7;
  pfVar5 = (float *)(param_3 + 0x24);
  fVar10 = *pfVar5;
  pfVar6 = pfVar5;
  if (fVar9 <= fVar11) {
    if (fVar9 <= fVar10) {
      pfVar6 = pfVar3;
    }
  }
  else if (fVar11 <= fVar10) {
    pfVar6 = pfVar7;
  }
  if (fVar11 <= fVar9) {
    if (fVar10 <= *pfVar3) {
      pfVar5 = pfVar3;
    }
  }
  else if (fVar10 <= *pfVar7) {
    pfVar5 = pfVar7;
  }
  if ((*(float *)(param_1 + 4) <= *pfVar5) && (*pfVar6 <= *(float *)(param_2 + 4))) {
    btPolyhedralConvexShape::btPolyhedralConvexShape((btPolyhedralConvexShape *)&local_108);
    uStack_b0 = *(undefined8 *)(param_3 + 8);
    local_b8 = *(undefined8 *)param_3;
    uStack_a0 = *(undefined8 *)(param_3 + 0x18);
    uStack_a8 = *(undefined8 *)(param_3 + 0x10);
    uStack_90 = *(undefined8 *)(param_3 + 0x28);
    local_98 = *(undefined8 *)(param_3 + 0x20);
    local_250 = *(long *)(param_13 + 0x10);
    uStack_248 = *(undefined8 *)(param_13 + 0x18);
    lVar8 = *(long *)(param_17 + 0x10);
    local_260 = param_13;
    local_108 = &PTR__btPolyhedralConvexShape_00fe1bf8;
    local_100 = 1;
    pppuStack_258 = &local_108;
    local_240 = param_4;
    iStack_23c = param_5;
    local_cc = param_12;
    if (*(long *)(lVar8 + 0x10) == local_250) {
      *(btCollisionObjectWrapper ***)(param_17 + 0x10) = &local_260;
      (**(code **)(*(long *)param_17 + 0x10))(param_17,param_4,param_5);
    }
    else {
      lVar8 = *(long *)(param_17 + 0x18);
      *(btCollisionObjectWrapper ***)(param_17 + 0x18) = &local_260;
                    /* try { // try from 00ba7ef4 to 00ba7f23 has its CatchHandler @ 00ba8060 */
      (**(code **)(*(long *)param_17 + 0x18))(param_17,param_4,param_5);
    }
    local_148 = &PTR__Result_00feae48;
    local_118 = param_13;
    pbStack_140 = param_17;
    local_128 = param_10;
    iStack_124 = param_11;
    local_130 = param_8;
    iStack_12c = param_9;
    local_138 = param_6;
    iStack_134 = param_7;
    local_120 = param_3;
    pBStack_110 = this;
                    /* try { // try from 00ba7f70 to 00ba7f7f has its CatchHandler @ 00ba8064 */
    fVar9 = (float)(**(code **)(**(long **)(param_14 + 8) + 0x60))();
    local_150 = (float)btPersistentManifold::getContactBreakingThreshold();
    puVar4 = *(undefined8 **)(param_14 + 0x18);
    local_150 = fVar9 + param_12 + local_150;
    local_150 = local_150 * local_150;
    uStack_1c8 = puVar4[1];
    local_1d0 = *puVar4;
    uStack_1b8 = puVar4[3];
    uStack_1c0 = puVar4[2];
    uStack_1a8 = puVar4[5];
    local_1b0 = puVar4[4];
    uStack_198 = puVar4[7];
    uStack_1a0 = puVar4[6];
    puVar4 = *(undefined8 **)(param_13 + 0x18);
    uStack_188 = puVar4[1];
    local_190 = *puVar4;
    uStack_178 = puVar4[3];
    local_180 = puVar4[2];
    uStack_168 = puVar4[5];
    local_170 = puVar4[4];
    uStack_158 = puVar4[7];
    local_160 = puVar4[6];
                    /* try { // try from 00ba7fd0 to 00ba7fdb has its CatchHandler @ 00ba805c */
    btGjkPairDetector::btGjkPairDetector
              (abStack_238,*(btConvexShape **)(param_14 + 8),(btConvexShape *)&local_108,param_15,
               param_16);
                    /* try { // try from 00ba7fe0 to 00ba7ff7 has its CatchHandler @ 00ba8058 */
    btGjkPairDetector::getClosestPointsNonVirtual
              (abStack_238,(ClosestPointInput *)&local_1d0,(Result *)&local_148,(btIDebugDraw *)0x0,
               param_18);
    lVar1 = 0x10;
    if (*(long *)(*(long *)(param_17 + 0x10) + 0x10) != *(long *)(param_13 + 0x10)) {
      lVar1 = 0x18;
    }
    *(long *)(param_17 + lVar1) = lVar8;
    btPolyhedralConvexShape::~btPolyhedralConvexShape((btPolyhedralConvexShape *)&local_108);
  }
  if (*(long *)(lVar2 + 0x28) == local_88) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


