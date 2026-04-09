// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: prepareTransformation
// Entry Point: 006f6a78
// Size: 948 bytes
// Signature: undefined __thiscall prepareTransformation(TextureOverlayRenderer * this, Matrix4x4 * param_1, float param_2, float param_3, float param_4, float param_5, float param_6, float param_7, float param_8)


/* TextureOverlayRenderer::prepareTransformation(Matrix4x4&, float, float, float, float, float,
   float, float) */

void __thiscall
TextureOverlayRenderer::prepareTransformation
          (TextureOverlayRenderer *this,Matrix4x4 *param_1,float param_2,float param_3,float param_4
          ,float param_5,float param_6,float param_7,float param_8)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float local_18;
  float fStack_14;
  
  if (((OverlayRenderManager::getInstance()::obj & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&OverlayRenderManager::getInstance()::obj), iVar1 != 0)) {
                    /* try { // try from 006f6dac to 006f6db7 has its CatchHandler @ 006f6e30 */
    OverlayRenderManager::OverlayRenderManager
              ((OverlayRenderManager *)OverlayRenderManager::getInstance()::obj);
    __cxa_atexit(OverlayRenderManager::~OverlayRenderManager,
                 OverlayRenderManager::getInstance()::obj,&PTR_LOOP_00fd8de0);
    __cxa_guard_release(&OverlayRenderManager::getInstance()::obj);
  }
  uVar2 = OverlayRenderManager::getOverlayWidth();
  if (((OverlayRenderManager::getInstance()::obj & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&OverlayRenderManager::getInstance()::obj), iVar1 != 0)) {
                    /* try { // try from 006f6df4 to 006f6dff has its CatchHandler @ 006f6e2c */
    OverlayRenderManager::OverlayRenderManager
              ((OverlayRenderManager *)OverlayRenderManager::getInstance()::obj);
    __cxa_atexit(OverlayRenderManager::~OverlayRenderManager,
                 OverlayRenderManager::getInstance()::obj,&PTR_LOOP_00fd8de0);
    __cxa_guard_release(&OverlayRenderManager::getInstance()::obj);
  }
  uVar3 = OverlayRenderManager::getOverlayHeight();
  if (param_6 == 0.0) {
    fVar12 = 0.0;
    fVar13 = 0.0;
    fVar8 = 0.0;
    fVar7 = 0.0;
    fVar6 = 0.0;
    fVar5 = 1.0;
    fVar4 = 1.0;
  }
  else {
    fVar13 = (float)(uVar2 & 0xffffffff) / (float)(uVar3 & 0xffffffff);
    fVar12 = 1.0 / fVar13;
    sincosf(param_6,&fStack_14,&local_18);
    fVar14 = -param_8;
    fVar6 = local_18 * fVar12 * 0.0;
    fVar7 = fStack_14 * -(fVar12 * 0.0);
    fVar5 = (float)NEON_fmadd(fStack_14,0,local_18 * fVar12);
    fVar12 = (float)NEON_fmadd(local_18,0,fStack_14 * -fVar12);
    fVar4 = local_18 + fVar7;
    fVar15 = (float)NEON_fmadd(fStack_14,0,fVar6);
    fVar7 = (float)NEON_fmadd(local_18,0,fVar7);
    fVar5 = fVar13 * fVar5;
    fVar8 = fVar13 * (fStack_14 + fVar6);
    fVar13 = fVar13 * fVar15;
    fVar15 = (float)NEON_fmsub(param_7,fVar5,fVar12 * fVar14);
    fVar10 = (float)NEON_fmsub(param_7,fVar8,fVar4 * fVar14);
    fVar6 = (float)NEON_fmsub(param_7,fVar13,fVar7 * fVar14);
    fVar6 = fVar6 + 0.0;
    param_2 = param_2 + param_7 + fVar15 + 0.0;
    param_3 = param_3 + param_8 + fVar10 + 0.0;
  }
  fVar8 = fVar8 * param_4;
  fVar5 = fVar5 * param_4;
  fVar13 = fVar13 * param_4;
  fVar4 = fVar4 * param_5;
  fVar12 = fVar12 * param_5;
  fVar7 = fVar7 * param_5;
  uVar11 = NEON_fmadd(fVar5,*(undefined4 *)(this + 0x510),fVar8 * *(float *)(this + 0x520));
  uVar11 = NEON_fmadd(fVar13,*(undefined4 *)(this + 0x530),uVar11);
  *(undefined4 *)param_1 = uVar11;
  uVar11 = NEON_fmadd(fVar5,*(undefined4 *)(this + 0x514),fVar8 * *(float *)(this + 0x524));
  uVar11 = NEON_fmadd(fVar13,*(undefined4 *)(this + 0x534),uVar11);
  *(undefined4 *)(param_1 + 4) = uVar11;
  uVar11 = NEON_fmadd(fVar5,*(undefined4 *)(this + 0x518),fVar8 * *(float *)(this + 0x528));
  uVar9 = *(undefined4 *)(this + 0x538);
  *(undefined4 *)(param_1 + 0xc) = 0;
  uVar11 = NEON_fmadd(fVar13,uVar9,uVar11);
  *(undefined4 *)(param_1 + 8) = uVar11;
  uVar11 = NEON_fmadd(fVar12,*(undefined4 *)(this + 0x510),fVar4 * *(float *)(this + 0x520));
  uVar11 = NEON_fmadd(fVar7,*(undefined4 *)(this + 0x530),uVar11);
  *(undefined4 *)(param_1 + 0x10) = uVar11;
  uVar11 = NEON_fmadd(fVar12,*(undefined4 *)(this + 0x514),fVar4 * *(float *)(this + 0x524));
  uVar11 = NEON_fmadd(fVar7,*(undefined4 *)(this + 0x534),uVar11);
  *(undefined4 *)(param_1 + 0x14) = uVar11;
  uVar11 = NEON_fmadd(fVar12,*(undefined4 *)(this + 0x518),fVar4 * *(float *)(this + 0x528));
  uVar9 = *(undefined4 *)(this + 0x538);
  *(undefined4 *)(param_1 + 0x1c) = 0;
  uVar11 = NEON_fmadd(fVar7,uVar9,uVar11);
  *(undefined4 *)(param_1 + 0x18) = uVar11;
  fVar12 = (float)NEON_fmadd(*(undefined4 *)(this + 0x510),0,*(float *)(this + 0x520) * 0.0);
  *(float *)(param_1 + 0x20) = *(float *)(this + 0x530) + fVar12;
  fVar12 = (float)NEON_fmadd(*(undefined4 *)(this + 0x514),0,*(float *)(this + 0x524) * 0.0);
  *(float *)(param_1 + 0x24) = *(float *)(this + 0x534) + fVar12;
  fVar12 = (float)NEON_fmadd(*(undefined4 *)(this + 0x518),0,*(float *)(this + 0x528) * 0.0);
  fVar7 = *(float *)(this + 0x538);
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(float *)(param_1 + 0x28) = fVar7 + fVar12;
  uVar11 = NEON_fmadd(param_2,*(undefined4 *)(this + 0x510),param_3 * *(float *)(this + 0x520));
  fVar12 = (float)NEON_fmadd(fVar6,*(undefined4 *)(this + 0x530),uVar11);
  *(float *)(param_1 + 0x30) = *(float *)(this + 0x540) + fVar12;
  uVar11 = NEON_fmadd(param_2,*(undefined4 *)(this + 0x514),param_3 * *(float *)(this + 0x524));
  fVar12 = (float)NEON_fmadd(fVar6,*(undefined4 *)(this + 0x534),uVar11);
  *(float *)(param_1 + 0x34) = *(float *)(this + 0x544) + fVar12;
  uVar11 = NEON_fmadd(param_2,*(undefined4 *)(this + 0x518),param_3 * *(float *)(this + 0x528));
  fVar6 = (float)NEON_fmadd(fVar6,*(undefined4 *)(this + 0x538),uVar11);
  fVar12 = *(float *)(this + 0x548);
  *(undefined4 *)(param_1 + 0x3c) = 0x3f800000;
  *(float *)(param_1 + 0x38) = fVar12 + fVar6;
  return;
}


