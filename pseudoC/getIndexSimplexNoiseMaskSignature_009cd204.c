// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getIndexSimplexNoiseMaskSignature
// Entry Point: 009cd204
// Size: 344 bytes
// Signature: undefined __cdecl getIndexSimplexNoiseMaskSignature(uint param_1, uint param_2)


/* ProceduralPlacementIndexSimplexNoiseMask::getIndexSimplexNoiseMaskSignature(unsigned int,
   unsigned int) */

void ProceduralPlacementIndexSimplexNoiseMask::getIndexSimplexNoiseMaskSignature
               (uint param_1,uint param_2)

{
  long lVar1;
  char *__src;
  size_t __n;
  ulong *in_x8;
  undefined *__dest;
  ulong uVar2;
  char *local_180;
  ShaHash aSStack_178 [24];
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  uchar auStack_5c [20];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  ShaHash::ShaHash(aSStack_178,0xa0);
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_f8 = 0;
  local_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_118 = 0;
  local_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_138 = 0;
  local_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_158 = 0;
  local_160 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  FUN_009cdc80(&local_160);
                    /* try { // try from 009cd27c to 009cd297 has its CatchHandler @ 009cd35c */
  ShaHash::add(aSStack_178,(uchar *)&local_160,0x100);
  ShaHash::getSHA1Hash((uchar *)aSStack_178);
  local_180 = (char *)0x0;
                    /* try { // try from 009cd29c to 009cd2ef has its CatchHandler @ 009cd360 */
  StringUtil::base64Encode(auStack_5c,0x14,true,&local_180);
  __src = local_180;
  __n = strlen(local_180);
  if (0xffffffffffffffef < __n) {
                    /* try { // try from 009cd350 to 009cd357 has its CatchHandler @ 009cd360 */
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (undefined *)((long)in_x8 + 1);
    *(char *)in_x8 = (char)((int)__n << 1);
    if (__n == 0) goto LAB_009cd310;
  }
  else {
    uVar2 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = (undefined *)operator_new(uVar2);
    in_x8[1] = __n;
    in_x8[2] = (ulong)__dest;
    *in_x8 = uVar2 | 1;
  }
  memcpy(__dest,__src,__n);
LAB_009cd310:
  __dest[__n] = 0;
  if (local_180 != (char *)0x0) {
    operator_delete__(local_180);
  }
  ShaHash::~ShaHash(aSStack_178);
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


