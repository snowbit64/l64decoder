// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_006cf92c
// Entry Point: 006cf92c
// Size: 604 bytes
// Signature: undefined FUN_006cf92c(void)


void FUN_006cf92c(long *param_1)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  TextureStreamingManager *this;
  Logger *this_00;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  
  lVar4 = *param_1;
  if ((ulong)((param_1[1] - lVar4 >> 3) * -0x5555555555555555) < 2) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0)) {
                    /* try { // try from 006cfb48 to 006cfb4f has its CatchHandler @ 006cfb98 */
      this_00 = (Logger *)operator_new(0x38);
                    /* try { // try from 006cfb54 to 006cfb57 has its CatchHandler @ 006cfb88 */
      Logger::Logger(this_00);
      LogManager::getInstance()::singletonLogManager = this_00;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    TextureStreamingManager::getInstance();
    uVar3 = TextureStreamingManager::getBehavior();
    LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                      "Texture streaming memory behavior is \"%s\"\n",
                      (&PTR_s_ratio_00fd9028)[(uVar3 & 0xffffffff) * 2]);
  }
  else {
    bVar1 = *(byte *)(lVar4 + 0x18);
    uVar5 = *(ulong *)(lVar4 + 0x20);
    uVar6 = (ulong)(bVar1 >> 1);
    uVar3 = uVar6;
    if ((bVar1 & 1) != 0) {
      uVar3 = uVar5;
    }
    if (uVar3 == 5) {
                    /* try { // try from 006cf97c to 006cfaa3 has its CatchHandler @ 006cfbb0 */
      iVar2 = std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
              compare((ulong)(byte *)(lVar4 + 0x18),0,(char *)0xffffffffffffffff,0x4c9400);
      if (iVar2 == 0) {
        lVar4 = 0;
        goto LAB_006cfb18;
      }
      lVar4 = *param_1;
      bVar1 = *(byte *)(lVar4 + 0x18);
      uVar5 = *(ulong *)(lVar4 + 0x20);
      uVar6 = (ulong)(bVar1 >> 1);
    }
    uVar3 = uVar6;
    if ((bVar1 & 1) != 0) {
      uVar3 = uVar5;
    }
    if (uVar3 == 5) {
      iVar2 = std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
              compare(lVar4 + 0x18,0,(char *)0xffffffffffffffff,0x4da73f);
      if (iVar2 == 0) {
        lVar4 = 1;
        goto LAB_006cfb18;
      }
      lVar4 = *param_1;
      bVar1 = *(byte *)(lVar4 + 0x18);
      uVar5 = *(ulong *)(lVar4 + 0x20);
      uVar6 = (ulong)(bVar1 >> 1);
    }
    uVar3 = uVar6;
    if ((bVar1 & 1) != 0) {
      uVar3 = uVar5;
    }
    if (uVar3 == 3) {
      iVar2 = std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
              compare(lVar4 + 0x18,0,(char *)0xffffffffffffffff,0x4ee8e1);
      if (iVar2 == 0) {
        lVar4 = 2;
        goto LAB_006cfb18;
      }
      lVar4 = *param_1;
      bVar1 = *(byte *)(lVar4 + 0x18);
      uVar5 = *(ulong *)(lVar4 + 0x20);
      uVar6 = (ulong)(bVar1 >> 1);
    }
    uVar3 = uVar6;
    if ((bVar1 & 1) != 0) {
      uVar3 = uVar5;
    }
    if (uVar3 == 3) {
      iVar2 = std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
              compare(lVar4 + 0x18,0,(char *)0xffffffffffffffff,0x4c9406);
      if (iVar2 == 0) {
        lVar4 = 3;
        goto LAB_006cfb18;
      }
      lVar4 = *param_1;
      bVar1 = *(byte *)(lVar4 + 0x18);
      uVar5 = *(ulong *)(lVar4 + 0x20);
      uVar6 = (ulong)(bVar1 >> 1);
    }
    if ((bVar1 & 1) != 0) {
      uVar6 = uVar5;
    }
    if ((uVar6 == 4) &&
       (iVar2 = std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                compare(lVar4 + 0x18,0,(char *)0xffffffffffffffff,0x50588f), iVar2 == 0)) {
      lVar4 = 4;
LAB_006cfb18:
      this = (TextureStreamingManager *)TextureStreamingManager::getInstance();
      TextureStreamingManager::setBehavior(this,*(BEHAVIOR_TYPE *)(&UNK_00fd9030 + lVar4 * 0x10));
      return;
    }
  }
  return;
}


