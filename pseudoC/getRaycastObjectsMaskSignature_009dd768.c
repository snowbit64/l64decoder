// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getRaycastObjectsMaskSignature
// Entry Point: 009dd768
// Size: 768 bytes
// Signature: undefined __thiscall getRaycastObjectsMaskSignature(ProceduralPlacementRaycastObjectsMask * this, set * param_1, set * param_2, float param_3, uint param_4)


/* ProceduralPlacementRaycastObjectsMask::getRaycastObjectsMaskSignature(std::__ndk1::set<TransformGroup*,
   std::__ndk1::less<TransformGroup*>, std::__ndk1::allocator<TransformGroup*> >&,
   std::__ndk1::set<TransformGroup*, std::__ndk1::less<TransformGroup*>,
   std::__ndk1::allocator<TransformGroup*> >&, float, unsigned int) */

void __thiscall
ProceduralPlacementRaycastObjectsMask::getRaycastObjectsMaskSignature
          (ProceduralPlacementRaycastObjectsMask *this,set *param_1,set *param_2,float param_3,
          uint param_4)

{
  uint uVar1;
  uchar *puVar2;
  long lVar3;
  char *__src;
  bool bVar4;
  size_t __n;
  ulong *in_x8;
  ProceduralPlacementRaycastObjectsMask **ppPVar5;
  set **ppsVar6;
  ProceduralPlacementRaycastObjectsMask *pPVar7;
  set *psVar8;
  undefined *__dest;
  ulong uVar9;
  set **ppsVar10;
  ProceduralPlacementRaycastObjectsMask **ppPVar11;
  char *local_1b8;
  ulong local_1b0;
  undefined8 local_1a8;
  uchar *local_1a0;
  ShaHash aSStack_198 [24];
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
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
  uchar auStack_7c [20];
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  ShaHash::ShaHash(aSStack_198,0xa0);
  local_1b0 = 0;
  local_1a8 = 0;
  local_1a0 = (uchar *)0x0;
  ppPVar11 = *(ProceduralPlacementRaycastObjectsMask ***)this;
  while (ppPVar11 != (ProceduralPlacementRaycastObjectsMask **)(this + 8)) {
    uStack_158 = 0;
    local_160 = 0;
    uStack_148 = 0;
    local_150 = 0;
    uStack_178 = 0;
    local_180 = 0;
    uStack_168 = 0;
    local_170 = 0;
                    /* try { // try from 009dd7f4 to 009dd813 has its CatchHandler @ 009dda74 */
    FUN_009de77c(&local_180,0x40,0x40,&DAT_004c7f7a,*(undefined4 *)((long)ppPVar11[4] + 0x18));
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)&local_1b0);
    ppPVar5 = (ProceduralPlacementRaycastObjectsMask **)ppPVar11[1];
    if ((ProceduralPlacementRaycastObjectsMask **)ppPVar11[1] ==
        (ProceduralPlacementRaycastObjectsMask **)0x0) {
      ppPVar5 = ppPVar11 + 2;
      bVar4 = (ProceduralPlacementRaycastObjectsMask **)
              *(ProceduralPlacementRaycastObjectsMask **)*ppPVar5 != ppPVar11;
      ppPVar11 = (ProceduralPlacementRaycastObjectsMask **)*ppPVar5;
      if (bVar4) {
        do {
          pPVar7 = *ppPVar5;
          ppPVar5 = (ProceduralPlacementRaycastObjectsMask **)(pPVar7 + 0x10);
          ppPVar11 = (ProceduralPlacementRaycastObjectsMask **)*ppPVar5;
        } while (*ppPVar11 != pPVar7);
      }
    }
    else {
      do {
        ppPVar11 = ppPVar5;
        ppPVar5 = (ProceduralPlacementRaycastObjectsMask **)*ppPVar11;
      } while ((ProceduralPlacementRaycastObjectsMask **)*ppPVar11 !=
               (ProceduralPlacementRaycastObjectsMask **)0x0);
    }
  }
  ppsVar10 = *(set ***)param_1;
  while (ppsVar10 != (set **)(param_1 + 8)) {
    uStack_158 = 0;
    local_160 = 0;
    uStack_148 = 0;
    local_150 = 0;
    uStack_178 = 0;
    local_180 = 0;
    uStack_168 = 0;
    local_170 = 0;
                    /* try { // try from 009dd894 to 009dd8b3 has its CatchHandler @ 009dda70 */
    FUN_009de77c(&local_180,0x40,0x40,&DAT_004c7f7a,*(undefined4 *)((long)ppsVar10[4] + 0x18));
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)&local_1b0);
    ppsVar6 = (set **)ppsVar10[1];
    if ((set **)ppsVar10[1] == (set **)0x0) {
      ppsVar6 = ppsVar10 + 2;
      bVar4 = (set **)*(set **)*ppsVar6 != ppsVar10;
      ppsVar10 = (set **)*ppsVar6;
      if (bVar4) {
        do {
          psVar8 = *ppsVar6;
          ppsVar6 = (set **)(psVar8 + 0x10);
          ppsVar10 = (set **)*ppsVar6;
        } while (*ppsVar10 != psVar8);
      }
    }
    else {
      do {
        ppsVar10 = ppsVar6;
        ppsVar6 = (set **)*ppsVar10;
      } while ((set **)*ppsVar10 != (set **)0x0);
    }
  }
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
  uStack_128 = 0;
  local_130 = 0;
  uStack_148 = 0;
  local_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_168 = 0;
  local_170 = 0;
  uStack_158 = 0;
  local_160 = 0;
  uStack_178 = 0;
  local_180 = 0;
                    /* try { // try from 009dd92c to 009dd98b has its CatchHandler @ 009dda6c */
  FUN_009de77c((double)param_3,&local_180,0x100,0x100,&DAT_004d4607,(ulong)param_2 & 0xffffffff);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)&local_1b0);
  bVar4 = (local_1b0 & 1) != 0;
  puVar2 = (uchar *)((ulong)&local_1b0 | 1);
  if (bVar4) {
    puVar2 = local_1a0;
  }
  uVar1 = (uint)((byte)local_1b0 >> 1);
  if (bVar4) {
    uVar1 = (uint)local_1a8;
  }
  ShaHash::add(aSStack_198,puVar2,uVar1);
  ShaHash::getSHA1Hash((uchar *)aSStack_198);
  local_1b8 = (char *)0x0;
                    /* try { // try from 009dd990 to 009dd9e3 has its CatchHandler @ 009dda68 */
  StringUtil::base64Encode(auStack_7c,0x14,true,&local_1b8);
  __src = local_1b8;
  __n = strlen(local_1b8);
  if (0xffffffffffffffef < __n) {
                    /* try { // try from 009dda5c to 009dda63 has its CatchHandler @ 009dda68 */
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (undefined *)((long)in_x8 + 1);
    *(char *)in_x8 = (char)((int)__n << 1);
    if (__n == 0) goto LAB_009dda04;
  }
  else {
    uVar9 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = (undefined *)operator_new(uVar9);
    in_x8[1] = __n;
    in_x8[2] = (ulong)__dest;
    *in_x8 = uVar9 | 1;
  }
  memcpy(__dest,__src,__n);
LAB_009dda04:
  __dest[__n] = 0;
  if (local_1b8 != (char *)0x0) {
    operator_delete__(local_1b8);
  }
  if ((local_1b0 & 1) != 0) {
    operator_delete(local_1a0);
  }
  ShaHash::~ShaHash(aSStack_198);
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


