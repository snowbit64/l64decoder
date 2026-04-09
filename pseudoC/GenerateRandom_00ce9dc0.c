// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GenerateRandom
// Entry Point: 00ce9dc0
// Size: 944 bytes
// Signature: undefined __thiscall GenerateRandom(DL_GroupParameters_DSA * this, RandomNumberGenerator * param_1, NameValuePairs * param_2)


/* CryptoPP::DL_GroupParameters_DSA::GenerateRandom(CryptoPP::RandomNumberGenerator&,
   CryptoPP::NameValuePairs const&) */

void __thiscall
CryptoPP::DL_GroupParameters_DSA::GenerateRandom
          (DL_GroupParameters_DSA *this,RandomNumberGenerator *param_1,NameValuePairs *param_2)

{
  long lVar1;
  undefined ***pppuVar2;
  ulong uVar3;
  InvalidArgument *this_00;
  undefined uVar4;
  undefined4 local_180;
  int local_17c;
  undefined **local_178;
  long *local_170;
  ulong local_168;
  ulong uStack_160;
  void *local_158;
  undefined **local_148 [2];
  ulong local_138;
  ulong uStack_130;
  void *local_128;
  undefined **local_118;
  NameValuePairs *pNStack_110;
  undefined ***local_108;
  undefined ***pppuStack_100;
  void *local_f8;
  undefined **local_e8 [2];
  ulong local_d8;
  ulong uStack_d0;
  void *local_c8;
  undefined **local_b8 [2];
  ulong local_a8;
  ulong uStack_a0;
  void *local_98;
  undefined **local_88 [2];
  ulong local_78;
  ulong uStack_70;
  void *local_68;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  Integer::Integer((Integer *)local_88);
                    /* try { // try from 00ce9dfc to 00ce9e03 has its CatchHandler @ 00cea234 */
  Integer::Integer((Integer *)local_b8);
                    /* try { // try from 00ce9e04 to 00ce9e0b has its CatchHandler @ 00cea22c */
  Integer::Integer((Integer *)local_e8);
                    /* try { // try from 00ce9e14 to 00ce9e5f has its CatchHandler @ 00cea240 */
  uVar3 = (**(code **)(*(long *)param_2 + 0x10))(param_2,"Modulus",&Integer::typeinfo,local_88);
  if (((uVar3 & 1) == 0) ||
     (uVar3 = (**(code **)(*(long *)param_2 + 0x10))
                        (param_2,"SubgroupGenerator",&Integer::typeinfo,local_e8), (uVar3 & 1) == 0)
     ) {
    local_17c = 0x800;
                    /* try { // try from 00ce9f80 to 00ce9fc3 has its CatchHandler @ 00cea23c */
    uVar4 = SUB81(&local_17c,0);
    uVar3 = (**(code **)(*(long *)param_2 + 0x10))(param_2,"ModulusSize",&int::typeinfo);
    if ((uVar3 & 1) == 0) {
      uVar4 = SUB81(&local_17c,0);
      (**(code **)(*(long *)param_2 + 0x10))(param_2,"KeySize",&int::typeinfo);
    }
    if (local_17c == 0x400) {
      local_180 = 0xa0;
    }
    else if (local_17c == 0x800) {
      local_180 = 0xe0;
    }
    else {
      if (local_17c != 0xc00) {
        this_00 = (InvalidArgument *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00cea130 to 00cea13f has its CatchHandler @ 00cea194 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string<decltype(nullptr)>
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )&local_118,"DSA: not a valid prime length");
                    /* try { // try from 00cea144 to 00cea16b has its CatchHandler @ 00cea170 */
        InvalidArgument::InvalidArgument(this_00,(basic_string *)&local_118);
                    /* WARNING: Subroutine does not return */
        __cxa_throw(this_00,&InvalidArgument::typeinfo,Exception::~Exception);
      }
      local_180 = 0x100;
    }
                    /* try { // try from 00ce9ff8 to 00cea013 has its CatchHandler @ 00cea21c */
    MakeParameters<int>((CryptoPP *)"SubgroupOrderSize",(char *)&local_180,(int *)0x0,(bool)uVar4);
    local_118 = &PTR__NameValuePairs_00feeb30;
                    /* try { // try from 00cea028 to 00cea037 has its CatchHandler @ 00cea1e8 */
    pNStack_110 = param_2;
    local_108 = &local_178;
    DL_GroupParameters_IntegerBased::GenerateRandom
              ((DL_GroupParameters_IntegerBased *)this,param_1,(NameValuePairs *)&local_118);
    local_178 = &PTR__AlgorithmParameters_00feeb08;
    if (local_170 != (long *)0x0) {
                    /* try { // try from 00cea058 to 00cea05b has its CatchHandler @ 00cea1e4 */
      (**(code **)(*local_170 + 8))();
    }
  }
  else {
                    /* try { // try from 00ce9e64 to 00ce9e73 has its CatchHandler @ 00cea1e0 */
    DL_GroupParameters_IntegerBased::ComputeGroupOrder
              ((DL_GroupParameters_IntegerBased *)this,(Integer *)local_88);
                    /* try { // try from 00ce9e74 to 00ce9e83 has its CatchHandler @ 00cea1d0 */
    Integer::DividedBy((uint)&local_178);
                    /* try { // try from 00ce9e84 to 00ce9e9b has its CatchHandler @ 00cea1c0 */
    NameValuePairs::GetValueWithDefault<CryptoPP::Integer>
              (&local_118,param_2,"SubgroupOrder",local_148);
                    /* try { // try from 00ce9e9c to 00ce9ea7 has its CatchHandler @ 00cea1b0 */
    Integer::operator=((Integer *)local_b8,(Integer *)&local_118);
    local_118 = &PTR__Integer_0100c890;
    pppuVar2 = local_108;
    if (pppuStack_100 <= local_108) {
      pppuVar2 = pppuStack_100;
    }
    for (; pppuVar2 != (undefined ***)0x0; pppuVar2 = (undefined ***)((long)pppuVar2 + -1)) {
      *(undefined4 *)((long)local_f8 + (long)pppuVar2 * 4 + -4) = 0;
    }
                    /* try { // try from 00ce9ed8 to 00ce9edb has its CatchHandler @ 00cea1ac */
    UnalignedDeallocate(local_f8);
    local_148[0] = &PTR__Integer_0100c890;
    if (uStack_130 <= local_138) {
      local_138 = uStack_130;
    }
    for (; local_138 != 0; local_138 = local_138 - 1) {
      *(undefined4 *)((long)local_128 + local_138 * 4 + -4) = 0;
    }
                    /* try { // try from 00ce9f0c to 00ce9f0f has its CatchHandler @ 00cea1a8 */
    UnalignedDeallocate(local_128);
    local_178 = &PTR__Integer_0100c890;
    if (uStack_160 <= local_168) {
      local_168 = uStack_160;
    }
    for (; local_168 != 0; local_168 = local_168 - 1) {
      *(undefined4 *)((long)local_158 + local_168 * 4 + -4) = 0;
    }
                    /* try { // try from 00ce9f40 to 00ce9f43 has its CatchHandler @ 00cea1a4 */
    UnalignedDeallocate(local_158);
                    /* try { // try from 00ce9f4c to 00ce9f67 has its CatchHandler @ 00cea240 */
    (**(code **)(*(long *)this + 0xa8))(this,local_88,local_e8);
    Integer::operator=((Integer *)(this + 0x18),(Integer *)local_b8);
    *(undefined4 *)(this + 0x10) = 0;
  }
  local_e8[0] = &PTR__Integer_0100c890;
  if (uStack_d0 <= local_d8) {
    local_d8 = uStack_d0;
  }
  for (; local_d8 != 0; local_d8 = local_d8 - 1) {
    *(undefined4 *)((long)local_c8 + local_d8 * 4 + -4) = 0;
  }
                    /* try { // try from 00cea08c to 00cea08f has its CatchHandler @ 00cea228 */
  UnalignedDeallocate(local_c8);
  local_b8[0] = &PTR__Integer_0100c890;
  if (uStack_a0 <= local_a8) {
    local_a8 = uStack_a0;
  }
  for (; local_a8 != 0; local_a8 = local_a8 - 1) {
    *(undefined4 *)((long)local_98 + local_a8 * 4 + -4) = 0;
  }
                    /* try { // try from 00cea0c0 to 00cea0c3 has its CatchHandler @ 00cea224 */
  UnalignedDeallocate(local_98);
  local_88[0] = &PTR__Integer_0100c890;
  if (uStack_70 <= local_78) {
    local_78 = uStack_70;
  }
  for (; local_78 != 0; local_78 = local_78 - 1) {
    *(undefined4 *)((long)local_68 + local_78 * 4 + -4) = 0;
  }
                    /* try { // try from 00cea0f4 to 00cea0f7 has its CatchHandler @ 00cea220 */
  UnalignedDeallocate(local_68);
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


