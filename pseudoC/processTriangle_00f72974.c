// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: processTriangle
// Entry Point: 00f72974
// Size: 536 bytes
// Signature: undefined __thiscall processTriangle(btTriangleConvexcastCallback * this, btVector3 * param_1, int param_2, int param_3)


/* btTriangleConvexcastCallback::processTriangle(btVector3*, int, int) */

undefined8 __thiscall
btTriangleConvexcastCallback::processTriangle
          (btTriangleConvexcastCallback *this,btVector3 *param_1,int param_2,int param_3)

{
  long lVar1;
  ulong uVar2;
  undefined4 uVar3;
  float fVar4;
  undefined **local_340;
  undefined **ppuStack_338;
  undefined *local_330;
  undefined ***local_328;
  undefined8 uStack_320;
  undefined ***local_318;
  undefined8 uStack_310;
  btTriangleConvexcastCallback local_308;
  undefined **local_300 [17];
  float local_278;
  float fStack_274;
  float local_270;
  undefined auStack_268 [16];
  float local_258;
  undefined8 local_250;
  undefined4 local_248;
  undefined auStack_240 [308];
  undefined4 local_10c;
  undefined local_f4;
  undefined **local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_bc;
  undefined8 uStack_b4;
  undefined4 local_9c;
  undefined8 *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  long local_58;
  
  local_328 = &local_340;
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_318 = &local_d8;
  uStack_b4 = 0x3f800000;
  local_bc = 0x3f8000003f800000;
  uStack_80 = *(undefined8 *)(param_1 + 8);
  local_88 = *(undefined8 *)param_1;
  uStack_70 = *(undefined8 *)(param_1 + 0x18);
  uStack_78 = *(undefined8 *)(param_1 + 0x10);
  local_c0 = 0xffffffff;
  local_d8 = &PTR__btPolyhedralConvexShape_00fe1bf8;
  local_d0 = 1;
  uStack_60 = *(undefined8 *)(param_1 + 0x28);
  local_68 = *(undefined8 *)(param_1 + 0x20);
  local_9c = *(undefined4 *)(this + 0xd4);
  local_248 = *(undefined4 *)(this + 0xd8);
  local_10c = 0x38d1b717;
  local_c8 = 0;
  local_340 = &PTR__btConvexPenetrationDepthSolver_0101be48;
  local_90 = (undefined8 *)0x0;
  ppuStack_338 = &PTR__btConvexCast_0101b3d0;
  local_330 = auStack_240;
  local_f4 = 0;
  uStack_320 = *(undefined8 *)(this + 8);
  uStack_310 = 0;
  local_250 = 0;
  local_308 = this[0xdc];
  local_300[0] = &PTR_DebugDraw_00feb2a8;
  local_258 = 1.0;
  uVar2 = btContinuousConvexCollision::calcTimeOfImpact
                    ((btContinuousConvexCollision *)&ppuStack_338,(btTransform *)(this + 0x10),
                     (btTransform *)(this + 0x50),(btTransform *)(this + 0x90),
                     (btTransform *)(this + 0x90),(CastResult *)local_300);
  if ((uVar2 & 1) != 0) {
    uVar3 = NEON_fmadd(fStack_274,fStack_274,local_278 * local_278);
    fVar4 = (float)NEON_fmadd(local_270,local_270,uVar3);
    if ((0.0001 < fVar4) && (local_258 < *(float *)(this + 0xd0))) {
      fVar4 = 1.0 / SQRT(fVar4);
      local_278 = fVar4 * local_278;
      fStack_274 = fVar4 * fStack_274;
      local_270 = fVar4 * local_270;
      (**(code **)(*(long *)this + 0x20))(this,&local_278,auStack_268,param_2,param_3,param_1);
    }
  }
  local_d8 = &PTR__btPolyhedralConvexShape_0101ade0;
  if (local_90 != (undefined8 *)0x0) {
    (**(code **)*local_90)();
    if (local_90 != (undefined8 *)0x0) {
      gNumAlignedFree = gNumAlignedFree + 1;
      (*(code *)PTR_FUN_01048e40)();
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


