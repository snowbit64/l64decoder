// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: SetKeyWithoutResync
// Entry Point: 00ce1388
// Size: 3076 bytes
// Signature: undefined __thiscall SetKeyWithoutResync(GCM_Base * this, uchar * param_1, ulong param_2, NameValuePairs * param_3)


/* CryptoPP::GCM_Base::SetKeyWithoutResync(unsigned char const*, unsigned long,
   CryptoPP::NameValuePairs const&) */

void __thiscall
CryptoPP::GCM_Base::SetKeyWithoutResync
          (GCM_Base *this,uchar *param_1,ulong param_2,NameValuePairs *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  uchar *puVar17;
  uchar *puVar18;
  uchar *puVar19;
  uchar *puVar20;
  uchar *puVar21;
  uchar *puVar22;
  uchar *puVar23;
  uchar *puVar24;
  uchar *puVar25;
  uchar *puVar26;
  uchar *puVar27;
  uchar *puVar28;
  uchar *puVar29;
  uchar *puVar30;
  uchar *puVar31;
  uchar *puVar32;
  undefined8 *puVar33;
  uint uVar34;
  size_t __n;
  ulong uVar35;
  ulong uVar36;
  ulong uVar37;
  long lVar38;
  int iVar39;
  int iVar40;
  int iVar41;
  long *plVar42;
  ulong uVar43;
  void *__dest;
  InvalidArgument *this_00;
  undefined8 *puVar44;
  long lVar45;
  ulong uVar46;
  uint uVar47;
  void *pvVar48;
  ulong uVar49;
  long lVar50;
  ulong *puVar51;
  char acStack_a8 [24];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  long local_70;
  
  lVar38 = tpidr_el0;
  local_70 = *(long *)(lVar38 + 0x28);
  plVar42 = (long *)(**(code **)(*(long *)this + 0x150))();
  (**(code **)(*plVar42 + 0x38))(plVar42,param_1,param_2,param_3);
  plVar42 = plVar42 + 1;
  iVar39 = (**(code **)(*plVar42 + 0x30))(plVar42);
  iVar40 = (**(code **)(*plVar42 + 0x30))(plVar42);
  if (iVar40 != 0x10) {
    this_00 = (InvalidArgument *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00ce1f28 to 00ce1f33 has its CatchHandler @ 00ce1fd8 */
    (**(code **)(*(long *)this + 0xb0))(acStack_a8,this);
                    /* try { // try from 00ce1f34 to 00ce1f43 has its CatchHandler @ 00ce1fc0 */
    puVar44 = (undefined8 *)
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                        (acStack_a8);
    local_80 = puVar44[2];
    uStack_88 = puVar44[1];
    local_90 = *puVar44;
    puVar44[1] = 0;
    puVar44[2] = 0;
    *puVar44 = 0;
                    /* try { // try from 00ce1f60 to 00ce1f87 has its CatchHandler @ 00ce1f8c */
    InvalidArgument::InvalidArgument(this_00,(basic_string *)&local_90);
                    /* WARNING: Subroutine does not return */
    __cxa_throw(this_00,&InvalidArgument::typeinfo,Exception::~Exception);
  }
  uVar43 = (**(code **)(*(long *)param_3 + 0x10))(param_3,"TableSize",&int::typeinfo,&local_90);
  if ((uVar43 & 1) == 0) {
    iVar41 = (**(code **)(*(long *)this + 0x158))(this);
    iVar40 = 0x10000;
    if (iVar41 != 1) {
      iVar40 = 0x800;
    }
    uVar43 = *(ulong *)(this + 0x28);
    __dest = *(void **)(this + 0x30);
    local_90 = CONCAT44(local_90._4_4_,iVar40);
    uVar49 = (ulong)(uint)(iVar40 + iVar39 * 3);
    pvVar48 = __dest;
    if (uVar43 == uVar49) goto LAB_00ce1508;
  }
  else {
    iVar40 = 0x800;
    if (0xffff < (int)local_90) {
      iVar40 = 0x10000;
    }
    uVar43 = *(ulong *)(this + 0x28);
    __dest = *(void **)(this + 0x30);
    local_90 = CONCAT44(local_90._4_4_,iVar40);
    uVar49 = (ulong)(uint)(iVar40 + iVar39 * 3);
    pvVar48 = __dest;
    if (uVar43 == uVar49) goto LAB_00ce1508;
  }
  if ((int)uVar49 == 0) {
    __dest = (void *)0x0;
  }
  else {
    __dest = (void *)UnalignedAllocate(uVar49);
    if ((pvVar48 != (void *)0x0) && (__dest != (void *)0x0)) {
      __n = uVar49;
      if (uVar43 <= uVar49) {
        __n = uVar43;
      }
      memcpy(__dest,pvVar48,__n);
    }
  }
  for (; uVar43 != 0; uVar43 = uVar43 - 1) {
    *(undefined *)((long)pvVar48 + (uVar43 - 1)) = 0;
  }
  UnalignedDeallocate(pvVar48);
LAB_00ce1508:
  *(ulong *)(this + 0x28) = uVar49;
  *(void **)(this + 0x30) = __dest;
  *(undefined8 *)(this + 0x20) = 0xffffffffffffffff;
  puVar51 = (ulong *)((long)__dest + 0x20);
  *puVar51 = 0;
  *(undefined8 *)((long)__dest + 0x28) = 0;
  (**(code **)(*plVar42 + 0x28))(plVar42,puVar51,0,puVar51);
  uVar43 = (*puVar51 & 0xff00ff00ff00ff00) >> 8 | (*puVar51 & 0xff00ff00ff00ff) << 8;
  uVar43 = (uVar43 & 0xffff0000ffff0000) >> 0x10 | (uVar43 & 0xffff0000ffff) << 0x10;
  uVar49 = uVar43 >> 0x20 | uVar43 << 0x20;
  uVar43 = (*(ulong *)((long)__dest + 0x28) & 0xff00ff00ff00ff00) >> 8 |
           (*(ulong *)((long)__dest + 0x28) & 0xff00ff00ff00ff) << 8;
  uVar43 = (uVar43 & 0xffff0000ffff0000) >> 0x10 | (uVar43 & 0xffff0000ffff) << 0x10;
  uVar43 = uVar43 >> 0x20 | uVar43 << 0x20;
  if ((int)local_90 == 0x10000) {
    uVar46 = 0;
    uVar47 = 0;
    do {
      uVar34 = uVar47 & 7;
      uVar37 = uVar43 & 1;
      uVar35 = (uVar43 & 0xff00ff00ff00ff00) >> 8 | (uVar43 & 0xff00ff00ff00ff) << 8;
      uVar35 = (uVar35 & 0xffff0000ffff0000) >> 0x10 | (uVar35 & 0xffff0000ffff) << 0x10;
      uVar43 = uVar43 >> 1 | uVar49 << 0x3f;
      uVar47 = uVar47 + 1;
      puVar51 = (ulong *)((long)__dest +
                         (1L << ((ulong)(0xb - uVar34) & 0x3f)) + (uVar46 & 0x7ffff000) + 0x30);
      uVar36 = (uVar49 & 0xff00ff00ff00ff00) >> 8 | (uVar49 & 0xff00ff00ff00ff) << 8;
      uVar36 = (uVar36 & 0xffff0000ffff0000) >> 0x10 | (uVar36 & 0xffff0000ffff) << 0x10;
      uVar49 = -uVar37 & 0xe100000000000000 ^ uVar49 >> 1;
      uVar46 = (ulong)((int)uVar46 + 0x200);
      *puVar51 = uVar36 >> 0x20 | uVar36 << 0x20;
      puVar51[1] = uVar35 >> 0x20 | uVar35 << 0x20;
    } while (uVar47 != 0x80);
    lVar45 = 0;
    pvVar48 = __dest;
    do {
      puVar33 = (undefined8 *)((long)__dest + lVar45 * 0x1000 + 0x30);
      puVar44 = puVar33 + 4;
      puVar1 = puVar33 + 6;
      puVar2 = puVar33 + 2;
      *puVar33 = 0;
      puVar33[1] = 0;
      GCM_Xor16_NEON((uchar *)puVar1,(uchar *)puVar44,(uchar *)puVar2);
      puVar3 = puVar33 + 8;
      puVar4 = puVar33 + 10;
      GCM_Xor16_NEON((uchar *)puVar4,(uchar *)puVar3,(uchar *)puVar2);
      puVar5 = puVar33 + 0xc;
      GCM_Xor16_NEON((uchar *)puVar5,(uchar *)puVar3,(uchar *)puVar44);
      puVar6 = puVar33 + 0xe;
      GCM_Xor16_NEON((uchar *)puVar6,(uchar *)puVar3,(uchar *)puVar1);
      puVar7 = puVar33 + 0x10;
      puVar8 = puVar33 + 0x12;
      GCM_Xor16_NEON((uchar *)puVar8,(uchar *)puVar7,(uchar *)puVar2);
      puVar9 = puVar33 + 0x14;
      GCM_Xor16_NEON((uchar *)puVar9,(uchar *)puVar7,(uchar *)puVar44);
      puVar10 = puVar33 + 0x16;
      GCM_Xor16_NEON((uchar *)puVar10,(uchar *)puVar7,(uchar *)puVar1);
      puVar11 = puVar33 + 0x18;
      GCM_Xor16_NEON((uchar *)puVar11,(uchar *)puVar7,(uchar *)puVar3);
      puVar12 = puVar33 + 0x1a;
      GCM_Xor16_NEON((uchar *)puVar12,(uchar *)puVar7,(uchar *)puVar4);
      puVar13 = puVar33 + 0x1c;
      GCM_Xor16_NEON((uchar *)puVar13,(uchar *)puVar7,(uchar *)puVar5);
      puVar14 = puVar33 + 0x1e;
      GCM_Xor16_NEON((uchar *)puVar14,(uchar *)puVar7,(uchar *)puVar6);
      puVar15 = puVar33 + 0x20;
      GCM_Xor16_NEON((uchar *)(puVar33 + 0x22),(uchar *)puVar15,(uchar *)puVar2);
      GCM_Xor16_NEON((uchar *)(puVar33 + 0x24),(uchar *)puVar15,(uchar *)puVar44);
      GCM_Xor16_NEON((uchar *)(puVar33 + 0x26),(uchar *)puVar15,(uchar *)puVar1);
      GCM_Xor16_NEON((uchar *)(puVar33 + 0x28),(uchar *)puVar15,(uchar *)puVar3);
      GCM_Xor16_NEON((uchar *)(puVar33 + 0x2a),(uchar *)puVar15,(uchar *)puVar4);
      GCM_Xor16_NEON((uchar *)(puVar33 + 0x2c),(uchar *)puVar15,(uchar *)puVar5);
      GCM_Xor16_NEON((uchar *)(puVar33 + 0x2e),(uchar *)puVar15,(uchar *)puVar6);
      GCM_Xor16_NEON((uchar *)(puVar33 + 0x30),(uchar *)puVar15,(uchar *)puVar7);
      GCM_Xor16_NEON((uchar *)(puVar33 + 0x32),(uchar *)puVar15,(uchar *)puVar8);
      GCM_Xor16_NEON((uchar *)(puVar33 + 0x34),(uchar *)puVar15,(uchar *)puVar9);
      GCM_Xor16_NEON((uchar *)(puVar33 + 0x36),(uchar *)puVar15,(uchar *)puVar10);
      GCM_Xor16_NEON((uchar *)(puVar33 + 0x38),(uchar *)puVar15,(uchar *)puVar11);
      GCM_Xor16_NEON((uchar *)(puVar33 + 0x3a),(uchar *)puVar15,(uchar *)puVar12);
      GCM_Xor16_NEON((uchar *)(puVar33 + 0x3c),(uchar *)puVar15,(uchar *)puVar13);
      GCM_Xor16_NEON((uchar *)(puVar33 + 0x3e),(uchar *)puVar15,(uchar *)puVar14);
      puVar16 = puVar33 + 0x40;
      GCM_Xor16_NEON((uchar *)(puVar33 + 0x42),(uchar *)puVar16,(uchar *)puVar2);
      GCM_Xor16_NEON((uchar *)(puVar33 + 0x44),(uchar *)puVar16,(uchar *)puVar44);
      GCM_Xor16_NEON((uchar *)(puVar33 + 0x46),(uchar *)puVar16,(uchar *)puVar1);
      GCM_Xor16_NEON((uchar *)(puVar33 + 0x48),(uchar *)puVar16,(uchar *)puVar3);
      GCM_Xor16_NEON((uchar *)(puVar33 + 0x4a),(uchar *)puVar16,(uchar *)puVar4);
      GCM_Xor16_NEON((uchar *)(puVar33 + 0x4c),(uchar *)puVar16,(uchar *)puVar5);
      GCM_Xor16_NEON((uchar *)(puVar33 + 0x4e),(uchar *)puVar16,(uchar *)puVar6);
      GCM_Xor16_NEON((uchar *)(puVar33 + 0x50),(uchar *)puVar16,(uchar *)puVar7);
      GCM_Xor16_NEON((uchar *)(puVar33 + 0x52),(uchar *)puVar16,(uchar *)puVar8);
      GCM_Xor16_NEON((uchar *)(puVar33 + 0x54),(uchar *)puVar16,(uchar *)puVar9);
      GCM_Xor16_NEON((uchar *)(puVar33 + 0x56),(uchar *)puVar16,(uchar *)puVar10);
      GCM_Xor16_NEON((uchar *)(puVar33 + 0x58),(uchar *)puVar16,(uchar *)puVar11);
      GCM_Xor16_NEON((uchar *)(puVar33 + 0x5a),(uchar *)puVar16,(uchar *)puVar12);
      GCM_Xor16_NEON((uchar *)(puVar33 + 0x5c),(uchar *)puVar16,(uchar *)puVar13);
      GCM_Xor16_NEON((uchar *)(puVar33 + 0x5e),(uchar *)puVar16,(uchar *)puVar14);
      GCM_Xor16_NEON((uchar *)(puVar33 + 0x60),(uchar *)puVar16,(uchar *)puVar15);
      GCM_Xor16_NEON((uchar *)(puVar33 + 0x62),(uchar *)puVar16,(uchar *)(puVar33 + 0x22));
      GCM_Xor16_NEON((uchar *)(puVar33 + 100),(uchar *)puVar16,(uchar *)(puVar33 + 0x24));
      GCM_Xor16_NEON((uchar *)(puVar33 + 0x66),(uchar *)puVar16,(uchar *)(puVar33 + 0x26));
      GCM_Xor16_NEON((uchar *)(puVar33 + 0x68),(uchar *)puVar16,(uchar *)(puVar33 + 0x28));
      GCM_Xor16_NEON((uchar *)(puVar33 + 0x6a),(uchar *)puVar16,(uchar *)(puVar33 + 0x2a));
      GCM_Xor16_NEON((uchar *)(puVar33 + 0x6c),(uchar *)puVar16,(uchar *)(puVar33 + 0x2c));
      GCM_Xor16_NEON((uchar *)(puVar33 + 0x6e),(uchar *)puVar16,(uchar *)(puVar33 + 0x2e));
      GCM_Xor16_NEON((uchar *)(puVar33 + 0x70),(uchar *)puVar16,(uchar *)(puVar33 + 0x30));
      GCM_Xor16_NEON((uchar *)(puVar33 + 0x72),(uchar *)puVar16,(uchar *)(puVar33 + 0x32));
      GCM_Xor16_NEON((uchar *)(puVar33 + 0x74),(uchar *)puVar16,(uchar *)(puVar33 + 0x34));
      GCM_Xor16_NEON((uchar *)(puVar33 + 0x76),(uchar *)puVar16,(uchar *)(puVar33 + 0x36));
      GCM_Xor16_NEON((uchar *)(puVar33 + 0x78),(uchar *)puVar16,(uchar *)(puVar33 + 0x38));
      GCM_Xor16_NEON((uchar *)(puVar33 + 0x7a),(uchar *)puVar16,(uchar *)(puVar33 + 0x3a));
      GCM_Xor16_NEON((uchar *)(puVar33 + 0x7c),(uchar *)puVar16,(uchar *)(puVar33 + 0x3c));
      GCM_Xor16_NEON((uchar *)(puVar33 + 0x7e),(uchar *)puVar16,(uchar *)(puVar33 + 0x3e));
      lVar50 = 0x40;
      do {
        GCM_Xor16_NEON((uchar *)((long)pvVar48 + lVar50) + 0x400,(uchar *)(puVar33 + 0x80),
                       (uchar *)((long)pvVar48 + lVar50));
        lVar50 = lVar50 + 0x10;
      } while (lVar50 != 0x430);
      lVar50 = 0x40;
      do {
        GCM_Xor16_NEON((uchar *)((long)pvVar48 + lVar50) + 0x800,(uchar *)(puVar33 + 0x100),
                       (uchar *)((long)pvVar48 + lVar50));
        lVar50 = lVar50 + 0x10;
      } while (lVar50 != 0x830);
      pvVar48 = (void *)((long)pvVar48 + 0x1000);
      lVar45 = lVar45 + 1;
    } while (lVar45 != 0x10);
  }
  else {
    if (s_reductionTableInitialized == '\0') {
      s_reductionTable._20_2_ = 0x940d;
      s_reductionTable._8_8_ = 0x4e058c04ca060807;
      s_reductionTable._0_8_ = 0x46028403c2010000;
      s_reductionTable._16_2_ = 0x100e;
      s_reductionTable._18_2_ = 0xd20f;
      s_reductionTable._24_2_ = 0x1809;
      s_reductionTable._22_2_ = 0x560c;
      s_reductionTable._26_2_ = 0xda08;
      s_reductionTable._30_2_ = 0x5e0b;
      s_reductionTable._28_2_ = 0x9c0a;
      s_reductionTable._38_2_ = 0x661e;
      s_reductionTable._32_2_ = 0x201c;
      s_reductionTable._34_2_ = 0xe21d;
      s_reductionTable._42_2_ = 0xea1a;
      s_reductionTable._40_2_ = 0x281b;
      s_reductionTable._46_2_ = 0x6e19;
      s_reductionTable._44_2_ = 0xac18;
      s_reductionTable._48_2_ = 0x3012;
      s_reductionTable._58_2_ = 0xfa14;
      s_reductionTable._60_2_ = 0xbc16;
      s_reductionTable._62_2_ = 0x7e17;
      s_reductionTable._50_8_ = 0x38157610b411f213;
      s_reductionTable._70_2_ = 0x63a;
      s_reductionTable._68_2_ = 0xc43b;
      s_reductionTable._36_2_ = 0xa41f;
      s_reductionTable._64_4_ = 0x82394038;
      s_reductionTable._74_2_ = 0x8a3e;
      s_reductionTable._72_2_ = 0x483f;
      s_reductionTable._78_2_ = 0xe3d;
      s_reductionTable._76_2_ = 0xcc3c;
      s_reductionTable._94_2_ = 0x1e33;
      s_reductionTable._90_2_ = 0x9a30;
      s_reductionTable._92_2_ = 0xdc32;
      s_reductionTable._98_8_ = 0x68232626e427a225;
      s_reductionTable._106_8_ = 0x702a2e21ec20aa22;
      s_reductionTable._82_8_ = 0x58311634d4359237;
      s_reductionTable._96_2_ = 0x6024;
      s_reductionTable._122_2_ = 0xba2c;
      s_reductionTable._114_8_ = 0x782d3628f429b22b;
      s_reductionTable._124_2_ = 0xfc2e;
      s_reductionTable._80_2_ = 0x5036;
      s_reductionTable._126_2_ = 0x3e2f;
      s_reductionTable._128_4_ = 0x42718070;
      lVar45 = 0;
      do {
        lVar50 = lVar45 + 2;
        *(ushort *)(s_reductionTable + lVar45 + 0x84) =
             *(ushort *)(s_reductionTable + lVar45 + 4) ^ s_reductionTable._128_2_;
        lVar45 = lVar50;
      } while (lVar50 != 0x7c);
      s_reductionTable._258_2_ = s_reductionTable._2_2_ ^ 0xe1;
      s_reductionTable._256_2_ = 0xe1;
      lVar45 = 0;
      do {
        lVar50 = lVar45 + 2;
        *(ushort *)(s_reductionTable + lVar45 + 0x104) =
             *(ushort *)(s_reductionTable + lVar45 + 4) ^ s_reductionTable._256_2_;
        lVar45 = lVar50;
      } while (lVar50 != 0xfc);
      s_reductionTableInitialized = '\x01';
    }
    uVar46 = 0;
    uVar47 = 0;
    do {
      uVar34 = uVar47 & 0x1f;
      if (uVar34 < 4) {
        iVar39 = 7;
        lVar45 = 0x430;
LAB_00ce1cb0:
        uVar35 = (uVar49 & 0xff00ff00ff00ff00) >> 8 | (uVar49 & 0xff00ff00ff00ff) << 8;
        uVar35 = (uVar35 & 0xffff0000ffff0000) >> 0x10 | (uVar35 & 0xffff0000ffff) << 0x10;
        puVar51 = (ulong *)((long)__dest +
                           (1L << ((ulong)(iVar39 - uVar34) & 0x3f)) +
                           (uVar46 & 0x7fffff00) + lVar45);
        uVar36 = (uVar43 & 0xff00ff00ff00ff00) >> 8 | (uVar43 & 0xff00ff00ff00ff) << 8;
        uVar36 = (uVar36 & 0xffff0000ffff0000) >> 0x10 | (uVar36 & 0xffff0000ffff) << 0x10;
        *puVar51 = uVar35 >> 0x20 | uVar35 << 0x20;
        puVar51[1] = uVar36 >> 0x20 | uVar36 << 0x20;
      }
      else if (uVar34 < 8) {
        iVar39 = 0xb;
        lVar45 = 0x30;
        goto LAB_00ce1cb0;
      }
      uVar35 = uVar43 & 1;
      uVar43 = uVar43 >> 1 | uVar49 << 0x3f;
      uVar47 = uVar47 + 1;
      uVar49 = -uVar35 & 0xe100000000000000 ^ uVar49 >> 1;
      uVar34 = (int)uVar46 + 8;
      uVar46 = (ulong)uVar34;
    } while (uVar34 != 0x340);
    lVar45 = 0;
    do {
      puVar17 = (uchar *)((long)__dest + lVar45 + 0x50);
      puVar18 = (uchar *)((long)__dest + lVar45 + 0x60);
      puVar19 = (uchar *)((long)__dest + lVar45 + 0x40);
      puVar20 = (uchar *)((long)__dest + lVar45 + 0x450);
      *(undefined8 *)((long)__dest + lVar45 + 0x30) = 0;
      *(undefined8 *)((long)__dest + lVar45 + 0x38) = 0;
      *(undefined8 *)((long)__dest + lVar45 + 0x438) = 0;
      *(undefined8 *)((long)__dest + lVar45 + 0x430) = 0;
      GCM_Xor16_NEON(puVar18,puVar17,puVar19);
      puVar21 = (uchar *)((long)__dest + lVar45 + 0x460);
      puVar22 = (uchar *)((long)__dest + lVar45 + 0x440);
      GCM_Xor16_NEON(puVar21,puVar20,puVar22);
      puVar23 = (uchar *)((long)__dest + lVar45 + 0x70);
      puVar24 = (uchar *)((long)__dest + lVar45 + 0x80);
      puVar25 = (uchar *)((long)__dest + lVar45 + 0x470);
      GCM_Xor16_NEON(puVar24,puVar23,puVar19);
      puVar26 = (uchar *)((long)__dest + lVar45 + 0x480);
      GCM_Xor16_NEON(puVar26,puVar25,puVar22);
      puVar27 = (uchar *)((long)__dest + lVar45 + 0x90);
      GCM_Xor16_NEON(puVar27,puVar23,puVar17);
      puVar28 = (uchar *)((long)__dest + lVar45 + 0x490);
      GCM_Xor16_NEON(puVar28,puVar25,puVar20);
      puVar29 = (uchar *)((long)__dest + lVar45 + 0xa0);
      GCM_Xor16_NEON(puVar29,puVar23,puVar18);
      puVar30 = (uchar *)((long)__dest + lVar45 + 0x4a0);
      GCM_Xor16_NEON(puVar30,puVar25,puVar21);
      puVar31 = (uchar *)((long)__dest + lVar45 + 0xb0);
      puVar32 = (uchar *)((long)__dest + lVar45 + 0x4b0);
      GCM_Xor16_NEON((uchar *)((long)__dest + lVar45 + 0xc0),puVar31,puVar19);
      GCM_Xor16_NEON((uchar *)((long)__dest + lVar45 + 0x4c0),puVar32,puVar22);
      GCM_Xor16_NEON((uchar *)((long)__dest + lVar45 + 0xd0),puVar31,puVar17);
      GCM_Xor16_NEON((uchar *)((long)__dest + lVar45 + 0x4d0),puVar32,puVar20);
      GCM_Xor16_NEON((uchar *)((long)__dest + lVar45 + 0xe0),puVar31,puVar18);
      GCM_Xor16_NEON((uchar *)((long)__dest + lVar45 + 0x4e0),puVar32,puVar21);
      GCM_Xor16_NEON((uchar *)((long)__dest + lVar45 + 0xf0),puVar31,puVar23);
      GCM_Xor16_NEON((uchar *)((long)__dest + lVar45 + 0x4f0),puVar32,puVar25);
      GCM_Xor16_NEON((uchar *)((long)__dest + lVar45 + 0x100),puVar31,puVar24);
      GCM_Xor16_NEON((uchar *)((long)__dest + lVar45 + 0x500),puVar32,puVar26);
      GCM_Xor16_NEON((uchar *)((long)__dest + lVar45 + 0x110),puVar31,puVar27);
      GCM_Xor16_NEON((uchar *)((long)__dest + lVar45 + 0x510),puVar32,puVar28);
      GCM_Xor16_NEON((uchar *)((long)__dest + lVar45 + 0x120),puVar31,puVar29);
      GCM_Xor16_NEON((uchar *)((long)__dest + lVar45 + 0x520),puVar32,puVar30);
      lVar45 = lVar45 + 0x100;
    } while (lVar45 != 0x400);
  }
  if (*(long *)(lVar38 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


