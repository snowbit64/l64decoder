// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: exist
// Entry Point: 00c704c8
// Size: 188 bytes
// Signature: undefined __thiscall exist(APKFileLoader * this, char * param_1, bool param_2)


/* APKFileLoader::exist(char const*, bool) */

uint __thiscall APKFileLoader::exist(APKFileLoader *this,char *param_1,bool param_2)

{
  void *pvVar1;
  long lVar2;
  uint uVar3;
  basic_string local_50 [4];
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if ((param_2) || (*(long *)(this + 0x10) == 0)) {
    uVar3 = 0;
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string(local_50);
                    /* try { // try from 00c7050c to 00c7053b has its CatchHandler @ 00c70584 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)local_50);
    pvVar1 = (void *)((ulong)local_50 | 1);
    if (((byte)local_50[0] & 1) != 0) {
      pvVar1 = local_40;
    }
    uVar3 = (**(code **)(**(long **)(this + 0x10) + 0x20))(*(long **)(this + 0x10),pvVar1);
    if (((byte)local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return uVar3 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


