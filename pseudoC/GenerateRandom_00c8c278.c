// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GenerateRandom
// Entry Point: 00c8c278
// Size: 1544 bytes
// Signature: undefined __cdecl GenerateRandom(Integer * param_1, Integer * param_2, Integer * param_3)


/* CryptoPP::DL_Algorithm_DSA_RFC6979<CryptoPP::Integer,
   CryptoPP::SHA512>::GenerateRandom(CryptoPP::Integer const&, CryptoPP::Integer const&,
   CryptoPP::Integer const&) const */

void CryptoPP::DL_Algorithm_DSA_RFC6979<CryptoPP::Integer,CryptoPP::SHA512>::GenerateRandom
               (Integer *param_1,Integer *param_2,Integer *param_3)

{
  SimpleKeyingInterface *this;
  void *pvVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  uchar *puVar7;
  undefined8 *__src;
  undefined8 *puVar8;
  uchar *puVar9;
  Integer *in_x3;
  Integer *in_x8;
  size_t __n;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  Integer aIStack_c0 [8];
  ulong local_b8;
  ulong local_b0;
  uchar *local_a8;
  undefined **local_a0;
  void *local_98;
  void *local_90;
  void *local_88;
  void *local_80;
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  uVar4 = Integer::BitCount();
  uVar13 = (ulong)uVar4;
  uVar6 = Integer::MinEncodedSize(in_x3,0);
  local_b8 = 0xffffffffffffffff;
  local_b0 = uVar6;
  if (uVar6 == 0) {
    local_a8 = (uchar *)0x0;
  }
  else {
    local_a8 = (uchar *)UnalignedAllocate(uVar6);
  }
                    /* try { // try from 00c8c2fc to 00c8c30b has its CatchHandler @ 00c8c8cc */
  Integer::Encode(in_x3,local_a8,uVar6,0);
                    /* try { // try from 00c8c30c to 00c8c31f has its CatchHandler @ 00c8c8c4 */
  bits2octets((SecBlock *)param_1,aIStack_c0);
                    /* try { // try from 00c8c320 to 00c8c32b has its CatchHandler @ 00c8c8b8 */
  SecBlock<unsigned_char,CryptoPP::AllocatorWithCleanup<unsigned_char,false>>::Assign
            ((SecBlock<unsigned_char,CryptoPP::AllocatorWithCleanup<unsigned_char,false>> *)
             aIStack_c0,(SecBlock *)&local_a0);
  if (local_90 <= local_98) {
    local_98 = local_90;
  }
  if (local_98 != (void *)0x0) {
    do {
      pvVar1 = (void *)((long)local_98 - 1);
      *(undefined *)((long)local_88 + -1 + (long)local_98) = 0;
      local_98 = pvVar1;
    } while (pvVar1 != (void *)0x0);
  }
                    /* try { // try from 00c8c354 to 00c8c357 has its CatchHandler @ 00c8c8b4 */
  UnalignedDeallocate(local_88);
                    /* try { // try from 00c8c358 to 00c8c38f has its CatchHandler @ 00c8c8d4 */
  uVar6 = Integer::MinEncodedSize(param_2,0);
  uVar14 = uVar13 + 7 >> 3;
  if (uVar6 <= uVar14) {
    uVar6 = uVar14;
  }
  if (uVar6 == 0) {
    puVar7 = (uchar *)0x0;
  }
  else {
    puVar7 = (uchar *)UnalignedAllocate(uVar6);
  }
                    /* try { // try from 00c8c3a0 to 00c8c3b3 has its CatchHandler @ 00c8c8ac */
  Integer::Encode(param_2,puVar7,uVar6,0);
                    /* try { // try from 00c8c3c4 to 00c8c3cb has its CatchHandler @ 00c8c8a4 */
  __src = (undefined8 *)UnalignedAllocate(0x40);
  __src[5] = 0x101010101010101;
  __src[4] = 0x101010101010101;
  __src[7] = 0x101010101010101;
  __src[6] = 0x101010101010101;
  __src[1] = 0x101010101010101;
  *__src = 0x101010101010101;
  __src[3] = 0x101010101010101;
  __src[2] = 0x101010101010101;
                    /* try { // try from 00c8c3e8 to 00c8c3ef has its CatchHandler @ 00c8c89c */
  puVar8 = (undefined8 *)UnalignedAllocate(0x40);
  this = (SimpleKeyingInterface *)(param_1 + 0x170);
  puVar8[5] = 0;
  puVar8[4] = 0;
  puVar8[7] = 0;
  puVar8[6] = 0;
  puVar8[1] = 0;
  *puVar8 = 0;
  puVar8[3] = 0;
  puVar8[2] = 0;
                    /* try { // try from 00c8c418 to 00c8c54f has its CatchHandler @ 00c8c8dc */
  SimpleKeyingInterface::SetKey(this,(uchar *)puVar8,0x40,(NameValuePairs *)&DAT_0211f5e0);
  HMAC_Base::Update((HMAC_Base *)this,(uchar *)__src,0x40);
  HMAC_Base::Update((HMAC_Base *)this,"",1);
  HMAC_Base::Update((HMAC_Base *)this,puVar7,uVar6);
  HMAC_Base::Update((HMAC_Base *)this,local_a8,local_b0);
  HMAC_Base::TruncatedFinal((HMAC_Base *)this,(uchar *)puVar8,0x40);
  SimpleKeyingInterface::SetKey(this,(uchar *)puVar8,0x40,(NameValuePairs *)&DAT_0211f5e0);
  HMAC_Base::Update((HMAC_Base *)this,(uchar *)__src,0x40);
  HMAC_Base::TruncatedFinal((HMAC_Base *)this,(uchar *)__src,0x40);
  SimpleKeyingInterface::SetKey(this,(uchar *)puVar8,0x40,(NameValuePairs *)&DAT_0211f5e0);
  HMAC_Base::Update((HMAC_Base *)this,(uchar *)__src,0x40);
  HMAC_Base::Update((HMAC_Base *)this,"\x01N8CryptoPP10UnknownOIDE",1);
  HMAC_Base::Update((HMAC_Base *)this,puVar7,uVar6);
  HMAC_Base::Update((HMAC_Base *)this,local_a8,local_b0);
  HMAC_Base::TruncatedFinal((HMAC_Base *)this,(uchar *)puVar8,0x40);
  SimpleKeyingInterface::SetKey(this,(uchar *)puVar8,0x40,(NameValuePairs *)&DAT_0211f5e0);
  HMAC_Base::Update((HMAC_Base *)this,(uchar *)__src,0x40);
  HMAC_Base::TruncatedFinal((HMAC_Base *)this,(uchar *)__src,0x40);
  Integer::Integer(in_x8);
  if (uVar4 == 0) {
    puVar9 = (uchar *)0x0;
  }
  else {
                    /* try { // try from 00c8c560 to 00c8c567 has its CatchHandler @ 00c8c880 */
    puVar9 = (uchar *)UnalignedAllocate(uVar14);
  }
  do {
    if (uVar4 != 0) {
      uVar12 = 0;
      do {
                    /* try { // try from 00c8c598 to 00c8c5b7 has its CatchHandler @ 00c8c914 */
        HMAC_Base::Update((HMAC_Base *)this,(uchar *)__src,0x40);
        HMAC_Base::TruncatedFinal((HMAC_Base *)this,(uchar *)__src,0x40);
        __n = uVar14 - uVar12;
        if (0x3f < __n) {
          __n = 0x40;
        }
        memcpy(puVar9 + uVar12,__src,__n);
        uVar12 = __n + uVar12;
      } while (uVar12 < uVar14);
    }
                    /* try { // try from 00c8c5e4 to 00c8c5fb has its CatchHandler @ 00c8c8fc */
    Integer::Integer((Integer *)&local_a0,puVar9,uVar14,0,1);
    uVar10 = uVar13 + 7 & 0xfffffffffffffff8;
    uVar12 = uVar10 - uVar13;
    if (uVar13 <= uVar10 && uVar12 != 0) {
                    /* try { // try from 00c8c60c to 00c8c613 has its CatchHandler @ 00c8c8e8 */
      Integer::operator>>=((Integer *)&local_a0,uVar12);
    }
                    /* try { // try from 00c8c614 to 00c8c61f has its CatchHandler @ 00c8c8f8 */
    Integer::operator=(in_x8,(Integer *)&local_a0);
    pvVar1 = local_90;
    if (local_88 <= local_90) {
      pvVar1 = local_88;
    }
    for (; pvVar1 != (void *)0x0; pvVar1 = (void *)((long)pvVar1 - 1)) {
      *(undefined4 *)((long)local_80 + (long)pvVar1 * 4 + -4) = 0;
    }
    local_a0 = &PTR__Integer_0100c890;
                    /* try { // try from 00c8c64c to 00c8c64f has its CatchHandler @ 00c8c8f4 */
    UnalignedDeallocate(local_80);
                    /* try { // try from 00c8c650 to 00c8c65b has its CatchHandler @ 00c8c8f0 */
    Integer::Integer((Integer *)&local_a0,0);
                    /* try { // try from 00c8c65c to 00c8c67b has its CatchHandler @ 00c8c900 */
    iVar5 = Integer::Compare(in_x8,(Integer *)&local_a0);
    if (iVar5 < 1) {
      pvVar1 = local_90;
      if (local_88 <= local_90) {
        pvVar1 = local_88;
      }
      local_a0 = &PTR__Integer_0100c890;
      for (; pvVar1 != (void *)0x0; pvVar1 = (void *)((long)pvVar1 - 1)) {
        *(undefined4 *)((long)local_80 + (long)pvVar1 * 4 + -4) = 0;
      }
                    /* try { // try from 00c8c6fc to 00c8c6ff has its CatchHandler @ 00c8c8e4 */
      UnalignedDeallocate(local_80);
    }
    else {
      iVar5 = Integer::Compare(in_x8,param_3);
      pvVar1 = local_90;
      if (local_88 <= local_90) {
        pvVar1 = local_88;
      }
      local_a0 = &PTR__Integer_0100c890;
      for (; pvVar1 != (void *)0x0; pvVar1 = (void *)((long)pvVar1 - 1)) {
        *(undefined4 *)((long)local_80 + (long)pvVar1 * 4 + -4) = 0;
      }
                    /* try { // try from 00c8c6b8 to 00c8c6bb has its CatchHandler @ 00c8c8ec */
      UnalignedDeallocate(local_80);
      if (iVar5 < 0) {
        for (; uVar14 != 0; uVar14 = uVar14 - 1) {
          puVar9[uVar14 - 1] = '\0';
        }
                    /* try { // try from 00c8c794 to 00c8c797 has its CatchHandler @ 00c8c898 */
        UnalignedDeallocate(puVar9);
        lVar11 = 0x40;
        do {
          lVar2 = lVar11 + -1;
          *(undefined *)((long)puVar8 + lVar11 + -1) = 0;
          lVar11 = lVar2;
        } while (lVar2 != 0);
                    /* try { // try from 00c8c7c0 to 00c8c7c3 has its CatchHandler @ 00c8c894 */
        UnalignedDeallocate(puVar8);
        lVar11 = 0x40;
        do {
          lVar2 = lVar11 + -1;
          *(undefined *)((long)__src + lVar11 + -1) = 0;
          lVar11 = lVar2;
        } while (lVar2 != 0);
                    /* try { // try from 00c8c7ec to 00c8c7ef has its CatchHandler @ 00c8c890 */
        UnalignedDeallocate(__src);
        for (; uVar6 != 0; uVar6 = uVar6 - 1) {
          puVar7[uVar6 - 1] = '\0';
        }
                    /* try { // try from 00c8c818 to 00c8c81b has its CatchHandler @ 00c8c88c */
        UnalignedDeallocate(puVar7);
        uVar6 = local_b8;
        if (local_b0 <= local_b8) {
          uVar6 = local_b0;
        }
        for (; uVar6 != 0; uVar6 = uVar6 - 1) {
          local_a8[uVar6 - 1] = '\0';
        }
                    /* try { // try from 00c8c844 to 00c8c847 has its CatchHandler @ 00c8c888 */
        UnalignedDeallocate(local_a8);
        if (*(long *)(lVar3 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return;
      }
    }
                    /* try { // try from 00c8c700 to 00c8c767 has its CatchHandler @ 00c8c910 */
    HMAC_Base::Update((HMAC_Base *)this,(uchar *)__src,0x40);
    HMAC_Base::Update((HMAC_Base *)this,"",1);
    HMAC_Base::TruncatedFinal((HMAC_Base *)this,(uchar *)puVar8,0x40);
    SimpleKeyingInterface::SetKey(this,(uchar *)puVar8,0x40,(NameValuePairs *)&DAT_0211f5e0);
    HMAC_Base::Update((HMAC_Base *)this,(uchar *)__src,0x40);
    HMAC_Base::TruncatedFinal((HMAC_Base *)this,(uchar *)__src,0x40);
  } while( true );
}


