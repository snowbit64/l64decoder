// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: operator()
// Entry Point: 00cc70f4
// Size: 520 bytes
// Signature: AssignFromHelperClass * __cdecl operator()(char * param_1, _func_void_EC2NPoint_ptr * param_2)


/* CryptoPP::AssignFromHelperClass<CryptoPP::DL_PublicKey<CryptoPP::EC2NPoint>,
   CryptoPP::DL_PublicKey<CryptoPP::EC2NPoint> >&
   CryptoPP::AssignFromHelperClass<CryptoPP::DL_PublicKey<CryptoPP::EC2NPoint>,
   CryptoPP::DL_PublicKey<CryptoPP::EC2NPoint> >::TEMPNAMEPLACEHOLDERVALUE(char const*, void
   (CryptoPP::DL_PublicKey<CryptoPP::EC2NPoint>::*)(CryptoPP::EC2NPoint const&)) */

AssignFromHelperClass *
CryptoPP::
AssignFromHelperClass<CryptoPP::DL_PublicKey<CryptoPP::EC2NPoint>,CryptoPP::DL_PublicKey<CryptoPP::EC2NPoint>>
::operator()(char *param_1,_func_void_EC2NPoint_ptr *param_2)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  InvalidArgument *this;
  undefined8 *puVar4;
  code *in_x2;
  ulong in_x3;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> abStack_128 [24];
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined **local_b8;
  PolynomialMod2 aPStack_b0 [8];
  ulong local_a8;
  ulong uStack_a0;
  void *local_98;
  PolynomialMod2 aPStack_90 [8];
  ulong local_88;
  ulong uStack_80;
  void *local_78;
  undefined local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if (param_1[0x10] == '\0') {
    local_b8 = &PTR__EC2NPoint_010026a8;
    PolynomialMod2::PolynomialMod2(aPStack_b0);
                    /* try { // try from 00cc715c to 00cc715f has its CatchHandler @ 00cc73c0 */
    PolynomialMod2::PolynomialMod2(aPStack_90);
    local_70 = 1;
                    /* try { // try from 00cc7174 to 00cc71a7 has its CatchHandler @ 00cc73d4 */
    uVar3 = (**(code **)(**(long **)(param_1 + 8) + 0x10))
                      (*(long **)(param_1 + 8),param_2,&EC2NPoint::typeinfo,&local_b8);
    if ((uVar3 & 1) == 0) {
      this = (InvalidArgument *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00cc7248 to 00cc7257 has its CatchHandler @ 00cc73a8 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(abStack_128,"N8CryptoPP12DL_PublicKeyINS_9EC2NPointEEE");
                    /* try { // try from 00cc7258 to 00cc7267 has its CatchHandler @ 00cc7390 */
      puVar4 = (undefined8 *)
               std::__ndk1::
               basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
               append((char *)abStack_128);
      local_100 = puVar4[2];
      uStack_108 = puVar4[1];
      local_110 = *puVar4;
      puVar4[1] = 0;
      puVar4[2] = 0;
      *puVar4 = 0;
                    /* try { // try from 00cc7280 to 00cc728b has its CatchHandler @ 00cc7360 */
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
                    /* try { // try from 00cc72a4 to 00cc72b3 has its CatchHandler @ 00cc733c */
      puVar4 = (undefined8 *)
               std::__ndk1::
               basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
               append((char *)&local_f0);
      local_c0 = puVar4[2];
      uStack_c8 = puVar4[1];
      local_d0 = *puVar4;
      puVar4[1] = 0;
      puVar4[2] = 0;
      *puVar4 = 0;
                    /* try { // try from 00cc72d0 to 00cc72f7 has its CatchHandler @ 00cc72fc */
      InvalidArgument::InvalidArgument(this,(basic_string *)&local_d0);
                    /* WARNING: Subroutine does not return */
      __cxa_throw(this,&InvalidArgument::typeinfo,Exception::~Exception);
    }
    plVar1 = (long *)(*(long *)param_1 + ((long)in_x3 >> 1));
    if ((in_x3 & 1) != 0) {
      in_x2 = *(code **)(in_x2 + *plVar1);
    }
    (*in_x2)(plVar1,&local_b8);
    local_b8 = &PTR__EC2NPoint_010026a8;
    if (uStack_80 <= local_88) {
      local_88 = uStack_80;
    }
    for (; local_88 != 0; local_88 = local_88 - 1) {
      *(undefined4 *)((long)local_78 + local_88 * 4 + -4) = 0;
    }
                    /* try { // try from 00cc71d8 to 00cc71db has its CatchHandler @ 00cc73bc */
    UnalignedDeallocate(local_78);
    if (uStack_a0 <= local_a8) {
      local_a8 = uStack_a0;
    }
    for (; local_a8 != 0; local_a8 = local_a8 - 1) {
      *(undefined4 *)((long)local_98 + local_a8 * 4 + -4) = 0;
    }
                    /* try { // try from 00cc7204 to 00cc7207 has its CatchHandler @ 00cc73b8 */
    UnalignedDeallocate(local_98);
  }
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return (AssignFromHelperClass *)param_1;
}


