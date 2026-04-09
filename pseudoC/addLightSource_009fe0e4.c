// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addLightSource
// Entry Point: 009fe0e4
// Size: 664 bytes
// Signature: undefined __thiscall addLightSource(LightList * this, LightSource * param_1, Matrix4x4 * param_2, float param_3)


/* LightList::addLightSource(LightSource*, Matrix4x4 const*, float) */

void __thiscall
LightList::addLightSource(LightList *this,LightSource *param_1,Matrix4x4 *param_2,float param_3)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  LightList *pLVar6;
  ulong uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  Matrix4x4 *local_2f8;
  undefined8 local_2f0;
  LightSource *pLStack_2e8;
  float local_2e0;
  float fStack_2dc;
  undefined4 local_2d8;
  undefined8 local_2d0 [2];
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined local_2b0;
  undefined4 local_2ac;
  undefined8 local_2a8;
  LightSource *pLStack_2a0;
  undefined8 local_298;
  undefined4 local_290;
  Frustum aFStack_280 [8];
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined local_178;
  undefined4 local_174;
  undefined8 local_170;
  undefined4 local_168;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  fVar10 = *(float *)(param_1 + 0x124);
  if (*(float *)(this + 200) < *(float *)(param_1 + 0x124)) {
    fVar10 = *(float *)(this + 200);
  }
  fVar10 = *(float *)(param_1 + 0x194) + fVar10;
  fVar8 = fVar10 + -25.0;
  if (fVar10 <= 25.0) {
    fVar8 = 0.0;
  }
  if ((fVar10 <= fVar8) ||
     ((fVar9 = 1.0, fVar8 < param_3 && (fVar9 = (fVar10 - param_3) / (fVar10 - fVar8), fVar9 <= 0.0)
      ))) goto LAB_009fe348;
  local_2d8 = *(undefined4 *)(param_1 + 0x16c);
  local_2f0 = 0;
  local_2e0 = -(param_3 - *(float *)(param_1 + 0x194));
  local_2f8 = param_2;
  pLStack_2e8 = param_1;
  fStack_2dc = fVar9;
  uVar3 = LightSource::getLightFlags();
  if (((uVar3 >> 5 & 1) != 0) || (uVar4 = LightSource::isMergedShadowActive(), (uVar4 & 1) != 0)) {
    lVar5 = EngineManager::getInstance();
    if (*(float *)(lVar5 + 0x1e0) != 0.0) {
      this[0x30] = (LightList)0x1;
    }
  }
  iVar1 = *(int *)(param_1 + 0x16c);
  if (iVar1 == 0) {
    pLVar6 = this + 0x68;
LAB_009fe1e0:
    FUN_009fe37c(pLVar6,&local_2f8);
  }
  else if ((iVar1 == 2) || (iVar1 == 1)) {
    pLVar6 = this + 0x50;
    goto LAB_009fe1e0;
  }
  uVar4 = LightSource::isMergedShadowActive();
  if ((uVar4 & 1) != 0) {
    lVar5 = *(long *)(this + 0x98);
    if (*(long *)(this + 0xa0) != lVar5) {
      uVar4 = 0;
      do {
        uVar7 = LightSource::isShadowMergedWithLight
                          (*(LightSource **)(lVar5 + uVar4 * 0x140 + 0x30),param_1);
        if ((uVar7 & 1) != 0) goto LAB_009fe348;
        lVar5 = *(long *)(this + 0x98);
        uVar4 = (ulong)((int)uVar4 + 1);
        uVar7 = (*(long *)(this + 0xa0) - lVar5 >> 6) * -0x3333333333333333;
      } while (uVar4 <= uVar7 && uVar7 - uVar4 != 0);
    }
    LightSource::computeMergedShadow();
    Frustum::Frustum(aFStack_280);
    local_2b8 = local_180;
    local_298 = local_170;
    local_290 = local_168;
    uStack_1c0 = uStack_a0;
    local_1c8 = local_a8;
    uStack_1b0 = uStack_90;
    local_1b8 = local_98;
    uStack_200 = uStack_e0;
    local_208 = local_e8;
    uStack_1a0 = uStack_80;
    local_1a8 = local_88;
    local_2ac = local_174;
    local_2a8 = *(undefined8 *)(param_1 + 8);
    uStack_1d0 = uStack_b0;
    local_1d8 = local_b8;
    uStack_1f0 = uStack_d0;
    local_1f8 = local_d8;
    local_2b0 = local_178;
    uStack_220 = uStack_100;
    local_228 = local_108;
    uStack_270 = uStack_150;
    local_278 = local_158;
    uStack_1e0 = uStack_c0;
    local_1e8 = local_c8;
    uStack_240 = uStack_120;
    local_248 = local_128;
    uStack_260 = uStack_140;
    local_268 = local_148;
    uStack_230 = uStack_110;
    local_238 = local_118;
    uStack_210 = uStack_f0;
    local_218 = local_f8;
    local_2d0[0] = local_190;
    local_2c0 = uStack_188;
    local_198 = local_78;
    uStack_250 = uStack_130;
    local_258 = local_138;
    pLStack_2a0 = param_1;
    FUN_009fe4b4(this + 0x98,local_2d0);
    LightSource::cacheMergedShadowQueueItem
              (param_1,(MergedShadowQueueItem *)(*(long *)(this + 0xa0) + -0x140));
  }
LAB_009fe348:
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


