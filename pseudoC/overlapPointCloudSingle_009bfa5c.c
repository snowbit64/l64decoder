// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: overlapPointCloudSingle
// Entry Point: 009bfa5c
// Size: 1144 bytes
// Signature: undefined __cdecl overlapPointCloudSingle(Bt2World * param_1, btDispatcher * param_2, Matrix4x4 * param_3, Vector3 * param_4, uint param_5, btCollisionObject * param_6, bool param_7)


/* Bt2SceneQueryUtil::overlapPointCloudSingle(Bt2World*, btDispatcher*, Matrix4x4 const&, Vector3
   const*, unsigned int, btCollisionObject const*, bool) */

bool Bt2SceneQueryUtil::overlapPointCloudSingle
               (Bt2World *param_1,btDispatcher *param_2,Matrix4x4 *param_3,Vector3 *param_4,
               uint param_5,btCollisionObject *param_6,bool param_7)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  bool bVar4;
  Vector3 *pVVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  float fVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  float fVar32;
  float fVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  float fVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  undefined4 uVar48;
  undefined8 local_2f0;
  float local_2e8;
  float *local_2e0;
  float local_2d8;
  float local_2d4;
  float local_2d0;
  undefined8 local_2c8;
  undefined4 local_2c0;
  undefined8 local_2b8;
  btCollisionObject abStack_288 [8];
  float local_280;
  float fStack_27c;
  float local_278;
  undefined4 local_274;
  float local_270;
  float fStack_26c;
  float local_268;
  undefined4 local_264;
  float local_260;
  float fStack_25c;
  float local_258;
  undefined4 local_254;
  float local_250;
  float fStack_24c;
  float local_248;
  undefined4 local_244;
  undefined8 *local_1c8;
  undefined ***pppuStack_1c0;
  undefined ***local_1b0;
  undefined4 local_1a8;
  int local_140;
  undefined **local_138;
  undefined4 local_130;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_fc;
  float local_e8;
  float fStack_e4;
  float local_e0;
  float local_d8;
  float local_d4;
  float fStack_d0;
  Vector3 *local_c0;
  uint local_b8;
  long local_b0;
  
  lVar3 = tpidr_el0;
  local_b0 = *(long *)(lVar3 + 0x28);
  if ((int)param_5 < 1) {
    pVVar5 = (Vector3 *)0x0;
  }
  else {
                    /* try { // try from 009bfad4 to 009bfadb has its CatchHandler @ 009bfeec */
    pVVar5 = (Vector3 *)btAlignedAllocInternal((ulong)param_5 << 4,0x10);
  }
  if (param_5 != 0) {
    if ((param_5 + 0x7fffffff < 0x80000007) ||
       ((lVar1 = (ulong)(param_5 - 1) + 1, param_4 < pVVar5 + lVar1 * 0x10 &&
        (pVVar5 < param_4 + lVar1 * 0xc)))) {
      uVar6 = 0;
    }
    else {
      uVar6 = param_5 & 0xfffffff8;
      puVar7 = (undefined4 *)(pVVar5 + 0x40);
      puVar8 = (undefined4 *)param_4;
      uVar2 = uVar6;
      do {
        uVar2 = uVar2 - 8;
        uVar15 = puVar8[1];
        uVar20 = puVar8[2];
        uVar48 = puVar8[3];
        uVar16 = puVar8[4];
        uVar21 = puVar8[5];
        uVar11 = puVar8[6];
        uVar17 = puVar8[7];
        uVar22 = puVar8[8];
        uVar12 = puVar8[9];
        uVar18 = puVar8[10];
        uVar23 = puVar8[0xb];
        uVar28 = puVar8[0xc];
        uVar34 = puVar8[0xd];
        uVar39 = puVar8[0xe];
        uVar29 = puVar8[0xf];
        uVar35 = puVar8[0x10];
        uVar40 = puVar8[0x11];
        uVar30 = puVar8[0x12];
        uVar36 = puVar8[0x13];
        uVar41 = puVar8[0x14];
        uVar31 = puVar8[0x15];
        uVar37 = puVar8[0x16];
        uVar42 = puVar8[0x17];
        puVar7[-0x10] = *puVar8;
        puVar7[-0xf] = uVar15;
        puVar7[-0xe] = uVar20;
        puVar7[-0xd] = 0;
        puVar7[-0xc] = uVar48;
        puVar7[-0xb] = uVar16;
        puVar7[-10] = uVar21;
        puVar7[-9] = 0;
        puVar7[-8] = uVar11;
        puVar7[-7] = uVar17;
        puVar7[-6] = uVar22;
        puVar7[-5] = 0;
        puVar7[-4] = uVar12;
        puVar7[-3] = uVar18;
        puVar7[-2] = uVar23;
        puVar7[-1] = 0;
        *puVar7 = uVar28;
        puVar7[1] = uVar34;
        puVar7[2] = uVar39;
        puVar7[3] = 0;
        puVar7[4] = uVar29;
        puVar7[5] = uVar35;
        puVar7[6] = uVar40;
        puVar7[7] = 0;
        puVar7[8] = uVar30;
        puVar7[9] = uVar36;
        puVar7[10] = uVar41;
        puVar7[0xb] = 0;
        puVar7[0xc] = uVar31;
        puVar7[0xd] = uVar37;
        puVar7[0xe] = uVar42;
        puVar7[0xf] = 0;
        puVar7 = puVar7 + 0x20;
        puVar8 = puVar8 + 0x18;
      } while (uVar2 != 0);
      if (uVar6 == param_5) goto LAB_009bfb78;
    }
    puVar7 = (undefined4 *)(param_4 + (ulong)uVar6 * 0xc + 8);
    do {
      puVar8 = (undefined4 *)(pVVar5 + (long)(int)uVar6 * 0x10);
      uVar6 = uVar6 + 1;
      *puVar8 = puVar7[-2];
      puVar8[1] = puVar7[-1];
      uVar48 = *puVar7;
      puVar8[3] = 0;
      puVar8[2] = uVar48;
      puVar7 = puVar7 + 3;
    } while (param_5 != uVar6);
  }
LAB_009bfb78:
                    /* try { // try from 009bfb78 to 009bfb7f has its CatchHandler @ 009bff04 */
  btPolyhedralConvexAabbCachingShape::btPolyhedralConvexAabbCachingShape
            ((btPolyhedralConvexAabbCachingShape *)&local_138);
  local_130 = 5;
  local_138 = &PTR__btPolyhedralConvexShape_0101a820;
  uStack_114 = 0x3f800000;
  local_11c = 0x3f8000003f800000;
  local_c0 = pVVar5;
  local_b8 = param_5;
                    /* try { // try from 009bfbac to 009bfbb3 has its CatchHandler @ 009bfef4 */
  btPolyhedralConvexAabbCachingShape::recalcLocalAabb();
  local_fc = 0;
                    /* try { // try from 009bfbb8 to 009bfbbf has its CatchHandler @ 009bfef0 */
  btCollisionObject::btCollisionObject(abStack_288);
  fVar19 = *(float *)(param_3 + 0x10);
  fVar46 = *(float *)(param_3 + 0x14);
  fVar13 = *(float *)param_3;
  fVar44 = *(float *)(param_3 + 4);
  local_140 = local_140 + 1;
  fVar26 = *(float *)(param_3 + 8);
  fVar9 = *(float *)(param_3 + 0x20);
  fVar45 = *(float *)(param_3 + 0x24);
  fVar24 = *(float *)(param_3 + 0x30);
  fVar47 = *(float *)(param_3 + 0x34);
  fVar38 = *(float *)(param_3 + 0x18);
  pppuStack_1c0 = &local_138;
  fVar32 = *(float *)(param_3 + 0x28);
  fVar43 = *(float *)(param_3 + 0x38);
  local_2c0 = 0xffffffff;
  local_1c8 = &local_2c8;
  local_274 = 0;
  local_264 = 0;
  local_254 = 0;
  local_244 = 0;
  local_1a8 = 5;
  local_2c8 = 0;
  local_2b8 = 0;
  local_280 = fVar13;
  fStack_27c = fVar19;
  local_278 = fVar9;
  local_270 = fVar44;
  fStack_26c = fVar46;
  local_268 = fVar45;
  local_260 = fVar26;
  fStack_25c = fVar38;
  local_258 = fVar32;
  local_250 = fVar24;
  fStack_24c = fVar47;
  local_248 = fVar43;
  local_1b0 = pppuStack_1c0;
  if (param_7) {
                    /* try { // try from 009bfc7c to 009bfc87 has its CatchHandler @ 009bfed8 */
    (**(code **)(**(long **)(param_6 + 200) + 0x10))
              (*(long **)(param_6 + 200),param_6 + 8,&local_2f0,&local_2d8);
    fVar14 = (local_d4 + fStack_e4) * 0.5;
    fVar25 = (local_d8 + local_e8) * 0.5;
    fVar10 = (local_d4 - fStack_e4) * 0.5 + 0.0;
    fVar27 = (fStack_d0 + local_e0) * 0.5;
    fVar46 = (local_d8 - local_e8) * 0.5 + 0.0;
    fVar33 = (fStack_d0 - local_e0) * 0.5 + 0.0;
    uVar48 = NEON_fmadd(fVar25,fVar44,fVar46 * fVar14);
    fVar44 = (float)NEON_fmadd(fVar27,fVar45,uVar48);
    uVar48 = NEON_fmadd(fVar46,ABS(fVar44),ABS(fVar46) * fVar10);
    fVar45 = (float)NEON_fmadd(fVar33,ABS(fVar45),uVar48);
    if ((local_2d4 < (fVar47 + fVar44) - fVar45) || (fVar45 + fVar47 + fVar44 < local_2f0._4_4_)) {
      bVar4 = false;
      goto LAB_009bfe1c;
    }
    bVar4 = false;
    uVar48 = NEON_fmadd(fVar25,fVar26,fVar38 * fVar14);
    fVar26 = (float)NEON_fmadd(fVar27,fVar32,uVar48);
    uVar48 = NEON_fmadd(fVar46,ABS(fVar26),ABS(fVar38) * fVar10);
    fVar32 = (float)NEON_fmadd(fVar33,ABS(fVar32),uVar48);
    if ((local_2d0 < (fVar43 + fVar26) - fVar32) || (fVar32 + fVar43 + fVar26 < local_2e8))
    goto LAB_009bfe1c;
    uVar48 = NEON_fmadd(fVar25,fVar13,fVar19 * fVar14);
    fVar9 = (float)NEON_fmadd(fVar27,fVar9,uVar48);
    uVar48 = NEON_fmadd(fVar46,ABS(fVar13),ABS(fVar19) * fVar10);
    fVar13 = (float)NEON_fmadd(fVar33,ABS(fVar9),uVar48);
    if ((local_2d8 < (fVar24 + fVar9) - fVar13) || (fVar13 + fVar24 + fVar9 < (float)local_2f0))
    goto LAB_009bfe1c;
  }
  local_2e0 = &local_2d8;
  local_2d8 = (float)((uint)local_2d8 & 0xffffff00);
  local_2e8 = -NAN;
  local_2f0 = &PTR__ContactResultCallback_00fe1eb0;
                    /* try { // try from 009bfdec to 009bfe07 has its CatchHandler @ 009bfedc */
  btCollisionWorld::contactPairTest
            ((btCollisionWorld *)param_1,abStack_288,param_6,(ContactResultCallback *)&local_2f0,
             param_2,false);
  bVar4 = local_2d8._0_1_ != '\0';
LAB_009bfe1c:
  btCollisionObject::~btCollisionObject(abStack_288);
  btPolyhedralConvexShape::~btPolyhedralConvexShape((btPolyhedralConvexShape *)&local_138);
  if (pVVar5 != (Vector3 *)0x0) {
                    /* try { // try from 009bfe38 to 009bfe3f has its CatchHandler @ 009bfed4 */
    btAlignedFreeInternal(pVVar5);
  }
  if (*(long *)(lVar3 + 0x28) != local_b0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar4;
}


