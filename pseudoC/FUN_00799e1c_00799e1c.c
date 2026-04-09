// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00799e1c
// Entry Point: 00799e1c
// Size: 820 bytes
// Signature: undefined FUN_00799e1c(void)


void FUN_00799e1c(char **param_1)

{
  undefined4 uVar1;
  long lVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  ENetNetworkManager *pEVar6;
  size_t sVar7;
  NetworkStream *this;
  GsBitStream *pGVar8;
  long **pplVar9;
  long **pplVar10;
  char *pcVar11;
  char *__s;
  long **pplVar12;
  uint local_64;
  undefined8 local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x21) = 1;
  if (((DAT_01053c80 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_01053c80), iVar3 != 0)) {
                    /* try { // try from 0079a084 to 0079a08f has its CatchHandler @ 0079a164 */
    ScriptingNetworkManager::ScriptingNetworkManager((ScriptingNetworkManager *)&DAT_01053c40);
    __cxa_atexit(ScriptingNetworkManager::~ScriptingNetworkManager,&DAT_01053c40,&PTR_LOOP_00fd8de0)
    ;
    __cxa_guard_release(&DAT_01053c80);
  }
  pplVar12 = DAT_01053c48;
  if (DAT_01053c48 != (long **)&DAT_01053c50) {
    do {
      NetworkStream::setReadStream((NetworkStream *)pplVar12[5],(GsBitStream *)0x0);
      if (pplVar12[5] != (long *)0x0) {
        (**(code **)(*pplVar12[5] + 8))();
      }
      pplVar9 = (long **)pplVar12[1];
      if ((long **)pplVar12[1] == (long **)0x0) {
        pplVar9 = pplVar12 + 2;
        pplVar10 = (long **)*pplVar9;
        if ((long **)*pplVar10 != pplVar12) {
          do {
            plVar4 = *pplVar9;
            pplVar9 = (long **)(plVar4 + 2);
            pplVar10 = (long **)*pplVar9;
          } while (*pplVar10 != plVar4);
        }
      }
      else {
        do {
          pplVar10 = pplVar9;
          pplVar9 = (long **)*pplVar10;
        } while ((long **)*pplVar10 != (long **)0x0);
      }
      pplVar12 = pplVar10;
    } while (pplVar10 != (long **)&DAT_01053c50);
  }
  std::__ndk1::
  __tree<std::__ndk1::__value_type<unsigned_int,NetworkStream*>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,NetworkStream*>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,NetworkStream*>>>
  ::destroy((__tree<std::__ndk1::__value_type<unsigned_int,NetworkStream*>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,NetworkStream*>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,NetworkStream*>>>
             *)&DAT_01053c48,DAT_01053c50);
  DAT_01053c48 = (long **)&DAT_01053c50;
  DAT_01053c58 = 0;
  DAT_01053c50 = (__tree_node *)0x0;
  __s = param_1[4];
  pcVar11 = *param_1;
  uVar1 = *(undefined4 *)(param_1 + 2);
  RenderDeviceManager::getInstance();
  plVar4 = (long *)RenderDeviceManager::getCurrentRenderDevice();
  (**(code **)(*plVar4 + 0xa8))();
  uVar5 = NetworkAddress::set((NetworkAddress *)&local_60,pcVar11,(ushort)uVar1);
  RenderDeviceManager::getInstance();
  plVar4 = (long *)RenderDeviceManager::getCurrentRenderDevice();
  (**(code **)(*plVar4 + 0xb0))();
  if ((uVar5 & 1) == 0) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0)) {
                    /* try { // try from 0079a0cc to 0079a0d7 has its CatchHandler @ 0079a154 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                      "Warning: Could not resolve host name \'%s\'.\n",pcVar11);
  }
  else {
    pcVar11 = (char *)0x0;
    if (1 < *(uint3 *)((long)param_1 + 0x3c)) {
      pcVar11 = param_1[6];
    }
    local_64 = 0xffffffff;
    pEVar6 = (ENetNetworkManager *)ENetNetworkManager::getInstance();
    sVar7 = strlen(__s);
    uVar5 = ENetNetworkManager::connect
                      (pEVar6,local_60,&DAT_00518b1a,0x40,__s,sVar7,pcVar11,&local_64);
    if ((uVar5 & 1) != 0) {
      this = (NetworkStream *)operator_new(0x38);
                    /* try { // try from 00799fd4 to 00799fd7 has its CatchHandler @ 0079a17c */
      NetworkStream::NetworkStream(this,local_64);
      pEVar6 = (ENetNetworkManager *)ENetNetworkManager::getInstance();
      pGVar8 = (GsBitStream *)ENetNetworkManager::createWriteStream(pEVar6,2,false);
      NetworkStream::setWriteStream(this,pGVar8);
      *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(this + 0x18);
      *(undefined4 *)(param_1 + 0x21) = 1;
      if (((DAT_01053c80 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_01053c80), iVar3 != 0)) {
                    /* try { // try from 0079a114 to 0079a11f has its CatchHandler @ 0079a150 */
        ScriptingNetworkManager::ScriptingNetworkManager((ScriptingNetworkManager *)&DAT_01053c40);
        __cxa_atexit(ScriptingNetworkManager::~ScriptingNetworkManager,&DAT_01053c40,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&DAT_01053c80);
      }
      ScriptingNetworkManager::addAddress((ScriptingNetworkManager *)&DAT_01053c40,this);
    }
  }
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


