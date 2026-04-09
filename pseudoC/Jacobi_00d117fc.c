// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Jacobi
// Entry Point: 00d117fc
// Size: 560 bytes
// Signature: undefined __cdecl Jacobi(Integer * param_1, Integer * param_2)


/* CryptoPP::Jacobi(CryptoPP::Integer const&, CryptoPP::Integer const&) */

void CryptoPP::Jacobi(Integer *param_1,Integer *param_2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  int iVar5;
  uint uVar6;
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
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  Integer::Integer((Integer *)local_a8,param_2);
                    /* try { // try from 00d11830 to 00d1183f has its CatchHandler @ 00d11a40 */
  Integer::Modulo(param_1);
  iVar5 = 1;
                    /* try { // try from 00d11858 to 00d1185f has its CatchHandler @ 00d11a5c */
  while (uVar4 = Integer::operator!((Integer *)local_d8), (uVar4 & 1) == 0) {
    uVar6 = 0;
    while( true ) {
                    /* try { // try from 00d1186c to 00d11877 has its CatchHandler @ 00d11a64 */
      uVar4 = Integer::GetBit((Integer *)local_d8,(ulong)uVar6);
      if ((uVar4 & 1) != 0) break;
      uVar6 = uVar6 + 1;
    }
                    /* try { // try from 00d11884 to 00d11903 has its CatchHandler @ 00d11a60 */
    Integer::operator>>=((Integer *)local_d8,(ulong)uVar6);
    if (((uVar6 & 1) != 0) &&
       ((iVar2 = Integer::Modulo((Integer *)local_a8,8), iVar2 == 3 ||
        (iVar2 = Integer::Modulo((Integer *)local_a8,8), iVar2 == 5)))) {
      iVar5 = -iVar5;
    }
    iVar3 = Integer::Modulo((Integer *)local_d8,4);
    iVar2 = iVar5;
    if (iVar3 == 3) {
      iVar3 = Integer::Modulo((Integer *)local_a8,4);
      iVar2 = -iVar5;
      if (iVar3 != 3) {
        iVar2 = iVar5;
      }
    }
    Integer::swap((Integer *)local_d8,(Integer *)local_a8);
    Integer::Modulo((Integer *)local_d8);
                    /* try { // try from 00d11904 to 00d1190f has its CatchHandler @ 00d11a48 */
    Integer::operator=((Integer *)local_d8,(Integer *)local_78);
    uVar4 = local_68;
    if (uStack_60 <= local_68) {
      uVar4 = uStack_60;
    }
    for (; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)((long)local_58 + uVar4 * 4 + -4) = 0;
    }
    local_78[0] = &PTR__Integer_0100c890;
                    /* try { // try from 00d11854 to 00d11857 has its CatchHandler @ 00d11a58 */
    UnalignedDeallocate(local_58);
    iVar5 = iVar2;
  }
                    /* try { // try from 00d11940 to 00d1194b has its CatchHandler @ 00d11a3c */
  Integer::Integer((Integer *)local_78,1);
                    /* try { // try from 00d1194c to 00d11957 has its CatchHandler @ 00d11a38 */
  iVar2 = Integer::Compare((Integer *)local_a8,(Integer *)local_78);
  local_78[0] = &PTR__Integer_0100c890;
  if (uStack_60 <= local_68) {
    local_68 = uStack_60;
  }
  for (; local_68 != 0; local_68 = local_68 - 1) {
    *(undefined4 *)((long)local_58 + local_68 * 4 + -4) = 0;
  }
                    /* try { // try from 00d1198c to 00d1198f has its CatchHandler @ 00d11a34 */
  UnalignedDeallocate(local_58);
  local_d8[0] = &PTR__Integer_0100c890;
  if (uStack_c0 <= local_c8) {
    local_c8 = uStack_c0;
  }
  for (; local_c8 != 0; local_c8 = local_c8 - 1) {
    *(undefined4 *)((long)local_b8 + local_c8 * 4 + -4) = 0;
  }
                    /* try { // try from 00d119c0 to 00d119c3 has its CatchHandler @ 00d11a30 */
  UnalignedDeallocate(local_b8);
  local_a8[0] = &PTR__Integer_0100c890;
  if (uStack_90 <= local_98) {
    local_98 = uStack_90;
  }
  for (; local_98 != 0; local_98 = local_98 - 1) {
    *(undefined4 *)((long)local_88 + local_98 * 4 + -4) = 0;
  }
                    /* try { // try from 00d119f4 to 00d119f7 has its CatchHandler @ 00d11a2c */
  UnalignedDeallocate(local_88);
  if (iVar2 != 0) {
    iVar5 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar5);
}


