// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: saveMask
// Entry Point: 009d472c
// Size: 764 bytes
// Signature: undefined __thiscall saveMask(ProceduralPlacementManager * this, basic_string * param_1, PPMask * param_2)


/* WARNING: Type propagation algorithm not settling */
/* ProceduralPlacementManager::saveMask(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   ProceduralPlacementScriptBinding::PPMask*) */

void __thiscall
ProceduralPlacementManager::saveMask
          (ProceduralPlacementManager *this,basic_string *param_1,PPMask *param_2)

{
  size_t sVar1;
  long lVar2;
  char *pcVar3;
  int iVar4;
  size_t sVar5;
  void *__dest;
  long lVar6;
  size_t sVar7;
  char *pcVar8;
  long *this_00;
  char *pcVar9;
  ulong uVar10;
  ulong uVar11;
  basic_string local_c8 [4];
  char *local_b8;
  undefined8 local_b0;
  size_t local_a8;
  void *local_a0;
  undefined8 local_98;
  size_t local_90;
  char *local_88;
  ulong local_80;
  size_t local_78;
  char *local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  (**(code **)(**(long **)param_2 + 0x30))();
  local_80 = 0;
  local_78 = 0;
  pcVar8 = *(char **)(param_1 + 4);
  local_70 = (char *)0x0;
  if ((*(byte *)param_1 & 1) == 0) {
    pcVar8 = (char *)((long)param_1 + 1);
  }
  sVar5 = strlen(pcVar8);
  if (0xffffffffffffffef < sVar5) {
                    /* try { // try from 009d4a1c to 009d4a23 has its CatchHandler @ 009d4a38 */
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar5 < 0x17) {
    pcVar9 = (char *)((ulong)&local_98 | 1);
    local_98 = CONCAT71(local_98._1_7_,(char)((int)sVar5 << 1));
    if (sVar5 == 0) goto LAB_009d47ec;
  }
  else {
    uVar11 = sVar5 + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 009d47c4 to 009d47cb has its CatchHandler @ 009d4a38 */
    pcVar9 = (char *)operator_new(uVar11);
    local_98 = uVar11 | 1;
    local_90 = sVar5;
    local_88 = pcVar9;
  }
  memcpy(pcVar9,pcVar8,sVar5);
LAB_009d47ec:
  pcVar9[sVar5] = '\0';
                    /* try { // try from 009d47f4 to 009d47ff has its CatchHandler @ 009d4a28 */
  PathUtil::normalizePath((basic_string *)&local_98,(basic_string *)&local_80);
  if ((local_98 & 1) != 0) {
    operator_delete(local_88);
  }
  lVar6 = *(long *)(this + 0x50);
  if (*(long *)(this + 0x58) != lVar6) {
    uVar11 = 0;
    do {
      this_00 = *(long **)(lVar6 + uVar11 * 8);
      local_98 = 0;
      local_90 = 0;
      local_88 = (char *)0x0;
                    /* try { // try from 009d487c to 009d4883 has its CatchHandler @ 009d4a68 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string(local_c8);
      pcVar8 = (char *)((ulong)local_c8 | 1);
      if (((byte)local_c8[0] & 1) != 0) {
        pcVar8 = local_b8;
      }
      sVar5 = strlen(pcVar8);
      if (0xffffffffffffffef < sVar5) {
                    /* try { // try from 009d4a14 to 009d4a1b has its CatchHandler @ 009d4a48 */
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__basic_string_common<true>::__throw_length_error();
      }
      if (sVar5 < 0x17) {
        local_b0 = CONCAT71(local_b0._1_7_,(char)((int)sVar5 << 1));
        __dest = (void *)((ulong)&local_b0 | 1);
        if (sVar5 != 0) goto LAB_009d48e4;
      }
      else {
        uVar10 = sVar5 + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 009d48cc to 009d48d3 has its CatchHandler @ 009d4a40 */
        __dest = operator_new(uVar10);
        local_b0 = uVar10 | 1;
        local_a8 = sVar5;
        local_a0 = __dest;
LAB_009d48e4:
        memcpy(__dest,pcVar8,sVar5);
      }
      *(undefined *)((long)__dest + sVar5) = 0;
                    /* try { // try from 009d48f8 to 009d4903 has its CatchHandler @ 009d4a78 */
      PathUtil::normalizePath((basic_string *)&local_b0,(basic_string *)&local_98);
      if ((local_b0 & 1) != 0) {
        operator_delete(local_a0);
      }
      if (((byte)local_c8[0] & 1) != 0) {
        operator_delete(local_b8);
      }
      sVar7 = (size_t)((byte)local_98 >> 1);
      sVar5 = sVar7;
      if ((local_98 & 1) != 0) {
        sVar5 = local_90;
      }
      sVar1 = local_80 >> 1 & 0x7f;
      if ((local_80 & 1) != 0) {
        sVar1 = local_78;
      }
      if (sVar5 == sVar1) {
        pcVar8 = (char *)((ulong)&local_98 | 1);
        if ((local_98 & 1) != 0) {
          pcVar8 = local_88;
        }
        pcVar9 = (char *)((ulong)&local_80 | 1);
        if ((local_80 & 1) != 0) {
          pcVar9 = local_70;
        }
        pcVar3 = (char *)((ulong)&local_98 | 1);
        if ((local_98 & 1) == 0) {
          while (sVar5 != 0) {
            if (*pcVar3 != *pcVar9) goto LAB_009d4858;
            pcVar9 = pcVar9 + 1;
            sVar7 = sVar7 - 1;
            pcVar3 = pcVar3 + 1;
            sVar5 = sVar7;
          }
LAB_009d49a8:
                    /* try { // try from 009d49b0 to 009d49c3 has its CatchHandler @ 009d4a44 */
          (**(code **)(*this_00 + 0x28))(this_00);
          ProceduralPlacementMask::setDirtyRegion
                    ((ProceduralPlacementMask *)this_00,(DirtyRegion *)(this + 0x130));
          goto LAB_009d484c;
        }
        if ((sVar5 == 0) || (iVar4 = memcmp(pcVar8,pcVar9,sVar5), iVar4 == 0)) goto LAB_009d49a8;
LAB_009d4850:
        operator_delete(local_88);
      }
      else {
LAB_009d484c:
        if (((byte)local_98 & 1) != 0) goto LAB_009d4850;
      }
LAB_009d4858:
      lVar6 = *(long *)(this + 0x50);
      uVar11 = (ulong)((int)uVar11 + 1);
    } while (uVar11 < (ulong)(*(long *)(this + 0x58) - lVar6 >> 3));
  }
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


