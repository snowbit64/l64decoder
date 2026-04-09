// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: write
// Entry Point: 00b24a3c
// Size: 300 bytes
// Signature: undefined __thiscall write(AsyncFileLogSink * this, char * param_1, uint param_2)


/* AsyncFileLogSink::write(char const*, unsigned int) */

void __thiscall AsyncFileLogSink::write(AsyncFileLogSink *this,char *param_1,uint param_2)

{
  ulong *puVar1;
  long lVar2;
  ulong __n;
  ulong uVar3;
  void *__dest;
  undefined8 local_88;
  ulong uStack_80;
  void *local_78;
  AsyncFileLogSink *local_70;
  vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
  *pvStack_68;
  char local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  local_70 = this + 0x28;
  __n = (ulong)param_2;
  local_60 = '\0';
  pvStack_68 = (vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                *)(this + 0x50);
  Mutex::enterCriticalSection();
  if (param_2 < 0x17) {
    __dest = (void *)((ulong)&local_88 | 1);
    local_88 = CONCAT71(local_88._1_7_,(char)(param_2 << 1));
    if (param_2 == 0) goto LAB_00b24ad8;
  }
  else {
    uVar3 = __n + 0x10 & 0x1fffffff0;
                    /* try { // try from 00b24ab0 to 00b24ab7 has its CatchHandler @ 00b24b84 */
    __dest = operator_new(uVar3);
    local_88 = uVar3 | 1;
    uStack_80 = __n;
    local_78 = __dest;
  }
  memcpy(__dest,param_1,__n);
LAB_00b24ad8:
  *(undefined *)((long)__dest + __n) = 0;
  puVar1 = *(ulong **)(this + 0x58);
  if (puVar1 < *(ulong **)(this + 0x60)) {
    puVar1[2] = (ulong)local_78;
    puVar1[1] = uStack_80;
    *puVar1 = local_88;
    *(ulong **)(this + 0x58) = puVar1 + 3;
  }
  else {
                    /* try { // try from 00b24b04 to 00b24b0f has its CatchHandler @ 00b24b6c */
    std::__ndk1::
    vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
    ::
    __push_back_slow_path<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
              ((vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                *)(this + 0x50),(basic_string *)&local_88);
    if ((local_88 & 1) != 0) {
      operator_delete(local_78);
    }
  }
  if (local_60 == '\0') {
                    /* try { // try from 00b24b2c to 00b24b2f has its CatchHandler @ 00b24b68 */
    Mutex::leaveCriticalSection();
  }
  Semaphore::post();
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


