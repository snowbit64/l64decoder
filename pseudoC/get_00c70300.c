// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: get
// Entry Point: 00c70300
// Size: 188 bytes
// Signature: undefined __cdecl get(char * param_1, ACCESS_MODE param_2, bool param_3, bool param_4)


/* APKFileLoader::get(char const*, File::ACCESS_MODE, bool, bool) */

undefined8 APKFileLoader::get(char *param_1,ACCESS_MODE param_2,bool param_3,bool param_4)

{
  void *pvVar1;
  long lVar2;
  undefined8 uVar3;
  basic_string local_50 [4];
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if ((param_4) || (*(long *)(param_1 + 0x10) == 0)) {
    uVar3 = 0;
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string(local_50);
                    /* try { // try from 00c70344 to 00c7034f has its CatchHandler @ 00c703c0 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)local_50);
    pvVar1 = (void *)((ulong)local_50 | 1);
    if (((byte)local_50[0] & 1) != 0) {
      pvVar1 = local_40;
    }
                    /* try { // try from 00c70370 to 00c70373 has its CatchHandler @ 00c703bc */
    uVar3 = (**(code **)(**(long **)(param_1 + 0x10) + 0x18))(*(long **)(param_1 + 0x10),pvVar1);
    if (((byte)local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


