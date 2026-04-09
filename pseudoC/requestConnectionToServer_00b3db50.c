// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: requestConnectionToServer
// Entry Point: 00b3db50
// Size: 928 bytes
// Signature: undefined __thiscall requestConnectionToServer(MasterServerManager * this, char * param_1, uint param_2, char * param_3, char * param_4, void * param_5)


/* MasterServerManager::requestConnectionToServer(char const*, unsigned int, char const*, char
   const*, void*) */

void __thiscall
MasterServerManager::requestConnectionToServer
          (MasterServerManager *this,char *param_1,uint param_2,char *param_3,char *param_4,
          void *param_5)

{
  NetworkAddress NVar1;
  uint uVar2;
  long lVar3;
  LuauScriptSystem *this_00;
  int iVar4;
  NetworkAddress *pNVar5;
  undefined4 local_1c8 [2];
  undefined4 local_1c0;
  undefined2 local_1bc;
  undefined local_1ba;
  undefined4 local_1b0;
  undefined2 local_1ac;
  undefined local_1aa;
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
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  if ((((*(int *)(this + 0x178) == 7) && (*(int *)(this + 0x330) == 0)) &&
      (this[0x38] == (MasterServerManager)0x0)) && (*(uint *)(this + 0x440) == param_2)) {
    NVar1 = *(NetworkAddress *)(this + 0x448);
    uVar2 = *(uint *)(this + 0x444);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((char *)(this + 0x358));
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((char *)(this + 0x370));
    *(void **)(this + 0x388) = param_5;
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((char *)(this + 0x338));
    *(uint *)(this + 0x350) = uVar2;
    *(NetworkAddress *)(this + 0x354) = NVar1;
    if (*(NetworkAddress *)(this + 0x18c) == NVar1) {
      initiateSendConnectionToServerRequest((uint)this,uVar2);
      goto LAB_00b3dd40;
    }
    for (pNVar5 = *(NetworkAddress **)(this + 0x418); pNVar5 != *(NetworkAddress **)(this + 0x420);
        pNVar5 = pNVar5 + 3) {
      if (pNVar5[2] == NVar1) {
        disconnect(this,true,false);
        *(undefined4 *)(this + 0x330) = 3;
        connectBack(this,pNVar5,pNVar5[2]);
        goto LAB_00b3dd40;
      }
    }
    local_1ba = 0;
    local_1bc = 0;
    local_1b0 = 0;
    local_1aa = 0;
    local_1ac = 0;
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
    local_7a = 0;
    local_7c = 0;
    local_6a = 0;
    local_6c = 0;
    local_80 = 0;
    local_70 = 0;
    local_1c8[0] = 1;
    local_1c0 = 1;
    ScriptSystemManager::getInstance();
    this_00 = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
    iVar4 = 1;
  }
  else {
    local_1ba = 0;
    local_1bc = 0;
    local_1b0 = 0;
    local_1aa = 0;
    local_1ac = 0;
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
    local_7a = 0;
    local_7c = 0;
    local_6a = 0;
    local_6c = 0;
    local_80 = 0;
    local_70 = 0;
    local_1c8[0] = 1;
    local_1c0 = 1;
    ScriptSystemManager::getInstance();
    this_00 = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
    iVar4 = 0;
  }
  LuauScriptSystem::invokeScriptMethod
            (this_00,param_4,(MethodInvocation *)local_1c8,iVar4,0,param_5);
LAB_00b3dd40:
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


