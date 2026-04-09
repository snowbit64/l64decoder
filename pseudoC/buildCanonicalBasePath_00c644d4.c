// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: buildCanonicalBasePath
// Entry Point: 00c644d4
// Size: 816 bytes
// Signature: undefined __cdecl buildCanonicalBasePath(char * param_1, basic_string * param_2)


/* WARNING: Type propagation algorithm not settling */
/* PathUtil::buildCanonicalBasePath(char const*, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&) */

undefined8 PathUtil::buildCanonicalBasePath(char *param_1,basic_string *param_2)

{
  char *pcVar1;
  long lVar2;
  byte bVar3;
  size_t __n;
  long lVar4;
  ulong uVar5;
  char *pcVar6;
  long lVar7;
  undefined8 uVar8;
  char *pcVar9;
  char *pcVar10;
  basic_string local_b8 [4];
  char *local_a8;
  ulong local_a0;
  ulong uStack_98;
  char *local_90;
  undefined8 local_88;
  size_t local_80;
  char *local_78;
  ulong local_70;
  ulong uStack_68;
  char *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  __n = strlen(param_1);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    pcVar10 = (char *)((ulong)&local_88 | 1);
    local_88 = CONCAT71(local_88._1_7_,(char)((int)__n << 1));
    if (__n != 0) goto LAB_00c64554;
  }
  else {
    uVar5 = __n + 0x10 & 0xfffffffffffffff0;
    pcVar10 = (char *)operator_new(uVar5);
    local_88 = uVar5 | 1;
    local_80 = __n;
    local_78 = pcVar10;
LAB_00c64554:
    memcpy(pcVar10,param_1,__n);
  }
  pcVar10[__n] = '\0';
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = (char *)0x0;
                    /* try { // try from 00c64570 to 00c64687 has its CatchHandler @ 00c6484c */
  StringUtil::substituteInPlace('\\','/',(basic_string *)&local_88);
  pcVar10 = (char *)((ulong)&local_88 | 1);
  if ((local_88 & 1) != 0) {
    pcVar10 = local_78;
  }
  if (*pcVar10 == '/') {
    pcVar10 = (char *)((ulong)&local_88 | 2);
    if ((local_88 & 1) != 0) {
      pcVar10 = local_78 + 1;
    }
    if (*pcVar10 == '/') {
      *pcVar10 = '\\';
      pcVar10 = (char *)((ulong)&local_88 | 1);
      if ((local_88 & 1) != 0) {
        pcVar10 = local_78;
      }
      *pcVar10 = '\\';
    }
  }
  lVar4 = std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::rfind
                    ((char)&local_88,0x2f);
  if (lVar4 - 1U < 0xfffffffffffffffe) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string((basic_string *)&local_70,(ulong)&local_88,0,(allocator *)(lVar4 + 1));
    if ((local_a0 & 1) != 0) {
      operator_delete(local_90);
    }
    uStack_98 = uStack_68;
    local_a0 = local_70;
    local_90 = local_60;
  }
  uVar5 = (ulong)((byte)local_a0 >> 1);
  if ((local_a0 & 1) != 0) {
    uVar5 = uStack_98;
  }
  if (uVar5 == 0) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((char *)&local_a0);
  }
  pcVar10 = (char *)((ulong)&local_a0 | 1);
  if (((byte)local_a0 & 1) != 0) {
    pcVar10 = local_90;
  }
  if (*pcVar10 != '/') {
    local_70 = 0;
    uStack_68 = 0;
    local_60 = (char *)0x0;
                    /* try { // try from 00c646e4 to 00c646eb has its CatchHandler @ 00c64848 */
    uVar5 = getWorkingDirectory((basic_string *)&local_70);
    pcVar10 = local_60;
    bVar3 = (byte)local_70;
    if ((uVar5 & 1) == 0) {
      if ((local_70 & 1) != 0) {
        operator_delete(local_60);
      }
      uVar8 = 0;
      goto joined_r0x00c647f0;
    }
    pcVar9 = (char *)((ulong)&local_70 | 1);
    pcVar6 = pcVar9;
    if ((local_70 & 1) != 0) {
      pcVar6 = local_60;
    }
    for (pcVar6 = strstr(pcVar6,"/../"); pcVar6 != (char *)0x0; pcVar6 = strstr(pcVar6,"/../")) {
      lVar4 = 0;
      pcVar1 = pcVar9;
      if ((bVar3 & 1) != 0) {
        pcVar1 = pcVar10;
      }
      do {
        lVar7 = lVar4;
        if (pcVar6 + lVar7 + -1 <= pcVar1) break;
        lVar4 = lVar7 + -1;
      } while (pcVar6[lVar7 + -1] != '/');
                    /* try { // try from 00c64764 to 00c6476b has its CatchHandler @ 00c6485c */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      erase((ulong)&local_70,(ulong)(pcVar6 + (lVar7 - (long)pcVar1) + -1));
      pcVar10 = local_60;
      bVar3 = (byte)local_70;
      pcVar6 = pcVar9;
      if ((local_70 & 1) != 0) {
        pcVar6 = local_60;
      }
    }
                    /* try { // try from 00c64788 to 00c64797 has its CatchHandler @ 00c64844 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string(local_b8);
    pcVar10 = (char *)((ulong)local_b8 | 1);
    if (((byte)local_b8[0] & 1) != 0) {
      pcVar10 = local_a8;
    }
                    /* try { // try from 00c647ac to 00c647b7 has its CatchHandler @ 00c64804 */
    buildAbsolutePath((basic_string *)&local_70,pcVar10,(basic_string *)&local_a0);
    if (((byte)local_b8[0] & 1) != 0) {
      operator_delete(local_a8);
    }
    if ((local_70 & 1) != 0) {
      operator_delete(local_60);
    }
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            param_2,(basic_string *)&local_a0);
  uVar8 = 1;
joined_r0x00c647f0:
  if ((local_a0 & 1) != 0) {
    operator_delete(local_90);
  }
  if ((local_88 & 1) != 0) {
    operator_delete(local_78);
  }
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar8;
}


