// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: IsFermatProbablePrime
// Entry Point: 00d1067c
// Size: 652 bytes
// Signature: undefined __cdecl IsFermatProbablePrime(Integer * param_1, Integer * param_2)


/* CryptoPP::IsFermatProbablePrime(CryptoPP::Integer const&, CryptoPP::Integer const&) */

bool CryptoPP::IsFermatProbablePrime(Integer *param_1,Integer *param_2)

{
  ulong uVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  undefined **local_108 [2];
  ulong local_f8;
  ulong uStack_f0;
  void *local_e8;
  undefined **local_d8 [2];
  ulong local_c8;
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
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  Integer::Integer((Integer *)local_78,3);
                    /* try { // try from 00d106b4 to 00d106bf has its CatchHandler @ 00d10978 */
  iVar4 = Integer::Compare(param_1,(Integer *)local_78);
  uVar1 = local_68;
  if (uStack_60 <= local_68) {
    uVar1 = uStack_60;
  }
  local_78[0] = &PTR__Integer_0100c890;
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined4 *)((long)local_58 + uVar1 * 4 + -4) = 0;
  }
                    /* try { // try from 00d106fc to 00d106ff has its CatchHandler @ 00d10974 */
  UnalignedDeallocate(local_58);
  if (iVar4 < 1) {
    Integer::Integer((Integer *)local_78,2);
                    /* try { // try from 00d10838 to 00d10843 has its CatchHandler @ 00d10924 */
    iVar4 = Integer::Compare(param_1,(Integer *)local_78);
    if (iVar4 == 0) {
      bVar3 = true;
    }
    else {
                    /* try { // try from 00d10848 to 00d10853 has its CatchHandler @ 00d1091c */
      Integer::Integer((Integer *)local_a8,3);
                    /* try { // try from 00d10854 to 00d1085f has its CatchHandler @ 00d1090c */
      iVar4 = Integer::Compare(param_1,(Integer *)local_a8);
      bVar3 = iVar4 == 0;
      local_a8[0] = &PTR__Integer_0100c890;
      if (uStack_90 <= local_98) {
        local_98 = uStack_90;
      }
      for (; local_98 != 0; local_98 = local_98 - 1) {
        *(undefined4 *)((long)local_88 + local_98 * 4 + -4) = 0;
      }
                    /* try { // try from 00d10898 to 00d1089b has its CatchHandler @ 00d10908 */
      UnalignedDeallocate(local_88);
    }
    local_78[0] = &PTR__Integer_0100c890;
    if (uStack_60 <= local_68) {
      local_68 = uStack_60;
    }
    for (; local_68 != 0; local_68 = local_68 - 1) {
      *(undefined4 *)((long)local_58 + local_68 * 4 + -4) = 0;
    }
                    /* try { // try from 00d108d4 to 00d108d7 has its CatchHandler @ 00d10920 */
    UnalignedDeallocate(local_58);
  }
  else {
    Integer::Integer((Integer *)local_d8,1);
                    /* try { // try from 00d10714 to 00d10723 has its CatchHandler @ 00d10968 */
    Integer::Minus(param_1);
                    /* try { // try from 00d10724 to 00d10737 has its CatchHandler @ 00d10958 */
    a_exp_b_mod_c(param_2,(Integer *)local_a8,param_1);
                    /* try { // try from 00d10738 to 00d10743 has its CatchHandler @ 00d10948 */
    Integer::Integer((Integer *)local_108,1);
                    /* try { // try from 00d10744 to 00d1074f has its CatchHandler @ 00d10938 */
    iVar4 = Integer::Compare((Integer *)local_78,(Integer *)local_108);
    bVar3 = iVar4 == 0;
    local_108[0] = &PTR__Integer_0100c890;
    if (uStack_f0 <= local_f8) {
      local_f8 = uStack_f0;
    }
    for (; local_f8 != 0; local_f8 = local_f8 - 1) {
      *(undefined4 *)((long)local_e8 + local_f8 * 4 + -4) = 0;
    }
                    /* try { // try from 00d10788 to 00d1078b has its CatchHandler @ 00d10934 */
    UnalignedDeallocate(local_e8);
    local_78[0] = &PTR__Integer_0100c890;
    if (uStack_60 <= local_68) {
      local_68 = uStack_60;
    }
    for (; local_68 != 0; local_68 = local_68 - 1) {
      *(undefined4 *)((long)local_58 + local_68 * 4 + -4) = 0;
    }
                    /* try { // try from 00d107bc to 00d107bf has its CatchHandler @ 00d10930 */
    UnalignedDeallocate(local_58);
    local_a8[0] = &PTR__Integer_0100c890;
    if (uStack_90 <= local_98) {
      local_98 = uStack_90;
    }
    for (; local_98 != 0; local_98 = local_98 - 1) {
      *(undefined4 *)((long)local_88 + local_98 * 4 + -4) = 0;
    }
                    /* try { // try from 00d107f0 to 00d107f3 has its CatchHandler @ 00d1092c */
    UnalignedDeallocate(local_88);
    local_d8[0] = &PTR__Integer_0100c890;
    if (uStack_c0 <= local_c8) {
      local_c8 = uStack_c0;
    }
    for (; local_c8 != 0; local_c8 = local_c8 - 1) {
      *(undefined4 *)((long)local_b8 + local_c8 * 4 + -4) = 0;
    }
                    /* try { // try from 00d10824 to 00d10827 has its CatchHandler @ 00d10928 */
    UnalignedDeallocate(local_b8);
  }
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar3;
}


