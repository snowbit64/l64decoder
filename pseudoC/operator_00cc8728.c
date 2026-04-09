// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: operator()
// Entry Point: 00cc8728
// Size: 428 bytes
// Signature: AssignFromHelperClass * __cdecl operator()(char * param_1, _func_void_Integer_ptr * param_2)


/* CryptoPP::AssignFromHelperClass<CryptoPP::DL_PrivateKey<CryptoPP::EC2NPoint>,
   CryptoPP::DL_PrivateKey<CryptoPP::EC2NPoint> >&
   CryptoPP::AssignFromHelperClass<CryptoPP::DL_PrivateKey<CryptoPP::EC2NPoint>,
   CryptoPP::DL_PrivateKey<CryptoPP::EC2NPoint> >::TEMPNAMEPLACEHOLDERVALUE(char const*, void
   (CryptoPP::DL_PrivateKey<CryptoPP::EC2NPoint>::*)(CryptoPP::Integer const&)) */

AssignFromHelperClass *
CryptoPP::
AssignFromHelperClass<CryptoPP::DL_PrivateKey<CryptoPP::EC2NPoint>,CryptoPP::DL_PrivateKey<CryptoPP::EC2NPoint>>
::operator()(char *param_1,_func_void_Integer_ptr *param_2)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  InvalidArgument *this;
  undefined8 *puVar4;
  code *in_x2;
  ulong in_x3;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> abStack_e8 [24];
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined **local_78 [2];
  ulong local_68;
  ulong uStack_60;
  void *local_58;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if (param_1[0x10] == '\0') {
    Integer::Integer((Integer *)local_78);
                    /* try { // try from 00cc8778 to 00cc87ab has its CatchHandler @ 00cc8994 */
    uVar3 = (**(code **)(**(long **)(param_1 + 8) + 0x10))
                      (*(long **)(param_1 + 8),param_2,&Integer::typeinfo,local_78);
    if ((uVar3 & 1) == 0) {
      this = (InvalidArgument *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00cc8820 to 00cc882f has its CatchHandler @ 00cc8980 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(abStack_e8,"N8CryptoPP13DL_PrivateKeyINS_9EC2NPointEEE");
                    /* try { // try from 00cc8830 to 00cc883f has its CatchHandler @ 00cc8968 */
      puVar4 = (undefined8 *)
               std::__ndk1::
               basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
               append((char *)abStack_e8);
      local_c0 = puVar4[2];
      uStack_c8 = puVar4[1];
      local_d0 = *puVar4;
      puVar4[1] = 0;
      puVar4[2] = 0;
      *puVar4 = 0;
                    /* try { // try from 00cc8858 to 00cc8863 has its CatchHandler @ 00cc8938 */
      puVar4 = (undefined8 *)
               std::__ndk1::
               basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
               append((char *)&local_d0);
      local_a0 = puVar4[2];
      uStack_a8 = puVar4[1];
      local_b0 = *puVar4;
      puVar4[1] = 0;
      puVar4[2] = 0;
      *puVar4 = 0;
                    /* try { // try from 00cc887c to 00cc888b has its CatchHandler @ 00cc8914 */
      puVar4 = (undefined8 *)
               std::__ndk1::
               basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
               append((char *)&local_b0);
      local_80 = puVar4[2];
      uStack_88 = puVar4[1];
      local_90 = *puVar4;
      puVar4[1] = 0;
      puVar4[2] = 0;
      *puVar4 = 0;
                    /* try { // try from 00cc88a8 to 00cc88cf has its CatchHandler @ 00cc88d4 */
      InvalidArgument::InvalidArgument(this,(basic_string *)&local_90);
                    /* WARNING: Subroutine does not return */
      __cxa_throw(this,&InvalidArgument::typeinfo,Exception::~Exception);
    }
    plVar1 = (long *)(*(long *)param_1 + ((long)in_x3 >> 1));
    if ((in_x3 & 1) != 0) {
      in_x2 = *(code **)(in_x2 + *plVar1);
    }
    (*in_x2)(plVar1,local_78);
    if (uStack_60 <= local_68) {
      local_68 = uStack_60;
    }
    local_78[0] = &PTR__Integer_0100c890;
    for (; local_68 != 0; local_68 = local_68 - 1) {
      *(undefined4 *)((long)local_58 + local_68 * 4 + -4) = 0;
    }
                    /* try { // try from 00cc87e4 to 00cc87e7 has its CatchHandler @ 00cc8990 */
    UnalignedDeallocate(local_58);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return (AssignFromHelperClass *)param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


