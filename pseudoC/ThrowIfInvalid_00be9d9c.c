// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ThrowIfInvalid
// Entry Point: 00be9d9c
// Size: 160 bytes
// Signature: undefined __cdecl ThrowIfInvalid(RandomNumberGenerator * param_1, uint param_2)


/* CryptoPP::CryptoMaterial::ThrowIfInvalid(CryptoPP::RandomNumberGenerator&, unsigned int) const */

void CryptoPP::CryptoMaterial::ThrowIfInvalid(RandomNumberGenerator *param_1,uint param_2)

{
  long lVar1;
  ulong uVar2;
  InvalidMaterial *this;
  basic_string abStack_50 [6];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = (**(code **)(*(long *)param_1 + 0x20))(param_1,param_2);
  if ((uVar2 & 1) == 0) {
    this = (InvalidMaterial *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00be9dfc to 00be9e0b has its CatchHandler @ 00be9e64 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               abStack_50,"CryptoMaterial: this object contains invalid values");
                    /* try { // try from 00be9e10 to 00be9e37 has its CatchHandler @ 00be9e3c */
    InvalidMaterial::InvalidMaterial(this,abStack_50);
                    /* WARNING: Subroutine does not return */
    __cxa_throw(this,&InvalidMaterial::typeinfo,Exception::~Exception);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


