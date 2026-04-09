// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: overlapBoxSingle
// Entry Point: 009bf244
// Size: 752 bytes
// Signature: undefined __cdecl overlapBoxSingle(Bt2World * param_1, btDispatcher * param_2, Matrix4x4 * param_3, Vector3 * param_4, btCollisionObject * param_5, bool param_6)


/* Bt2SceneQueryUtil::overlapBoxSingle(Bt2World*, btDispatcher*, Matrix4x4 const&, Vector3 const&,
   btCollisionObject const*, bool) */

bool Bt2SceneQueryUtil::overlapBoxSingle
               (Bt2World *param_1,btDispatcher *param_2,Matrix4x4 *param_3,Vector3 *param_4,
               btCollisionObject *param_5,bool param_6)

{
  long lVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 local_2c0;
  float local_2b8;
  float *local_2b0;
  float local_2a8;
  float local_2a4;
  float local_2a0;
  float local_298;
  float local_294;
  float local_290;
  float local_288;
  float local_284;
  float local_280;
  undefined8 local_278;
  undefined4 local_270;
  undefined8 local_268;
  undefined8 local_238;
  undefined4 local_230;
  undefined4 local_22c;
  undefined4 local_228;
  undefined4 local_224;
  undefined4 local_220;
  undefined4 uStack_21c;
  undefined4 local_218;
  undefined4 local_214;
  undefined4 local_210;
  undefined4 uStack_20c;
  undefined4 local_208;
  undefined4 local_204;
  undefined8 local_200;
  undefined4 local_1f8;
  undefined4 local_1f4;
  undefined8 *local_178;
  long *plStack_170;
  long *local_160;
  undefined4 local_158;
  int local_f0;
  long local_e8 [5];
  float local_bc;
  float fStack_b8;
  float local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  long local_98;
  
  lVar1 = tpidr_el0;
  local_98 = *(long *)(lVar1 + 0x28);
  local_238 = *(undefined8 *)param_4;
  local_22c = 0;
  local_230 = *(undefined4 *)(param_4 + 8);
  btBoxShape::btBoxShape((btBoxShape *)local_e8,(btVector3 *)&local_238);
                    /* try { // try from 009bf2b8 to 009bf32f has its CatchHandler @ 009bf54c */
  fVar3 = (float)(**(code **)(local_e8[0] + 0x60))(local_e8);
  fVar4 = (float)(**(code **)(local_e8[0] + 0x60))(local_e8);
  fVar5 = (float)(**(code **)(local_e8[0] + 0x60))(local_e8);
  local_ac = 0;
  fVar6 = (float)(**(code **)(local_e8[0] + 0x60))(local_e8);
  fVar7 = (float)(**(code **)(local_e8[0] + 0x60))(local_e8);
  fVar8 = (float)(**(code **)(local_e8[0] + 0x60))(local_e8);
  local_b0 = 0;
  local_bc = (fVar3 + local_bc) - fVar6;
  fStack_b8 = (fVar4 + fStack_b8) - fVar7;
  local_b4 = (fVar5 + local_b4) - fVar8;
                    /* try { // try from 009bf354 to 009bf35f has its CatchHandler @ 009bf548 */
  btCollisionObject::btCollisionObject((btCollisionObject *)&local_238);
  local_22c = *(undefined4 *)(param_3 + 0x10);
  uStack_21c = *(undefined4 *)(param_3 + 0x14);
  local_230 = *(undefined4 *)param_3;
  local_220 = *(undefined4 *)(param_3 + 4);
  plStack_170 = local_e8;
  local_224 = 0;
  local_214 = 0;
  local_f0 = local_f0 + 1;
  local_228 = *(undefined4 *)(param_3 + 0x20);
  local_218 = *(undefined4 *)(param_3 + 0x24);
  local_210 = *(undefined4 *)(param_3 + 8);
  local_204 = 0;
  uStack_20c = *(undefined4 *)(param_3 + 0x18);
  local_208 = *(undefined4 *)(param_3 + 0x28);
  local_270 = 0xffffffff;
  local_178 = &local_278;
  local_200 = *(undefined8 *)(param_3 + 0x30);
  local_1f8 = *(undefined4 *)(param_3 + 0x38);
  local_1f4 = 0;
  local_158 = 5;
  local_278 = 0;
  local_268 = 0;
  local_160 = plStack_170;
  if (param_6) {
                    /* try { // try from 009bf3ec to 009bf417 has its CatchHandler @ 009bf538 */
    btBoxShape::getAabb((btBoxShape *)local_e8,(btTransform *)&local_230,(btVector3 *)&local_2c0,
                        (btVector3 *)&local_288);
    (**(code **)(**(long **)(param_5 + 200) + 0x10))
              (*(long **)(param_5 + 200),param_5 + 8,&local_298,&local_2a8);
    if ((local_2a8 < (float)local_2c0) || (local_288 < local_298)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((local_2a0 < local_2b8) || (local_280 < local_290)) {
      bVar2 = false;
    }
    if (((local_2a4 < local_2c0._4_4_) || (local_284 < local_294)) || (!bVar2)) {
      bVar2 = false;
      goto LAB_009bf4e0;
    }
  }
  local_2b0 = &local_288;
  local_288 = (float)((uint)local_288 & 0xffffff00);
  local_2b8 = -NAN;
  local_2c0 = &PTR__ContactResultCallback_00fe1eb0;
                    /* try { // try from 009bf4b0 to 009bf4cb has its CatchHandler @ 009bf534 */
  btCollisionWorld::contactPairTest
            ((btCollisionWorld *)param_1,(btCollisionObject *)&local_238,param_5,
             (ContactResultCallback *)&local_2c0,param_2,false);
  bVar2 = local_288._0_1_ != '\0';
LAB_009bf4e0:
  btCollisionObject::~btCollisionObject((btCollisionObject *)&local_238);
  btPolyhedralConvexShape::~btPolyhedralConvexShape((btPolyhedralConvexShape *)local_e8);
  if (*(long *)(lVar1 + 0x28) == local_98) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


