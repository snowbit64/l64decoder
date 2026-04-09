// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b9258
// Entry Point: 007b9258
// Size: 844 bytes
// Signature: undefined FUN_007b9258(void)


void FUN_007b9258(long param_1,float *param_2)

{
  long lVar1;
  DetourNavigationMeshQuery *this;
  LuauScriptSystem *pLVar2;
  void *pvVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  bool local_1ec [4];
  float local_1e8 [2];
  undefined4 local_1e0;
  undefined2 local_1dc;
  undefined local_1da;
  undefined local_1d8;
  undefined4 local_1d0;
  undefined2 local_1cc;
  undefined local_1ca;
  float local_1c8;
  undefined4 local_1c0;
  undefined2 local_1bc;
  undefined local_1ba;
  float local_1b8;
  undefined4 local_1b0;
  undefined2 local_1ac;
  undefined local_1aa;
  float local_1a8;
  undefined4 local_1a0;
  undefined2 local_19c;
  undefined local_19a;
  undefined4 local_198;
  undefined4 local_190;
  undefined2 local_18c;
  undefined local_18a;
  undefined4 local_188;
  undefined4 local_180;
  undefined2 local_17c;
  undefined local_17a;
  undefined4 local_178;
  undefined4 local_170;
  undefined2 local_16c;
  undefined local_16a;
  undefined4 local_160;
  undefined2 local_15c;
  undefined local_15a;
  undefined4 local_150;
  undefined2 local_14c;
  undefined local_14a;
  undefined4 local_140;
  undefined2 local_13c;
  undefined local_13a;
  undefined4 local_130;
  undefined2 local_12c;
  undefined local_12a;
  undefined4 local_120;
  undefined2 local_11c;
  undefined local_11a;
  undefined4 local_110;
  undefined2 local_10c;
  undefined local_10a;
  undefined4 local_100;
  undefined2 local_fc;
  undefined local_fa;
  undefined4 local_f0;
  undefined2 local_ec;
  undefined local_ea;
  undefined4 local_e0;
  undefined2 local_dc;
  undefined local_da;
  undefined4 local_d0;
  undefined2 local_cc;
  undefined local_ca;
  undefined4 local_c0;
  undefined2 local_bc;
  undefined local_ba;
  undefined4 local_b0;
  undefined2 local_ac;
  undefined local_aa;
  undefined4 local_a0;
  undefined2 local_9c;
  undefined local_9a;
  undefined4 local_90;
  undefined2 local_8c;
  undefined local_8a;
  float local_88;
  float fStack_84;
  undefined4 local_80;
  float local_78;
  float fStack_74;
  undefined4 local_70;
  float local_68;
  undefined4 uStack_64;
  undefined4 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  param_2[0x42] = 5.605194e-45;
  *(undefined *)(param_2 + 0x44) = 0;
  param_2[0x46] = 4.203895e-45;
  param_2[0x40] = param_2[0xc];
  this = (DetourNavigationMeshQuery *)NavigationMeshScenegraphNode::getNavigationMeshQuery();
  if (this != (DetourNavigationMeshQuery *)0x0) {
    RawTransformGroup::updateWorldTransformation();
    fVar4 = param_2[4] - *(float *)(param_1 + 0xec);
    fVar7 = *param_2 - *(float *)(param_1 + 0xe8);
    fVar9 = param_2[8] - *(float *)(param_1 + 0xf0);
    uVar6 = NEON_fmadd(fVar7,*(undefined4 *)(param_1 + 0xb8),fVar4 * *(float *)(param_1 + 0xbc));
    uVar8 = NEON_fmadd(fVar7,*(undefined4 *)(param_1 + 200),fVar4 * *(float *)(param_1 + 0xcc));
    uVar5 = NEON_fmadd(fVar7,*(undefined4 *)(param_1 + 0xd8),fVar4 * *(float *)(param_1 + 0xdc));
    local_68 = (float)NEON_fmadd(fVar9,*(undefined4 *)(param_1 + 0xc0),uVar6);
    uStack_64 = NEON_fmadd(fVar9,*(undefined4 *)(param_1 + 0xd0),uVar8);
    local_60 = NEON_fmadd(fVar9,*(undefined4 *)(param_1 + 0xe0),uVar5);
    fVar4 = (float)DetourNavigationMeshQuery::findDistanceToWall
                             (this,&local_68,param_2[0xc],local_1ec,&local_88,&local_78);
    param_2[0x42] = 5.605194e-45;
    param_2[0x40] = fVar4;
    param_2[0x46] = 4.203895e-45;
    *(bool *)(param_2 + 0x44) = local_1ec[0];
    if (**(char **)(param_2 + 0x10) != '\0') {
      if (param_2[0x16] == 1.121039e-44) {
        pvVar3 = *(void **)(param_2 + 0x14);
      }
      else {
        pvVar3 = (void *)0x0;
      }
      local_da = 0;
      uVar6 = NEON_fmadd(local_88,*(undefined4 *)(param_1 + 0xb8),
                         fStack_84 * *(float *)(param_1 + 200));
      uVar8 = NEON_fmadd(local_88,*(undefined4 *)(param_1 + 0xbc),
                         fStack_84 * *(float *)(param_1 + 0xcc));
      uVar5 = NEON_fmadd(local_88,*(undefined4 *)(param_1 + 0xc0),
                         fStack_84 * *(float *)(param_1 + 0xd0));
      local_dc = 0;
      local_1c8 = (float)NEON_fmadd(local_80,*(undefined4 *)(param_1 + 0xd8),uVar6);
      local_1b8 = (float)NEON_fmadd(local_80,*(undefined4 *)(param_1 + 0xdc),uVar8);
      local_1a8 = (float)NEON_fmadd(local_80,*(undefined4 *)(param_1 + 0xe0),uVar5);
      local_ca = 0;
      local_1c8 = local_1c8 + *(float *)(param_1 + 0xe8);
      local_1b8 = *(float *)(param_1 + 0xec) + local_1b8;
      uVar5 = NEON_fmadd(local_78,*(undefined4 *)(param_1 + 0xb8),
                         *(float *)(param_1 + 200) * fStack_74);
      uVar6 = NEON_fmadd(local_78,*(undefined4 *)(param_1 + 0xbc),
                         *(float *)(param_1 + 0xcc) * fStack_74);
      local_cc = 0;
      local_ba = 0;
      uVar8 = NEON_fmadd(local_78,*(undefined4 *)(param_1 + 0xc0),
                         *(float *)(param_1 + 0xd0) * fStack_74);
      local_1a8 = *(float *)(param_1 + 0xf0) + local_1a8;
      local_198 = NEON_fmadd(local_70,*(undefined4 *)(param_1 + 0xd8),uVar5);
      local_188 = NEON_fmadd(local_70,*(undefined4 *)(param_1 + 0xdc),uVar6);
      local_bc = 0;
      local_aa = 0;
      local_178 = NEON_fmadd(local_70,*(undefined4 *)(param_1 + 0xe0),uVar8);
      local_ac = 0;
      local_9a = 0;
      local_9c = 0;
      local_8a = 0;
      local_8c = 0;
      local_1da = 0;
      local_1dc = 0;
      local_1ca = 0;
      local_1cc = 0;
      local_1ba = 0;
      local_1bc = 0;
      local_1aa = 0;
      local_1ac = 0;
      local_19a = 0;
      local_19c = 0;
      local_18a = 0;
      local_18c = 0;
      local_17a = 0;
      local_17c = 0;
      local_16a = 0;
      local_16c = 0;
      local_160 = 0;
      local_15a = 0;
      local_15c = 0;
      local_150 = 0;
      local_14a = 0;
      local_14c = 0;
      local_140 = 0;
      local_13a = 0;
      local_13c = 0;
      local_130 = 0;
      local_12a = 0;
      local_12c = 0;
      local_120 = 0;
      local_11a = 0;
      local_11c = 0;
      local_110 = 0;
      local_10a = 0;
      local_10c = 0;
      local_100 = 0;
      local_fa = 0;
      local_fc = 0;
      local_f0 = 0;
      local_ea = 0;
      local_ec = 0;
      local_e0 = 0;
      local_d0 = 0;
      local_c0 = 0;
      local_b0 = 0;
      local_a0 = 0;
      local_90 = 0;
      local_1e0 = 4;
      local_1d8 = local_1ec[0];
      local_1d0 = 3;
      local_1c0 = 4;
      local_1b0 = 4;
      local_1a0 = 4;
      local_190 = 4;
      local_180 = 4;
      local_170 = 4;
      local_1e8[0] = fVar4;
      ScriptSystemManager::getInstance();
      pLVar2 = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
      LuauScriptSystem::invokeScriptMethod
                (pLVar2,*(char **)(param_2 + 0x10),(MethodInvocation *)local_1e8,8,0,pvVar3);
    }
  }
  if ((param_2[0x16] == 1.121039e-44) && (*(long *)(param_2 + 0x14) != 0)) {
    ScriptSystemManager::getInstance();
    pLVar2 = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
    LuauScriptSystem::destroyObjectRef(pLVar2,*(void **)(param_2 + 0x14));
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


