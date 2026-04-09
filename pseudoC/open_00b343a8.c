// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: open
// Entry Point: 00b343a8
// Size: 252 bytes
// Signature: undefined __cdecl open(char * param_1, ACCESS_MODE param_2, bool param_3)


/* NativeFile::open(char const*, File::ACCESS_MODE, bool) */

void NativeFile::open(char *param_1,ACCESS_MODE param_2,bool param_3)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  char *__filename;
  FILE *pFVar4;
  char *__modes;
  char acStack_248 [512];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign(param_1 + 0x10);
  PathUtil::removeBackReferencesInPlace((basic_string *)(param_1 + 0x10));
  if (param_3 == true) {
    iVar3 = NativeFileUtil::getFileType((char *)(ulong)param_2,true);
    if (iVar3 == 1) {
      bVar2 = false;
      goto LAB_00b34478;
    }
    *(undefined8 *)(param_1 + 8) = 0;
    __modes = "wb";
  }
  else {
    *(undefined8 *)(param_1 + 8) = 0;
    if (param_3 == true) {
      __modes = "ab";
    }
    else if (param_3) {
      __modes = "wb";
    }
    else {
      __modes = "rb";
    }
  }
  __filename = (char *)PathUtil::makeNativePath((char *)(ulong)param_2,acStack_248);
  pFVar4 = fopen(__filename,__modes);
  bVar2 = pFVar4 != (FILE *)0x0;
  *(FILE **)(param_1 + 8) = pFVar4;
LAB_00b34478:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2);
}


