// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GenerateRandom
// Entry Point: 00cea264
// Size: 1076 bytes
// Signature: undefined __thiscall GenerateRandom(DL_GroupParameters_IntegerBased * this, RandomNumberGenerator * param_1, NameValuePairs * param_2)


/* CryptoPP::DL_GroupParameters_IntegerBased::GenerateRandom(CryptoPP::RandomNumberGenerator&,
   CryptoPP::NameValuePairs const&) */

void __thiscall
CryptoPP::DL_GroupParameters_IntegerBased::GenerateRandom
          (DL_GroupParameters_IntegerBased *this,RandomNumberGenerator *param_1,
          NameValuePairs *param_2)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  uint local_1dc;
  undefined **local_1d8 [2];
  ulong local_1c8;
  ulong uStack_1c0;
  void *local_1b8;
  undefined **local_1a8 [2];
  ulong local_198;
  ulong uStack_190;
  void *local_188;
  undefined **local_178 [2];
  ulong local_168;
  ulong uStack_160;
  void *local_158;
  undefined8 local_148;
  ulong local_138;
  ulong uStack_130;
  void *local_128;
  undefined **local_118 [2];
  ulong local_108;
  ulong uStack_100;
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
                    /* try { // try from 00cea2a0 to 00cea2a7 has its CatchHandler @ 00cea71c */
  Integer::Integer((Integer *)local_b8);
                    /* try { // try from 00cea2a8 to 00cea2af has its CatchHandler @ 00cea714 */
  Integer::Integer((Integer *)local_e8);
                    /* try { // try from 00cea2b8 to 00cea307 has its CatchHandler @ 00cea728 */
  uVar3 = (**(code **)(*(long *)param_2 + 0x10))(param_2,"Modulus",&Integer::typeinfo,local_88);
  if (((uVar3 & 1) == 0) ||
     (uVar3 = (**(code **)(*(long *)param_2 + 0x10))
                        (param_2,"SubgroupGenerator",&Integer::typeinfo,local_e8), (uVar3 & 1) == 0)
     ) {
                    /* try { // try from 00cea3f8 to 00cea48b has its CatchHandler @ 00cea724 */
    uVar3 = (**(code **)(*(long *)param_2 + 0x10))(param_2,"ModulusSize",&int::typeinfo,&local_148);
    if ((uVar3 & 1) == 0) {
      uVar3 = (**(code **)(*(long *)param_2 + 0x10))(param_2,"KeySize",&int::typeinfo,local_1d8);
      if ((uVar3 & 1) == 0) {
        local_1d8[0]._0_4_ = 0x800;
      }
      local_148 = (undefined **)CONCAT44(local_148._4_4_,local_1d8[0]._0_4_);
    }
    uVar3 = (**(code **)(*(long *)param_2 + 0x10))
                      (param_2,"SubgroupOrderSize",&int::typeinfo,&local_1dc);
    if ((uVar3 & 1) == 0) {
      local_1dc = (**(code **)(*(long *)this + 0xb8))(this,(ulong)local_148 & 0xffffffff);
    }
                    /* try { // try from 00cea490 to 00cea49b has its CatchHandler @ 00cea704 */
    Integer::Integer((Integer *)local_1d8);
                    /* try { // try from 00cea4a0 to 00cea4a7 has its CatchHandler @ 00cea6f4 */
    Integer::Integer((Integer *)local_1a8);
                    /* try { // try from 00cea4b0 to 00cea4b7 has its CatchHandler @ 00cea6e4 */
    Integer::Integer((Integer *)local_178);
                    /* try { // try from 00cea4c0 to 00cea507 has its CatchHandler @ 00cea730 */
    iVar2 = (**(code **)(*(long *)this + 0xb0))(this);
    if (iVar2 != 1) {
      iVar2 = -1;
    }
    PrimeAndGenerator::Generate
              ((PrimeAndGenerator *)local_1d8,iVar2,param_1,(uint)local_148,local_1dc);
    Integer::operator=((Integer *)local_88,(Integer *)local_1d8);
    Integer::operator=((Integer *)local_b8,(Integer *)local_1a8);
    Integer::operator=((Integer *)local_e8,(Integer *)local_178);
    local_178[0] = &PTR__Integer_0100c890;
    if (uStack_160 <= local_168) {
      local_168 = uStack_160;
    }
    for (; local_168 != 0; local_168 = local_168 - 1) {
      *(undefined4 *)((long)local_158 + local_168 * 4 + -4) = 0;
    }
                    /* try { // try from 00cea538 to 00cea53b has its CatchHandler @ 00cea6e0 */
    UnalignedDeallocate(local_158);
    local_1a8[0] = &PTR__Integer_0100c890;
    if (uStack_190 <= local_198) {
      local_198 = uStack_190;
    }
    for (; local_198 != 0; local_198 = local_198 - 1) {
      *(undefined4 *)((long)local_188 + local_198 * 4 + -4) = 0;
    }
                    /* try { // try from 00cea56c to 00cea56f has its CatchHandler @ 00cea6dc */
    UnalignedDeallocate(local_188);
    local_1d8[0] = &PTR__Integer_0100c890;
    if (uStack_1c0 <= local_1c8) {
      local_1c8 = uStack_1c0;
    }
    for (; local_1c8 != 0; local_1c8 = local_1c8 - 1) {
      *(undefined4 *)((long)local_1b8 + local_1c8 * 4 + -4) = 0;
    }
                    /* try { // try from 00cea5a0 to 00cea5a3 has its CatchHandler @ 00cea6d8 */
    UnalignedDeallocate(local_1b8);
  }
  else {
                    /* try { // try from 00cea30c to 00cea31b has its CatchHandler @ 00cea6d4 */
    ComputeGroupOrder(this,(Integer *)local_88);
                    /* try { // try from 00cea31c to 00cea32b has its CatchHandler @ 00cea6c4 */
    Integer::DividedBy((uint)&local_148);
                    /* try { // try from 00cea32c to 00cea343 has its CatchHandler @ 00cea6b4 */
    NameValuePairs::GetValueWithDefault<CryptoPP::Integer>
              (local_1d8,param_2,"SubgroupOrder",local_118);
                    /* try { // try from 00cea344 to 00cea34f has its CatchHandler @ 00cea6a4 */
    Integer::operator=((Integer *)local_b8,(Integer *)local_1d8);
    local_1d8[0] = &PTR__Integer_0100c890;
    if (uStack_1c0 <= local_1c8) {
      local_1c8 = uStack_1c0;
    }
    for (; local_1c8 != 0; local_1c8 = local_1c8 - 1) {
      *(undefined4 *)((long)local_1b8 + local_1c8 * 4 + -4) = 0;
    }
                    /* try { // try from 00cea380 to 00cea383 has its CatchHandler @ 00cea6a0 */
    UnalignedDeallocate(local_1b8);
    local_118[0] = &PTR__Integer_0100c890;
    if (uStack_100 <= local_108) {
      local_108 = uStack_100;
    }
    for (; local_108 != 0; local_108 = local_108 - 1) {
      *(undefined4 *)((long)local_f8 + local_108 * 4 + -4) = 0;
    }
                    /* try { // try from 00cea3b4 to 00cea3b7 has its CatchHandler @ 00cea69c */
    UnalignedDeallocate(local_f8);
    local_148 = &PTR__Integer_0100c890;
    if (uStack_130 <= local_138) {
      local_138 = uStack_130;
    }
    for (; local_138 != 0; local_138 = local_138 - 1) {
      *(undefined4 *)((long)local_128 + local_138 * 4 + -4) = 0;
    }
                    /* try { // try from 00cea3e8 to 00cea3eb has its CatchHandler @ 00cea698 */
    UnalignedDeallocate(local_128);
  }
                    /* try { // try from 00cea5ac to 00cea5c7 has its CatchHandler @ 00cea728 */
  (**(code **)(*(long *)this + 0xa8))(this,local_88,local_e8);
  Integer::operator=((Integer *)(this + 0x18),(Integer *)local_b8);
  local_e8[0] = &PTR__Integer_0100c890;
  *(undefined4 *)(this + 0x10) = 0;
  if (uStack_d0 <= local_d8) {
    local_d8 = uStack_d0;
  }
  for (; local_d8 != 0; local_d8 = local_d8 - 1) {
    *(undefined4 *)((long)local_c8 + local_d8 * 4 + -4) = 0;
  }
                    /* try { // try from 00cea5fc to 00cea5ff has its CatchHandler @ 00cea710 */
  UnalignedDeallocate(local_c8);
  local_b8[0] = &PTR__Integer_0100c890;
  if (uStack_a0 <= local_a8) {
    local_a8 = uStack_a0;
  }
  for (; local_a8 != 0; local_a8 = local_a8 - 1) {
    *(undefined4 *)((long)local_98 + local_a8 * 4 + -4) = 0;
  }
                    /* try { // try from 00cea630 to 00cea633 has its CatchHandler @ 00cea70c */
  UnalignedDeallocate(local_98);
  local_88[0] = &PTR__Integer_0100c890;
  if (uStack_70 <= local_78) {
    local_78 = uStack_70;
  }
  for (; local_78 != 0; local_78 = local_78 - 1) {
    *(undefined4 *)((long)local_68 + local_78 * 4 + -4) = 0;
  }
                    /* try { // try from 00cea664 to 00cea667 has its CatchHandler @ 00cea708 */
  UnalignedDeallocate(local_68);
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


