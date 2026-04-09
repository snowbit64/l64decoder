// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: buildMangledName
// Entry Point: 00c574a8
// Size: 136 bytes
// Signature: undefined __thiscall buildMangledName(SHC_Type * this, SHC_String * param_1)


/* SHC_Type::buildMangledName(SHC_String&) const */

void __thiscall SHC_Type::buildMangledName(SHC_Type *this,SHC_String *param_1)

{
  char *pcVar1;
  long lVar2;
  byte local_50 [16];
  char *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  IR_Type::buildMangledName();
  pcVar1 = (char *)((ulong)local_50 | 1);
  if ((local_50[0] & 1) != 0) {
    pcVar1 = local_40;
  }
                    /* try { // try from 00c574f0 to 00c574f7 has its CatchHandler @ 00c57530 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,SHC_STLPoolAllocator<char>>::append
            ((basic_string<char,std::__ndk1::char_traits<char>,SHC_STLPoolAllocator<char>> *)param_1
             ,pcVar1);
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


