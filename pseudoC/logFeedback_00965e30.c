// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: logFeedback
// Entry Point: 00965e30
// Size: 496 bytes
// Signature: undefined __cdecl logFeedback(char * param_1, ...)


/* TextureStreamingManager::logFeedback(char const*, ...) */

void TextureStreamingManager::logFeedback(char *param_1,...)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  size_t __n;
  undefined8 in_x1;
  undefined8 in_x2;
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  void *__dest;
  ulong uVar4;
  undefined8 local_10e0;
  undefined8 uStack_10d8;
  undefined8 local_10d0;
  undefined8 uStack_10c8;
  undefined8 local_10c0;
  undefined8 uStack_10b8;
  undefined8 local_10b0;
  undefined8 local_10a8;
  size_t local_10a0;
  void *local_1098;
  undefined *local_1070;
  undefined8 *puStack_1068;
  undefined8 *local_1060;
  undefined8 uStack_1058;
  char acStack_1048 [4096];
  long local_48;
  
  puStack_1068 = &local_10a8;
  local_1060 = &local_10e0;
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uStack_1058 = 0xffffff80ffffffc8;
  local_10e0 = in_x1;
  uStack_10d8 = in_x2;
  local_10d0 = in_x3;
  uStack_10c8 = in_x4;
  local_10c0 = in_x5;
  uStack_10b8 = in_x6;
  local_10b0 = in_x7;
  local_1070 = (undefined *)register0x00000008;
  uVar3 = vsnprintf(acStack_1048,0x1000,param_1,&local_1070);
  if ((int)uVar3 < 0) goto LAB_00965fe8;
  if (0xffe < uVar3) {
    uVar3 = 0xfff;
  }
  local_1060 = (undefined8 *)((ulong)local_1060 & 0xffffffffffffff00);
  acStack_1048[uVar3] = '\0';
  local_1070 = &DAT_0210ee88;
  puStack_1068 = (undefined8 *)&DAT_0210eeb0;
  Mutex::enterCriticalSection();
  __n = strlen(acStack_1048);
  if (0xffffffffffffffef < __n) {
                    /* try { // try from 00966014 to 0096601b has its CatchHandler @ 0096603c */
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (void *)((ulong)&local_10a8 | 1);
    local_10a8 = CONCAT71(local_10a8._1_7_,(char)((int)__n << 1));
    if (__n != 0) goto LAB_00965f44;
  }
  else {
    uVar4 = __n + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 00965f2c to 00965f33 has its CatchHandler @ 0096603c */
    __dest = operator_new(uVar4);
    local_10a8 = uVar4 | 1;
    local_10a0 = __n;
    local_1098 = __dest;
LAB_00965f44:
    memcpy(__dest,acStack_1048,__n);
  }
  iVar2 = DAT_0210f814;
  *(undefined *)((long)__dest + __n) = 0;
  uVar3 = 0;
  if (DAT_0210f818 != 0) {
    uVar3 = (DAT_0210f810 + iVar2) / DAT_0210f818;
  }
                    /* try { // try from 00965f7c to 00965f83 has its CatchHandler @ 00966024 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (&DAT_0210eeb0 + (ulong)((DAT_0210f810 + iVar2) - uVar3 * DAT_0210f818) * 0x18),
            (basic_string *)&local_10a8);
  DAT_0210f810 = DAT_0210f810 + 1;
  if (DAT_0210f818 < DAT_0210f810) {
    DAT_0210f810 = DAT_0210f818;
    uVar3 = 0;
    if (DAT_0210f818 != 0) {
      uVar3 = (DAT_0210f814 + 1U) / DAT_0210f818;
    }
    DAT_0210f814 = (DAT_0210f814 + 1U) - uVar3 * DAT_0210f818;
    if ((local_10a8 & 1) != 0) goto LAB_00965fd0;
LAB_00965fa4:
  }
  else {
    if ((local_10a8 & 1) == 0) goto LAB_00965fa4;
LAB_00965fd0:
    operator_delete(local_1098);
  }
  if ((char)local_1060 == '\0') {
                    /* try { // try from 00965fe4 to 00965fe7 has its CatchHandler @ 00966020 */
    Mutex::leaveCriticalSection();
  }
LAB_00965fe8:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


