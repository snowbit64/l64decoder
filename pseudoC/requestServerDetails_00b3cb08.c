// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: requestServerDetails
// Entry Point: 00b3cb08
// Size: 460 bytes
// Signature: undefined __thiscall requestServerDetails(MasterServerManager * this, uint param_1)


/* MasterServerManager::requestServerDetails(unsigned int) */

void __thiscall MasterServerManager::requestServerDetails(MasterServerManager *this,uint param_1)

{
  uint *puVar1;
  MasterServerManager *pMVar2;
  long lVar3;
  LuauScriptSystem *this_00;
  uint uVar4;
  uint uVar5;
  MethodInvocation aMStack_198 [8];
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
  undefined4 local_40;
  undefined2 local_3c;
  undefined local_3a;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  if (*(uint *)(this + 0x440) == param_1) {
    uVar4 = *(uint *)(this + 0x444);
    uVar5 = *(uint *)(this + 0x448);
  }
  else {
    if (*(uint *)(this + 0x430) <= param_1) {
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
      local_40 = 0;
      local_3a = 0;
      local_3c = 0;
      ScriptSystemManager::getInstance();
      this_00 = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
      pMVar2 = this + 0x311;
      if (((byte)this[0x310] & 1) != 0) {
        pMVar2 = *(MasterServerManager **)(this + 800);
      }
      LuauScriptSystem::invokeScriptMethod
                (this_00,(char *)pMVar2,aMStack_198,0,0,*(void **)(this + 0x328));
      goto LAB_00b3ccac;
    }
    puVar1 = (uint *)(*(long *)(this + 0x438) + (ulong)param_1 * 0x80);
    uVar4 = *puVar1;
    uVar5 = puVar1[1];
  }
  requestServerDetails(this,param_1,uVar4,uVar5);
LAB_00b3ccac:
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


