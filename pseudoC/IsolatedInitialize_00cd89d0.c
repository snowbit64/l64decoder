// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: IsolatedInitialize
// Entry Point: 00cd89d0
// Size: 204 bytes
// Signature: undefined __thiscall IsolatedInitialize(ArraySink * this, NameValuePairs * param_1)


/* CryptoPP::ArraySink::IsolatedInitialize(CryptoPP::NameValuePairs const&) */

void __thiscall CryptoPP::ArraySink::IsolatedInitialize(ArraySink *this,NameValuePairs *param_1)

{
  long lVar1;
  ulong uVar2;
  InvalidArgument *this_00;
  basic_string abStack_60 [6];
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_48 = 0;
  uStack_40 = 0;
  uVar2 = (**(code **)(*(long *)param_1 + 0x10))
                    (param_1,"OutputBuffer",&ByteArrayParameter::typeinfo,&local_48);
  if ((uVar2 & 1) == 0) {
    this_00 = (InvalidArgument *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00cd8a5c to 00cd8a6b has its CatchHandler @ 00cd8ac0 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               abStack_60,"ArraySink: missing OutputBuffer argument");
                    /* try { // try from 00cd8a70 to 00cd8a97 has its CatchHandler @ 00cd8a9c */
    InvalidArgument::InvalidArgument(this_00,abStack_60);
                    /* WARNING: Subroutine does not return */
    __cxa_throw(this_00,&InvalidArgument::typeinfo,Exception::~Exception);
  }
  *(undefined8 *)(this + 0x18) = local_48;
  *(undefined8 *)(this + 0x20) = uStack_40;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


