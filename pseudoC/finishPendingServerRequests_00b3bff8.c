// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: finishPendingServerRequests
// Entry Point: 00b3bff8
// Size: 1236 bytes
// Signature: undefined __thiscall finishPendingServerRequests(MasterServerManager * this, bool param_1)


/* MasterServerManager::finishPendingServerRequests(bool) */

undefined8 __thiscall
MasterServerManager::finishPendingServerRequests(MasterServerManager *this,bool param_1)

{
  MasterServerManager *pMVar1;
  int iVar2;
  long lVar3;
  LuauScriptSystem *pLVar4;
  undefined8 uVar5;
  undefined4 local_1a8;
  undefined4 local_1a0;
  undefined2 local_19c;
  undefined local_19a;
  undefined4 local_198;
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
  undefined4 local_a0;
  undefined2 local_9c;
  undefined local_9a;
  undefined4 local_90;
  undefined2 local_8c;
  undefined local_8a;
  undefined4 local_80;
  undefined2 local_7c;
  undefined local_7a;
  undefined4 local_70;
  undefined2 local_6c;
  undefined local_6a;
  undefined4 local_60;
  undefined2 local_5c;
  undefined local_5a;
  undefined4 local_50;
  undefined2 local_4c;
  undefined local_4a;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  if (this[0x208] == (MasterServerManager)0x0) {
    if (*(int *)(this + 0x20c) == 0) {
      uVar5 = 0;
      iVar2 = *(int *)(this + 0x330);
      goto joined_r0x00b3c32c;
    }
    *(undefined4 *)(this + 0x20c) = 0;
    if (param_1) goto LAB_00b3c1dc;
  }
  else {
    this[0x208] = (MasterServerManager)0x0;
    if (param_1) {
      local_19a = 0;
      local_19c = 0;
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
      local_a0 = 0;
      local_9a = 0;
      local_9c = 0;
      local_90 = 0;
      local_8a = 0;
      local_8c = 0;
      local_80 = 0;
      local_7a = 0;
      local_7c = 0;
      local_70 = 0;
      local_6a = 0;
      local_6c = 0;
      local_60 = 0;
      local_5a = 0;
      local_5c = 0;
      local_50 = 0;
      local_4a = 0;
      local_4c = 0;
      local_1a8 = 0;
      local_1a0 = 1;
      local_198 = 0;
      local_190 = 1;
      ScriptSystemManager::getInstance();
      pLVar4 = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
      pMVar1 = this + 0x2c9;
      if (((byte)this[0x2c8] & 1) != 0) {
        pMVar1 = *(MasterServerManager **)(this + 0x2d8);
      }
      LuauScriptSystem::invokeScriptMethod
                (pLVar4,(char *)pMVar1,(MethodInvocation *)&local_1a8,2,0,*(void **)(this + 0x328));
      local_1a8 = CONCAT31(local_1a8._1_3_,1);
      local_1a0 = 3;
      ScriptSystemManager::getInstance();
      pLVar4 = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
      pMVar1 = this + 0x2e1;
      if (((byte)this[0x2e0] & 1) != 0) {
        pMVar1 = *(MasterServerManager **)(this + 0x2f0);
      }
      LuauScriptSystem::invokeScriptMethod
                (pLVar4,(char *)pMVar1,(MethodInvocation *)&local_1a8,1,0,*(void **)(this + 0x328));
      if (*(int *)(this + 0x20c) != 0) {
        *(undefined4 *)(this + 0x20c) = 0;
LAB_00b3c1dc:
        local_1a0 = 0;
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
        local_a0 = 0;
        local_9a = 0;
        local_9c = 0;
        local_90 = 0;
        local_8a = 0;
        local_8c = 0;
        local_80 = 0;
        local_7a = 0;
        local_7c = 0;
        local_70 = 0;
        local_6a = 0;
        local_6c = 0;
        local_60 = 0;
        local_5a = 0;
        local_5c = 0;
        local_50 = 0;
        local_4a = 0;
        local_4c = 0;
        ScriptSystemManager::getInstance();
        pLVar4 = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
        pMVar1 = this + 0x311;
        if (((byte)this[0x310] & 1) != 0) {
          pMVar1 = *(MasterServerManager **)(this + 800);
        }
        LuauScriptSystem::invokeScriptMethod
                  (pLVar4,(char *)pMVar1,(MethodInvocation *)&local_1a8,0,0,*(void **)(this + 0x328)
                  );
      }
    }
    else if (*(int *)(this + 0x20c) != 0) {
      uVar5 = 1;
      *(undefined4 *)(this + 0x20c) = 0;
      iVar2 = *(int *)(this + 0x330);
      goto joined_r0x00b3c32c;
    }
  }
  uVar5 = 1;
  iVar2 = *(int *)(this + 0x330);
joined_r0x00b3c32c:
  if (iVar2 != 0) {
    uVar5 = 1;
    *(undefined4 *)(this + 0x330) = 0;
    if (param_1) {
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
      local_a0 = 0;
      local_9a = 0;
      local_9c = 0;
      local_90 = 0;
      local_8a = 0;
      local_8c = 0;
      local_80 = 0;
      local_7a = 0;
      local_7c = 0;
      local_70 = 0;
      local_6a = 0;
      local_6c = 0;
      local_5a = 0;
      local_5c = 0;
      local_4a = 0;
      local_4c = 0;
      local_60 = 0;
      local_50 = 0;
      local_1a8 = 6;
      local_1a0 = 1;
      ScriptSystemManager::getInstance();
      pLVar4 = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
      pMVar1 = this + 0x371;
      if (((byte)this[0x370] & 1) != 0) {
        pMVar1 = *(MasterServerManager **)(this + 0x380);
      }
      LuauScriptSystem::invokeScriptMethod
                (pLVar4,(char *)pMVar1,(MethodInvocation *)&local_1a8,1,0,*(void **)(this + 0x388));
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


