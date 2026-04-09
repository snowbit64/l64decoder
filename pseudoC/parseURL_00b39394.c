// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: parseURL
// Entry Point: 00b39394
// Size: 340 bytes
// Signature: undefined __cdecl parseURL(char * param_1, basic_string * param_2, basic_string * param_3, ushort * param_4, bool * param_5)


/* HTTPUtil::parseURL(char const*, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >&, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >&, unsigned short&, bool&) */

void HTTPUtil::parseURL(char *param_1,basic_string *param_2,basic_string *param_3,ushort *param_4,
                       bool *param_5)

{
  char *__s;
  long lVar1;
  int iVar2;
  size_t sVar3;
  char *pcVar4;
  long lVar5;
  char *local_170;
  undefined auStack_168 [272];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  sVar3 = strlen(param_1);
  if (sVar3 < 0x601) {
    *param_5 = false;
    lVar5 = 7;
    iVar2 = strncmp(param_1,"http://",7);
    if (iVar2 != 0) {
      iVar2 = strncmp(param_1,"https://",8);
      if (iVar2 != 0) goto LAB_00b39450;
      lVar5 = 8;
      *param_5 = true;
    }
    __s = param_1 + lVar5;
    pcVar4 = strchr(__s,0x2f);
    if (pcVar4 == (char *)0x0) goto LAB_00b39454;
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((char *)param_3);
    lVar5 = (long)pcVar4 - (long)__s;
    if (lVar5 < 0x100) {
      __strncpy_chk(auStack_168,__s,lVar5,0x110);
      auStack_168[lVar5] = 0;
      local_170 = (char *)__strrchr_chk(auStack_168,0x3a,0x110);
      *param_4 = 0x50;
      if (local_170 != (char *)0x0) {
        *local_170 = '\0';
        lVar5 = strtol(local_170 + 1,&local_170,10);
        *param_4 = (ushort)lVar5;
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign((char *)param_2);
      pcVar4 = (char *)0x1;
      goto LAB_00b39454;
    }
  }
LAB_00b39450:
  pcVar4 = (char *)0x0;
LAB_00b39454:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pcVar4);
}


