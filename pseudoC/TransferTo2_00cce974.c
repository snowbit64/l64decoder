// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: TransferTo2
// Entry Point: 00cce974
// Size: 152 bytes
// Signature: undefined __thiscall TransferTo2(BERGeneralDecoder * this, BufferedTransformation * param_1, ulong * param_2, basic_string * param_3, bool param_4)


/* CryptoPP::BERGeneralDecoder::TransferTo2(CryptoPP::BufferedTransformation&, unsigned long&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, bool) */

void __thiscall
CryptoPP::BERGeneralDecoder::TransferTo2
          (BERGeneralDecoder *this,BufferedTransformation *param_1,ulong *param_2,
          basic_string *param_3,bool param_4)

{
  BERDecodeErr *this_00;
  
  if ((this[0x31] != (BERGeneralDecoder)0x0) && (*(ulong *)(this + 0x28) < *param_2)) {
    *param_2 = *(ulong *)(this + 0x28);
  }
  (**(code **)(**(long **)(this + 0x20) + 0x118))
            (*(long **)(this + 0x20),param_1,param_2,param_3,param_4);
  if (this[0x31] != (BERGeneralDecoder)0x0) {
    if (*(ulong *)(this + 0x28) < *param_2) {
      this_00 = (BERDecodeErr *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00cce9f0 to 00cce9f3 has its CatchHandler @ 00ccea0c */
      BERDecodeErr::BERDecodeErr(this_00);
                    /* WARNING: Subroutine does not return */
      __cxa_throw(this_00,&BERDecodeErr::typeinfo,Exception::~Exception);
    }
    *(ulong *)(this + 0x28) = *(ulong *)(this + 0x28) - *param_2;
  }
  return;
}


