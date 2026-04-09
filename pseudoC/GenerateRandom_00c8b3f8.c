// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GenerateRandom
// Entry Point: 00c8b3f8
// Size: 1540 bytes
// Signature: undefined __cdecl GenerateRandom(Integer * param_1, Integer * param_2, Integer * param_3)


/* CryptoPP::DL_Algorithm_DSA_RFC6979<CryptoPP::Integer,
   CryptoPP::SHA384>::GenerateRandom(CryptoPP::Integer const&, CryptoPP::Integer const&,
   CryptoPP::Integer const&) const */

void CryptoPP::DL_Algorithm_DSA_RFC6979<CryptoPP::Integer,CryptoPP::SHA384>::GenerateRandom
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
                    /* try { // try from 00c8b47c to 00c8b48b has its CatchHandler @ 00c8ba48 */
  Integer::Encode(in_x3,local_a8,uVar6,0);
                    /* try { // try from 00c8b48c to 00c8b49f has its CatchHandler @ 00c8ba40 */
  bits2octets((SecBlock *)param_1,aIStack_c0);
                    /* try { // try from 00c8b4a0 to 00c8b4ab has its CatchHandler @ 00c8ba34 */
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
                    /* try { // try from 00c8b4d4 to 00c8b4d7 has its CatchHandler @ 00c8ba30 */
  UnalignedDeallocate(local_88);
                    /* try { // try from 00c8b4d8 to 00c8b50f has its CatchHandler @ 00c8ba50 */
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
                    /* try { // try from 00c8b520 to 00c8b533 has its CatchHandler @ 00c8ba28 */
  Integer::Encode(param_2,puVar7,uVar6,0);
                    /* try { // try from 00c8b544 to 00c8b54b has its CatchHandler @ 00c8ba20 */
  __src = (undefined8 *)UnalignedAllocate(0x30);
  __src[3] = 0x101010101010101;
  __src[2] = 0x101010101010101;
  __src[5] = 0x101010101010101;
  __src[4] = 0x101010101010101;
  __src[1] = 0x101010101010101;
  *__src = 0x101010101010101;
                    /* try { // try from 00c8b568 to 00c8b56f has its CatchHandler @ 00c8ba18 */
  puVar8 = (undefined8 *)UnalignedAllocate(0x30);
  this = (SimpleKeyingInterface *)(param_1 + 0x170);
  puVar8[3] = 0;
  puVar8[2] = 0;
  puVar8[5] = 0;
  puVar8[4] = 0;
  puVar8[1] = 0;
  *puVar8 = 0;
                    /* try { // try from 00c8b594 to 00c8b6cb has its CatchHandler @ 00c8ba58 */
  SimpleKeyingInterface::SetKey(this,(uchar *)puVar8,0x30,(NameValuePairs *)&DAT_0211f5e0);
  HMAC_Base::Update((HMAC_Base *)this,(uchar *)__src,0x30);
  HMAC_Base::Update((HMAC_Base *)this,"",1);
  HMAC_Base::Update((HMAC_Base *)this,puVar7,uVar6);
  HMAC_Base::Update((HMAC_Base *)this,local_a8,local_b0);
  HMAC_Base::TruncatedFinal((HMAC_Base *)this,(uchar *)puVar8,0x30);
  SimpleKeyingInterface::SetKey(this,(uchar *)puVar8,0x30,(NameValuePairs *)&DAT_0211f5e0);
  HMAC_Base::Update((HMAC_Base *)this,(uchar *)__src,0x30);
  HMAC_Base::TruncatedFinal((HMAC_Base *)this,(uchar *)__src,0x30);
  SimpleKeyingInterface::SetKey(this,(uchar *)puVar8,0x30,(NameValuePairs *)&DAT_0211f5e0);
  HMAC_Base::Update((HMAC_Base *)this,(uchar *)__src,0x30);
  HMAC_Base::Update((HMAC_Base *)this,"\x01",1);
  HMAC_Base::Update((HMAC_Base *)this,puVar7,uVar6);
  HMAC_Base::Update((HMAC_Base *)this,local_a8,local_b0);
  HMAC_Base::TruncatedFinal((HMAC_Base *)this,(uchar *)puVar8,0x30);
  SimpleKeyingInterface::SetKey(this,(uchar *)puVar8,0x30,(NameValuePairs *)&DAT_0211f5e0);
  HMAC_Base::Update((HMAC_Base *)this,(uchar *)__src,0x30);
  HMAC_Base::TruncatedFinal((HMAC_Base *)this,(uchar *)__src,0x30);
  Integer::Integer(in_x8);
  if (uVar4 == 0) {
    puVar9 = (uchar *)0x0;
  }
  else {
                    /* try { // try from 00c8b6dc to 00c8b6e3 has its CatchHandler @ 00c8b9fc */
    puVar9 = (uchar *)UnalignedAllocate(uVar14);
  }
  do {
    if (uVar4 != 0) {
      uVar12 = 0;
      do {
                    /* try { // try from 00c8b714 to 00c8b733 has its CatchHandler @ 00c8ba90 */
        HMAC_Base::Update((HMAC_Base *)this,(uchar *)__src,0x30);
        HMAC_Base::TruncatedFinal((HMAC_Base *)this,(uchar *)__src,0x30);
        __n = uVar14 - uVar12;
        if (0x2f < __n) {
          __n = 0x30;
        }
        memcpy(puVar9 + uVar12,__src,__n);
        uVar12 = __n + uVar12;
      } while (uVar12 < uVar14);
    }
                    /* try { // try from 00c8b760 to 00c8b777 has its CatchHandler @ 00c8ba78 */
    Integer::Integer((Integer *)&local_a0,puVar9,uVar14,0,1);
    uVar10 = uVar13 + 7 & 0xfffffffffffffff8;
    uVar12 = uVar10 - uVar13;
    if (uVar13 <= uVar10 && uVar12 != 0) {
                    /* try { // try from 00c8b788 to 00c8b78f has its CatchHandler @ 00c8ba64 */
      Integer::operator>>=((Integer *)&local_a0,uVar12);
    }
                    /* try { // try from 00c8b790 to 00c8b79b has its CatchHandler @ 00c8ba74 */
    Integer::operator=(in_x8,(Integer *)&local_a0);
    pvVar1 = local_90;
    if (local_88 <= local_90) {
      pvVar1 = local_88;
    }
    for (; pvVar1 != (void *)0x0; pvVar1 = (void *)((long)pvVar1 - 1)) {
      *(undefined4 *)((long)local_80 + (long)pvVar1 * 4 + -4) = 0;
    }
    local_a0 = &PTR__Integer_0100c890;
                    /* try { // try from 00c8b7c8 to 00c8b7cb has its CatchHandler @ 00c8ba70 */
    UnalignedDeallocate(local_80);
                    /* try { // try from 00c8b7cc to 00c8b7d7 has its CatchHandler @ 00c8ba6c */
    Integer::Integer((Integer *)&local_a0,0);
                    /* try { // try from 00c8b7d8 to 00c8b7f7 has its CatchHandler @ 00c8ba7c */
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
                    /* try { // try from 00c8b878 to 00c8b87b has its CatchHandler @ 00c8ba60 */
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
                    /* try { // try from 00c8b834 to 00c8b837 has its CatchHandler @ 00c8ba68 */
      UnalignedDeallocate(local_80);
      if (iVar5 < 0) {
        for (; uVar14 != 0; uVar14 = uVar14 - 1) {
          puVar9[uVar14 - 1] = '\0';
        }
                    /* try { // try from 00c8b910 to 00c8b913 has its CatchHandler @ 00c8ba14 */
        UnalignedDeallocate(puVar9);
        lVar11 = 0x30;
        do {
          lVar2 = lVar11 + -1;
          *(undefined *)((long)puVar8 + lVar11 + -1) = 0;
          lVar11 = lVar2;
        } while (lVar2 != 0);
                    /* try { // try from 00c8b93c to 00c8b93f has its CatchHandler @ 00c8ba10 */
        UnalignedDeallocate(puVar8);
        lVar11 = 0x30;
        do {
          lVar2 = lVar11 + -1;
          *(undefined *)((long)__src + lVar11 + -1) = 0;
          lVar11 = lVar2;
        } while (lVar2 != 0);
                    /* try { // try from 00c8b968 to 00c8b96b has its CatchHandler @ 00c8ba0c */
        UnalignedDeallocate(__src);
        for (; uVar6 != 0; uVar6 = uVar6 - 1) {
          puVar7[uVar6 - 1] = '\0';
        }
                    /* try { // try from 00c8b994 to 00c8b997 has its CatchHandler @ 00c8ba08 */
        UnalignedDeallocate(puVar7);
        uVar6 = local_b8;
        if (local_b0 <= local_b8) {
          uVar6 = local_b0;
        }
        for (; uVar6 != 0; uVar6 = uVar6 - 1) {
          local_a8[uVar6 - 1] = '\0';
        }
                    /* try { // try from 00c8b9c0 to 00c8b9c3 has its CatchHandler @ 00c8ba04 */
        UnalignedDeallocate(local_a8);
        if (*(long *)(lVar3 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return;
      }
    }
                    /* try { // try from 00c8b87c to 00c8b8e3 has its CatchHandler @ 00c8ba8c */
    HMAC_Base::Update((HMAC_Base *)this,(uchar *)__src,0x30);
    HMAC_Base::Update((HMAC_Base *)this,"",1);
    HMAC_Base::TruncatedFinal((HMAC_Base *)this,(uchar *)puVar8,0x30);
    SimpleKeyingInterface::SetKey(this,(uchar *)puVar8,0x30,(NameValuePairs *)&DAT_0211f5e0);
    HMAC_Base::Update((HMAC_Base *)this,(uchar *)__src,0x30);
    HMAC_Base::TruncatedFinal((HMAC_Base *)this,(uchar *)__src,0x30);
  } while( true );
}


