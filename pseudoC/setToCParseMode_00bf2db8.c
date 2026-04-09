// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setToCParseMode
// Entry Point: 00bf2db8
// Size: 1220 bytes
// Signature: undefined setToCParseMode(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* PreprocessorDesc::setToCParseMode() */

void PreprocessorDesc::setToCParseMode(void)

{
  vector<Preprocessor::Comment,std::__ndk1::allocator<Preprocessor::Comment>> *this;
  long lVar1;
  ulong *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long in_x0;
  ulong local_90;
  ulong uStack_88;
  void *local_80;
  ulong uStack_78;
  ulong local_70;
  void *local_68;
  undefined2 local_60;
  ushort uStack_5e;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  lVar1 = *(long *)(in_x0 + 0x130);
  *(undefined8 *)(in_x0 + 0x48) = 0x50a39f;
  *(undefined8 *)(in_x0 + 0x40) = 0x50a39f;
  *(undefined8 *)(in_x0 + 0x58) = 0x4df685;
  *(undefined8 *)(in_x0 + 0x50) = 0x50332d;
  *(undefined8 *)(in_x0 + 0x68) = 0x4cff00;
  *(undefined8 *)(in_x0 + 0x60) = 0x50c971;
  *(undefined8 *)(in_x0 + 0x78) = 0x50332d;
  *(undefined8 *)(in_x0 + 0x70) = 0x5c;
  *(undefined8 *)(in_x0 + 0xb0) = 0x4cff00;
  *(undefined8 *)(in_x0 + 0xa8) = 0x4fddf9;
  *(undefined8 *)(in_x0 + 0xc0) = 0x50332d;
  *(undefined8 *)(in_x0 + 0xb8) = 0;
  *(undefined8 *)(in_x0 + 0x90) = 0x4fddf9;
  *(undefined8 *)(in_x0 + 0x88) = 0x4eb922;
  *(undefined8 *)(in_x0 + 0xa0) = 0x502755;
  *(undefined8 *)(in_x0 + 0x98) = 0x502755;
  *(undefined8 *)(in_x0 + 0x80) = 0x50c971;
  *(undefined8 *)(in_x0 + 200) = 0x50c971;
  lVar5 = *(long *)(in_x0 + 0x138);
  while (lVar4 = lVar5, lVar4 != lVar1) {
    if ((*(byte *)(lVar4 + -0x28) & 1) != 0) {
      operator_delete(*(void **)(lVar4 + -0x18));
    }
    lVar5 = lVar4 + -0x40;
    if ((*(byte *)(lVar4 + -0x40) & 1) != 0) {
      operator_delete(*(void **)(lVar4 + -0x30));
    }
  }
  *(long *)(in_x0 + 0x138) = lVar1;
  uStack_78 = 0;
  local_80 = (void *)0x0;
  local_68 = (void *)0x0;
  local_70 = 0;
  uStack_88 = 0;
  local_90 = 0;
                    /* try { // try from 00bf2e48 to 00bf2e6b has its CatchHandler @ 00bf32b0 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)&local_90);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)&uStack_78);
  puVar2 = *(ulong **)(in_x0 + 0x138);
  this = (vector<Preprocessor::Comment,std::__ndk1::allocator<Preprocessor::Comment>> *)
         (in_x0 + 0x130);
  local_60 = 0;
  uStack_58 = 0;
  uStack_54 = 0;
  uStack_5c = 0;
  if (puVar2 < *(ulong **)(in_x0 + 0x140)) {
    puVar2[2] = (ulong)local_80;
    puVar2[1] = uStack_88;
    *puVar2 = local_90;
    uStack_88 = 0;
    local_80 = (void *)0x0;
    local_90 = 0;
    puVar2[4] = local_70;
    puVar2[3] = uStack_78;
    puVar2[5] = (ulong)local_68;
    local_70 = 0;
    local_68 = (void *)0x0;
    uStack_78 = 0;
    puVar2[7] = 0;
    puVar2[6] = (ulong)uStack_5e << 0x10;
    *(ulong **)(in_x0 + 0x138) = puVar2 + 8;
  }
  else {
                    /* try { // try from 00bf2f04 to 00bf2f0f has its CatchHandler @ 00bf328c */
    std::__ndk1::vector<Preprocessor::Comment,std::__ndk1::allocator<Preprocessor::Comment>>::
    __push_back_slow_path<Preprocessor::Comment>(this,(Comment *)&local_90);
    if ((uStack_78 & 1) != 0) {
      operator_delete(local_68);
    }
  }
  if ((local_90 & 1) != 0) {
    operator_delete(local_80);
  }
  uStack_78 = 0;
  local_80 = (void *)0x0;
  local_68 = (void *)0x0;
  local_70 = 0;
  uStack_88 = 0;
  local_90 = 0;
                    /* try { // try from 00bf2f40 to 00bf2f63 has its CatchHandler @ 00bf32ac */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)&local_90);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)&uStack_78);
  puVar2 = *(ulong **)(in_x0 + 0x138);
  local_60 = 0;
  uStack_58 = 0;
  uStack_54 = 0;
  uStack_5c = 0;
  if (puVar2 < *(ulong **)(in_x0 + 0x140)) {
    puVar2[2] = (ulong)local_80;
    puVar2[1] = uStack_88;
    *puVar2 = local_90;
    uStack_88 = 0;
    local_80 = (void *)0x0;
    local_90 = 0;
    puVar2[4] = local_70;
    puVar2[3] = uStack_78;
    puVar2[5] = (ulong)local_68;
    local_70 = 0;
    local_68 = (void *)0x0;
    uStack_78 = 0;
    puVar2[7] = 0;
    puVar2[6] = (ulong)uStack_5e << 0x10;
    *(ulong **)(in_x0 + 0x138) = puVar2 + 8;
  }
  else {
                    /* try { // try from 00bf2fc4 to 00bf2fcf has its CatchHandler @ 00bf3288 */
    std::__ndk1::vector<Preprocessor::Comment,std::__ndk1::allocator<Preprocessor::Comment>>::
    __push_back_slow_path<Preprocessor::Comment>(this,(Comment *)&local_90);
    if ((uStack_78 & 1) != 0) {
      operator_delete(local_68);
    }
  }
  if ((local_90 & 1) != 0) {
    operator_delete(local_80);
  }
  uStack_78 = 0;
  local_80 = (void *)0x0;
  local_68 = (void *)0x0;
  local_70 = 0;
  uStack_88 = 0;
  local_90 = 0;
                    /* try { // try from 00bf3000 to 00bf3023 has its CatchHandler @ 00bf32a8 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)&local_90);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)&uStack_78);
  puVar2 = *(ulong **)(in_x0 + 0x138);
  local_60 = 0;
  uStack_58 = 0;
  uStack_54 = 0;
  uStack_5c = 0;
  if (puVar2 < *(ulong **)(in_x0 + 0x140)) {
    puVar2[2] = (ulong)local_80;
    puVar2[1] = uStack_88;
    *puVar2 = local_90;
    uStack_88 = 0;
    local_80 = (void *)0x0;
    local_90 = 0;
    puVar2[4] = local_70;
    puVar2[3] = uStack_78;
    puVar2[5] = (ulong)local_68;
    local_70 = 0;
    local_68 = (void *)0x0;
    uStack_78 = 0;
    puVar2[7] = 0;
    puVar2[6] = (ulong)uStack_5e << 0x10;
    *(ulong **)(in_x0 + 0x138) = puVar2 + 8;
  }
  else {
                    /* try { // try from 00bf3084 to 00bf308f has its CatchHandler @ 00bf3284 */
    std::__ndk1::vector<Preprocessor::Comment,std::__ndk1::allocator<Preprocessor::Comment>>::
    __push_back_slow_path<Preprocessor::Comment>(this,(Comment *)&local_90);
    if ((uStack_78 & 1) != 0) {
      operator_delete(local_68);
    }
  }
  if ((local_90 & 1) != 0) {
    operator_delete(local_80);
  }
  uStack_78 = 0;
  local_80 = (void *)0x0;
  local_68 = (void *)0x0;
  local_70 = 0;
  uStack_88 = 0;
  local_90 = 0;
                    /* try { // try from 00bf30c0 to 00bf30e3 has its CatchHandler @ 00bf32a4 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)&local_90);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)&uStack_78);
  puVar2 = *(ulong **)(in_x0 + 0x138);
  local_60 = 0x5c;
  uStack_5c = 3;
  uStack_58 = 3;
  uStack_54 = 3;
  if (puVar2 < *(ulong **)(in_x0 + 0x140)) {
    puVar2[2] = (ulong)local_80;
    puVar2[1] = uStack_88;
    *puVar2 = local_90;
    uStack_88 = 0;
    local_80 = (void *)0x0;
    local_90 = 0;
    puVar2[4] = local_70;
    puVar2[3] = uStack_78;
    puVar2[5] = (ulong)local_68;
    local_70 = 0;
    local_68 = (void *)0x0;
    uStack_78 = 0;
    puVar2[7] = 0x300000003;
    puVar2[6] = CONCAT44(3,CONCAT22(uStack_5e,0x5c));
    *(ulong **)(in_x0 + 0x138) = puVar2 + 8;
  }
  else {
                    /* try { // try from 00bf3150 to 00bf315b has its CatchHandler @ 00bf3280 */
    std::__ndk1::vector<Preprocessor::Comment,std::__ndk1::allocator<Preprocessor::Comment>>::
    __push_back_slow_path<Preprocessor::Comment>(this,(Comment *)&local_90);
    if ((uStack_78 & 1) != 0) {
      operator_delete(local_68);
    }
  }
  if ((local_90 & 1) != 0) {
    operator_delete(local_80);
  }
  uStack_78 = 0;
  local_80 = (void *)0x0;
  local_68 = (void *)0x0;
  local_70 = 0;
  uStack_88 = 0;
  local_90 = 0;
                    /* try { // try from 00bf318c to 00bf31af has its CatchHandler @ 00bf32a0 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)&local_90);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)&uStack_78);
  puVar2 = *(ulong **)(in_x0 + 0x138);
  local_60 = 0xa5c;
  uStack_5c = 3;
  uStack_58 = 3;
  uStack_54 = 3;
  if (puVar2 < *(ulong **)(in_x0 + 0x140)) {
    puVar2[2] = (ulong)local_80;
    puVar2[1] = uStack_88;
    *puVar2 = local_90;
    uStack_88 = 0;
    local_80 = (void *)0x0;
    local_90 = 0;
    puVar2[4] = local_70;
    puVar2[3] = uStack_78;
    puVar2[5] = (ulong)local_68;
    local_70 = 0;
    local_68 = (void *)0x0;
    uStack_78 = 0;
    puVar2[7] = 0x300000003;
    puVar2[6] = CONCAT44(3,CONCAT22(uStack_5e,0xa5c));
    *(ulong **)(in_x0 + 0x138) = puVar2 + 8;
  }
  else {
                    /* try { // try from 00bf321c to 00bf3227 has its CatchHandler @ 00bf327c */
    std::__ndk1::vector<Preprocessor::Comment,std::__ndk1::allocator<Preprocessor::Comment>>::
    __push_back_slow_path<Preprocessor::Comment>(this,(Comment *)&local_90);
    if ((uStack_78 & 1) != 0) {
      operator_delete(local_68);
    }
  }
  if ((local_90 & 1) != 0) {
    operator_delete(local_80);
  }
  *(undefined2 *)(in_x0 + 0x148) = 0x101;
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


