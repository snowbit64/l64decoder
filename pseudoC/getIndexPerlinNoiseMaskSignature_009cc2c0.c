// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getIndexPerlinNoiseMaskSignature
// Entry Point: 009cc2c0
// Size: 360 bytes
// Signature: undefined __cdecl getIndexPerlinNoiseMaskSignature(uint param_1, uint param_2, float param_3)


/* ProceduralPlacementIndexPerlinNoiseMask::getIndexPerlinNoiseMaskSignature(unsigned int, unsigned
   int, float) */

void ProceduralPlacementIndexPerlinNoiseMask::getIndexPerlinNoiseMaskSignature
               (uint param_1,uint param_2,float param_3)

{
  long lVar1;
  char *__src;
  size_t __n;
  ulong *in_x8;
  undefined *__dest;
  ulong uVar2;
  char *local_190;
  ShaHash aSStack_188 [24];
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  uchar auStack_6c [20];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  ShaHash::ShaHash(aSStack_188,0xa0);
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_e8 = 0;
  local_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_148 = 0;
  local_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_168 = 0;
  local_170 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  FUN_009cccc0((double)param_3,&local_170);
                    /* try { // try from 009cc344 to 009cc35f has its CatchHandler @ 009cc428 */
  ShaHash::add(aSStack_188,(uchar *)&local_170,0x100);
  ShaHash::getSHA1Hash((uchar *)aSStack_188);
  local_190 = (char *)0x0;
                    /* try { // try from 009cc364 to 009cc3b7 has its CatchHandler @ 009cc42c */
  StringUtil::base64Encode(auStack_6c,0x14,true,&local_190);
  __src = local_190;
  __n = strlen(local_190);
  if (0xffffffffffffffef < __n) {
                    /* try { // try from 009cc41c to 009cc423 has its CatchHandler @ 009cc42c */
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (undefined *)((long)in_x8 + 1);
    *(char *)in_x8 = (char)((int)__n << 1);
    if (__n == 0) goto LAB_009cc3d8;
  }
  else {
    uVar2 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = (undefined *)operator_new(uVar2);
    in_x8[1] = __n;
    in_x8[2] = (ulong)__dest;
    *in_x8 = uVar2 | 1;
  }
  memcpy(__dest,__src,__n);
LAB_009cc3d8:
  __dest[__n] = 0;
  if (local_190 != (char *)0x0) {
    operator_delete__(local_190);
  }
  ShaHash::~ShaHash(aSStack_188);
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


