// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getSignedDistanceSignature
// Entry Point: 009e8f54
// Size: 444 bytes
// Signature: undefined __cdecl getSignedDistanceSignature(ProceduralPlacementMask * param_1, float param_2, float param_3, int param_4)


/* ProceduralPlacementSignedDistanceMask::getSignedDistanceSignature(ProceduralPlacementMask*,
   float, float, int) */

void ProceduralPlacementSignedDistanceMask::getSignedDistanceSignature
               (ProceduralPlacementMask *param_1,float param_2,float param_3,int param_4)

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
  char *local_1a8;
  byte local_1a0 [8];
  uint local_198;
  uchar *local_190;
  ShaHash aSStack_188 [24];
  undefined8 local_170;
  undefined8 uStack_168;
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
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  ShaHash::ShaHash(aSStack_188,0xa0);
                    /* try { // try from 009e8fa4 to 009e8fb3 has its CatchHandler @ 009e9114 */
  (**(code **)(*(long *)param_1 + 0x78))(local_1a0,param_1);
  bVar4 = (local_1a0[0] & 1) != 0;
  puVar2 = (uchar *)((ulong)local_1a0 | 1);
  if (bVar4) {
    puVar2 = local_190;
  }
  uVar1 = (uint)(local_1a0[0] >> 1);
  if (bVar4) {
    uVar1 = local_198;
  }
                    /* try { // try from 009e8fd4 to 009e8fdb has its CatchHandler @ 009e9110 */
  ShaHash::add(aSStack_188,puVar2,uVar1);
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
  uStack_118 = 0;
  local_120 = 0;
  uStack_138 = 0;
  local_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_158 = 0;
  local_160 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_168 = 0;
  local_170 = 0;
  FUN_009e91d0((double)param_2,(double)param_3,&local_170);
                    /* try { // try from 009e901c to 009e9037 has its CatchHandler @ 009e911c */
  ShaHash::add(aSStack_188,(uchar *)&local_170,0x100);
  ShaHash::getSHA1Hash((uchar *)aSStack_188);
  local_1a8 = (char *)0x0;
                    /* try { // try from 009e903c to 009e908f has its CatchHandler @ 009e9120 */
  StringUtil::base64Encode(auStack_6c,0x14,true,&local_1a8);
  __src = local_1a8;
  __n = strlen(local_1a8);
  if (0xffffffffffffffef < __n) {
                    /* try { // try from 009e9104 to 009e910b has its CatchHandler @ 009e9120 */
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (undefined *)((long)in_x8 + 1);
    *(char *)in_x8 = (char)((int)__n << 1);
    if (__n == 0) goto LAB_009e90b0;
  }
  else {
    uVar5 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = (undefined *)operator_new(uVar5);
    in_x8[1] = __n;
    in_x8[2] = (ulong)__dest;
    *in_x8 = uVar5 | 1;
  }
  memcpy(__dest,__src,__n);
LAB_009e90b0:
  __dest[__n] = 0;
  if (local_1a8 != (char *)0x0) {
    operator_delete__(local_1a8);
  }
  if ((local_1a0[0] & 1) != 0) {
    operator_delete(local_190);
  }
  ShaHash::~ShaHash(aSStack_188);
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


