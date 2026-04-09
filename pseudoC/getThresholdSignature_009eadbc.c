// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getThresholdSignature
// Entry Point: 009eadbc
// Size: 440 bytes
// Signature: undefined __cdecl getThresholdSignature(ProceduralPlacementMask * param_1, basic_string * param_2, int param_3)


/* ProceduralPlacementThresholdMask::getThresholdSignature(ProceduralPlacementMask*,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, int) */

void ProceduralPlacementThresholdMask::getThresholdSignature
               (ProceduralPlacementMask *param_1,basic_string *param_2,int param_3)

{
  uint uVar1;
  uchar *puVar2;
  long lVar3;
  char *__src;
  bool bVar4;
  size_t __n;
  ulong *in_x8;
  undefined *__dest;
  ulong uVar5;
  char *local_198;
  byte local_190 [8];
  uint local_188;
  uchar *local_180;
  ShaHash aSStack_178 [24];
  undefined8 local_160;
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
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  ShaHash::ShaHash(aSStack_178,0xa0);
                    /* try { // try from 009eae04 to 009eae13 has its CatchHandler @ 009eaf78 */
  (**(code **)(*(long *)param_1 + 0x78))(local_190,param_1);
  bVar4 = (local_190[0] & 1) != 0;
  puVar2 = (uchar *)((ulong)local_190 | 1);
  if (bVar4) {
    puVar2 = local_180;
  }
  uVar1 = (uint)(local_190[0] >> 1);
  if (bVar4) {
    uVar1 = local_188;
  }
                    /* try { // try from 009eae34 to 009eae3b has its CatchHandler @ 009eaf74 */
  ShaHash::add(aSStack_178,puVar2,uVar1);
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
  uStack_108 = 0;
  local_110 = 0;
  uStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_148 = 0;
  local_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_158 = 0;
  local_160 = 0;
  FUN_009eb3d8(&local_160);
                    /* try { // try from 009eae84 to 009eae9f has its CatchHandler @ 009eaf80 */
  ShaHash::add(aSStack_178,(uchar *)&local_160,0x100);
  ShaHash::getSHA1Hash((uchar *)aSStack_178);
  local_198 = (char *)0x0;
                    /* try { // try from 009eaea4 to 009eaef7 has its CatchHandler @ 009eaf84 */
  StringUtil::base64Encode(auStack_5c,0x14,true,&local_198);
  __src = local_198;
  __n = strlen(local_198);
  if (0xffffffffffffffef < __n) {
                    /* try { // try from 009eaf68 to 009eaf6f has its CatchHandler @ 009eaf84 */
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (undefined *)((long)in_x8 + 1);
    *(char *)in_x8 = (char)((int)__n << 1);
    if (__n == 0) goto LAB_009eaf18;
  }
  else {
    uVar5 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = (undefined *)operator_new(uVar5);
    in_x8[1] = __n;
    in_x8[2] = (ulong)__dest;
    *in_x8 = uVar5 | 1;
  }
  memcpy(__dest,__src,__n);
LAB_009eaf18:
  __dest[__n] = 0;
  if (local_198 != (char *)0x0) {
    operator_delete__(local_198);
  }
  if ((local_190[0] & 1) != 0) {
    operator_delete(local_180);
  }
  ShaHash::~ShaHash(aSStack_178);
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


