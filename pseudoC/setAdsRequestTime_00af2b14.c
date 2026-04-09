// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setAdsRequestTime
// Entry Point: 00af2b14
// Size: 700 bytes
// Signature: undefined __thiscall setAdsRequestTime(GiantsAdsProvider * this, basic_string * param_1, basic_string * param_2)


/* GiantsAdsProvider::setAdsRequestTime(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&) */

void __thiscall
GiantsAdsProvider::setAdsRequestTime
          (GiantsAdsProvider *this,basic_string *param_1,basic_string *param_2)

{
  ulong uVar1;
  byte bVar2;
  long lVar3;
  int iVar4;
  char *pcVar5;
  long lVar6;
  long lVar7;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined auStack_5c [20];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  uVar1 = (ulong)(*(byte *)param_1 >> 1);
  if ((*(byte *)param_1 & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 2);
  }
  if (uVar1 == 0) {
    uVar1 = (ulong)(*(byte *)param_2 >> 1);
    if ((*(byte *)param_2 & 1) != 0) {
      uVar1 = *(ulong *)(param_2 + 2);
    }
    if (uVar1 != 0) goto LAB_00af2b74;
    this[0xd0] = (GiantsAdsProvider)0x0;
    Mutex::enterCriticalSection();
    if (((byte)this[0xb8] & 1) == 0) {
      *(undefined2 *)(this + 0xb8) = 0;
    }
    else {
      **(undefined **)(this + 200) = 0;
      *(undefined8 *)(this + 0xc0) = 0;
    }
  }
  else {
LAB_00af2b74:
    local_60 = 0;
    local_70 = 0;
    local_68 = 0;
    this[0xd0] = (GiantsAdsProvider)0x1;
    bVar2 = *(byte *)param_1;
    uVar1 = (ulong)(bVar2 >> 1);
    if ((bVar2 & 1) != 0) {
      uVar1 = *(ulong *)(param_1 + 2);
    }
    if (10 < uVar1) {
LAB_00af2c68:
      Mutex::enterCriticalSection();
      if (((byte)this[0xb8] & 1) == 0) {
        *(undefined2 *)(this + 0xb8) = 0;
      }
      else {
        **(undefined **)(this + 200) = 0;
        *(undefined8 *)(this + 0xc0) = 0;
      }
      Mutex::leaveCriticalSection();
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar4 != 0))
      {
                    /* try { // try from 00af2d94 to 00af2d9f has its CatchHandler @ 00af2dd0 */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      lVar6 = *(long *)(param_1 + 4);
      lVar7 = *(long *)(param_2 + 4);
      if ((*(byte *)param_1 & 1) == 0) {
        lVar6 = (long)param_1 + 1;
      }
      if ((*(byte *)param_2 & 1) == 0) {
        lVar7 = (long)param_2 + 1;
      }
      LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                         "Error (gads): Failed to convert date \'%s\' / time \'%s\', invalid format.\n"
                         ,lVar6,lVar7);
      goto LAB_00af2d2c;
    }
    pcVar5 = *(char **)(param_1 + 4);
    if ((bVar2 & 1) == 0) {
      pcVar5 = (char *)((long)param_1 + 1);
    }
    iVar4 = sscanf(pcVar5,"%2d/%2d/%4d",&local_68,(long)&local_68 + 4,&local_60);
    if (iVar4 != 3) {
      pcVar5 = (char *)((long)param_1 + 1);
      if ((*(byte *)param_1 & 1) != 0) {
        pcVar5 = *(char **)(param_1 + 4);
      }
      iVar4 = sscanf(pcVar5,"%2d.%2d.%4d",&local_68,(long)&local_68 + 4,&local_60);
      if (iVar4 != 3) goto LAB_00af2c68;
    }
    bVar2 = *(byte *)param_2;
    uVar1 = (ulong)(bVar2 >> 1);
    if ((bVar2 & 1) != 0) {
      uVar1 = *(ulong *)(param_2 + 2);
    }
    if (uVar1 < 6) {
      pcVar5 = *(char **)(param_2 + 4);
      if ((bVar2 & 1) == 0) {
        pcVar5 = (char *)((long)param_2 + 1);
      }
      iVar4 = sscanf(pcVar5,"%2d:%2d",(long)&local_70 + 4,&local_70);
      if (iVar4 != 2) goto LAB_00af2ce0;
      FUN_00af2de8(auStack_5c);
    }
    else {
LAB_00af2ce0:
      FUN_00af2de8(auStack_5c);
    }
    Mutex::enterCriticalSection();
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((char *)(this + 0xb8));
  }
  Mutex::leaveCriticalSection();
  *(undefined4 *)(this + 0x150) = 1;
  Event::post();
LAB_00af2d2c:
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


