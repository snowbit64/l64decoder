// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getProjectObjectsMaskSignature
// Entry Point: 009db528
// Size: 588 bytes
// Signature: undefined __thiscall getProjectObjectsMaskSignature(ProceduralPlacementProjectObjectsMask * this, set * param_1, float param_2)


/* ProceduralPlacementProjectObjectsMask::getProjectObjectsMaskSignature(std::__ndk1::set<TransformGroup*,
   std::__ndk1::less<TransformGroup*>, std::__ndk1::allocator<TransformGroup*> >&, float) */

void __thiscall
ProceduralPlacementProjectObjectsMask::getProjectObjectsMaskSignature
          (ProceduralPlacementProjectObjectsMask *this,set *param_1,float param_2)

{
  uint uVar1;
  uchar *puVar2;
  long lVar3;
  char *__src;
  bool bVar4;
  size_t __n;
  ulong *in_x8;
  ProceduralPlacementProjectObjectsMask **ppPVar5;
  ProceduralPlacementProjectObjectsMask *pPVar6;
  undefined *__dest;
  ProceduralPlacementProjectObjectsMask **ppPVar7;
  ulong uVar8;
  char *local_1a8;
  ulong local_1a0;
  undefined8 local_198;
  uchar *local_190;
  ShaHash aSStack_188 [24];
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
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
  local_1a0 = 0;
  local_198 = 0;
  local_190 = (uchar *)0x0;
  ppPVar7 = *(ProceduralPlacementProjectObjectsMask ***)this;
  while (ppPVar7 != (ProceduralPlacementProjectObjectsMask **)(this + 8)) {
    uStack_148 = 0;
    local_150 = 0;
    uStack_138 = 0;
    local_140 = 0;
    uStack_168 = 0;
    local_170 = 0;
    uStack_158 = 0;
    local_160 = 0;
                    /* try { // try from 009db5a8 to 009db5c7 has its CatchHandler @ 009db77c */
    FUN_009db7a0(&local_170,0x40,0x40,&DAT_004c7f7a,*(undefined4 *)((long)ppPVar7[4] + 0x18));
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)&local_1a0);
    ppPVar5 = (ProceduralPlacementProjectObjectsMask **)ppPVar7[1];
    if ((ProceduralPlacementProjectObjectsMask **)ppPVar7[1] ==
        (ProceduralPlacementProjectObjectsMask **)0x0) {
      ppPVar5 = ppPVar7 + 2;
      bVar4 = (ProceduralPlacementProjectObjectsMask **)
              *(ProceduralPlacementProjectObjectsMask **)*ppPVar5 != ppPVar7;
      ppPVar7 = (ProceduralPlacementProjectObjectsMask **)*ppPVar5;
      if (bVar4) {
        do {
          pPVar6 = *ppPVar5;
          ppPVar5 = (ProceduralPlacementProjectObjectsMask **)(pPVar6 + 0x10);
          ppPVar7 = (ProceduralPlacementProjectObjectsMask **)*ppPVar5;
        } while (*ppPVar7 != pPVar6);
      }
    }
    else {
      do {
        ppPVar7 = ppPVar5;
        ppPVar5 = (ProceduralPlacementProjectObjectsMask **)*ppPVar7;
      } while ((ProceduralPlacementProjectObjectsMask **)*ppPVar7 !=
               (ProceduralPlacementProjectObjectsMask **)0x0);
    }
  }
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
  local_150 = 0;
  uStack_168 = 0;
  local_170 = 0;
                    /* try { // try from 009db640 to 009db69b has its CatchHandler @ 009db778 */
  FUN_009db7a0((double)param_2,&local_170,0x100,0x100,&DAT_004e0aa9);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)&local_1a0);
  bVar4 = (local_1a0 & 1) != 0;
  puVar2 = (uchar *)((ulong)&local_1a0 | 1);
  if (bVar4) {
    puVar2 = local_190;
  }
  uVar1 = (uint)((byte)local_1a0 >> 1);
  if (bVar4) {
    uVar1 = (uint)local_198;
  }
  ShaHash::add(aSStack_188,puVar2,uVar1);
  ShaHash::getSHA1Hash((uchar *)aSStack_188);
  local_1a8 = (char *)0x0;
                    /* try { // try from 009db6a0 to 009db6f3 has its CatchHandler @ 009db774 */
  StringUtil::base64Encode(auStack_6c,0x14,true,&local_1a8);
  __src = local_1a8;
  __n = strlen(local_1a8);
  if (0xffffffffffffffef < __n) {
                    /* try { // try from 009db768 to 009db76f has its CatchHandler @ 009db774 */
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (undefined *)((long)in_x8 + 1);
    *(char *)in_x8 = (char)((int)__n << 1);
    if (__n == 0) goto LAB_009db714;
  }
  else {
    uVar8 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = (undefined *)operator_new(uVar8);
    in_x8[1] = __n;
    in_x8[2] = (ulong)__dest;
    *in_x8 = uVar8 | 1;
  }
  memcpy(__dest,__src,__n);
LAB_009db714:
  __dest[__n] = 0;
  if (local_1a8 != (char *)0x0) {
    operator_delete__(local_1a8);
  }
  if ((local_1a0 & 1) != 0) {
    operator_delete(local_190);
  }
  ShaHash::~ShaHash(aSStack_188);
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


