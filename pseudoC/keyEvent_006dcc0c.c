// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: keyEvent
// Entry Point: 006dcc0c
// Size: 1252 bytes
// Signature: undefined __thiscall keyEvent(EngineApplication * this, ushort param_1, uint param_2, uint param_3, bool param_4, bool param_5)


/* EngineApplication::keyEvent(unsigned short, unsigned int, unsigned int, bool, bool) */

undefined8 __thiscall
EngineApplication::keyEvent
          (EngineApplication *this,ushort param_1,uint param_2,uint param_3,bool param_4,
          bool param_5)

{
  uint uVar1;
  EngineManager EVar2;
  EngineApplication EVar3;
  uint uVar4;
  long lVar5;
  byte bVar6;
  EngineManager *this_00;
  long *plVar7;
  LuauScriptSystem *this_01;
  DeferredDebugRenderer *pDVar8;
  long lVar9;
  code *pcVar10;
  uint uVar11;
  ulong uVar12;
  float local_1d0 [2];
  undefined4 local_1c8;
  undefined2 local_1c4;
  undefined local_1c2;
  uint local_1c0;
  undefined4 local_1b8;
  undefined2 local_1b4;
  undefined local_1b2;
  uint local_1b0;
  undefined4 local_1a8;
  undefined2 local_1a4;
  undefined local_1a2;
  undefined local_1a0;
  undefined4 local_198;
  undefined2 local_194;
  undefined local_192;
  undefined4 local_188;
  undefined2 local_184;
  undefined local_182;
  undefined4 local_178;
  undefined2 local_174;
  undefined local_172;
  undefined4 local_168;
  undefined2 local_164;
  undefined local_162;
  undefined4 local_158;
  undefined2 local_154;
  undefined local_152;
  undefined4 local_148;
  undefined2 local_144;
  undefined local_142;
  undefined4 local_138;
  undefined2 local_134;
  undefined local_132;
  undefined4 local_128;
  undefined2 local_124;
  undefined local_122;
  undefined4 local_118;
  undefined2 local_114;
  undefined local_112;
  undefined4 local_108;
  undefined2 local_104;
  undefined local_102;
  undefined4 local_f8;
  undefined2 local_f4;
  undefined local_f2;
  undefined4 local_e8;
  undefined2 local_e4;
  undefined local_e2;
  undefined4 local_d8;
  undefined2 local_d4;
  undefined local_d2;
  undefined4 local_c8;
  undefined2 local_c4;
  undefined local_c2;
  undefined4 local_b8;
  undefined2 local_b4;
  undefined local_b2;
  undefined4 local_a8;
  undefined2 local_a4;
  undefined local_a2;
  undefined4 local_98;
  undefined2 local_94;
  undefined local_92;
  undefined4 local_88;
  undefined2 local_84;
  undefined local_82;
  undefined4 local_78;
  undefined2 local_74;
  undefined local_72;
  long local_70;
  
  lVar5 = tpidr_el0;
  local_70 = *(long *)(lVar5 + 0x28);
  if (this[0x298] == (EngineApplication)0x0) goto LAB_006dcff0;
  this_00 = (EngineManager *)EngineManager::getInstance();
  EVar2 = this_00[0x339];
  if (((EVar2 == (EngineManager)0x0) || (!param_4)) || (param_5)) goto switchD_006dcc90_caseD_11f;
  switch(param_2) {
  case 0x11b:
    this[0x1cc] = (EngineApplication)((byte)this[0x1cc] ^ 1);
    break;
  case 0x11c:
    local_1d0[0] = 0.0;
    bVar6 = EngineManager::getFrameLimiter(this_00,local_1d0);
    EngineManager::setFrameLimiter(this_00,(bool)(~bVar6 & 1),local_1d0[0]);
    break;
  case 0x11d:
    lVar9 = Renderer::getSharedRenderArgs();
    bVar6 = *(byte *)(lVar9 + 0x24);
    lVar9 = Renderer::getSharedRenderArgs();
    *(byte *)(lVar9 + 0x24) = bVar6 ^ 1;
    break;
  case 0x11e:
    EVar3 = this[0x1c1];
    uVar11 = (byte)EVar3 | 4;
    if ((param_3 & 3) == 0) {
      uVar11 = 1;
    }
    uVar1 = (byte)EVar3 + 5;
    uVar4 = 0;
    if (uVar1 != 0) {
      uVar4 = (*(int *)(this + 0x1ec) + uVar11) / uVar1;
    }
    *(uint *)(this + 0x1ec) = (*(int *)(this + 0x1ec) + uVar11) - uVar4 * uVar1;
    lVar9 = Renderer::getSharedRenderArgs();
    *(undefined *)(lVar9 + 0x78) = 1;
    switch(*(int *)(this + 0x1ec)) {
    case 0:
      lVar9 = Renderer::getSharedRenderArgs();
      *(undefined *)(lVar9 + 0x78) = 0;
      pDVar8 = (DeferredDebugRenderer *)Renderer::getDeferredDebugRenderer();
      DeferredDebugRenderer::setEnabledCategories(pDVar8,0);
      *(undefined **)(this + 0x1f0) = &DAT_0050a39f;
      break;
    case 1:
      pDVar8 = (DeferredDebugRenderer *)Renderer::getDeferredDebugRenderer();
      DeferredDebugRenderer::setEnabledCategories(pDVar8,0x40);
      *(char **)(this + 0x1f0) = "PHYSICS";
      break;
    case 2:
      pDVar8 = (DeferredDebugRenderer *)Renderer::getDeferredDebugRenderer();
      DeferredDebugRenderer::setEnabledCategories(pDVar8,2);
      *(char **)(this + 0x1f0) = "LIGHTSOURCE";
      break;
    case 3:
      pDVar8 = (DeferredDebugRenderer *)Renderer::getDeferredDebugRenderer();
      DeferredDebugRenderer::setEnabledCategories(pDVar8,4);
      *(char **)(this + 0x1f0) = "AUDIOSOURCE";
      break;
    case 4:
      pDVar8 = (DeferredDebugRenderer *)Renderer::getDeferredDebugRenderer();
      DeferredDebugRenderer::setEnabledCategories(pDVar8,0x200);
      *(char **)(this + 0x1f0) = "OCCLUDER";
      break;
    default:
      if ((EVar3 != (EngineApplication)0x0) && (*(int *)(this + 0x1ec) == 5)) {
        pDVar8 = (DeferredDebugRenderer *)Renderer::getDeferredDebugRenderer();
        DeferredDebugRenderer::setEnabledCategories(pDVar8,0x100);
        *(char **)(this + 0x1f0) = "AD_TRACKING";
      }
    }
    break;
  case 0x11f:
    break;
  case 0x120:
    toggleCamera();
    break;
  case 0x121:
    if ((param_3 & 0xc0) == 0) {
      StatsOverlayManager::getInstance();
      if ((param_3 & 3) == 0) {
        StatsOverlayManager::toggleStats();
      }
      else {
        StatsOverlayManager::toggleStatsPrev();
      }
    }
    else {
      StatsOverlayManager::getInstance();
      StatsOverlayManager::printStats();
    }
    break;
  case 0x122:
    if ((param_3 & 3) != 0) {
      ScenegraphPhysicsContextManager::getInstance();
      ScenegraphPhysicsContextManager::getContext();
      Bt2ScenegraphPhysicsContext::enqueueConnectVRD();
    }
    break;
  case 0x123:
    if ((param_3 & 3) != 0) {
      pcVar10 = *(code **)(**(long **)(this + 0x170) + 0xc0);
      goto LAB_006dce48;
    }
    break;
  case 0x124:
    uVar11 = *(uint *)(this + 0x210);
    lVar9 = *(long *)(this + 0x1f8);
    plVar7 = *(long **)(lVar9 + (ulong)uVar11 * 8);
    if ((param_3 & 0xc3) == 0) {
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x18))();
        uVar11 = *(uint *)(this + 0x210);
        lVar9 = *(long *)(this + 0x1f8);
      }
      uVar12 = (ulong)(uVar11 + 1);
      *(uint *)(this + 0x210) = uVar11 + 1;
      if (uVar12 == *(long *)(this + 0x200) - lVar9 >> 3) {
        uVar12 = 0;
        *(undefined4 *)(this + 0x210) = 0;
      }
      plVar7 = *(long **)(lVar9 + uVar12 * 8);
      if (plVar7 != (long *)0x0) {
        pcVar10 = *(code **)(*plVar7 + 0x10);
        goto LAB_006dce48;
      }
    }
    else if (plVar7 != (long *)0x0) {
      pcVar10 = *(code **)(*plVar7 + 0x20);
LAB_006dce48:
      (*pcVar10)();
    }
    break;
  default:
    if (param_2 != 0x60) break;
    Console::toggleActive();
    goto LAB_006dce78;
  }
switchD_006dcc90_caseD_11f:
  if (((param_2 != 0x60) && (param_4)) && (EVar2 != (EngineManager)0x0)) {
    Console::keyEvent((Console *)(this + 0x10),(uint)param_1,param_2,param_3,true,param_5);
  }
LAB_006dce78:
  if ((this[200] == (EngineApplication)0x0 || this[0xc9] == (EngineApplication)0x0) && (!param_5)) {
    local_1c2 = 0;
    local_c2 = 0;
    local_c4 = 0;
    local_b2 = 0;
    local_b4 = 0;
    local_a2 = 0;
    local_a4 = 0;
    local_92 = 0;
    local_94 = 0;
    local_82 = 0;
    local_84 = 0;
    local_72 = 0;
    local_74 = 0;
    local_1c4 = 0;
    local_1b2 = 0;
    local_1b4 = 0;
    local_1a2 = 0;
    local_1a4 = 0;
    local_192 = 0;
    local_194 = 0;
    local_188 = 0;
    local_182 = 0;
    local_184 = 0;
    local_178 = 0;
    local_172 = 0;
    local_174 = 0;
    local_168 = 0;
    local_162 = 0;
    local_164 = 0;
    local_158 = 0;
    local_152 = 0;
    local_154 = 0;
    local_148 = 0;
    local_142 = 0;
    local_144 = 0;
    local_138 = 0;
    local_132 = 0;
    local_134 = 0;
    local_128 = 0;
    local_122 = 0;
    local_124 = 0;
    local_118 = 0;
    local_112 = 0;
    local_114 = 0;
    local_108 = 0;
    local_102 = 0;
    local_104 = 0;
    local_f8 = 0;
    local_f2 = 0;
    local_f4 = 0;
    local_e8 = 0;
    local_e2 = 0;
    local_e4 = 0;
    local_d8 = 0;
    local_d2 = 0;
    local_d4 = 0;
    local_c8 = 0;
    local_b8 = 0;
    local_a8 = 0;
    local_98 = 0;
    local_88 = 0;
    local_78 = 0;
    local_1c8 = 1;
    local_1b8 = 1;
    local_1a8 = 1;
    local_198 = 3;
    local_1d0[0] = (float)(uint)param_1;
    local_1c0 = param_2;
    local_1b0 = param_3;
    local_1a0 = param_4;
    ScriptSystemManager::getInstance();
    this_01 = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
    LuauScriptSystem::invokeScriptMethod
              (this_01,"keyEvent",(MethodInvocation *)local_1d0,4,0,(void *)0x0);
  }
LAB_006dcff0:
  if (*(long *)(lVar5 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0;
}


