// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getSpecificFilename
// Entry Point: 00b08eb4
// Size: 636 bytes
// Signature: undefined __cdecl getSpecificFilename(char * param_1, FormatSupport * param_2, FormatSupport * * param_3, basic_string * param_4)


/* WARNING: Type propagation algorithm not settling */
/* AudioLoadUtil::getSpecificFilename(char const*, IAudioDevice::FormatSupport const*,
   IAudioDevice::FormatSupport const*&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&) */

uint AudioLoadUtil::getSpecificFilename
               (char *param_1,FormatSupport *param_2,FormatSupport **param_3,basic_string *param_4)

{
  long lVar1;
  undefined8 *puVar2;
  bool bVar3;
  int iVar4;
  char *pcVar5;
  ulong uVar6;
  uint uVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 local_90;
  ulong uStack_88;
  char *local_80;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  pcVar5 = strrchr(param_1,0x2e);
  if (pcVar5 != (char *)0x0) {
    uVar15 = (long)pcVar5 - (long)param_1;
    local_90 = 0;
    uStack_88 = 0;
    local_80 = (char *)0x0;
                    /* try { // try from 00b08f0c to 00b08f5b has its CatchHandler @ 00b09130 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    reserve((ulong)&local_90);
    uVar6 = 0x16;
    if ((local_90 & 1) != 0) {
      uVar6 = (local_90 & 0xfffffffffffffffe) - 1;
    }
    if (uVar15 < uVar6 || uVar15 - uVar6 == 0) {
      uVar7 = (uint)local_90 & 0xff;
    }
    else {
      uVar14 = local_90 >> 1 & 0x7f;
      if ((local_90 & 1) != 0) {
        uVar14 = uStack_88;
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __grow_by((ulong)&local_90,uVar6,uVar15 - uVar6,uVar14,0,uVar14);
      uVar7 = (uint)(byte)local_90;
    }
    pcVar9 = (char *)((ulong)&local_90 | 1);
    if ((uVar7 & 1) != 0) {
      pcVar9 = local_80;
    }
    uVar6 = (long)pcVar5 - (long)param_1;
    pcVar8 = pcVar9;
    if (uVar6 != 0) {
      if ((0x1f < uVar6) && ((pcVar5 <= pcVar9 || (pcVar9 + uVar6 <= param_1)))) {
        uVar11 = uVar6 & 0xffffffffffffffe0;
        puVar13 = (undefined8 *)(param_1 + 0x10);
        pcVar8 = pcVar9 + uVar11;
        param_1 = param_1 + uVar11;
        puVar12 = (undefined8 *)(pcVar9 + 0x10);
        uVar14 = uVar11;
        do {
          puVar2 = puVar13 + -1;
          uVar16 = puVar13[-2];
          uVar18 = puVar13[1];
          uVar17 = *puVar13;
          puVar13 = puVar13 + 4;
          uVar14 = uVar14 - 0x20;
          puVar12[-1] = *puVar2;
          puVar12[-2] = uVar16;
          puVar12[1] = uVar18;
          *puVar12 = uVar17;
          puVar12 = puVar12 + 4;
        } while (uVar14 != 0);
        pcVar9 = pcVar8;
        if (uVar6 == uVar11) goto LAB_00b08fc0;
      }
      do {
        pcVar10 = param_1 + 1;
        pcVar8 = pcVar9 + 1;
        *pcVar9 = *param_1;
        pcVar9 = pcVar8;
        param_1 = pcVar10;
      } while (pcVar10 != pcVar5);
    }
LAB_00b08fc0:
    *pcVar8 = '\0';
    if ((local_90 & 1) == 0) {
      local_90 = CONCAT71(local_90._1_7_,(char)((int)uVar15 << 1));
      pcVar9 = *(char **)param_2;
    }
    else {
      pcVar9 = *(char **)param_2;
      uStack_88 = uVar15;
    }
    while (pcVar9 != (char *)0x0) {
      if ((*(byte *)((long)param_2 + 0xc) >> 2 & 1) != 0) {
                    /* try { // try from 00b08ffc to 00b0902f has its CatchHandler @ 00b09134 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::resize((ulong)&local_90,(char)uVar15);
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::append((char *)&local_90);
        pcVar9 = (char *)((ulong)&local_90 | 1);
        if ((local_90 & 1) != 0) {
          pcVar9 = local_80;
        }
        uVar6 = FileManager::exist((FileManager *)FileManager::s_singletonFileManager,pcVar9);
        if ((uVar6 & 1) == 0) {
          pcVar9 = *(char **)param_2;
          goto LAB_00b09038;
        }
        *param_3 = param_2;
        uVar15 = *(ulong *)(param_4 + 2);
        uVar6 = *(ulong *)param_4;
        pcVar5 = *(char **)(param_4 + 4);
        *(ulong *)(param_4 + 2) = uStack_88;
        *(ulong *)param_4 = local_90;
        *(char **)(param_4 + 4) = local_80;
        param_4 = (basic_string *)0x1;
        local_80 = pcVar5;
        local_90 = uVar6;
        uStack_88 = uVar15;
joined_r0x00b09124:
        bVar3 = false;
        goto joined_r0x00b09124;
      }
LAB_00b09038:
      iVar4 = strcasecmp(pcVar9,pcVar5);
      if (iVar4 == 0) {
        param_4 = (basic_string *)0x0;
        *param_3 = param_2;
        goto joined_r0x00b09124;
      }
      param_2 = (FormatSupport *)((long)param_2 + 0x10);
      pcVar9 = *(char **)param_2;
    }
    bVar3 = true;
joined_r0x00b09124:
    uVar7 = (uint)param_4;
    if ((local_90 & 1) != 0) {
      operator_delete(local_80);
    }
    if (!bVar3) goto LAB_00b09088;
  }
  uVar7 = 0;
  *param_3 = (FormatSupport *)0x0;
LAB_00b09088:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return uVar7 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


