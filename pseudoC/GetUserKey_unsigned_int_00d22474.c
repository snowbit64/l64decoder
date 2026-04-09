// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GetUserKey<unsigned_int>
// Entry Point: 00d22474
// Size: 532 bytes
// Signature: void __cdecl GetUserKey<unsigned_int>(ByteOrder param_1, uint * param_2, ulong param_3, uchar * param_4, ulong param_5)


/* void CryptoPP::GetUserKey<unsigned int>(CryptoPP::ByteOrder, unsigned int*, unsigned long,
   unsigned char const*, unsigned long) */

void CryptoPP::GetUserKey<unsigned_int>
               (ByteOrder param_1,uint *param_2,ulong param_3,uchar *param_4,ulong param_5)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  uint *puVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  lVar2 = tpidr_el0;
  lVar5 = *(long *)(lVar2 + 0x28);
  if (param_3 * 4 < param_5) {
    puVar3 = (undefined8 *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00d22578 to 00d2257f has its CatchHandler @ 00d226d0 */
    puVar4 = (undefined8 *)operator_new(0x20);
    puVar4[1] = 0x726566667562203a;
    *puVar4 = 0x735f7970636d656d;
    *(undefined8 *)((long)puVar4 + 0x11) = 0x776f6c667265766f;
    *(undefined8 *)((long)puVar4 + 9) = 0x2072656666756220;
    *(undefined *)((long)puVar4 + 0x19) = 0;
    *(undefined4 *)(puVar3 + 1) = 1;
    *puVar3 = &PTR__Exception_00fe0298;
                    /* try { // try from 00d225c8 to 00d225cf has its CatchHandler @ 00d226ac */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string((basic_string *)(puVar3 + 2));
    *puVar3 = &PTR__Exception_00fe9ee0;
                    /* try { // try from 00d225e0 to 00d225f7 has its CatchHandler @ 00d22690 */
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar3,&InvalidArgument::typeinfo,Exception::~Exception);
  }
  memcpy(param_2,param_4,param_5);
  memset((void *)((long)param_2 + param_5),0,param_3 * 4 - param_5);
  if (0xfffffffffffffffc < param_5) {
    puVar3 = (undefined8 *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00d22604 to 00d2260b has its CatchHandler @ 00d226cc */
    puVar4 = (undefined8 *)operator_new(0x30);
    *(undefined *)((long)puVar4 + 0x25) = 0;
    puVar4[1] = 0x6c7069746c754d6f;
    *puVar4 = 0x547055646e756f52;
    puVar4[3] = 0x65766f2072656765;
    puVar4[2] = 0x746e69203a664f65;
    *(undefined8 *)((long)puVar4 + 0x1d) = 0x776f6c667265766f;
    *puVar3 = &PTR__Exception_00fe0298;
    *(undefined4 *)(puVar3 + 1) = 1;
                    /* try { // try from 00d22654 to 00d2265b has its CatchHandler @ 00d2268c */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string((basic_string *)(puVar3 + 2));
    *puVar3 = &PTR__Exception_00fe9ee0;
                    /* try { // try from 00d2266c to 00d22683 has its CatchHandler @ 00d22688 */
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar3,&InvalidArgument::typeinfo,Exception::~Exception);
  }
  if ((param_1 != 0) && (param_5 != 0)) {
    uVar6 = param_5 + 3 >> 2;
    if (param_5 < 0xd) {
      uVar8 = 0;
    }
    else {
      uVar8 = uVar6 & 0x3ffffffffffffffc;
      puVar3 = (undefined8 *)(param_2 + 2);
      uVar10 = uVar8;
      do {
        uVar10 = uVar10 - 4;
        uVar11 = NEON_rev32(puVar3[-1],1);
        uVar12 = NEON_rev32(*puVar3,1);
        puVar3[-1] = uVar11;
        *puVar3 = uVar12;
        puVar3 = puVar3 + 2;
      } while (uVar10 != 0);
      if (uVar6 == uVar8) goto LAB_00d22544;
    }
    lVar7 = uVar6 - uVar8;
    puVar9 = param_2 + uVar8;
    do {
      lVar7 = lVar7 + -1;
      uVar1 = (*puVar9 & 0xff00ff00) >> 8 | (*puVar9 & 0xff00ff) << 8;
      *puVar9 = uVar1 >> 0x10 | uVar1 << 0x10;
      puVar9 = puVar9 + 1;
    } while (lVar7 != 0);
  }
LAB_00d22544:
  if (*(long *)(lVar2 + 0x28) == lVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


