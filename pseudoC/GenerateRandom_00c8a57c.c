// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GenerateRandom
// Entry Point: 00c8a57c
// Size: 1536 bytes
// Signature: undefined __cdecl GenerateRandom(Integer * param_1, Integer * param_2, Integer * param_3)


/* CryptoPP::DL_Algorithm_DSA_RFC6979<CryptoPP::Integer,
   CryptoPP::SHA256>::GenerateRandom(CryptoPP::Integer const&, CryptoPP::Integer const&,
   CryptoPP::Integer const&) const */

void CryptoPP::DL_Algorithm_DSA_RFC6979<CryptoPP::Integer,CryptoPP::SHA256>::GenerateRandom
               (Integer *param_1,Integer *param_2,Integer *param_3)

{
  SimpleKeyingInterface *this;
  size_t __n;
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
                    /* try { // try from 00c8a5fc to 00c8a60b has its CatchHandler @ 00c8abc8 */
  Integer::Encode(in_x3,local_a8,uVar6,0);
                    /* try { // try from 00c8a60c to 00c8a61f has its CatchHandler @ 00c8abc0 */
  bits2octets((SecBlock *)param_1,aIStack_c0);
                    /* try { // try from 00c8a620 to 00c8a62b has its CatchHandler @ 00c8abb4 */
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
                    /* try { // try from 00c8a654 to 00c8a657 has its CatchHandler @ 00c8abb0 */
  UnalignedDeallocate(local_88);
                    /* try { // try from 00c8a658 to 00c8a693 has its CatchHandler @ 00c8abd0 */
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
                    /* try { // try from 00c8a6a0 to 00c8a6af has its CatchHandler @ 00c8aba8 */
  Integer::Encode(param_2,puVar7,uVar6,0);
                    /* try { // try from 00c8a6c0 to 00c8a6c7 has its CatchHandler @ 00c8aba0 */
  __src = (undefined8 *)UnalignedAllocate(0x20);
  __src[1] = 0x101010101010101;
  *__src = 0x101010101010101;
  __src[3] = 0x101010101010101;
  __src[2] = 0x101010101010101;
                    /* try { // try from 00c8a6dc to 00c8a6e3 has its CatchHandler @ 00c8ab98 */
  puVar8 = (undefined8 *)UnalignedAllocate(0x20);
  this = (SimpleKeyingInterface *)(param_1 + 0xe8);
  puVar8[1] = 0;
  *puVar8 = 0;
  puVar8[3] = 0;
  puVar8[2] = 0;
                    /* try { // try from 00c8a704 to 00c8a843 has its CatchHandler @ 00c8abd8 */
  SimpleKeyingInterface::SetKey(this,(uchar *)puVar8,0x20,(NameValuePairs *)&DAT_0211f5e0);
  HMAC_Base::Update((HMAC_Base *)this,(uchar *)__src,0x20);
  HMAC_Base::Update((HMAC_Base *)this,"",1);
  HMAC_Base::Update((HMAC_Base *)this,puVar7,uVar6);
  HMAC_Base::Update((HMAC_Base *)this,local_a8,local_b0);
  HMAC_Base::TruncatedFinal((HMAC_Base *)this,(uchar *)puVar8,0x20);
  SimpleKeyingInterface::SetKey(this,(uchar *)puVar8,0x20,(NameValuePairs *)&DAT_0211f5e0);
  HMAC_Base::Update((HMAC_Base *)this,(uchar *)__src,0x20);
  HMAC_Base::TruncatedFinal((HMAC_Base *)this,(uchar *)__src,0x20);
  SimpleKeyingInterface::SetKey(this,(uchar *)puVar8,0x20,(NameValuePairs *)&DAT_0211f5e0);
  HMAC_Base::Update((HMAC_Base *)this,(uchar *)__src,0x20);
  HMAC_Base::Update((HMAC_Base *)this,"\x01",1);
  HMAC_Base::Update((HMAC_Base *)this,puVar7,uVar6);
  HMAC_Base::Update((HMAC_Base *)this,local_a8,local_b0);
  HMAC_Base::TruncatedFinal((HMAC_Base *)this,(uchar *)puVar8,0x20);
  SimpleKeyingInterface::SetKey(this,(uchar *)puVar8,0x20,(NameValuePairs *)&DAT_0211f5e0);
  HMAC_Base::Update((HMAC_Base *)this,(uchar *)__src,0x20);
  HMAC_Base::TruncatedFinal((HMAC_Base *)this,(uchar *)__src,0x20);
  Integer::Integer(in_x8);
  if (uVar4 == 0) {
    puVar9 = (uchar *)0x0;
  }
  else {
                    /* try { // try from 00c8a858 to 00c8a85f has its CatchHandler @ 00c8ab7c */
    puVar9 = (uchar *)UnalignedAllocate(uVar14);
  }
  do {
    if (uVar4 != 0) {
      uVar12 = 0;
      do {
                    /* try { // try from 00c8a890 to 00c8a8af has its CatchHandler @ 00c8ac10 */
        HMAC_Base::Update((HMAC_Base *)this,(uchar *)__src,0x20);
        HMAC_Base::TruncatedFinal((HMAC_Base *)this,(uchar *)__src,0x20);
        __n = uVar14 - uVar12;
        if (0x1f < uVar14 - uVar12) {
          __n = 0x20;
        }
        memcpy(puVar9 + uVar12,__src,__n);
        uVar12 = __n + uVar12;
      } while (uVar12 < uVar14);
    }
                    /* try { // try from 00c8a8dc to 00c8a8f3 has its CatchHandler @ 00c8abf8 */
    Integer::Integer((Integer *)&local_a0,puVar9,uVar14,0,1);
    uVar10 = uVar13 + 7 & 0xfffffffffffffff8;
    uVar12 = uVar10 - uVar13;
    if (uVar13 <= uVar10 && uVar12 != 0) {
                    /* try { // try from 00c8a904 to 00c8a90b has its CatchHandler @ 00c8abe4 */
      Integer::operator>>=((Integer *)&local_a0,uVar12);
    }
                    /* try { // try from 00c8a90c to 00c8a917 has its CatchHandler @ 00c8abf4 */
    Integer::operator=(in_x8,(Integer *)&local_a0);
    pvVar1 = local_90;
    if (local_88 <= local_90) {
      pvVar1 = local_88;
    }
    local_a0 = &PTR__Integer_0100c890;
    for (; pvVar1 != (void *)0x0; pvVar1 = (void *)((long)pvVar1 - 1)) {
      *(undefined4 *)((long)local_80 + (long)pvVar1 * 4 + -4) = 0;
    }
                    /* try { // try from 00c8a948 to 00c8a94b has its CatchHandler @ 00c8abf0 */
    UnalignedDeallocate(local_80);
                    /* try { // try from 00c8a94c to 00c8a957 has its CatchHandler @ 00c8abec */
    Integer::Integer((Integer *)&local_a0,0);
                    /* try { // try from 00c8a958 to 00c8a977 has its CatchHandler @ 00c8abfc */
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
                    /* try { // try from 00c8a9f8 to 00c8a9fb has its CatchHandler @ 00c8abe0 */
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
                    /* try { // try from 00c8a9b4 to 00c8a9b7 has its CatchHandler @ 00c8abe8 */
      UnalignedDeallocate(local_80);
      if (iVar5 < 0) {
        for (; uVar14 != 0; uVar14 = uVar14 - 1) {
          puVar9[uVar14 - 1] = '\0';
        }
                    /* try { // try from 00c8aa90 to 00c8aa93 has its CatchHandler @ 00c8ab94 */
        UnalignedDeallocate(puVar9);
        lVar11 = 0x20;
        do {
          lVar2 = lVar11 + -1;
          *(undefined *)((long)puVar8 + lVar11 + -1) = 0;
          lVar11 = lVar2;
        } while (lVar2 != 0);
                    /* try { // try from 00c8aac0 to 00c8aac3 has its CatchHandler @ 00c8ab90 */
        UnalignedDeallocate(puVar8);
        lVar11 = 0x20;
        do {
          lVar2 = lVar11 + -1;
          *(undefined *)((long)__src + lVar11 + -1) = 0;
          lVar11 = lVar2;
        } while (lVar2 != 0);
                    /* try { // try from 00c8aaec to 00c8aaef has its CatchHandler @ 00c8ab8c */
        UnalignedDeallocate(__src);
        for (; uVar6 != 0; uVar6 = uVar6 - 1) {
          puVar7[uVar6 - 1] = '\0';
        }
                    /* try { // try from 00c8ab18 to 00c8ab1b has its CatchHandler @ 00c8ab88 */
        UnalignedDeallocate(puVar7);
        uVar6 = local_b8;
        if (local_b0 <= local_b8) {
          uVar6 = local_b0;
        }
        for (; uVar6 != 0; uVar6 = uVar6 - 1) {
          local_a8[uVar6 - 1] = '\0';
        }
                    /* try { // try from 00c8ab44 to 00c8ab47 has its CatchHandler @ 00c8ab84 */
        UnalignedDeallocate(local_a8);
        if (*(long *)(lVar3 + 0x28) == local_70) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
    }
                    /* try { // try from 00c8a9fc to 00c8aa63 has its CatchHandler @ 00c8ac0c */
    HMAC_Base::Update((HMAC_Base *)this,(uchar *)__src,0x20);
    HMAC_Base::Update((HMAC_Base *)this,"",1);
    HMAC_Base::TruncatedFinal((HMAC_Base *)this,(uchar *)puVar8,0x20);
    SimpleKeyingInterface::SetKey(this,(uchar *)puVar8,0x20,(NameValuePairs *)&DAT_0211f5e0);
    HMAC_Base::Update((HMAC_Base *)this,(uchar *)__src,0x20);
    HMAC_Base::TruncatedFinal((HMAC_Base *)this,(uchar *)__src,0x20);
  } while( true );
}


