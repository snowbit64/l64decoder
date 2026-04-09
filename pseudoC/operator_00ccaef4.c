// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: operator()
// Entry Point: 00ccaef4
// Size: 428 bytes
// Signature: AssignFromHelperClass * __cdecl operator()(char * param_1, _func_void_Integer_ptr * param_2)


/* CryptoPP::AssignFromHelperClass<CryptoPP::DL_PublicKey<CryptoPP::Integer>,
   CryptoPP::DL_PublicKey<CryptoPP::Integer> >&
   CryptoPP::AssignFromHelperClass<CryptoPP::DL_PublicKey<CryptoPP::Integer>,
   CryptoPP::DL_PublicKey<CryptoPP::Integer> >::TEMPNAMEPLACEHOLDERVALUE(char const*, void
   (CryptoPP::DL_PublicKey<CryptoPP::Integer>::*)(CryptoPP::Integer const&)) */

AssignFromHelperClass *
CryptoPP::
AssignFromHelperClass<CryptoPP::DL_PublicKey<CryptoPP::Integer>,CryptoPP::DL_PublicKey<CryptoPP::Integer>>
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
                    /* try { // try from 00ccaf44 to 00ccaf77 has its CatchHandler @ 00ccb160 */
    uVar3 = (**(code **)(**(long **)(param_1 + 8) + 0x10))
                      (*(long **)(param_1 + 8),param_2,&Integer::typeinfo,local_78);
    if ((uVar3 & 1) == 0) {
      this = (InvalidArgument *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00ccafec to 00ccaffb has its CatchHandler @ 00ccb14c */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(abStack_e8,"N8CryptoPP12DL_PublicKeyINS_7IntegerEEE");
                    /* try { // try from 00ccaffc to 00ccb00b has its CatchHandler @ 00ccb134 */
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
                    /* try { // try from 00ccb024 to 00ccb02f has its CatchHandler @ 00ccb104 */
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
                    /* try { // try from 00ccb048 to 00ccb057 has its CatchHandler @ 00ccb0e0 */
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
                    /* try { // try from 00ccb074 to 00ccb09b has its CatchHandler @ 00ccb0a0 */
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
                    /* try { // try from 00ccafb0 to 00ccafb3 has its CatchHandler @ 00ccb15c */
    UnalignedDeallocate(local_58);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return (AssignFromHelperClass *)param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


