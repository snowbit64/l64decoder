// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: overlapPointCloudShapes
// Entry Point: 009bf564
// Size: 1124 bytes
// Signature: undefined __cdecl overlapPointCloudShapes(Bt2World * param_1, btDispatcher * param_2, ContactResultCallback * param_3, Vector3 * param_4, uint param_5, uint param_6, bool param_7, bool param_8, btAlignedObjectArray * param_9)


/* Bt2SceneQueryUtil::overlapPointCloudShapes(Bt2World*, btDispatcher*,
   Bt2SceneQueryUtil::ContactResultCallback&, Vector3 const*, unsigned int, unsigned int, bool,
   bool, btAlignedObjectArray<btCollisionObject*>&) */

undefined4
Bt2SceneQueryUtil::overlapPointCloudShapes
          (Bt2World *param_1,btDispatcher *param_2,ContactResultCallback *param_3,Vector3 *param_4,
          uint param_5,uint param_6,bool param_7,bool param_8,btAlignedObjectArray *param_9)

{
  long lVar1;
  long lVar2;
  btCollisionObject *pbVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  undefined4 *puVar7;
  btCollisionObject **ppbVar8;
  undefined4 *puVar9;
  long *plVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  float fVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  float fVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  float fVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  float fVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  float fVar40;
  undefined **local_1c8;
  long *plStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined4 local_1a8;
  undefined8 local_1a4;
  undefined local_19c;
  undefined *local_198;
  undefined auStack_190 [4];
  uint local_18c;
  undefined4 local_188;
  void *local_180;
  char local_178;
  uint local_16c;
  uint local_168;
  Vector3 *local_160;
  char local_158;
  float local_150;
  float fStack_14c;
  float local_148;
  undefined4 local_144;
  float local_140;
  float fStack_13c;
  float local_138;
  undefined4 local_134;
  undefined8 local_130;
  undefined2 local_128;
  undefined2 local_126;
  undefined8 local_120;
  undefined **local_f0;
  undefined4 local_e8;
  undefined8 local_d4;
  undefined8 uStack_cc;
  undefined4 local_b4;
  float local_a0;
  float fStack_9c;
  float local_98;
  float local_90;
  float fStack_8c;
  float local_88;
  Vector3 *local_78;
  uint local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  *(uint *)(param_3 + 8) = param_6;
  *(uint *)(param_3 + 0x34) = (uint)(param_7 != param_8);
  *(uint *)(param_3 + 0x38) = (uint)param_8 & (param_7 ^ 0xffffffff) & 1;
  local_158 = 1;
  local_160 = (Vector3 *)0x0;
  local_16c = 0;
  local_168 = 0;
  local_78 = local_160;
  if (0 < (int)param_5) {
                    /* try { // try from 009bf5e4 to 009bf5eb has its CatchHandler @ 009bf9d0 */
    local_78 = (Vector3 *)btAlignedAllocInternal((ulong)param_5 << 4,0x10);
    local_168 = param_5;
  }
  if (param_5 != 0) {
    if ((param_5 + 0x7fffffff < 0x80000007) ||
       ((lVar1 = (ulong)(param_5 - 1) + 1, param_4 < local_78 + lVar1 * 0x10 &&
        (local_78 < param_4 + lVar1 * 0xc)))) {
      uVar4 = 0;
    }
    else {
      uVar4 = param_5 & 0xfffffff8;
      puVar7 = (undefined4 *)(local_78 + 0x40);
      puVar9 = (undefined4 *)param_4;
      uVar5 = uVar4;
      do {
        uVar5 = uVar5 - 8;
        uVar14 = puVar9[1];
        uVar19 = puVar9[2];
        uVar12 = puVar9[3];
        uVar15 = puVar9[4];
        uVar20 = puVar9[5];
        uVar24 = puVar9[6];
        uVar16 = puVar9[7];
        uVar21 = puVar9[8];
        uVar39 = puVar9[9];
        uVar17 = puVar9[10];
        uVar22 = puVar9[0xb];
        uVar25 = puVar9[0xc];
        uVar30 = puVar9[0xd];
        uVar35 = puVar9[0xe];
        uVar26 = puVar9[0xf];
        uVar31 = puVar9[0x10];
        uVar36 = puVar9[0x11];
        uVar27 = puVar9[0x12];
        uVar32 = puVar9[0x13];
        uVar37 = puVar9[0x14];
        uVar28 = puVar9[0x15];
        uVar33 = puVar9[0x16];
        uVar38 = puVar9[0x17];
        puVar7[-0x10] = *puVar9;
        puVar7[-0xf] = uVar14;
        puVar7[-0xe] = uVar19;
        puVar7[-0xd] = 0;
        puVar7[-0xc] = uVar12;
        puVar7[-0xb] = uVar15;
        puVar7[-10] = uVar20;
        puVar7[-9] = 0;
        puVar7[-8] = uVar24;
        puVar7[-7] = uVar16;
        puVar7[-6] = uVar21;
        puVar7[-5] = 0;
        puVar7[-4] = uVar39;
        puVar7[-3] = uVar17;
        puVar7[-2] = uVar22;
        puVar7[-1] = 0;
        *puVar7 = uVar25;
        puVar7[1] = uVar30;
        puVar7[2] = uVar35;
        puVar7[3] = 0;
        puVar7[4] = uVar26;
        puVar7[5] = uVar31;
        puVar7[6] = uVar36;
        puVar7[7] = 0;
        puVar7[8] = uVar27;
        puVar7[9] = uVar32;
        puVar7[10] = uVar37;
        puVar7[0xb] = 0;
        puVar7[0xc] = uVar28;
        puVar7[0xd] = uVar33;
        puVar7[0xe] = uVar38;
        puVar7[0xf] = 0;
        puVar7 = puVar7 + 0x20;
        puVar9 = puVar9 + 0x18;
      } while (uVar5 != 0);
      if (uVar4 == param_5) goto LAB_009bf688;
    }
    puVar7 = (undefined4 *)(param_4 + (ulong)uVar4 * 0xc + 8);
    do {
      puVar9 = (undefined4 *)(local_78 + (long)(int)uVar4 * 0x10);
      uVar4 = uVar4 + 1;
      *puVar9 = puVar7[-2];
      puVar9[1] = puVar7[-1];
      uVar12 = *puVar7;
      puVar9[3] = 0;
      puVar9[2] = uVar12;
      puVar7 = puVar7 + 3;
    } while (param_5 != uVar4);
  }
LAB_009bf688:
                    /* try { // try from 009bf688 to 009bf68f has its CatchHandler @ 009bf9ec */
  local_158 = '\x01';
  local_16c = param_5;
  local_160 = local_78;
  btPolyhedralConvexAabbCachingShape::btPolyhedralConvexAabbCachingShape
            ((btPolyhedralConvexAabbCachingShape *)&local_f0);
  local_e8 = 5;
  local_f0 = &PTR__btPolyhedralConvexShape_0101a820;
  uStack_cc = 0x3f800000;
  local_d4 = 0x3f8000003f800000;
  local_70 = param_5;
                    /* try { // try from 009bf6bc to 009bf6c3 has its CatchHandler @ 009bf9e4 */
  btPolyhedralConvexAabbCachingShape::recalcLocalAabb();
  plVar10 = *(long **)(param_3 + 0x18);
  local_b4 = 0;
                    /* try { // try from 009bf6d4 to 009bf6df has its CatchHandler @ 009bf9dc */
  (**(code **)(*plVar10 + 0x10))(plVar10,&local_f0);
  local_120 = 0;
  local_180 = (void *)0x0;
  *(undefined4 *)(plVar10 + 0x1c) = 5;
  local_178 = '\x01';
  local_128 = *(undefined2 *)(param_3 + 8);
  local_198 = auStack_190;
  local_126 = *(undefined2 *)(param_3 + 10);
  plVar10[0x18] = (long)&local_130;
  local_1c8 = &PTR__PointCloudArrayContactResultCallback_00fe17b0;
  local_1a4 = *(undefined8 *)(param_3 + 0x34);
  local_188 = 0;
  fVar18 = (fStack_8c - fStack_9c) * 0.5 + 0.0;
  local_19c = 0;
  fVar11 = (local_90 + local_a0) * 0.5;
  local_1b8 = 0;
  uStack_1b0 = 0;
  fVar13 = (fStack_8c + fStack_9c) * 0.5;
  local_1a8 = 0;
  fVar23 = (local_88 + local_98) * 0.5;
  fVar29 = (local_90 - local_a0) * 0.5 + 0.0;
  fVar34 = (local_88 - local_98) * 0.5 + 0.0;
  uVar24 = NEON_fmadd(fVar11,*(float *)(plVar10 + 1),fVar13 * *(float *)((long)plVar10 + 0xc));
  uVar39 = NEON_fmadd(fVar11,*(float *)(plVar10 + 3),fVar13 * *(float *)((long)plVar10 + 0x1c));
  uVar12 = NEON_fmadd(fVar11,*(float *)(plVar10 + 5),fVar13 * *(float *)((long)plVar10 + 0x2c));
  fVar13 = (float)NEON_fmadd(fVar23,*(float *)(plVar10 + 2),uVar24);
  fVar40 = (float)NEON_fmadd(fVar23,*(float *)(plVar10 + 4),uVar39);
  fVar11 = (float)NEON_fmadd(fVar23,*(float *)(plVar10 + 6),uVar12);
  uVar12 = NEON_fmadd(fVar29,ABS(*(float *)(plVar10 + 1)),
                      fVar18 * ABS(*(float *)((long)plVar10 + 0xc)));
  uVar39 = NEON_fmadd(fVar29,ABS(*(float *)(plVar10 + 3)),
                      fVar18 * ABS(*(float *)((long)plVar10 + 0x1c)));
  uVar24 = NEON_fmadd(fVar29,ABS(*(float *)(plVar10 + 5)),
                      fVar18 * ABS(*(float *)((long)plVar10 + 0x2c)));
  local_130 = 0;
  local_150 = (float)NEON_fmadd(fVar34,ABS(*(float *)(plVar10 + 2)),uVar12);
  local_18c = 0;
  fStack_14c = (float)NEON_fmadd(fVar34,ABS(*(float *)(plVar10 + 4)),uVar39);
  local_148 = (float)NEON_fmadd(fVar34,ABS(*(float *)(plVar10 + 6)),uVar24);
  fVar40 = fVar40 + *(float *)((long)plVar10 + 0x3c);
  local_134 = 0;
  local_144 = 0;
  local_140 = (fVar13 + *(float *)(plVar10 + 7)) - local_150;
  fStack_13c = fVar40 - fStack_14c;
  local_138 = (fVar11 + *(float *)(plVar10 + 8)) - local_148;
  local_150 = local_150 + fVar13 + *(float *)(plVar10 + 7);
  fStack_14c = fStack_14c + fVar40;
  local_148 = local_148 + fVar11 + *(float *)(plVar10 + 8);
                    /* try { // try from 009bf888 to 009bf893 has its CatchHandler @ 009bf9d8 */
  plStack_1c0 = plVar10;
  (**(code **)(**(long **)(param_1 + 0x60) + 0x38))
            (*(long **)(param_1 + 0x60),&local_140,&local_150,&local_1c8);
  if (local_18c != 0) {
    uVar4 = 0;
    uVar5 = local_18c;
    do {
      uVar6 = (ulong)*(uint *)(param_9 + 4);
      pbVar3 = *(btCollisionObject **)((long)local_180 + (long)(int)uVar4 * 8);
      if (0 < (int)*(uint *)(param_9 + 4)) {
        ppbVar8 = *(btCollisionObject ***)(param_9 + 0x10);
        do {
          if (*ppbVar8 == pbVar3) {
            if ((int)uVar6 != 0) goto LAB_009bf8ac;
            break;
          }
          uVar6 = uVar6 - 1;
          ppbVar8 = ppbVar8 + 1;
        } while (uVar6 != 0);
      }
                    /* try { // try from 009bf8e8 to 009bf8ff has its CatchHandler @ 009bf9f4 */
      btCollisionWorld::contactPairTest
                ((btCollisionWorld *)param_1,(btCollisionObject *)plVar10,pbVar3,
                 (ContactResultCallback *)param_3,param_2,false);
      uVar5 = local_18c;
      if (param_3[0x3c] != (ContactResultCallback)0x0) break;
LAB_009bf8ac:
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar5);
  }
  uVar12 = *(undefined4 *)(param_3 + 0x30);
  if ((local_180 != (void *)0x0) && (local_178 != '\0')) {
                    /* try { // try from 009bf924 to 009bf927 has its CatchHandler @ 009bf9cc */
    btAlignedFreeInternal(local_180);
  }
  btPolyhedralConvexShape::~btPolyhedralConvexShape((btPolyhedralConvexShape *)&local_f0);
  if ((local_160 != (Vector3 *)0x0) && (local_158 != '\0')) {
                    /* try { // try from 009bf940 to 009bf943 has its CatchHandler @ 009bf9c8 */
    btAlignedFreeInternal(local_160);
  }
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar12;
}


