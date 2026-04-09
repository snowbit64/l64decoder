// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getDistancePointCloudShape
// Entry Point: 009ab128
// Size: 564 bytes
// Signature: undefined __thiscall getDistancePointCloudShape(Bt2ScenegraphPhysicsContext * this, Matrix4x4 * param_1, Vector3 * param_2, uint param_3, btCollisionObject * param_4, Vector3 * param_5, Vector3 * param_6)


/* Bt2ScenegraphPhysicsContext::getDistancePointCloudShape(Matrix4x4 const&, Vector3 const*,
   unsigned int, btCollisionObject const*, Vector3*, Vector3*) */

undefined4 __thiscall
Bt2ScenegraphPhysicsContext::getDistancePointCloudShape
          (Bt2ScenegraphPhysicsContext *this,Matrix4x4 *param_1,Vector3 *param_2,uint param_3,
          btCollisionObject *param_4,Vector3 *param_5,Vector3 *param_6)

{
  long lVar1;
  void *pvVar2;
  ulong uVar3;
  long lVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined **local_178;
  undefined4 local_170;
  undefined8 local_16c;
  undefined4 local_164;
  undefined8 local_15c;
  undefined4 local_154;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined **local_108;
  undefined4 local_100;
  undefined8 local_ec;
  undefined8 uStack_e4;
  undefined4 local_cc;
  void *local_90;
  uint local_88;
  long local_80;
  
  lVar1 = tpidr_el0;
  uVar8 = (ulong)param_3;
  local_80 = *(long *)(lVar1 + 0x28);
  if (param_3 == 0) {
    pvVar2 = (void *)0x0;
  }
  else {
    pvVar2 = operator_new(uVar8 << 4);
    if (param_3 < 8) {
      uVar3 = 0;
    }
    else {
      uVar3 = uVar8 & 0xfffffff8;
      puVar5 = (undefined4 *)((long)pvVar2 + 0x40);
      uVar7 = uVar3;
      puVar6 = (undefined4 *)param_2;
      do {
        uVar7 = uVar7 - 8;
        uVar12 = puVar6[1];
        uVar17 = puVar6[2];
        uVar13 = puVar6[3];
        uVar14 = puVar6[4];
        uVar18 = puVar6[5];
        uVar10 = puVar6[6];
        uVar15 = puVar6[7];
        uVar19 = puVar6[8];
        uVar11 = puVar6[9];
        uVar16 = puVar6[10];
        uVar20 = puVar6[0xb];
        uVar21 = puVar6[0xc];
        uVar25 = puVar6[0xd];
        uVar29 = puVar6[0xe];
        uVar22 = puVar6[0xf];
        uVar26 = puVar6[0x10];
        uVar30 = puVar6[0x11];
        uVar23 = puVar6[0x12];
        uVar27 = puVar6[0x13];
        uVar31 = puVar6[0x14];
        uVar24 = puVar6[0x15];
        uVar28 = puVar6[0x16];
        uVar32 = puVar6[0x17];
        puVar5[-0x10] = *puVar6;
        puVar5[-0xf] = uVar12;
        puVar5[-0xe] = uVar17;
        puVar5[-0xd] = 0;
        puVar5[-0xc] = uVar13;
        puVar5[-0xb] = uVar14;
        puVar5[-10] = uVar18;
        puVar5[-9] = 0;
        puVar5[-8] = uVar10;
        puVar5[-7] = uVar15;
        puVar5[-6] = uVar19;
        puVar5[-5] = 0;
        puVar5[-4] = uVar11;
        puVar5[-3] = uVar16;
        puVar5[-2] = uVar20;
        puVar5[-1] = 0;
        *puVar5 = uVar21;
        puVar5[1] = uVar25;
        puVar5[2] = uVar29;
        puVar5[3] = 0;
        puVar5[4] = uVar22;
        puVar5[5] = uVar26;
        puVar5[6] = uVar30;
        puVar5[7] = 0;
        puVar5[8] = uVar23;
        puVar5[9] = uVar27;
        puVar5[10] = uVar31;
        puVar5[0xb] = 0;
        puVar5[0xc] = uVar24;
        puVar5[0xd] = uVar28;
        puVar5[0xe] = uVar32;
        puVar5[0xf] = 0;
        puVar5 = puVar5 + 0x20;
        puVar6 = puVar6 + 0x18;
      } while (uVar7 != 0);
      if (uVar3 == uVar8) goto LAB_009ab220;
    }
    puVar5 = (undefined4 *)((long)pvVar2 + uVar3 * 0x10 + 0xc);
    lVar4 = uVar8 - uVar3;
    puVar6 = (undefined4 *)(param_2 + uVar3 * 0xc + 8);
    do {
      uVar9 = *(undefined8 *)(puVar6 + -2);
      *puVar5 = 0;
      uVar13 = *puVar6;
      lVar4 = lVar4 + -1;
      *(undefined8 *)(puVar5 + -3) = uVar9;
      puVar5[-1] = uVar13;
      puVar5 = puVar5 + 4;
      puVar6 = puVar6 + 3;
    } while (lVar4 != 0);
  }
LAB_009ab220:
                    /* try { // try from 009ab220 to 009ab227 has its CatchHandler @ 009ab370 */
  btPolyhedralConvexAabbCachingShape::btPolyhedralConvexAabbCachingShape
            ((btPolyhedralConvexAabbCachingShape *)&local_108);
  local_cc = 0;
  local_108 = &PTR__btPolyhedralConvexShape_0101a820;
  local_100 = 5;
  uStack_e4 = 0x3f800000;
  local_ec = 0x3f8000003f800000;
  local_90 = pvVar2;
  local_88 = param_3;
                    /* try { // try from 009ab258 to 009ab25f has its CatchHandler @ 009ab360 */
  btPolyhedralConvexAabbCachingShape::recalcLocalAabb();
  uStack_144 = *(undefined4 *)(param_1 + 0x10);
  uStack_134 = *(undefined4 *)(param_1 + 0x14);
  local_148 = *(undefined4 *)param_1;
  local_138 = *(undefined4 *)(param_1 + 4);
  local_13c = 0;
  local_128 = *(undefined4 *)(param_1 + 8);
  local_140 = *(undefined4 *)(param_1 + 0x20);
  local_130 = *(undefined4 *)(param_1 + 0x24);
  local_178 = &PTR__Result_00fe18c0;
  local_12c = 0;
  local_120 = *(undefined4 *)(param_1 + 0x28);
  uStack_124 = *(undefined4 *)(param_1 + 0x18);
  local_11c = 0;
  local_118 = *(undefined8 *)(param_1 + 0x30);
  local_170 = 0x7f7fffff;
  local_110 = *(undefined4 *)(param_1 + 0x38);
  local_10c = 0;
                    /* try { // try from 009ab2d0 to 009ab2df has its CatchHandler @ 009ab35c */
  Bt2SceneQueryUtil::getDistanceShapes
            (*(Bt2World **)(this + 0x30),(btTransform *)&local_148,(btConvexShape *)&local_108,
             (btTransform *)(param_4 + 8),*(btCollisionShape **)(param_4 + 200),(Result *)&local_178
            );
  uVar13 = local_170;
  if (param_5 != (Vector3 *)0x0) {
    *(undefined8 *)param_5 = local_15c;
    *(undefined4 *)(param_5 + 8) = local_154;
  }
  if (param_6 != (Vector3 *)0x0) {
    *(undefined8 *)param_6 = local_16c;
    *(undefined4 *)(param_6 + 8) = local_164;
  }
  btPolyhedralConvexShape::~btPolyhedralConvexShape((btPolyhedralConvexShape *)&local_108);
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
  }
  if (*(long *)(lVar1 + 0x28) == local_80) {
    return uVar13;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


