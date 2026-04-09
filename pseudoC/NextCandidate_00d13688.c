// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: NextCandidate
// Entry Point: 00d13688
// Size: 664 bytes
// Signature: undefined __thiscall NextCandidate(PrimeSieve * this, Integer * param_1)


/* CryptoPP::PrimeSieve::NextCandidate(CryptoPP::Integer&) */

uint __thiscall CryptoPP::PrimeSieve::NextCandidate(PrimeSieve *this,Integer *param_1)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  undefined **local_e8 [2];
  ulong local_d8;
  ulong uStack_d0;
  void *local_c8;
  undefined **local_b8 [2];
  ulong local_a8;
  ulong uStack_a0;
  void *local_98;
  undefined **local_88;
  uint local_80;
  ulong local_78;
  ulong uStack_70;
  void *local_68;
  long local_58;
  uint local_50;
  long local_48;
  uint local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_b8[0] = (undefined **)((ulong)local_b8[0] & 0xffffffffffffff00);
  local_40 = *(uint *)(this + 0x94) & 0x3f;
  local_50 = (uint)*(ulong *)(this + 0xa0) & 0x3f;
  local_48 = *(long *)(this + 0x98) + ((ulong)(*(uint *)(this + 0x94) >> 3) & 0x1ffffff8);
  local_58 = *(long *)(this + 0x98) + (*(ulong *)(this + 0xa0) >> 3 & 0x1ffffffffffffff8);
  FUN_00d13984(&local_88,&local_48,&local_58,local_b8);
  uVar1 = (ulong)local_80 + ((long)local_88 - *(long *)(this + 0x98)) * 8;
  uVar5 = uVar1 & 0xffffffff;
  *(int *)(this + 0x94) = (int)uVar1;
  if (*(ulong *)(this + 0xa0) == uVar5) {
    Integer::Integer((Integer *)local_b8,uVar5);
                    /* try { // try from 00d13730 to 00d1373b has its CatchHandler @ 00d13970 */
    Integer::Times((Integer *)local_b8);
                    /* try { // try from 00d1373c to 00d13747 has its CatchHandler @ 00d13960 */
    Integer::operator+=((Integer *)this,(Integer *)&local_88);
    if (uStack_70 <= local_78) {
      local_78 = uStack_70;
    }
    local_88 = &PTR__Integer_0100c890;
    for (; local_78 != 0; local_78 = local_78 - 1) {
      *(undefined4 *)((long)local_68 + local_78 * 4 + -4) = 0;
    }
                    /* try { // try from 00d13780 to 00d13783 has its CatchHandler @ 00d1395c */
    UnalignedDeallocate(local_68);
    local_b8[0] = &PTR__Integer_0100c890;
    if (uStack_a0 <= local_a8) {
      local_a8 = uStack_a0;
    }
    for (; local_a8 != 0; local_a8 = local_a8 - 1) {
      *(undefined4 *)((long)local_98 + local_a8 * 4 + -4) = 0;
    }
                    /* try { // try from 00d137b4 to 00d137b7 has its CatchHandler @ 00d13958 */
    UnalignedDeallocate(local_98);
    iVar3 = Integer::Compare((Integer *)this,(Integer *)(this + 0x30));
    if (iVar3 < 1) {
      *(undefined4 *)(this + 0x94) = 0;
      DoSieve();
      uVar4 = NextCandidate(this,param_1);
      if (*(long *)(lVar2 + 0x28) == local_38) goto LAB_00d138dc;
    }
    else {
      uVar4 = 0;
      if (*(long *)(lVar2 + 0x28) == local_38) {
LAB_00d138dc:
        return uVar4 & 1;
      }
    }
  }
  else {
    Integer::Integer((Integer *)local_e8,uVar5);
                    /* try { // try from 00d137f0 to 00d137fb has its CatchHandler @ 00d1394c */
    Integer::Times((Integer *)local_e8);
                    /* try { // try from 00d137fc to 00d1380b has its CatchHandler @ 00d1393c */
    Integer::Plus((Integer *)this);
                    /* try { // try from 00d1380c to 00d13817 has its CatchHandler @ 00d1392c */
    Integer::operator=(param_1,(Integer *)&local_88);
    if (uStack_70 <= local_78) {
      local_78 = uStack_70;
    }
    local_88 = &PTR__Integer_0100c890;
    for (; local_78 != 0; local_78 = local_78 - 1) {
      *(undefined4 *)((long)local_68 + local_78 * 4 + -4) = 0;
    }
                    /* try { // try from 00d13850 to 00d13853 has its CatchHandler @ 00d13928 */
    UnalignedDeallocate(local_68);
    local_b8[0] = &PTR__Integer_0100c890;
    if (uStack_a0 <= local_a8) {
      local_a8 = uStack_a0;
    }
    for (; local_a8 != 0; local_a8 = local_a8 - 1) {
      *(undefined4 *)((long)local_98 + local_a8 * 4 + -4) = 0;
    }
                    /* try { // try from 00d13884 to 00d13887 has its CatchHandler @ 00d13924 */
    UnalignedDeallocate(local_98);
    local_e8[0] = &PTR__Integer_0100c890;
    if (uStack_d0 <= local_d8) {
      local_d8 = uStack_d0;
    }
    for (; local_d8 != 0; local_d8 = local_d8 - 1) {
      *(undefined4 *)((long)local_c8 + local_d8 * 4 + -4) = 0;
    }
                    /* try { // try from 00d138b8 to 00d138bb has its CatchHandler @ 00d13920 */
    UnalignedDeallocate(local_c8);
    uVar4 = 1;
    *(int *)(this + 0x94) = *(int *)(this + 0x94) + 1;
    if (*(long *)(lVar2 + 0x28) == local_38) goto LAB_00d138dc;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


