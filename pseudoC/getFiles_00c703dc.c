// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getFiles
// Entry Point: 00c703dc
// Size: 204 bytes
// Signature: undefined __thiscall getFiles(APKFileLoader * this, char * param_1, vector * param_2)


/* APKFileLoader::getFiles(char const*, std::__ndk1::vector<GsFileInfo,
   std::__ndk1::allocator<GsFileInfo> >&) */

void __thiscall APKFileLoader::getFiles(APKFileLoader *this,char *param_1,vector *param_2)

{
  char *pcVar1;
  long lVar2;
  ulong uVar3;
  basic_string local_60 [4];
  char *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uVar3 = PathUtil::isAbsolutePath(param_1);
  if ((((uVar3 & 1) == 0) && (*(long **)(this + 0x10) != (long *)0x0)) &&
     (uVar3 = (**(code **)(**(long **)(this + 0x10) + 0x10))(), (uVar3 & 1) != 0)) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string(local_60);
                    /* try { // try from 00c70440 to 00c7046b has its CatchHandler @ 00c704a8 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)local_60);
    pcVar1 = (char *)((ulong)local_60 | 1);
    if (((byte)local_60[0] & 1) != 0) {
      pcVar1 = local_50;
    }
    ZIPFileArchive::getFiles(*(ZIPFileArchive **)(this + 0x10),pcVar1,param_2);
    if (((byte)local_60[0] & 1) != 0) {
      operator_delete(local_50);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


