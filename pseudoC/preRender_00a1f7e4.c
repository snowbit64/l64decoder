// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: preRender
// Entry Point: 00a1f7e4
// Size: 808 bytes
// Signature: undefined preRender(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* RenderQueue::preRender() */

void RenderQueue::preRender(void)

{
  int iVar1;
  long lVar2;
  long *in_x0;
  undefined8 uVar3;
  CB_RenderArgParameters *pCVar4;
  long lVar5;
  ulong uVar6;
  void *__dest;
  LightSource *this;
  long lVar7;
  long lVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float local_b0;
  float local_ac;
  undefined8 local_a8;
  float local_a0;
  undefined8 local_98;
  float local_90;
  undefined8 local_88;
  float local_80;
  float local_78;
  float fStack_74;
  float local_70;
  float local_68;
  float fStack_64;
  float local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if (in_x0[3] == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = *(long *)(in_x0[3] + 0x40);
  }
  uVar3 = (**(code **)(**(long **)in_x0[1] + 0x138))();
  pCVar4 = (CB_RenderArgParameters *)
           (**(code **)(*(long *)in_x0[10] + 0x10))((long *)in_x0[10],uVar3);
  lVar7 = *in_x0;
  lVar5 = EngineManager::getInstance();
  iVar1 = *(int *)(lVar5 + 0x24c);
  RenderArgs::setupCB((RenderArgs *)in_x0[5],pCVar4,(PostFxParams *)(lVar7 + 0x2c8));
  IndirectLightRenderController::getIndirectDiffuseSH
            (*(IndirectLightRenderController **)(*in_x0 + 0x830),(float *)(pCVar4 + 0x110),
             (float *)(pCVar4 + 0x120),(float *)(pCVar4 + 0x130));
  if ((*(byte *)(in_x0[5] + 0x3a8) & 1) == 0) {
    *(undefined4 *)(pCVar4 + 0x16c) = 0;
    *(undefined8 *)(pCVar4 + 0x1b8) = 0;
    *(undefined4 *)(pCVar4 + 0x1b4) = 0x3f800000;
    *(undefined4 *)(pCVar4 + 0x180) = 0x3f800000;
  }
  else {
    LightListRasterizer::getShaderArgs
              ((LightListRasterizer *)in_x0[4],(float *)(pCVar4 + 0x1b4),(float *)(pCVar4 + 0x16c),
               (float *)(pCVar4 + 0x180),(uint *)&local_68);
    LightList::computeLightTextureOffsets
              ((LightList *)in_x0[3],(uint *)&local_78,(uint *)&local_88,(uint *)&local_98);
    *(float *)(pCVar4 + 0x1b8) = local_78;
    *(float *)(pCVar4 + 0x1bc) = local_68;
  }
  if (iVar1 == 0) {
    if (lVar8 == 0) {
      *(undefined8 *)(pCVar4 + 0x150) = 0;
      *(undefined8 *)(pCVar4 + 0x158) = 0;
    }
    else {
      this = *(LightSource **)(lVar8 + 0x10);
      uVar6 = LightSource::getScatteringDirection(this,(Vector3 *)&local_68);
      if ((uVar6 & 1) == 0) {
        local_68 = *(float *)(this + 0xd8);
        fStack_64 = *(float *)(this + 0xdc);
        uVar9 = NEON_fmadd(local_68,local_68,fStack_64 * fStack_64);
        local_60 = *(float *)(this + 0xe0);
        fVar11 = (float)NEON_fmadd(local_60,local_60,uVar9);
        fVar10 = 1.0;
        if (1e-06 < fVar11) {
          fVar10 = 1.0 / SQRT(fVar11);
        }
        local_68 = local_68 * fVar10;
        fStack_64 = fStack_64 * fVar10;
        local_60 = local_60 * fVar10;
      }
      local_80 = *(float *)(lVar7 + 0x52c) * 3.141593;
      local_88 = CONCAT44((float)((ulong)*(undefined8 *)(this + 0x188) >> 0x20) * local_80,
                          (float)*(undefined8 *)(this + 0x188) * local_80);
      local_80 = local_80 * *(float *)(this + 400);
      LightScatteringUtil::computeSunDirectionalLightColor
                (&local_68,(float *)&local_88,*(float *)(in_x0[5] + 0x358),*(float *)(lVar7 + 0x528)
                 ,*(float *)(lVar7 + 0x524),*(float *)(lVar7 + 0x520),1.0,1.0,&local_78);
      LightScatteringUtil::computeRayleighScatteringCoefficients(1.0,(float *)&local_98);
      LightScatteringUtil::computeMieScatteringCoefficients(*(float *)(lVar7 + 0x524),&local_ac);
      LightScatteringUtil::rayleighPhaseFunction((float *)&local_98,0.75,(float *)&local_a8);
      LightScatteringUtil::cornetteShankPhase(local_ac,*(float *)(lVar7 + 0x518),0.75,&local_b0);
      fVar10 = (float)((ulong)local_98 >> 0x20);
      *(ulong *)(pCVar4 + 0x150) =
           CONCAT44((fStack_74 * (local_b0 + (float)((ulong)local_a8 >> 0x20))) /
                    (local_ac + fVar10),
                    (local_78 * (local_b0 + (float)local_a8)) / (local_ac + (float)local_98));
      *(float *)(pCVar4 + 0x15c) = local_ac + ((float)local_98 + fVar10 + local_90) / 3.0;
      *(float *)(pCVar4 + 0x158) = (local_70 * (local_b0 + local_a0)) / (local_ac + local_90);
    }
  }
  (**(code **)(*(long *)in_x0[10] + 0x18))((long *)in_x0[10],uVar3);
  if (*(int *)(in_x0[5] + 0x550) != 0) {
    __dest = (void *)(**(code **)(*(long *)in_x0[0xd] + 0x10))
                               ((long *)in_x0[0xd],uVar3,0,*(int *)(in_x0[5] + 0x550) * 0xc,1);
    memcpy(__dest,(void *)(in_x0[5] + 1000),(ulong)*(uint *)(in_x0[5] + 0x550) * 0xc);
    (**(code **)(*(long *)in_x0[0xd] + 0x18))((long *)in_x0[0xd],uVar3);
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


