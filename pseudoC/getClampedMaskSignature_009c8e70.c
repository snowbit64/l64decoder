// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getClampedMaskSignature
// Entry Point: 009c8e70
// Size: 436 bytes
// Signature: undefined __thiscall getClampedMaskSignature(ProceduralPlacementClampedMask * this, ProceduralPlacementMask * param_1, float param_2, float param_3)


/* ProceduralPlacementClampedMask::getClampedMaskSignature(ProceduralPlacementMask*, float, float)
    */

void __thiscall
ProceduralPlacementClampedMask::getClampedMaskSignature
          (ProceduralPlacementClampedMask *this,ProceduralPlacementMask *param_1,float param_2,
          float param_3)

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
                    /* try { // try from 009c8ebc to 009c8ecb has its CatchHandler @ 009c9028 */
  (**(code **)(*(long *)this + 0x78))(local_1a0,this);
  bVar4 = (local_1a0[0] & 1) != 0;
  puVar2 = (uchar *)((ulong)local_1a0 | 1);
  if (bVar4) {
    puVar2 = local_190;
  }
  uVar1 = (uint)(local_1a0[0] >> 1);
  if (bVar4) {
    uVar1 = local_198;
  }
                    /* try { // try from 009c8eec to 009c8ef3 has its CatchHandler @ 009c9024 */
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
  FUN_009c9290((double)param_2,(double)param_3,&local_170);
                    /* try { // try from 009c8f30 to 009c8f4b has its CatchHandler @ 009c9030 */
  ShaHash::add(aSStack_188,(uchar *)&local_170,0x100);
  ShaHash::getSHA1Hash((uchar *)aSStack_188);
  local_1a8 = (char *)0x0;
                    /* try { // try from 009c8f50 to 009c8fa3 has its CatchHandler @ 009c9034 */
  StringUtil::base64Encode(auStack_6c,0x14,true,&local_1a8);
  __src = local_1a8;
  __n = strlen(local_1a8);
  if (0xffffffffffffffef < __n) {
                    /* try { // try from 009c9018 to 009c901f has its CatchHandler @ 009c9034 */
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (undefined *)((long)in_x8 + 1);
    *(char *)in_x8 = (char)((int)__n << 1);
    if (__n == 0) goto LAB_009c8fc4;
  }
  else {
    uVar5 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = (undefined *)operator_new(uVar5);
    in_x8[1] = __n;
    in_x8[2] = (ulong)__dest;
    *in_x8 = uVar5 | 1;
  }
  memcpy(__dest,__src,__n);
LAB_009c8fc4:
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


