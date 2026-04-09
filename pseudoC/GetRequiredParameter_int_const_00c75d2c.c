// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GetRequiredParameter<int_const*>
// Entry Point: 00c75d2c
// Size: 292 bytes
// Signature: void __cdecl GetRequiredParameter<int_const*>(char * param_1, char * param_2, int * * param_3)


/* void CryptoPP::NameValuePairs::GetRequiredParameter<int const*>(char const*, char const*, int
   const*&) const */

void CryptoPP::NameValuePairs::GetRequiredParameter<int_const*>
               (char *param_1,char *param_2,int **param_3)

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
  uVar2 = (**(code **)(*(long *)param_1 + 0x10))(param_1,param_3,&int_const*::typeinfo);
  if ((uVar2 & 1) == 0) {
    this = (InvalidArgument *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00c75da4 to 00c75dab has its CatchHandler @ 00c75f00 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(abStack_a8,param_2);
                    /* try { // try from 00c75dac to 00c75dbb has its CatchHandler @ 00c75ee8 */
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
                    /* try { // try from 00c75dd4 to 00c75ddf has its CatchHandler @ 00c75eb4 */
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
                    /* try { // try from 00c75df8 to 00c75e07 has its CatchHandler @ 00c75e90 */
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
                    /* try { // try from 00c75e24 to 00c75e4b has its CatchHandler @ 00c75e50 */
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


