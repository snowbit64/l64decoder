// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: overlapBoxShapes
// Entry Point: 009bee28
// Size: 1000 bytes
// Signature: undefined __cdecl overlapBoxShapes(Bt2World * param_1, btDispatcher * param_2, OBBContactResultCallback * param_3, Vector3 * param_4, uint param_5, bool param_6, bool param_7, bool param_8, btAlignedObjectArray * param_9)


/* Bt2SceneQueryUtil::overlapBoxShapes(Bt2World*, btDispatcher*,
   Bt2SceneQueryUtil::OBBContactResultCallback&, Vector3 const&, unsigned int, bool, bool, bool,
   btAlignedObjectArray<btCollisionObject*>&) */

undefined4
Bt2SceneQueryUtil::overlapBoxShapes
          (Bt2World *param_1,btDispatcher *param_2,OBBContactResultCallback *param_3,
          Vector3 *param_4,uint param_5,bool param_6,bool param_7,bool param_8,
          btAlignedObjectArray *param_9)

{
  long lVar1;
  btCollisionObject *pbVar2;
  uint uVar3;
  ulong uVar4;
  btCollisionObject **ppbVar5;
  uint uVar6;
  long *plVar7;
  long *plVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined auStack_240 [4];
  uint local_23c;
  undefined4 uStack_238;
  void *local_230;
  char local_228;
  btVector3 abStack_220 [16];
  btVector3 abStack_210 [16];
  undefined **local_200;
  undefined4 local_1f8;
  undefined4 local_1f4;
  undefined **local_1f0;
  long *plStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined4 local_1d0;
  undefined8 local_1cc;
  undefined local_1c4;
  undefined4 local_1c0;
  undefined4 uStack_1bc;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 local_1b0;
  undefined4 uStack_1ac;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 local_1a0;
  long local_19c;
  undefined4 local_194;
  undefined8 local_190;
  undefined4 local_188;
  undefined *local_180;
  undefined8 local_178;
  undefined2 local_170;
  undefined2 local_16e;
  undefined8 local_168;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 uStack_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 uStack_110;
  undefined4 local_10c;
  long local_108;
  undefined4 local_100;
  undefined4 local_fc;
  long local_f8 [5];
  float local_cc;
  float fStack_c8;
  float local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  long local_a8;
  
  lVar1 = tpidr_el0;
  local_a8 = *(long *)(lVar1 + 0x28);
  *(short *)(param_3 + 8) = (short)param_5;
  *(uint *)(param_3 + 0x34) = (uint)(param_6 != param_7);
  *(uint *)(param_3 + 0x38) = (uint)param_7 & (param_6 ^ 0xffffffff) & 1;
  *(short *)(param_3 + 10) = (short)(param_5 >> 0x10);
  local_200 = *(undefined ***)param_4;
  local_1f8 = *(undefined4 *)(param_4 + 8);
  local_1f4 = 0;
  btBoxShape::btBoxShape((btBoxShape *)local_f8,(btVector3 *)&local_200);
                    /* try { // try from 009beec0 to 009bef37 has its CatchHandler @ 009bf230 */
  fVar9 = (float)(**(code **)(local_f8[0] + 0x60))(local_f8);
  fVar10 = (float)(**(code **)(local_f8[0] + 0x60))(local_f8);
  fVar11 = (float)(**(code **)(local_f8[0] + 0x60))(local_f8);
  local_bc = 0;
  fVar12 = (float)(**(code **)(local_f8[0] + 0x60))(local_f8);
  fVar13 = (float)(**(code **)(local_f8[0] + 0x60))(local_f8);
  fVar14 = (float)(**(code **)(local_f8[0] + 0x60))(local_f8);
  plVar7 = *(long **)(param_3 + 0x18);
  local_c0 = 0;
  local_cc = (fVar9 + local_cc) - fVar12;
  fStack_c8 = (fVar10 + fStack_c8) - fVar13;
  local_c4 = (fVar11 + local_c4) - fVar14;
  local_108 = plVar7[7];
  plVar8 = plVar7 + 1;
  local_138 = *(undefined4 *)plVar8;
  local_12c = 0;
  uVar16 = *(undefined4 *)(plVar7 + 6);
  uVar17 = *(undefined4 *)(plVar7 + 5);
  uVar15 = *(undefined4 *)((long)plVar7 + 0x2c);
  uStack_134 = *(undefined4 *)(plVar7 + 3);
  local_124 = *(undefined4 *)((long)plVar7 + 0x1c);
  local_128 = *(undefined4 *)((long)plVar7 + 0xc);
  local_11c = 0;
  local_118 = *(undefined4 *)(plVar7 + 2);
  local_114 = *(undefined4 *)(plVar7 + 4);
  local_100 = *(undefined4 *)(plVar7 + 8);
  local_10c = 0;
  local_fc = 0x3f800000;
  local_130 = uVar17;
  uStack_120 = uVar15;
  uStack_110 = uVar16;
  if (param_8) {
                    /* try { // try from 009befd0 to 009befdb has its CatchHandler @ 009bf214 */
    (**(code **)(*plVar7 + 0x10))(plVar7,local_f8);
    local_178 = 0;
    *(undefined4 *)(plVar7 + 0x1c) = 5;
    local_170 = *(undefined2 *)(param_3 + 8);
    local_168 = 0;
    local_16e = *(undefined2 *)(param_3 + 10);
    local_1f8 = *(undefined4 *)(param_3 + 8);
    local_230 = (void *)0x0;
    plVar7[0x18] = (long)&local_178;
    local_1c0 = local_138;
    uStack_1bc = local_128;
    local_1cc = *(undefined8 *)(param_3 + 0x34);
    local_228 = '\x01';
    local_1b8 = local_118;
    uStack_1b4 = uStack_134;
    local_188 = *(undefined4 *)(param_4 + 8);
    local_23c = 0;
    uStack_238 = 0;
    local_200 = &PTR__ContactResultCallback_00fe1510;
    local_1f0 = &PTR__OBBArrayContactResultCallback_00fe1548;
    local_1c4 = 0;
    local_1e0 = 0;
    uStack_1d8 = 0;
    local_1d0 = 0;
    local_194 = local_100;
    local_190 = *(undefined8 *)param_4;
    local_1b0 = local_124;
    uStack_1ac = local_114;
    local_19c = local_108;
                    /* try { // try from 009bf090 to 009bf0c3 has its CatchHandler @ 009bf21c */
    plStack_1e8 = plVar7;
    local_1a8 = uVar17;
    uStack_1a4 = uVar15;
    local_1a0 = uVar16;
    local_180 = auStack_240;
    btBoxShape::getAabb((btBoxShape *)local_f8,(btTransform *)plVar8,abStack_210,abStack_220);
    (**(code **)(**(long **)(param_1 + 0x60) + 0x38))
              (*(long **)(param_1 + 0x60),abStack_210,abStack_220,&local_1f0);
    if (local_23c != 0) {
      uVar6 = 0;
      uVar3 = local_23c;
      do {
        uVar4 = (ulong)*(uint *)(param_9 + 4);
        pbVar2 = *(btCollisionObject **)((long)local_230 + (long)(int)uVar6 * 8);
        if (0 < (int)*(uint *)(param_9 + 4)) {
          ppbVar5 = *(btCollisionObject ***)(param_9 + 0x10);
          do {
            if (*ppbVar5 == pbVar2) {
              if ((int)uVar4 != 0) goto LAB_009bf0dc;
              break;
            }
            uVar4 = uVar4 - 1;
            ppbVar5 = ppbVar5 + 1;
          } while (uVar4 != 0);
        }
                    /* try { // try from 009bf118 to 009bf12f has its CatchHandler @ 009bf220 */
        btCollisionWorld::contactPairTest
                  ((btCollisionWorld *)param_1,(btCollisionObject *)plVar7,pbVar2,
                   (ContactResultCallback *)param_3,param_2,false);
        uVar3 = local_23c;
        if (param_3[0x3c] != (OBBContactResultCallback)0x0) break;
LAB_009bf0dc:
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar3);
    }
    if ((local_230 != (void *)0x0) && (local_228 != '\0')) {
                    /* try { // try from 009bf1b8 to 009bf1bb has its CatchHandler @ 009bf210 */
      btAlignedFreeInternal(local_230);
    }
  }
  else {
    *(undefined4 *)(param_3 + 0x40) = local_138;
    *(undefined4 *)(param_3 + 0x44) = local_128;
    *(undefined4 *)(param_3 + 0x48) = local_118;
    *(undefined4 *)(param_3 + 0x4c) = uStack_134;
    *(undefined4 *)(param_3 + 0x50) = local_124;
    *(undefined4 *)(param_3 + 0x54) = local_114;
    *(undefined4 *)(param_3 + 0x58) = uVar17;
    *(undefined4 *)(param_3 + 0x5c) = uVar15;
    *(undefined4 *)(param_3 + 0x60) = uVar16;
    *(long *)(param_3 + 100) = local_108;
    *(undefined4 *)(param_3 + 0x6c) = local_100;
    uVar15 = *(undefined4 *)(param_4 + 8);
    *(undefined8 *)(param_3 + 0x70) = *(undefined8 *)param_4;
    *(undefined4 *)(param_3 + 0x78) = uVar15;
                    /* try { // try from 009bf174 to 009bf1a3 has its CatchHandler @ 009bf218 */
    btBoxShape::getAabb((btBoxShape *)local_f8,(btTransform *)plVar8,(btVector3 *)&local_200,
                        (btVector3 *)&local_178);
    (**(code **)(**(long **)(param_1 + 0x60) + 0x38))
              (*(long **)(param_1 + 0x60),&local_200,&local_178,param_3 + 0x10);
  }
  uVar15 = *(undefined4 *)(param_3 + 0x30);
  btPolyhedralConvexShape::~btPolyhedralConvexShape((btPolyhedralConvexShape *)local_f8);
  if (*(long *)(lVar1 + 0x28) != local_a8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar15;
}


