// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: loadImageFileContent
// Entry Point: 00af5958
// Size: 340 bytes
// Signature: undefined __thiscall loadImageFileContent(GiantsAdsProvider * this, basic_string * param_1, uchar * * param_2, uint * param_3)


/* GiantsAdsProvider::loadImageFileContent(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, unsigned char*&, unsigned
   int&) */

void __thiscall
GiantsAdsProvider::loadImageFileContent
          (GiantsAdsProvider *this,basic_string *param_1,uchar **param_2,uint *param_3)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  Logger *this_00;
  char *pcVar5;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  void *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined2 local_48;
  undefined4 local_44;
  undefined2 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pcVar5 = *(char **)(param_1 + 4);
  local_80 = 0;
  uStack_78 = 0;
  local_90 = 0;
  local_88 = 0x100000001;
  local_50 = 0;
  local_70 = 0;
  local_48 = 0;
  if ((*(byte *)param_1 & 1) == 0) {
    pcVar5 = (char *)((long)param_1 + 1);
  }
  local_44 = 0;
  local_40 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_68 = (void *)0x0;
  uVar3 = ImageLoadUtil::loadImage(pcVar5,1,(ImageDesc *)&local_90,0);
  uVar4 = 0;
  if ((uVar3 & 1) != 0) {
    if ((int)local_50 == 0x23) {
      GS2DUtil::saveImageToBuffer((ImageDesc *)&local_90,param_2,param_3);
      if (local_68 != (void *)0x0) {
        operator_delete__(local_68);
      }
      uVar4 = 1;
    }
    else {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0))
      {
                    /* try { // try from 00af5a68 to 00af5a6f has its CatchHandler @ 00af5abc */
        this_00 = (Logger *)operator_new(0x38);
                    /* try { // try from 00af5a74 to 00af5a77 has its CatchHandler @ 00af5aac */
        Logger::Logger(this_00);
        LogManager::getInstance()::singletonLogManager = this_00;
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                         "Error (gads): Format must be ASTC 6x6.\n");
      uVar4 = 0;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


