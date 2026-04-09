// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: TransferAllTo2
// Entry Point: 00c7ae10
// Size: 248 bytes
// Signature: undefined __thiscall TransferAllTo2(BufferedTransformation * this, BufferedTransformation * param_1, basic_string * param_2, bool param_3)


/* CryptoPP::BufferedTransformation::TransferAllTo2(CryptoPP::BufferedTransformation&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, bool) */

void __thiscall
CryptoPP::BufferedTransformation::TransferAllTo2
          (BufferedTransformation *this,BufferedTransformation *param_1,basic_string *param_2,
          bool param_3)

{
  long lVar1;
  long lVar2;
  long local_58;
  uint local_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar2 = (**(code **)(*(long *)this + 0x160))();
  while (lVar2 != 0) {
    this = (BufferedTransformation *)(**(code **)(*(long *)this + 0x160))(this);
    lVar2 = (**(code **)(*(long *)this + 0x160))();
  }
  do {
    local_4c = 0xffffffff;
    lVar2 = TransferMessagesTo2(this,param_1,&local_4c,param_2,param_3);
    if (lVar2 != 0) goto LAB_00c7aedc;
  } while (local_4c != 0);
  do {
    local_58 = -1;
    lVar2 = (**(code **)(*(long *)this + 0x118))(this,param_1,&local_58,param_2,param_3);
  } while (lVar2 == 0 && local_58 != 0);
LAB_00c7aedc:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


