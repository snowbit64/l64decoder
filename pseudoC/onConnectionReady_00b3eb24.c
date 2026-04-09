// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onConnectionReady
// Entry Point: 00b3eb24
// Size: 564 bytes
// Signature: undefined __cdecl onConnectionReady(GsBitStream * param_1, uint param_2)


/* MasterServerManager::onConnectionReady(GsBitStream*, unsigned int) */

void MasterServerManager::onConnectionReady(GsBitStream *param_1,uint param_2)

{
  GsBitStream *pGVar1;
  int iVar2;
  long lVar3;
  LuauScriptSystem *this;
  ulong uVar4;
  undefined auVar5 [16];
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
  
  uVar4 = (ulong)param_2;
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  iVar2 = *(int *)(param_1 + 0x178);
  if ((iVar2 == 9) || (iVar2 == 6)) {
    *(undefined4 *)(param_1 + 0x1d8) = 0;
    *(undefined4 *)(param_1 + 0x178) = 7;
    if ((iVar2 == 9) && (param_1[0x38] != (GsBitStream)0x0)) {
      initiateSendAddServer();
    }
    if (*(int *)(param_1 + 0x330) == 3) {
      *(undefined4 *)(param_1 + 0x330) = 0;
      auVar5 = initiateSendConnectionToServerRequest((uint)param_1,*(uint *)(param_1 + 0x350));
      uVar4 = auVar5._8_8_;
      param_1 = auVar5._0_8_;
    }
    else if (*(int *)(param_1 + 0x20c) == 2) {
      *(undefined4 *)(param_1 + 0x20c) = 0;
      if (param_1[0x210] == (GsBitStream)0x0) {
        auVar5 = requestServerDetails
                           ((MasterServerManager *)param_1,*(uint *)(param_1 + 0x214),
                            *(uint *)(param_1 + 0x218),*(uint *)(param_1 + 0x21c));
        uVar4 = auVar5._8_8_;
        param_1 = auVar5._0_8_;
      }
      else {
        pGVar1 = param_1 + 0x221;
        if (((byte)param_1[0x220] & 1) != 0) {
          pGVar1 = *(GsBitStream **)(param_1 + 0x230);
        }
        auVar5 = requestServerDetailsWithPlatformServerId
                           ((MasterServerManager *)param_1,(char *)pGVar1);
        uVar4 = auVar5._8_8_;
        param_1 = auVar5._0_8_;
      }
    }
    else {
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
      this = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
      pGVar1 = param_1 + 0x281;
      if (((byte)param_1[0x280] & 1) != 0) {
        pGVar1 = *(GsBitStream **)(param_1 + 0x290);
      }
      auVar5 = LuauScriptSystem::invokeScriptMethod
                         (this,(char *)pGVar1,aMStack_198,0,0,*(void **)(param_1 + 0x328));
      uVar4 = auVar5._8_8_;
      param_1 = auVar5._0_8_;
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1,uVar4);
}


