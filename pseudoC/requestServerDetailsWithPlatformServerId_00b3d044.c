// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: requestServerDetailsWithPlatformServerId
// Entry Point: 00b3d044
// Size: 832 bytes
// Signature: undefined __thiscall requestServerDetailsWithPlatformServerId(MasterServerManager * this, char * param_1)


/* MasterServerManager::requestServerDetailsWithPlatformServerId(char const*) */

void __thiscall
MasterServerManager::requestServerDetailsWithPlatformServerId
          (MasterServerManager *this,char *param_1)

{
  MasterServerManager *pMVar1;
  long lVar2;
  int iVar3;
  ENetNetworkManager *pEVar4;
  GsBitStream *this_00;
  size_t __n;
  LuauScriptSystem *this_01;
  void *__dest;
  ulong uVar5;
  undefined8 local_1b8;
  size_t local_1b0;
  void *local_1a8;
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
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if (*(int *)(this + 0x20c) != 0) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0)) {
                    /* try { // try from 00b3d340 to 00b3d34b has its CatchHandler @ 00b3d384 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "Error: Reqesting server details with platform id while another request is pending.\n"
                      );
    goto LAB_00b3d304;
  }
  if (*(int *)(this + 0x178) != 7) {
    local_1b0 = local_1b0 & 0xff00000000000000;
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
    ScriptSystemManager::getInstance();
    this_01 = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
    pMVar1 = this + 0x311;
    if (((byte)this[0x310] & 1) != 0) {
      pMVar1 = *(MasterServerManager **)(this + 800);
    }
    LuauScriptSystem::invokeScriptMethod
              (this_01,(char *)pMVar1,(MethodInvocation *)&local_1b8,0,0,*(void **)(this + 0x328));
    goto LAB_00b3d304;
  }
  pEVar4 = (ENetNetworkManager *)ENetNetworkManager::getInstance();
  this_00 = (GsBitStream *)ENetNetworkManager::createWriteStream(pEVar4,0,true);
  local_1b8._0_1_ = 5;
  GsBitStream::writeBits(this_00,(uchar *)&local_1b8,8,true);
  local_1b8._0_1_ = 1;
  GsBitStream::writeBits(this_00,(uchar *)&local_1b8,1,true);
  __n = strlen(param_1);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (void *)((ulong)&local_1b8 | 1);
    local_1b8 = CONCAT71(local_1b8._1_7_,(char)((int)__n << 1));
    if (__n != 0) goto LAB_00b3d290;
  }
  else {
    uVar5 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar5);
    local_1b8 = uVar5 | 1;
    local_1b0 = __n;
    local_1a8 = __dest;
LAB_00b3d290:
    memcpy(__dest,param_1,__n);
  }
  *(undefined *)((long)__dest + __n) = 0;
                    /* try { // try from 00b3d2a4 to 00b3d2af has its CatchHandler @ 00b3d398 */
  MasterServerUtil::writeString(this_00,(basic_string *)&local_1b8);
  if ((local_1b8 & 1) != 0) {
    operator_delete(local_1a8);
  }
  *(undefined4 *)(this + 0x20c) = 1;
  this[0x210] = (MasterServerManager)0x1;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)(this + 0x220));
  pEVar4 = (ENetNetworkManager *)ENetNetworkManager::getInstance();
  ENetNetworkManager::send(pEVar4,this_00,2,3,'\0',(uint *)(this + 0x188),false);
  pEVar4 = (ENetNetworkManager *)ENetNetworkManager::getInstance();
  ENetNetworkManager::deleteWriteStream(pEVar4,this_00);
LAB_00b3d304:
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


