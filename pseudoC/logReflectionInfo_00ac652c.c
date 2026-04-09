// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: logReflectionInfo
// Entry Point: 00ac652c
// Size: 472 bytes
// Signature: undefined __thiscall logReflectionInfo(SpirvReflect * this, bool param_1)


/* SpirvReflect::logReflectionInfo(bool) const */

void __thiscall SpirvReflect::logReflectionInfo(SpirvReflect *this,bool param_1)

{
  void *pvVar1;
  long lVar2;
  int iVar3;
  byte local_178 [16];
  void *local_168;
  undefined **local_160;
  undefined **local_158 [8];
  ulong local_118;
  undefined8 uStack_110;
  void *local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined **local_f0 [17];
  undefined8 local_68;
  undefined4 local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  local_160 = (undefined **)0xfd8f40;
  local_f0[0] = (undefined **)0xfd8f68;
                    /* try { // try from 00ac6580 to 00ac658b has its CatchHandler @ 00ac6764 */
  std::__ndk1::ios_base::init(local_f0);
  local_68 = 0;
  local_60 = 0xffffffff;
  local_160 = &PTR__basic_ostringstream_00fd8ed0;
  local_f0[0] = &PTR__basic_ostringstream_00fd8ef8;
                    /* try { // try from 00ac65b0 to 00ac65b7 has its CatchHandler @ 00ac6748 */
  std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::basic_streambuf();
  local_f8 = 0x10;
  uStack_110 = 0;
  local_118 = 0;
  local_158[0] = &PTR__basic_stringbuf_00fd8fa0;
  uStack_100 = 0;
  local_108 = (void *)0x0;
                    /* try { // try from 00ac65dc to 00ac65eb has its CatchHandler @ 00ac6734 */
  WriteReflection((ShaderModule *)this,param_1,(basic_ostream *)&local_160);
  if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0)) {
                    /* try { // try from 00ac66c8 to 00ac66d3 has its CatchHandler @ 00ac6704 */
    LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
    __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
  }
                    /* try { // try from 00ac65fc to 00ac660b has its CatchHandler @ 00ac6730 */
  std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  str();
  pvVar1 = (void *)((ulong)local_178 | 1);
  if ((local_178[0] & 1) != 0) {
    pvVar1 = local_168;
  }
                    /* try { // try from 00ac6620 to 00ac6633 has its CatchHandler @ 00ac6718 */
  LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,&DAT_005118dd,pvVar1);
  if ((local_178[0] & 1) != 0) {
    operator_delete(local_168);
  }
  local_f0[0] = &PTR__basic_ostringstream_00fd8ef8;
  local_160 = &PTR__basic_ostringstream_00fd8ed0;
  local_158[0] = &PTR__basic_stringbuf_00fd8fa0;
  if ((local_118 & 1) != 0) {
    operator_delete(local_108);
  }
  std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::~basic_streambuf
            ((basic_streambuf<char,std::__ndk1::char_traits<char>> *)local_158);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::~basic_ostream
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_160);
  std::__ndk1::basic_ios<char,std::__ndk1::char_traits<char>>::~basic_ios
            ((basic_ios<char,std::__ndk1::char_traits<char>> *)local_f0);
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


