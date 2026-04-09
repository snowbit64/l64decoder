// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onMasterServerList
// Entry Point: 00b3e888
// Size: 668 bytes
// Signature: undefined __cdecl onMasterServerList(GsBitStream * param_1, uint param_2)


/* MasterServerManager::onMasterServerList(GsBitStream*, unsigned int) */

void MasterServerManager::onMasterServerList(GsBitStream *param_1,uint param_2)

{
  GsBitStream *pGVar1;
  long lVar2;
  LuauScriptSystem *pLVar3;
  undefined4 local_1c4;
  undefined4 local_1c0;
  undefined2 local_1bc;
  undefined4 local_1b8;
  undefined4 local_1b0;
  undefined2 local_1ac;
  undefined8 local_1a8;
  undefined4 local_1a0;
  ushort local_19c;
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
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if (*(int *)(param_1 + 0x178) == 2) {
    *(undefined4 *)(param_1 + 0x178) = 3;
    disconnect((MasterServerManager *)param_1,true,false);
    NetworkAddress::readFromStream((NetworkAddress *)&local_1b0,(GsBitStream *)(ulong)param_2);
    local_1c4 = 0;
    GsBitStream::readBits((GsBitStream *)(ulong)param_2,(uchar *)&local_1c4,0x20,true);
    *(undefined8 *)(param_1 + 0x420) = *(undefined8 *)(param_1 + 0x418);
    local_1c0 = local_1b0;
    local_1bc = local_1ac;
    local_1b8 = local_1c4;
    FUN_00b4098c(param_1 + 0x418,&local_1c0);
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
    local_1a8 = (undefined *)CONCAT44(local_1a8._4_4_,1);
    local_1a0 = 1;
    ScriptSystemManager::getInstance();
    pLVar3 = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
    pGVar1 = param_1 + 0x251;
    if (((byte)param_1[0x250] & 1) != 0) {
      pGVar1 = *(GsBitStream **)(param_1 + 0x260);
    }
    LuauScriptSystem::invokeScriptMethod
              (pLVar3,(char *)pGVar1,(MethodInvocation *)&local_1a8,1,0,*(void **)(param_1 + 0x328))
    ;
    local_190 = 1;
    local_19c = local_19c & 0xfffe;
    local_1a8 = &DAT_0050a39f;
    local_1a0 = 6;
    local_198 = local_1c4;
    ScriptSystemManager::getInstance();
    pLVar3 = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
    pGVar1 = param_1 + 0x239;
    if (((byte)param_1[0x238] & 1) != 0) {
      pGVar1 = *(GsBitStream **)(param_1 + 0x248);
    }
    LuauScriptSystem::invokeScriptMethod
              (pLVar3,(char *)pGVar1,(MethodInvocation *)&local_1a8,2,0,*(void **)(param_1 + 0x328))
    ;
    ScriptSystemManager::getInstance();
    pLVar3 = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
    pGVar1 = param_1 + 0x269;
    if (((byte)param_1[0x268] & 1) != 0) {
      pGVar1 = *(GsBitStream **)(param_1 + 0x278);
    }
    LuauScriptSystem::invokeScriptMethod
              (pLVar3,(char *)pGVar1,(MethodInvocation *)&local_1a8,0,0,*(void **)(param_1 + 0x328))
    ;
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


