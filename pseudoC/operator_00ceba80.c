// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: operator()
// Entry Point: 00ceba80
// Size: 728 bytes
// Signature: AssignFromHelperClass * __cdecl operator()(char * param_1, char * param_2, _func_void_Integer_ptr_Integer_ptr * param_3)


/* CryptoPP::AssignFromHelperClass<CryptoPP::DL_GroupParameters_IntegerBased,
   CryptoPP::DL_GroupParameters_IntegerBased>&
   CryptoPP::AssignFromHelperClass<CryptoPP::DL_GroupParameters_IntegerBased,
   CryptoPP::DL_GroupParameters_IntegerBased>::TEMPNAMEPLACEHOLDERVALUE(char const*, char const*,
   void (CryptoPP::DL_GroupParameters_IntegerBased::*)(CryptoPP::Integer const&, CryptoPP::Integer
   const&)) */

AssignFromHelperClass *
CryptoPP::
AssignFromHelperClass<CryptoPP::DL_GroupParameters_IntegerBased,CryptoPP::DL_GroupParameters_IntegerBased>
::operator()(char *param_1,char *param_2,_func_void_Integer_ptr_Integer_ptr *param_3)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  InvalidArgument *pIVar4;
  undefined8 *puVar5;
  code *in_x3;
  ulong in_x4;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> abStack_138 [24];
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined **local_c0;
  undefined8 uStack_b8;
  ulong local_b0;
  ulong uStack_a8;
  void *local_a0;
  undefined **local_88 [2];
  ulong local_78;
  ulong uStack_70;
  void *local_68;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if (param_1[0x10] == '\0') {
    Integer::Integer((Integer *)local_88);
                    /* try { // try from 00cebad8 to 00cebaeb has its CatchHandler @ 00cebee4 */
    uVar3 = (**(code **)(**(long **)(param_1 + 8) + 0x10))
                      (*(long **)(param_1 + 8),param_2,&Integer::typeinfo,local_88);
    if ((uVar3 & 1) == 0) {
      pIVar4 = (InvalidArgument *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00cebbe8 to 00cebbf7 has its CatchHandler @ 00cebec4 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_120,"N8CryptoPP31DL_GroupParameters_IntegerBasedE");
                    /* try { // try from 00cebbf8 to 00cebc07 has its CatchHandler @ 00cebe9c */
      puVar5 = (undefined8 *)
               std::__ndk1::
               basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
               append((char *)&local_120);
      local_f0 = puVar5[2];
      uStack_f8 = puVar5[1];
      local_100 = *puVar5;
      puVar5[1] = 0;
      puVar5[2] = 0;
      *puVar5 = 0;
                    /* try { // try from 00cebc20 to 00cebc2b has its CatchHandler @ 00cebe54 */
      puVar5 = (undefined8 *)
               std::__ndk1::
               basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
               append((char *)&local_100);
      local_d0 = puVar5[2];
      uStack_d8 = puVar5[1];
      local_e0 = *puVar5;
      puVar5[1] = 0;
      puVar5[2] = 0;
      *puVar5 = 0;
                    /* try { // try from 00cebc44 to 00cebc53 has its CatchHandler @ 00cebe00 */
      puVar5 = (undefined8 *)
               std::__ndk1::
               basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
               append((char *)&local_e0);
      local_b0 = puVar5[2];
      uStack_b8 = puVar5[1];
      local_c0 = (undefined **)*puVar5;
      puVar5[1] = 0;
      puVar5[2] = 0;
      *puVar5 = 0;
                    /* try { // try from 00cebc70 to 00cebc97 has its CatchHandler @ 00cebdc0 */
      InvalidArgument::InvalidArgument(pIVar4,(basic_string *)&local_c0);
                    /* WARNING: Subroutine does not return */
      __cxa_throw(pIVar4,&InvalidArgument::typeinfo,Exception::~Exception);
    }
                    /* try { // try from 00cebaf0 to 00cebaf7 has its CatchHandler @ 00cebedc */
    Integer::Integer((Integer *)&local_c0);
                    /* try { // try from 00cebb04 to 00cebb3b has its CatchHandler @ 00cebeec */
    uVar3 = (**(code **)(**(long **)(param_1 + 8) + 0x10))
                      (*(long **)(param_1 + 8),param_3,&Integer::typeinfo,&local_c0);
    if ((uVar3 & 1) == 0) {
      pIVar4 = (InvalidArgument *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00cebca8 to 00cebcb7 has its CatchHandler @ 00cebeb4 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(abStack_138,"N8CryptoPP31DL_GroupParameters_IntegerBasedE");
                    /* try { // try from 00cebcb8 to 00cebcc7 has its CatchHandler @ 00cebe84 */
      puVar5 = (undefined8 *)
               std::__ndk1::
               basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
               append((char *)abStack_138);
      local_110 = puVar5[2];
      uStack_118 = puVar5[1];
      local_120 = *puVar5;
      puVar5[1] = 0;
      puVar5[2] = 0;
      *puVar5 = 0;
                    /* try { // try from 00cebce0 to 00cebceb has its CatchHandler @ 00cebe24 */
      puVar5 = (undefined8 *)
               std::__ndk1::
               basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
               append((char *)&local_120);
      local_f0 = puVar5[2];
      uStack_f8 = puVar5[1];
      local_100 = *puVar5;
      puVar5[1] = 0;
      puVar5[2] = 0;
      *puVar5 = 0;
                    /* try { // try from 00cebd04 to 00cebd13 has its CatchHandler @ 00cebd9c */
      puVar5 = (undefined8 *)
               std::__ndk1::
               basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
               append((char *)&local_100);
      local_d0 = puVar5[2];
      uStack_d8 = puVar5[1];
      local_e0 = *puVar5;
      puVar5[1] = 0;
      puVar5[2] = 0;
      *puVar5 = 0;
                    /* try { // try from 00cebd30 to 00cebd57 has its CatchHandler @ 00cebd5c */
      InvalidArgument::InvalidArgument(pIVar4,(basic_string *)&local_e0);
                    /* WARNING: Subroutine does not return */
      __cxa_throw(pIVar4,&InvalidArgument::typeinfo,Exception::~Exception);
    }
    plVar1 = (long *)(*(long *)param_1 + ((long)in_x4 >> 1));
    if ((in_x4 & 1) != 0) {
      in_x3 = *(code **)(in_x3 + *plVar1);
    }
    (*in_x3)(plVar1,local_88,&local_c0);
    if (uStack_a8 <= local_b0) {
      local_b0 = uStack_a8;
    }
    local_c0 = &PTR__Integer_0100c890;
    for (; local_b0 != 0; local_b0 = local_b0 - 1) {
      *(undefined4 *)((long)local_a0 + local_b0 * 4 + -4) = 0;
    }
                    /* try { // try from 00cebb74 to 00cebb77 has its CatchHandler @ 00cebed8 */
    UnalignedDeallocate(local_a0);
    local_88[0] = &PTR__Integer_0100c890;
    if (uStack_70 <= local_78) {
      local_78 = uStack_70;
    }
    for (; local_78 != 0; local_78 = local_78 - 1) {
      *(undefined4 *)((long)local_68 + local_78 * 4 + -4) = 0;
    }
                    /* try { // try from 00cebba8 to 00cebbab has its CatchHandler @ 00cebed4 */
    UnalignedDeallocate(local_68);
  }
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return (AssignFromHelperClass *)param_1;
}


