// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: MakeParametersForTwoPrimesOfEqualSize
// Entry Point: 00d12b2c
// Size: 1016 bytes
// Signature: undefined __cdecl MakeParametersForTwoPrimesOfEqualSize(uint param_1)


/* CryptoPP::MakeParametersForTwoPrimesOfEqualSize(unsigned int) */

void CryptoPP::MakeParametersForTwoPrimesOfEqualSize(uint param_1)

{
  long lVar1;
  ulong uVar2;
  AlgorithmParameters *pAVar3;
  InvalidArgument *this;
  ulong extraout_x1;
  ulong extraout_x1_00;
  undefined in_w3;
  AlgorithmParameters *in_x8;
  undefined **local_138 [2];
  ulong local_128;
  ulong uStack_120;
  void *local_118;
  undefined8 local_108;
  ulong local_f8;
  ulong uStack_f0;
  void *local_e8;
  undefined **local_d8;
  long *local_d0;
  undefined local_c8;
  undefined7 uStack_c7;
  ulong uStack_c0;
  void *local_b8;
  undefined **local_a8 [2];
  ulong local_98;
  ulong uStack_90;
  void *local_88;
  undefined **local_78 [2];
  ulong local_68;
  ulong uStack_60;
  void *local_58;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (param_1 < 0x10) {
    this = (InvalidArgument *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00d12ee4 to 00d12ef3 has its CatchHandler @ 00d12fd4 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               local_78,"invalid bit length");
                    /* try { // try from 00d12ef8 to 00d12f1f has its CatchHandler @ 00d12fb0 */
    InvalidArgument::InvalidArgument(this,(basic_string *)local_78);
                    /* WARNING: Subroutine does not return */
    __cxa_throw(this,&InvalidArgument::typeinfo,Exception::~Exception);
  }
  Integer::Integer((Integer *)local_78);
                    /* try { // try from 00d12b68 to 00d12b6f has its CatchHandler @ 00d12ffc */
  Integer::Integer((Integer *)local_a8);
  if ((param_1 & 1) == 0) {
                    /* try { // try from 00d12b7c to 00d12b87 has its CatchHandler @ 00d12fac */
    Integer::Integer((Integer *)&local_108,0xb6);
                    /* try { // try from 00d12b90 to 00d12b9b has its CatchHandler @ 00d12f98 */
    Integer::operator<<((Integer *)&local_108,(ulong)((param_1 >> 1) - 8));
                    /* try { // try from 00d12b9c to 00d12ba7 has its CatchHandler @ 00d12f78 */
    Integer::operator=((Integer *)local_78,(Integer *)&local_d8);
    local_d8 = &PTR__Integer_0100c890;
    uVar2 = CONCAT71(uStack_c7,local_c8);
    if (uStack_c0 <= CONCAT71(uStack_c7,local_c8)) {
      uVar2 = uStack_c0;
    }
    for (; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined4 *)((long)local_b8 + uVar2 * 4 + -4) = 0;
    }
                    /* try { // try from 00d12bd8 to 00d12bdb has its CatchHandler @ 00d12f70 */
    UnalignedDeallocate(local_b8);
    local_108 = &PTR__Integer_0100c890;
    uVar2 = local_f8;
    if (uStack_f0 <= local_f8) {
      uVar2 = uStack_f0;
    }
    for (; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined4 *)((long)local_e8 + uVar2 * 4 + -4) = 0;
    }
                    /* try { // try from 00d12c0c to 00d12c0f has its CatchHandler @ 00d12f68 */
    UnalignedDeallocate(local_e8);
                    /* try { // try from 00d12c10 to 00d12c1b has its CatchHandler @ 00d12f60 */
    Integer::Power2((Integer *)(ulong)(param_1 >> 1),extraout_x1_00);
                    /* try { // try from 00d12c1c to 00d12c27 has its CatchHandler @ 00d12f58 */
    Integer::Integer((Integer *)local_138,1);
                    /* try { // try from 00d12c28 to 00d12c37 has its CatchHandler @ 00d12f48 */
    Integer::Minus((Integer *)&local_108);
                    /* try { // try from 00d12c38 to 00d12c43 has its CatchHandler @ 00d12f30 */
    Integer::operator=((Integer *)local_a8,(Integer *)&local_d8);
    local_d8 = &PTR__Integer_0100c890;
    uVar2 = CONCAT71(uStack_c7,local_c8);
    if (uStack_c0 <= CONCAT71(uStack_c7,local_c8)) {
      uVar2 = uStack_c0;
    }
    for (; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined4 *)((long)local_b8 + uVar2 * 4 + -4) = 0;
    }
                    /* try { // try from 00d12c74 to 00d12c77 has its CatchHandler @ 00d12f2c */
    UnalignedDeallocate(local_b8);
    local_138[0] = &PTR__Integer_0100c890;
    if (uStack_120 <= local_128) {
      local_128 = uStack_120;
    }
    for (; local_128 != 0; local_128 = local_128 - 1) {
      *(undefined4 *)((long)local_118 + local_128 * 4 + -4) = 0;
    }
                    /* try { // try from 00d12ca8 to 00d12cab has its CatchHandler @ 00d12f28 */
    UnalignedDeallocate(local_118);
    local_108 = &PTR__Integer_0100c890;
    if (uStack_f0 <= local_f8) {
      local_f8 = uStack_f0;
    }
    for (; local_f8 != 0; local_f8 = local_f8 - 1) {
      *(undefined4 *)((long)local_e8 + local_f8 * 4 + -4) = 0;
    }
                    /* try { // try from 00d12cdc to 00d12cdf has its CatchHandler @ 00d12f24 */
    UnalignedDeallocate(local_e8);
  }
  else {
                    /* try { // try from 00d12cec to 00d12cf3 has its CatchHandler @ 00d12fa8 */
    Integer::Power2((Integer *)(ulong)(param_1 - 1 >> 1),extraout_x1);
                    /* try { // try from 00d12cf4 to 00d12cff has its CatchHandler @ 00d12f88 */
    Integer::operator=((Integer *)local_78,(Integer *)&local_d8);
    local_d8 = &PTR__Integer_0100c890;
    uVar2 = CONCAT71(uStack_c7,local_c8);
    if (uStack_c0 <= CONCAT71(uStack_c7,local_c8)) {
      uVar2 = uStack_c0;
    }
    for (; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined4 *)((long)local_b8 + uVar2 * 4 + -4) = 0;
    }
                    /* try { // try from 00d12d30 to 00d12d33 has its CatchHandler @ 00d12f74 */
    UnalignedDeallocate(local_b8);
                    /* try { // try from 00d12d34 to 00d12d3f has its CatchHandler @ 00d12f6c */
    Integer::Integer((Integer *)&local_108,0xb5);
                    /* try { // try from 00d12d4c to 00d12d57 has its CatchHandler @ 00d12f64 */
    Integer::operator<<((Integer *)&local_108,(ulong)((param_1 + 1 >> 1) - 8));
                    /* try { // try from 00d12d58 to 00d12d63 has its CatchHandler @ 00d12f5c */
    Integer::operator=((Integer *)local_a8,(Integer *)&local_d8);
    local_d8 = &PTR__Integer_0100c890;
    uVar2 = CONCAT71(uStack_c7,local_c8);
    if (uStack_c0 <= CONCAT71(uStack_c7,local_c8)) {
      uVar2 = uStack_c0;
    }
    for (; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined4 *)((long)local_b8 + uVar2 * 4 + -4) = 0;
    }
                    /* try { // try from 00d12d94 to 00d12d97 has its CatchHandler @ 00d12f54 */
    UnalignedDeallocate(local_b8);
    local_108 = &PTR__Integer_0100c890;
    if (uStack_f0 <= local_f8) {
      local_f8 = uStack_f0;
    }
    for (; local_f8 != 0; local_f8 = local_f8 - 1) {
      *(undefined4 *)((long)local_e8 + local_f8 * 4 + -4) = 0;
    }
                    /* try { // try from 00d12dc8 to 00d12dcb has its CatchHandler @ 00d12f44 */
    UnalignedDeallocate(local_e8);
  }
  local_108 = (undefined **)CONCAT44(local_108._4_4_,1);
                    /* try { // try from 00d12dd4 to 00d12deb has its CatchHandler @ 00d12ff4 */
  MakeParameters<CryptoPP::Integer::RandomNumberType>
            ((CryptoPP *)"RandomNumberType",(char *)&local_108,(RandomNumberType *)0x1,(bool)in_w3);
                    /* try { // try from 00d12df0 to 00d12e23 has its CatchHandler @ 00d13004 */
  pAVar3 = AlgorithmParameters::operator()
                     ((AlgorithmParameters *)&local_d8,"Min",(Integer *)local_78,(bool)local_c8);
  pAVar3 = AlgorithmParameters::operator()
                     ((AlgorithmParameters *)pAVar3,"Max",(Integer *)local_a8,*(bool *)(pAVar3 + 4))
  ;
  AlgorithmParameters::AlgorithmParameters(in_x8,pAVar3);
  local_d8 = &PTR__AlgorithmParameters_00feeb08;
  if (local_d0 != (long *)0x0) {
                    /* try { // try from 00d12e44 to 00d12e47 has its CatchHandler @ 00d12fe8 */
    (**(code **)(*local_d0 + 8))();
  }
  local_a8[0] = &PTR__Integer_0100c890;
  if (uStack_90 <= local_98) {
    local_98 = uStack_90;
  }
  for (; local_98 != 0; local_98 = local_98 - 1) {
    *(undefined4 *)((long)local_88 + local_98 * 4 + -4) = 0;
  }
                    /* try { // try from 00d12e78 to 00d12e7b has its CatchHandler @ 00d12ff0 */
  UnalignedDeallocate(local_88);
  local_78[0] = &PTR__Integer_0100c890;
  if (uStack_60 <= local_68) {
    local_68 = uStack_60;
  }
  for (; local_68 != 0; local_68 = local_68 - 1) {
    *(undefined4 *)((long)local_58 + local_68 * 4 + -4) = 0;
  }
                    /* try { // try from 00d12eac to 00d12eaf has its CatchHandler @ 00d12fec */
  UnalignedDeallocate(local_58);
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


