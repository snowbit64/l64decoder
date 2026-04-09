// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: DoSieve
// Entry Point: 00d13218
// Size: 960 bytes
// Signature: undefined DoSieve(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::PrimeSieve::DoSieve() */

void CryptoPP::PrimeSieve::DoSieve(void)

{
  Integer *this;
  vector<bool,std::__ndk1::allocator<bool>> *this_00;
  ushort *puVar1;
  ushort uVar2;
  long lVar3;
  ushort uVar4;
  int iVar5;
  Integer *in_x0;
  ushort **ppuVar6;
  ulong uVar7;
  ulong uVar8;
  ushort *puVar9;
  undefined **local_158 [2];
  ulong local_148;
  ulong uStack_140;
  void *local_138;
  undefined **local_128 [2];
  ulong local_118;
  ulong uStack_110;
  void *local_108;
  undefined **local_f8 [2];
  ulong local_e8;
  ulong uStack_e0;
  void *local_d8;
  undefined **local_c8 [2];
  ulong local_b8;
  ulong uStack_b0;
  void *local_a8;
  undefined **local_98 [2];
  ulong local_88;
  ulong uStack_80;
  void *local_78;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  ppuVar6 = (ushort **)
            Singleton<std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>,CryptoPP::NewPrimeTable,0>
            ::Ref();
  puVar9 = *ppuVar6;
  puVar1 = ppuVar6[1];
  Integer::Integer((Integer *)local_98,0x8000);
                    /* try { // try from 00d13264 to 00d1326f has its CatchHandler @ 00d1363c */
  Integer::Minus(in_x0 + 0x30);
  this = in_x0 + 0x60;
                    /* try { // try from 00d13274 to 00d13283 has its CatchHandler @ 00d13634 */
  Integer::DividedBy((Integer *)local_128);
                    /* try { // try from 00d13284 to 00d1328f has its CatchHandler @ 00d1362c */
  Integer::Integer((Integer *)local_158,1);
                    /* try { // try from 00d13290 to 00d1329f has its CatchHandler @ 00d13624 */
  Integer::Plus((Integer *)local_f8);
                    /* try { // try from 00d132a0 to 00d132bf has its CatchHandler @ 00d13644 */
  Integer::Compare((Integer *)local_c8,(Integer *)local_98);
  uVar7 = Integer::ConvertToLong();
  uVar8 = local_b8;
  if (uStack_b0 <= local_b8) {
    uVar8 = uStack_b0;
  }
  local_c8[0] = &PTR__Integer_0100c890;
  for (; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)((long)local_a8 + uVar8 * 4 + -4) = 0;
  }
                    /* try { // try from 00d132fc to 00d132ff has its CatchHandler @ 00d13620 */
  UnalignedDeallocate(local_a8);
  local_158[0] = &PTR__Integer_0100c890;
  if (uStack_140 <= local_148) {
    local_148 = uStack_140;
  }
  for (; local_148 != 0; local_148 = local_148 - 1) {
    *(undefined4 *)((long)local_138 + local_148 * 4 + -4) = 0;
  }
                    /* try { // try from 00d13330 to 00d13333 has its CatchHandler @ 00d1361c */
  UnalignedDeallocate(local_138);
  local_f8[0] = &PTR__Integer_0100c890;
  uVar8 = local_e8;
  if (uStack_e0 <= local_e8) {
    uVar8 = uStack_e0;
  }
  for (; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)((long)local_d8 + uVar8 * 4 + -4) = 0;
  }
                    /* try { // try from 00d13364 to 00d13367 has its CatchHandler @ 00d13618 */
  UnalignedDeallocate(local_d8);
  local_128[0] = &PTR__Integer_0100c890;
  if (uStack_110 <= local_118) {
    local_118 = uStack_110;
  }
  for (; local_118 != 0; local_118 = local_118 - 1) {
    *(undefined4 *)((long)local_108 + local_118 * 4 + -4) = 0;
  }
                    /* try { // try from 00d13398 to 00d1339b has its CatchHandler @ 00d13614 */
  UnalignedDeallocate(local_108);
  local_98[0] = &PTR__Integer_0100c890;
  uVar8 = local_88;
  if (uStack_80 <= local_88) {
    uVar8 = uStack_80;
  }
  for (; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)((long)local_78 + uVar8 * 4 + -4) = 0;
  }
                    /* try { // try from 00d133cc to 00d133cf has its CatchHandler @ 00d13610 */
  UnalignedDeallocate(local_78);
  uVar8 = (long)puVar1 - (long)puVar9;
  this_00 = (vector<bool,std::__ndk1::allocator<bool>> *)(in_x0 + 0x98);
  *(undefined8 *)(in_x0 + 0xa0) = 0;
  std::__ndk1::vector<bool,std::__ndk1::allocator<bool>>::resize(this_00,uVar7 & 0xffffffff,false);
  iVar5 = (int)(uVar8 >> 1);
  if (*(int *)(in_x0 + 0x90) == 0) {
    if (iVar5 != 0) {
      uVar8 = uVar8 >> 1 & 0xffffffff;
      do {
        uVar2 = *puVar9;
        uVar4 = Integer::InverseMod(this,(uint)uVar2);
        SieveSingle((vector *)this_00,uVar2,in_x0,this,uVar4);
        uVar8 = uVar8 - 1;
        puVar9 = puVar9 + 1;
      } while (uVar8 != 0);
    }
  }
  else {
    Integer::Integer((Integer *)local_f8,(long)*(int *)(in_x0 + 0x90));
                    /* try { // try from 00d13400 to 00d1340f has its CatchHandler @ 00d13604 */
    Integer::Minus(in_x0);
                    /* try { // try from 00d13410 to 00d1341f has its CatchHandler @ 00d135f0 */
    Integer::operator>>((Integer *)local_c8,1);
    local_c8[0] = &PTR__Integer_0100c890;
    uVar7 = local_b8;
    if (uStack_b0 <= local_b8) {
      uVar7 = uStack_b0;
    }
    for (; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)((long)local_a8 + uVar7 * 4 + -4) = 0;
    }
                    /* try { // try from 00d13450 to 00d13453 has its CatchHandler @ 00d135ec */
    UnalignedDeallocate(local_a8);
    local_f8[0] = &PTR__Integer_0100c890;
    if (uStack_e0 <= local_e8) {
      local_e8 = uStack_e0;
    }
    for (; local_e8 != 0; local_e8 = local_e8 - 1) {
      *(undefined4 *)((long)local_d8 + local_e8 * 4 + -4) = 0;
    }
                    /* try { // try from 00d13484 to 00d13487 has its CatchHandler @ 00d135e8 */
    UnalignedDeallocate(local_d8);
                    /* try { // try from 00d13488 to 00d13497 has its CatchHandler @ 00d135e0 */
    Integer::operator>>(this,1);
    if (iVar5 != 0) {
      uVar8 = uVar8 >> 1 & 0xffffffff;
      do {
        uVar4 = *puVar9;
                    /* try { // try from 00d134a4 to 00d134cb has its CatchHandler @ 00d1366c */
        iVar5 = Integer::InverseMod(this,(uint)uVar4);
        SieveSingle((vector *)this_00,uVar4,in_x0,this,(ushort)iVar5);
        uVar2 = 0;
        if ((uint)uVar4 <= (iVar5 << 1 & 0x1fffeU)) {
          uVar2 = uVar4;
        }
                    /* try { // try from 00d134e0 to 00d134f3 has its CatchHandler @ 00d13668 */
        SieveSingle((vector *)this_00,uVar4,(Integer *)local_98,(Integer *)local_c8,
                    (short)(iVar5 << 1) - uVar2);
        puVar9 = puVar9 + 1;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
    local_c8[0] = &PTR__Integer_0100c890;
    if (uStack_b0 <= local_b8) {
      local_b8 = uStack_b0;
    }
    for (; local_b8 != 0; local_b8 = local_b8 - 1) {
      *(undefined4 *)((long)local_a8 + local_b8 * 4 + -4) = 0;
    }
                    /* try { // try from 00d13530 to 00d13533 has its CatchHandler @ 00d135dc */
    UnalignedDeallocate(local_a8);
    local_98[0] = &PTR__Integer_0100c890;
    if (uStack_80 <= local_88) {
      local_88 = uStack_80;
    }
    for (; local_88 != 0; local_88 = local_88 - 1) {
      *(undefined4 *)((long)local_78 + local_88 * 4 + -4) = 0;
    }
                    /* try { // try from 00d13564 to 00d13567 has its CatchHandler @ 00d135d8 */
    UnalignedDeallocate(local_78);
  }
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


