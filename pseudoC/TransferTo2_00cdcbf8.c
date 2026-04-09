// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: TransferTo2
// Entry Point: 00cdcbf8
// Size: 224 bytes
// Signature: undefined __thiscall TransferTo2(RandomNumberStore * this, BufferedTransformation * param_1, ulong * param_2, basic_string * param_3, bool param_4)


/* CryptoPP::RandomNumberStore::TransferTo2(CryptoPP::BufferedTransformation&, unsigned long&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, bool) */

undefined8 __thiscall
CryptoPP::RandomNumberStore::TransferTo2
          (RandomNumberStore *this,BufferedTransformation *param_1,ulong *param_2,
          basic_string *param_3,bool param_4)

{
  ulong uVar1;
  long lVar2;
  NotImplemented *this_00;
  basic_string abStack_50 [6];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if (!param_4) {
    this_00 = (NotImplemented *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00cdcc98 to 00cdcca7 has its CatchHandler @ 00cdcd00 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               abStack_50,
               "RandomNumberStore: nonblocking transfer is not implemented by this object");
                    /* try { // try from 00cdccac to 00cdccd3 has its CatchHandler @ 00cdccd8 */
    NotImplemented::NotImplemented(this_00,abStack_50);
                    /* WARNING: Subroutine does not return */
    __cxa_throw(this_00,&NotImplemented::typeinfo,Exception::~Exception);
  }
  uVar1 = *(long *)(this + 0x28) - *(long *)(this + 0x30);
  if (*param_2 <= (ulong)(*(long *)(this + 0x28) - *(long *)(this + 0x30))) {
    uVar1 = *param_2;
  }
  *param_2 = uVar1;
  (**(code **)(**(long **)(this + 0x20) + 0x58))(*(long **)(this + 0x20),param_1,param_3,uVar1);
  *(ulong *)(this + 0x30) = *(long *)(this + 0x30) + *param_2;
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


