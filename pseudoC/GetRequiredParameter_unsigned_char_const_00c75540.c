// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GetRequiredParameter<unsigned_char_const*>
// Entry Point: 00c75540
// Size: 292 bytes
// Signature: void __cdecl GetRequiredParameter<unsigned_char_const*>(char * param_1, char * param_2, uchar * * param_3)


/* void CryptoPP::NameValuePairs::GetRequiredParameter<unsigned char const*>(char const*, char
   const*, unsigned char const*&) const */

void CryptoPP::NameValuePairs::GetRequiredParameter<unsigned_char_const*>
               (char *param_1,char *param_2,uchar **param_3)

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
  uVar2 = (**(code **)(*(long *)param_1 + 0x10))(param_1,param_3,&unsigned_char_const*::typeinfo);
  if ((uVar2 & 1) == 0) {
    this = (InvalidArgument *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00c755b8 to 00c755bf has its CatchHandler @ 00c75714 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(abStack_a8,param_2);
                    /* try { // try from 00c755c0 to 00c755cf has its CatchHandler @ 00c756fc */
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
                    /* try { // try from 00c755e8 to 00c755f3 has its CatchHandler @ 00c756c8 */
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
                    /* try { // try from 00c7560c to 00c7561b has its CatchHandler @ 00c756a4 */
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
                    /* try { // try from 00c75638 to 00c7565f has its CatchHandler @ 00c75664 */
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


