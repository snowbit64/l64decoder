// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: openWebFile
// Entry Point: 00c69238
// Size: 304 bytes
// Signature: undefined __cdecl openWebFile(char * param_1, char * param_2)


/* WebUtil::openWebFile(char const*, char const*) */

void WebUtil::openWebFile(char *param_1,char *param_2)

{
  undefined8 *__s1;
  byte bVar1;
  long lVar2;
  int iVar3;
  char *pcVar4;
  long lVar5;
  ulong local_50;
  undefined8 uStack_48;
  undefined8 *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  pcVar4 = strchr(param_1,0x3a);
  if (((pcVar4 == (char *)0x0) && (pcVar4 = strchr(param_1,10), pcVar4 == (char *)0x0)) &&
     (pcVar4 = strchr(param_1,0xd), pcVar4 == (char *)0x0)) {
    local_40 = (undefined8 *)operator_new(0x30);
    *(undefined2 *)(local_40 + 4) = 0x2f;
    uStack_48 = 0x21;
    local_50 = 0x31;
    local_40[1] = 0x696d7261662e7777;
    *local_40 = 0x772f2f3a70747468;
    local_40[3] = 0x6d6f632e726f7461;
    local_40[2] = 0x6c756d69732d676e;
                    /* try { // try from 00c692bc to 00c6932b has its CatchHandler @ 00c69368 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)&local_50);
    lVar5 = __strlen_chk(param_2,0xffffffffffffffff);
    if (lVar5 != 0) {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append((char *)&local_50);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append((char *)&local_50);
    }
    bVar1 = (byte)local_50;
    __s1 = (undefined8 *)((ulong)&local_50 | 1);
    if ((local_50 & 1) != 0) {
      __s1 = local_40;
    }
    iVar3 = strncmp((char *)__s1,"http://",7);
    if (iVar3 == 0) {
      openURL((char *)__s1);
      bVar1 = (byte)local_50;
    }
    if ((bVar1 & 1) != 0) {
      operator_delete(local_40);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


