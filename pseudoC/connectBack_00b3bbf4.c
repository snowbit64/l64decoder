// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: connectBack
// Entry Point: 00b3bbf4
// Size: 1004 bytes
// Signature: undefined __thiscall connectBack(MasterServerManager * this, NetworkAddress * param_1, uint param_2)


/* MasterServerManager::connectBack(NetworkAddress const&, unsigned int) */

void __thiscall
MasterServerManager::connectBack(MasterServerManager *this,NetworkAddress *param_1,uint param_2)

{
  MasterServerManager *pMVar1;
  NetworkAddress NVar2;
  undefined2 uVar3;
  long lVar4;
  int iVar5;
  LuauScriptSystem *this_00;
  undefined *puVar6;
  long lVar7;
  ENetNetworkManager *pEVar8;
  ulong uVar9;
  undefined4 local_1b8 [2];
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
  undefined4 local_60;
  undefined2 local_5c;
  undefined local_5a;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  if (*(long *)(this + 0x4b8) == 0) {
    if (this[0x4c0] == (MasterServerManager)0x0) {
      this[0x4c0] = (MasterServerManager)0x0;
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign((char *)(this + 0x4c8));
      if (*(void **)(this + 0x4b8) != (void *)0x0) {
        operator_delete(*(void **)(this + 0x4b8));
      }
      puVar6 = (undefined *)operator_new(1);
      *(undefined **)(this + 0x4b8) = puVar6;
      *puVar6 = 1;
      iVar5 = *(int *)(this + 0x178);
    }
    else {
      iVar5 = *(int *)(this + 0x178);
    }
    if (iVar5 != 0) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar5 != 0))
      {
                    /* try { // try from 00b3bfa4 to 00b3bfaf has its CatchHandler @ 00b3bfe0 */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                         "Error: Connecting to back server, still connected state: %u\n",
                         (ulong)*(uint *)(this + 0x178));
      goto LAB_00b3be54;
    }
    *(undefined2 *)(this + 0x1d4) = 0;
    this[0x38] = (MasterServerManager)0x0;
    lVar7 = ENetNetworkManager::getInstance();
    *(MasterServerManager **)(lVar7 + 0x1b8) = this;
    pEVar8 = (ENetNetworkManager *)ENetNetworkManager::getInstance();
    uVar9 = ENetNetworkManager::connect
                      (pEVar8,*(undefined8 *)param_1,this + 0x128,0x40,0,0,0,this + 0x188);
    if ((uVar9 & 1) != 0) {
      *(uint *)(this + 0x18c) = param_2;
      this[0x17c] = (MasterServerManager)0x1;
      uVar3 = *(undefined2 *)(param_1 + 1);
      NVar2 = *param_1;
      *(undefined4 *)(this + 0x178) = 5;
      *(undefined2 *)(this + 0x184) = uVar3;
      *(NetworkAddress *)(this + 0x180) = NVar2;
      goto LAB_00b3be54;
    }
    local_1b8[0] = 1;
  }
  else {
    local_1b8[0] = 9;
  }
  local_5a = 0;
  local_5c = 0;
  local_60 = 0;
  local_6a = 0;
  local_6c = 0;
  local_70 = 0;
  local_7a = 0;
  local_7c = 0;
  local_80 = 0;
  local_8a = 0;
  local_8c = 0;
  local_90 = 0;
  local_9a = 0;
  local_9c = 0;
  local_a0 = 0;
  local_aa = 0;
  local_ac = 0;
  local_b0 = 0;
  local_ba = 0;
  local_bc = 0;
  local_c0 = 0;
  local_ca = 0;
  local_cc = 0;
  local_d0 = 0;
  local_da = 0;
  local_dc = 0;
  local_e0 = 0;
  local_ea = 0;
  local_ec = 0;
  local_f0 = 0;
  local_fa = 0;
  local_fc = 0;
  local_100 = 0;
  local_10a = 0;
  local_10c = 0;
  local_110 = 0;
  local_11a = 0;
  local_11c = 0;
  local_120 = 0;
  local_12a = 0;
  local_12c = 0;
  local_130 = 0;
  local_13a = 0;
  local_13c = 0;
  local_140 = 0;
  local_14a = 0;
  local_14c = 0;
  local_150 = 0;
  local_15a = 0;
  local_15c = 0;
  local_160 = 0;
  local_16a = 0;
  local_16c = 0;
  local_170 = 0;
  local_17a = 0;
  local_17c = 0;
  local_180 = 0;
  local_18a = 0;
  local_18c = 0;
  local_190 = 0;
  local_19a = 0;
  local_19c = 0;
  local_1a0 = 0;
  local_1aa = 0;
  local_1ac = 0;
  local_1b0 = 1;
  ScriptSystemManager::getInstance();
  this_00 = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
  pMVar1 = this + 0x299;
  if (((byte)this[0x298] & 1) != 0) {
    pMVar1 = *(MasterServerManager **)(this + 0x2a8);
  }
  LuauScriptSystem::invokeScriptMethod
            (this_00,(char *)pMVar1,(MethodInvocation *)local_1b8,1,0,*(void **)(this + 0x328));
LAB_00b3be54:
  if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


