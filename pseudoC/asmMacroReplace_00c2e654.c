// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: asmMacroReplace
// Entry Point: 00c2e654
// Size: 488 bytes
// Signature: undefined __cdecl asmMacroReplace(char * param_1, char * param_2, char * param_3)


/* IR_HllConvertUtil::asmMacroReplace(char const*, char const*, char const*) */

void IR_HllConvertUtil::asmMacroReplace(char *param_1,char *param_2,char *param_3)

{
  long lVar1;
  char *pcVar2;
  void *__dest;
  size_t __n;
  ulong *in_x8;
  undefined *__dest_00;
  ulong uVar3;
  ulong uVar4;
  undefined8 local_98;
  ulong local_90;
  void *local_88;
  ulong local_80;
  undefined8 uStack_78;
  char *local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  local_80 = 0;
  uStack_78 = 0;
  local_70 = (char *)0x0;
  pcVar2 = strstr(param_1,param_2);
  if (pcVar2 != (char *)0x0) {
    do {
      uVar3 = (long)pcVar2 - (long)param_1;
      if (0xffffffffffffffef < uVar3) {
                    /* try { // try from 00c2e828 to 00c2e82f has its CatchHandler @ 00c2e844 */
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__basic_string_common<true>::__throw_length_error();
      }
      if (uVar3 < 0x17) {
        local_98 = CONCAT71(local_98._1_7_,(char)((int)uVar3 << 1));
        __dest = (void *)((ulong)&local_98 | 1);
        if (uVar3 != 0) goto LAB_00c2e718;
      }
      else {
        uVar4 = uVar3 + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 00c2e700 to 00c2e707 has its CatchHandler @ 00c2e840 */
        __dest = operator_new(uVar4);
        local_98 = uVar4 | 1;
        local_90 = uVar3;
        local_88 = __dest;
LAB_00c2e718:
        memcpy(__dest,param_1,uVar3);
      }
      *(undefined *)((long)__dest + uVar3) = 0;
                    /* try { // try from 00c2e72c to 00c2e75b has its CatchHandler @ 00c2e854 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append((char *)&local_98);
      __strlen_chk(param_2,0xffffffffffffffff);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append((char *)&local_98);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                &local_80,(basic_string *)&local_98);
      param_1 = (char *)((ulong)&local_80 | 1);
      if ((local_80 & 1) != 0) {
        param_1 = local_70;
      }
      if ((local_98 & 1) != 0) {
        operator_delete(local_88);
      }
      pcVar2 = strstr(param_1,param_2);
    } while (pcVar2 != (char *)0x0);
  }
  __n = strlen(param_1);
  if (0xffffffffffffffef < __n) {
                    /* try { // try from 00c2e830 to 00c2e837 has its CatchHandler @ 00c2e83c */
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest_00 = (undefined *)((long)in_x8 + 1);
    *(char *)in_x8 = (char)((int)__n << 1);
    if (__n == 0) goto LAB_00c2e7e4;
  }
  else {
    uVar3 = __n + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 00c2e7b8 to 00c2e7bf has its CatchHandler @ 00c2e83c */
    __dest_00 = (undefined *)operator_new(uVar3);
    in_x8[1] = __n;
    in_x8[2] = (ulong)__dest_00;
    *in_x8 = uVar3 | 1;
  }
  memcpy(__dest_00,param_1,__n);
LAB_00c2e7e4:
  __dest_00[__n] = 0;
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


