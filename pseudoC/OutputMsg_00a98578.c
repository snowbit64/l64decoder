// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: OutputMsg
// Entry Point: 00a98578
// Size: 268 bytes
// Signature: undefined __cdecl OutputMsg(jpeg_common_struct * param_1)


/* JPEGUtil::OutputMsg(jpeg_common_struct*) */

void JPEGUtil::OutputMsg(jpeg_common_struct *param_1)

{
  long lVar1;
  int iVar2;
  Logger *this;
  long lVar3;
  long lVar4;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar4 = *(long *)param_1;
  local_40 = 0;
  uStack_58 = 0;
  local_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_f8 = 0;
  local_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  (**(code **)(lVar4 + 0x18))(param_1,&local_100);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)(lVar4 + 0x1a8));
  if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0)) {
                    /* try { // try from 00a98640 to 00a98647 has its CatchHandler @ 00a98694 */
    this = (Logger *)operator_new(0x38);
                    /* try { // try from 00a9864c to 00a9864f has its CatchHandler @ 00a98684 */
    Logger::Logger(this);
    LogManager::getInstance()::singletonLogManager = this;
    __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
  }
  lVar3 = *(long *)(lVar4 + 0x1b8);
  if ((*(byte *)(lVar4 + 0x1a8) & 1) == 0) {
    lVar3 = lVar4 + 0x1a9;
  }
  LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,"Error: libjpeg %s.\n",
                     lVar3);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


