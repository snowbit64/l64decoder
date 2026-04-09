// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GetRequiredParameter<CryptoPP::ECP>
// Entry Point: 00c9cd38
// Size: 292 bytes
// Signature: void __cdecl GetRequiredParameter<CryptoPP::ECP>(char * param_1, char * param_2, ECP * param_3)


/* void CryptoPP::NameValuePairs::GetRequiredParameter<CryptoPP::ECP>(char const*, char const*,
   CryptoPP::ECP&) const */

void CryptoPP::NameValuePairs::GetRequiredParameter<CryptoPP::ECP>
               (char *param_1,char *param_2,ECP *param_3)

{
  long lVar1;
  ulong uVar2;
  InvalidArgument *this;
  undefined8 *puVar3;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> abStack_a8 [24];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = (**(code **)(*(long *)param_1 + 0x10))(param_1,param_3,&ECP::typeinfo);
  if ((uVar2 & 1) == 0) {
    this = (InvalidArgument *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00c9cdb0 to 00c9cdb7 has its CatchHandler @ 00c9cf0c */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(abStack_a8,param_2);
                    /* try { // try from 00c9cdb8 to 00c9cdc7 has its CatchHandler @ 00c9cef4 */
    puVar3 = (undefined8 *)
             std::__ndk1::
             basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                       ((char *)abStack_a8);
    local_80 = puVar3[2];
    uStack_88 = puVar3[1];
    local_90 = *puVar3;
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = 0;
                    /* try { // try from 00c9cde0 to 00c9cdeb has its CatchHandler @ 00c9cec0 */
    puVar3 = (undefined8 *)
             std::__ndk1::
             basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                       ((char *)&local_90);
    local_60 = puVar3[2];
    uStack_68 = puVar3[1];
    local_70 = *puVar3;
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = 0;
                    /* try { // try from 00c9ce04 to 00c9ce13 has its CatchHandler @ 00c9ce9c */
    puVar3 = (undefined8 *)
             std::__ndk1::
             basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                       ((char *)&local_70);
    local_40 = puVar3[2];
    uStack_48 = puVar3[1];
    local_50 = *puVar3;
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = 0;
                    /* try { // try from 00c9ce30 to 00c9ce57 has its CatchHandler @ 00c9ce5c */
    InvalidArgument::InvalidArgument(this,(basic_string *)&local_50);
                    /* WARNING: Subroutine does not return */
    __cxa_throw(this,&InvalidArgument::typeinfo,Exception::~Exception);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


