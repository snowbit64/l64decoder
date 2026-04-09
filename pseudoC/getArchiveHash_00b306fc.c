// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getArchiveHash
// Entry Point: 00b306fc
// Size: 344 bytes
// Signature: undefined __thiscall getArchiveHash(ArchiveFileLoader * this, char * param_1, bool param_2, uchar * param_3)


/* ArchiveFileLoader::getArchiveHash(char const*, bool, unsigned char*) */

uint __thiscall
ArchiveFileLoader::getArchiveHash(ArchiveFileLoader *this,char *param_1,bool param_2,uchar *param_3)

{
  long lVar1;
  uint uVar2;
  size_t __n;
  long *plVar3;
  char *pcVar4;
  ulong uVar5;
  undefined8 local_70;
  size_t local_68;
  char *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  __n = strlen(param_1);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    pcVar4 = (char *)((ulong)&local_70 | 1);
    local_70 = CONCAT71(local_70._1_7_,(char)((int)__n << 1));
    if (__n == 0) goto LAB_00b30798;
  }
  else {
    uVar5 = __n + 0x10 & 0xfffffffffffffff0;
    pcVar4 = (char *)operator_new(uVar5);
    local_70 = uVar5 | 1;
    local_68 = __n;
    local_60 = pcVar4;
  }
  memcpy(pcVar4,param_1,__n);
LAB_00b30798:
  pcVar4[__n] = '\0';
                    /* try { // try from 00b3079c to 00b307af has its CatchHandler @ 00b30854 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)&local_70);
  pcVar4 = (char *)((ulong)&local_70 | 1);
  if ((local_70 & 1) != 0) {
    pcVar4 = local_60;
  }
                    /* try { // try from 00b307c4 to 00b307f3 has its CatchHandler @ 00b30858 */
  plVar3 = (long *)getArchiveForFile(this,pcVar4,0,param_2,(File **)0x0,(basic_string *)0x0,true);
  if (plVar3 == (long *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (**(code **)(*plVar3 + 0x30))(plVar3,param_3);
  }
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


