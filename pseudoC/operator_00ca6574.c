// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: operator()
// Entry Point: 00ca6574
// Size: 544 bytes
// Signature: AssignFromHelperClass * __cdecl operator()(char * param_1, _func_void_ECPPoint_ptr * param_2)


/* CryptoPP::AssignFromHelperClass<CryptoPP::DL_PublicKey_ECGDSA<CryptoPP::ECP>,
   CryptoPP::DL_PublicKey_ECGDSA<CryptoPP::ECP> >&
   CryptoPP::AssignFromHelperClass<CryptoPP::DL_PublicKey_ECGDSA<CryptoPP::ECP>,
   CryptoPP::DL_PublicKey_ECGDSA<CryptoPP::ECP> >::TEMPNAMEPLACEHOLDERVALUE(char const*, void
   (CryptoPP::DL_PublicKey_ECGDSA<CryptoPP::ECP>::*)(CryptoPP::ECPPoint const&)) */

AssignFromHelperClass *
CryptoPP::
AssignFromHelperClass<CryptoPP::DL_PublicKey_ECGDSA<CryptoPP::ECP>,CryptoPP::DL_PublicKey_ECGDSA<CryptoPP::ECP>>
::operator()(char *param_1,_func_void_ECPPoint_ptr *param_2)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  InvalidArgument *this;
  undefined8 *puVar4;
  code *in_x2;
  ulong in_x3;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> abStack_148 [24];
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined **local_d8;
  undefined **local_d0 [2];
  ulong local_c0;
  ulong uStack_b8;
  void *local_b0;
  undefined **local_a0 [2];
  ulong local_90;
  ulong uStack_88;
  void *local_80;
  undefined local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if (param_1[0x10] == '\0') {
    local_d8 = &PTR__ECPPoint_00fe9fd8;
    Integer::Integer((Integer *)local_d0);
                    /* try { // try from 00ca65dc to 00ca65df has its CatchHandler @ 00ca6858 */
    Integer::Integer((Integer *)local_a0);
    local_70 = 1;
                    /* try { // try from 00ca65f4 to 00ca6627 has its CatchHandler @ 00ca686c */
    uVar3 = (**(code **)(**(long **)(param_1 + 8) + 0x10))
                      (*(long **)(param_1 + 8),param_2,&ECPPoint::typeinfo,&local_d8);
    if ((uVar3 & 1) == 0) {
      this = (InvalidArgument *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00ca66e0 to 00ca66ef has its CatchHandler @ 00ca6840 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(abStack_148,"N8CryptoPP19DL_PublicKey_ECGDSAINS_3ECPEEE");
                    /* try { // try from 00ca66f0 to 00ca66ff has its CatchHandler @ 00ca6828 */
      puVar4 = (undefined8 *)
               std::__ndk1::
               basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
               append((char *)abStack_148);
      local_120 = puVar4[2];
      uStack_128 = puVar4[1];
      local_130 = *puVar4;
      puVar4[1] = 0;
      puVar4[2] = 0;
      *puVar4 = 0;
                    /* try { // try from 00ca6718 to 00ca6723 has its CatchHandler @ 00ca67f8 */
      puVar4 = (undefined8 *)
               std::__ndk1::
               basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
               append((char *)&local_130);
      local_100 = puVar4[2];
      uStack_108 = puVar4[1];
      local_110 = *puVar4;
      puVar4[1] = 0;
      puVar4[2] = 0;
      *puVar4 = 0;
                    /* try { // try from 00ca673c to 00ca674b has its CatchHandler @ 00ca67d4 */
      puVar4 = (undefined8 *)
               std::__ndk1::
               basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
               append((char *)&local_110);
      local_e0 = puVar4[2];
      uStack_e8 = puVar4[1];
      local_f0 = *puVar4;
      puVar4[1] = 0;
      puVar4[2] = 0;
      *puVar4 = 0;
                    /* try { // try from 00ca6768 to 00ca678f has its CatchHandler @ 00ca6794 */
      InvalidArgument::InvalidArgument(this,(basic_string *)&local_f0);
                    /* WARNING: Subroutine does not return */
      __cxa_throw(this,&InvalidArgument::typeinfo,Exception::~Exception);
    }
    plVar1 = (long *)(*(long *)param_1 + ((long)in_x3 >> 1));
    if ((in_x3 & 1) != 0) {
      in_x2 = *(code **)(in_x2 + *plVar1);
    }
    (*in_x2)(plVar1,&local_d8);
    local_d8 = &PTR__ECPPoint_00fe9fd8;
    if (uStack_88 <= local_90) {
      local_90 = uStack_88;
    }
    local_a0[0] = &PTR__Integer_0100c890;
    for (; local_90 != 0; local_90 = local_90 - 1) {
      *(undefined4 *)((long)local_80 + local_90 * 4 + -4) = 0;
    }
                    /* try { // try from 00ca6668 to 00ca666b has its CatchHandler @ 00ca6854 */
    UnalignedDeallocate(local_80);
    local_d0[0] = &PTR__Integer_0100c890;
    if (uStack_b8 <= local_c0) {
      local_c0 = uStack_b8;
    }
    for (; local_c0 != 0; local_c0 = local_c0 - 1) {
      *(undefined4 *)((long)local_b0 + local_c0 * 4 + -4) = 0;
    }
                    /* try { // try from 00ca669c to 00ca669f has its CatchHandler @ 00ca6850 */
    UnalignedDeallocate(local_b0);
  }
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return (AssignFromHelperClass *)param_1;
}


