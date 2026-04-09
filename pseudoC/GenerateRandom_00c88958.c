// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GenerateRandom
// Entry Point: 00c88958
// Size: 1540 bytes
// Signature: undefined __cdecl GenerateRandom(Integer * param_1, Integer * param_2, Integer * param_3)


/* CryptoPP::DL_Algorithm_DSA_RFC6979<CryptoPP::Integer,
   CryptoPP::SHA1>::GenerateRandom(CryptoPP::Integer const&, CryptoPP::Integer const&,
   CryptoPP::Integer const&) const */

void CryptoPP::DL_Algorithm_DSA_RFC6979<CryptoPP::Integer,CryptoPP::SHA1>::GenerateRandom
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
                    /* try { // try from 00c889d8 to 00c889e7 has its CatchHandler @ 00c88fa8 */
  Integer::Encode(in_x3,local_a8,uVar6,0);
                    /* try { // try from 00c889e8 to 00c889fb has its CatchHandler @ 00c88fa0 */
  bits2octets((SecBlock *)param_1,aIStack_c0);
                    /* try { // try from 00c889fc to 00c88a07 has its CatchHandler @ 00c88f94 */
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
                    /* try { // try from 00c88a30 to 00c88a33 has its CatchHandler @ 00c88f90 */
  UnalignedDeallocate(local_88);
                    /* try { // try from 00c88a34 to 00c88a6f has its CatchHandler @ 00c88fb0 */
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
                    /* try { // try from 00c88a7c to 00c88a8b has its CatchHandler @ 00c88f88 */
  Integer::Encode(param_2,puVar7,uVar6,0);
                    /* try { // try from 00c88a9c to 00c88aa3 has its CatchHandler @ 00c88f80 */
  __src = (undefined8 *)UnalignedAllocate(0x14);
  *(undefined4 *)(__src + 2) = 0x1010101;
  *__src = 0x101010101010101;
  __src[1] = 0x101010101010101;
                    /* try { // try from 00c88abc to 00c88ac3 has its CatchHandler @ 00c88f78 */
  puVar8 = (undefined8 *)UnalignedAllocate(0x14);
  this = (SimpleKeyingInterface *)(param_1 + 0xe0);
  *puVar8 = 0;
  puVar8[1] = 0;
  *(undefined4 *)(puVar8 + 2) = 0;
                    /* try { // try from 00c88ae4 to 00c88c23 has its CatchHandler @ 00c88fb8 */
  SimpleKeyingInterface::SetKey(this,(uchar *)puVar8,0x14,(NameValuePairs *)&DAT_0211f5e0);
  HMAC_Base::Update((HMAC_Base *)this,(uchar *)__src,0x14);
  HMAC_Base::Update((HMAC_Base *)this,"",1);
  HMAC_Base::Update((HMAC_Base *)this,puVar7,uVar6);
  HMAC_Base::Update((HMAC_Base *)this,local_a8,local_b0);
  HMAC_Base::TruncatedFinal((HMAC_Base *)this,(uchar *)puVar8,0x14);
  SimpleKeyingInterface::SetKey(this,(uchar *)puVar8,0x14,(NameValuePairs *)&DAT_0211f5e0);
  HMAC_Base::Update((HMAC_Base *)this,(uchar *)__src,0x14);
  HMAC_Base::TruncatedFinal((HMAC_Base *)this,(uchar *)__src,0x14);
  SimpleKeyingInterface::SetKey(this,(uchar *)puVar8,0x14,(NameValuePairs *)&DAT_0211f5e0);
  HMAC_Base::Update((HMAC_Base *)this,(uchar *)__src,0x14);
  HMAC_Base::Update((HMAC_Base *)this,"\x01",1);
  HMAC_Base::Update((HMAC_Base *)this,puVar7,uVar6);
  HMAC_Base::Update((HMAC_Base *)this,local_a8,local_b0);
  HMAC_Base::TruncatedFinal((HMAC_Base *)this,(uchar *)puVar8,0x14);
  SimpleKeyingInterface::SetKey(this,(uchar *)puVar8,0x14,(NameValuePairs *)&DAT_0211f5e0);
  HMAC_Base::Update((HMAC_Base *)this,(uchar *)__src,0x14);
  HMAC_Base::TruncatedFinal((HMAC_Base *)this,(uchar *)__src,0x14);
  Integer::Integer(in_x8);
  if (uVar4 == 0) {
    puVar9 = (uchar *)0x0;
  }
  else {
                    /* try { // try from 00c88c38 to 00c88c3f has its CatchHandler @ 00c88f5c */
    puVar9 = (uchar *)UnalignedAllocate(uVar14);
  }
  do {
    if (uVar4 != 0) {
      uVar12 = 0;
      do {
                    /* try { // try from 00c88c70 to 00c88c8f has its CatchHandler @ 00c88ff0 */
        HMAC_Base::Update((HMAC_Base *)this,(uchar *)__src,0x14);
        HMAC_Base::TruncatedFinal((HMAC_Base *)this,(uchar *)__src,0x14);
        __n = uVar14 - uVar12;
        if (0x13 < uVar14 - uVar12) {
          __n = 0x14;
        }
        memcpy(puVar9 + uVar12,__src,__n);
        uVar12 = __n + uVar12;
      } while (uVar12 < uVar14);
    }
                    /* try { // try from 00c88cbc to 00c88cd3 has its CatchHandler @ 00c88fd8 */
    Integer::Integer((Integer *)&local_a0,puVar9,uVar14,0,1);
    uVar10 = uVar13 + 7 & 0xfffffffffffffff8;
    uVar12 = uVar10 - uVar13;
    if (uVar13 <= uVar10 && uVar12 != 0) {
                    /* try { // try from 00c88ce4 to 00c88ceb has its CatchHandler @ 00c88fc4 */
      Integer::operator>>=((Integer *)&local_a0,uVar12);
    }
                    /* try { // try from 00c88cec to 00c88cf7 has its CatchHandler @ 00c88fd4 */
    Integer::operator=(in_x8,(Integer *)&local_a0);
    pvVar1 = local_90;
    if (local_88 <= local_90) {
      pvVar1 = local_88;
    }
    local_a0 = &PTR__Integer_0100c890;
    for (; pvVar1 != (void *)0x0; pvVar1 = (void *)((long)pvVar1 - 1)) {
      *(undefined4 *)((long)local_80 + (long)pvVar1 * 4 + -4) = 0;
    }
                    /* try { // try from 00c88d28 to 00c88d2b has its CatchHandler @ 00c88fd0 */
    UnalignedDeallocate(local_80);
                    /* try { // try from 00c88d2c to 00c88d37 has its CatchHandler @ 00c88fcc */
    Integer::Integer((Integer *)&local_a0,0);
                    /* try { // try from 00c88d38 to 00c88d57 has its CatchHandler @ 00c88fdc */
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
                    /* try { // try from 00c88dd8 to 00c88ddb has its CatchHandler @ 00c88fc0 */
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
                    /* try { // try from 00c88d94 to 00c88d97 has its CatchHandler @ 00c88fc8 */
      UnalignedDeallocate(local_80);
      if (iVar5 < 0) {
        for (; uVar14 != 0; uVar14 = uVar14 - 1) {
          puVar9[uVar14 - 1] = '\0';
        }
                    /* try { // try from 00c88e70 to 00c88e73 has its CatchHandler @ 00c88f74 */
        UnalignedDeallocate(puVar9);
        lVar11 = 0x14;
        do {
          lVar2 = lVar11 + -1;
          *(undefined *)((long)puVar8 + lVar11 + -1) = 0;
          lVar11 = lVar2;
        } while (lVar2 != 0);
                    /* try { // try from 00c88ea0 to 00c88ea3 has its CatchHandler @ 00c88f70 */
        UnalignedDeallocate(puVar8);
        lVar11 = 0x14;
        do {
          lVar2 = lVar11 + -1;
          *(undefined *)((long)__src + lVar11 + -1) = 0;
          lVar11 = lVar2;
        } while (lVar2 != 0);
                    /* try { // try from 00c88ecc to 00c88ecf has its CatchHandler @ 00c88f6c */
        UnalignedDeallocate(__src);
        for (; uVar6 != 0; uVar6 = uVar6 - 1) {
          puVar7[uVar6 - 1] = '\0';
        }
                    /* try { // try from 00c88ef8 to 00c88efb has its CatchHandler @ 00c88f68 */
        UnalignedDeallocate(puVar7);
        uVar6 = local_b8;
        if (local_b0 <= local_b8) {
          uVar6 = local_b0;
        }
        for (; uVar6 != 0; uVar6 = uVar6 - 1) {
          local_a8[uVar6 - 1] = '\0';
        }
                    /* try { // try from 00c88f24 to 00c88f27 has its CatchHandler @ 00c88f64 */
        UnalignedDeallocate(local_a8);
        if (*(long *)(lVar3 + 0x28) == local_70) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
    }
                    /* try { // try from 00c88ddc to 00c88e43 has its CatchHandler @ 00c88fec */
    HMAC_Base::Update((HMAC_Base *)this,(uchar *)__src,0x14);
    HMAC_Base::Update((HMAC_Base *)this,"",1);
    HMAC_Base::TruncatedFinal((HMAC_Base *)this,(uchar *)puVar8,0x14);
    SimpleKeyingInterface::SetKey(this,(uchar *)puVar8,0x14,(NameValuePairs *)&DAT_0211f5e0);
    HMAC_Base::Update((HMAC_Base *)this,(uchar *)__src,0x14);
    HMAC_Base::TruncatedFinal((HMAC_Base *)this,(uchar *)__src,0x14);
  } while( true );
}


