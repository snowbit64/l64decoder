// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0079ba50
// Entry Point: 0079ba50
// Size: 776 bytes
// Signature: undefined FUN_0079ba50(void)


void FUN_0079ba50(uint *param_1)

{
  long *plVar1;
  void **ppvVar2;
  long lVar3;
  EntityRegistryManager *this;
  MeshSplitShape *pMVar4;
  ulong uVar5;
  LuauScriptSystem *pLVar6;
  void *pvVar7;
  char *pcVar8;
  float local_230;
  float local_22c;
  float local_228;
  float fStack_224;
  void *local_220;
  void *local_218;
  undefined8 local_210;
  undefined4 local_208 [2];
  undefined4 local_200;
  undefined2 local_1fc;
  undefined local_1fa;
  byte local_1f8;
  undefined4 local_1f0;
  undefined2 local_1ec;
  undefined local_1ea;
  byte local_1e8;
  undefined4 local_1e0;
  undefined2 local_1dc;
  undefined local_1da;
  float local_1d8;
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
  undefined4 local_190;
  undefined2 local_18c;
  undefined local_18a;
  undefined4 local_180;
  undefined2 local_17c;
  undefined local_17a;
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
  Matrix4x4 aMStack_a8 [64];
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  if (param_1[0x36] == 8) {
    pvVar7 = *(void **)(param_1 + 0x34);
  }
  else {
    pvVar7 = (void *)0x0;
  }
  this = (EntityRegistryManager *)EntityRegistryManager::getInstance();
  pMVar4 = (MeshSplitShape *)EntityRegistryManager::getEntityById(this,*param_1);
  if ((pMVar4 != (MeshSplitShape *)0x0) && (((byte)pMVar4[0x12] >> 2 & 1) != 0)) {
    FUN_0079b7dc(param_1,1,aMStack_a8);
    if (param_1[0x32] == 6) {
      pcVar8 = (char *)0x0;
      if (**(char **)(param_1 + 0x30) != '\0') {
        pcVar8 = *(char **)(param_1 + 0x30);
      }
    }
    else {
      pcVar8 = (char *)0x0;
    }
    ppvVar2 = (void **)0x0;
    if (pcVar8 != (char *)0x0) {
      ppvVar2 = &local_220;
    }
    local_220 = (void *)0x0;
    local_218 = (void *)0x0;
    local_210 = 0;
                    /* try { // try from 0079bb04 to 0079bb27 has its CatchHandler @ 0079bd58 */
    uVar5 = MeshSplitManager::splitShape
                      ((MeshSplitManager *)&MeshSplitManager::s_singletonMeshSplitManager,pMVar4,
                       aMStack_a8,(float)param_1[0x28],(float)param_1[0x2c],&fStack_224,&local_228,
                       &local_22c,&local_230,(vector *)ppvVar2);
    if ((uVar5 & 1) != 0) {
      if ((pcVar8 != (char *)0x0) && (local_218 != local_220)) {
        uVar5 = 0;
        do {
          plVar1 = (long *)((long)local_220 + uVar5 * 0x10);
          local_1fa = 0;
          local_1fc = 0;
          local_1ea = 0;
          local_1ec = 0;
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
          local_190 = 0;
          local_18a = 0;
          local_18c = 0;
          local_180 = 0;
          local_17a = 0;
          local_17c = 0;
          local_170 = 0;
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
          local_da = 0;
          local_dc = 0;
          local_d0 = 0;
          local_ca = 0;
          local_cc = 0;
          local_c0 = 0;
          local_ba = 0;
          local_bc = 0;
          local_b0 = 0;
          local_aa = 0;
          local_ac = 0;
          local_200 = 1;
          local_208[0] = *(undefined4 *)(*plVar1 + 0x18);
          local_1f0 = 3;
          local_1f8 = *(byte *)(plVar1 + 1) & 1;
          local_1d8 = fStack_224;
          local_1c8 = local_228;
          local_1e0 = 3;
          local_1e8 = *(byte *)(plVar1 + 1) >> 1 & 1;
          local_1d0 = 4;
          local_1b8 = local_22c;
          local_1c0 = 4;
          local_1b0 = 4;
          local_1a8 = local_230;
          local_1a0 = 4;
                    /* try { // try from 0079bca0 to 0079bcbf has its CatchHandler @ 0079bd5c */
          ScriptSystemManager::getInstance();
          pLVar6 = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
          LuauScriptSystem::invokeScriptMethod
                    (pLVar6,pcVar8,(MethodInvocation *)local_208,7,0,pvVar7);
          uVar5 = (ulong)((int)uVar5 + 1);
        } while (uVar5 < (ulong)((long)local_218 - (long)local_220 >> 4));
      }
      param_1[0x40] = (uint)fStack_224;
      param_1[0x44] = (uint)local_228;
      param_1[0x42] = 4;
      param_1[0x46] = 4;
      param_1[0x4a] = 4;
      param_1[0x48] = (uint)local_22c;
      param_1[0x4c] = (uint)local_230;
      param_1[0x4e] = 4;
    }
    if (local_220 != (void *)0x0) {
      local_218 = local_220;
      operator_delete(local_220);
    }
  }
  if (pvVar7 != (void *)0x0) {
    ScriptSystemManager::getInstance();
    pLVar6 = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
    LuauScriptSystem::destroyObjectRef(pLVar6,pvVar7);
  }
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


