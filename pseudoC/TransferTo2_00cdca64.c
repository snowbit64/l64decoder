// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: TransferTo2
// Entry Point: 00cdca64
// Size: 132 bytes
// Signature: undefined __thiscall TransferTo2(StringStore * this, BufferedTransformation * param_1, ulong * param_2, basic_string * param_3, bool param_4)


/* CryptoPP::StringStore::TransferTo2(CryptoPP::BufferedTransformation&, unsigned long&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, bool) */

void __thiscall
CryptoPP::StringStore::TransferTo2
          (StringStore *this,BufferedTransformation *param_1,ulong *param_2,basic_string *param_3,
          bool param_4)

{
  long lVar1;
  ulong local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_40 = 0;
  (**(code **)(*(long *)this + 0x120))(this,param_1,&local_40,*param_2,param_3,param_4);
  *(ulong *)(this + 0x30) = *(long *)(this + 0x30) + local_40;
  *param_2 = local_40;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


