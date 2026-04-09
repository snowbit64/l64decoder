// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getSpecificFilename
// Entry Point: 00963dbc
// Size: 576 bytes
// Signature: undefined __cdecl getSpecificFilename(char * param_1, basic_string * param_2)


/* TextureUtil::getSpecificFilename(char const*, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&) */

void TextureUtil::getSpecificFilename(char *param_1,basic_string *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  char *pcVar4;
  ulong uVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  ulong uVar9;
  char *pcVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 local_90;
  ulong uStack_88;
  char *local_80;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  pcVar4 = strrchr(param_1,0x2e);
  if (pcVar4 == (char *)0x0) goto LAB_00963f90;
  uVar14 = (long)pcVar4 - (long)param_1;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = (char *)0x0;
                    /* try { // try from 00963e0c to 00963e5b has its CatchHandler @ 00963ffc */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  reserve((ulong)&local_90);
  uVar9 = 0x16;
  if ((local_90 & 1) != 0) {
    uVar9 = (local_90 & 0xfffffffffffffffe) - 1;
  }
  if (uVar14 < uVar9 || uVar14 - uVar9 == 0) {
    uVar6 = (uint)local_90 & 0xff;
  }
  else {
    uVar5 = local_90 >> 1 & 0x7f;
    if ((local_90 & 1) != 0) {
      uVar5 = uStack_88;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __grow_by((ulong)&local_90,uVar9,uVar14 - uVar9,uVar5,0,uVar5);
    uVar6 = (uint)(byte)local_90;
  }
  pcVar7 = (char *)((ulong)&local_90 | 1);
  if ((uVar6 & 1) != 0) {
    pcVar7 = local_80;
  }
  uVar9 = (long)pcVar4 - (long)param_1;
  pcVar8 = pcVar7;
  if (uVar9 != 0) {
    if ((0x1f < uVar9) && ((pcVar4 <= pcVar7 || (pcVar7 + uVar9 <= param_1)))) {
      uVar11 = uVar9 & 0xffffffffffffffe0;
      puVar13 = (undefined8 *)(param_1 + 0x10);
      pcVar8 = pcVar7 + uVar11;
      param_1 = param_1 + uVar11;
      puVar12 = (undefined8 *)(pcVar7 + 0x10);
      uVar5 = uVar11;
      do {
        puVar3 = puVar13 + -1;
        uVar15 = puVar13[-2];
        uVar17 = puVar13[1];
        uVar16 = *puVar13;
        puVar13 = puVar13 + 4;
        uVar5 = uVar5 - 0x20;
        puVar12[-1] = *puVar3;
        puVar12[-2] = uVar15;
        puVar12[1] = uVar17;
        *puVar12 = uVar16;
        puVar12 = puVar12 + 4;
      } while (uVar5 != 0);
      pcVar7 = pcVar8;
      if (uVar9 == uVar11) goto LAB_00963ec0;
    }
    do {
      pcVar10 = param_1 + 1;
      pcVar8 = pcVar7 + 1;
      *pcVar7 = *param_1;
      pcVar7 = pcVar8;
      param_1 = pcVar10;
    } while (pcVar10 != pcVar4);
  }
LAB_00963ec0:
  *pcVar8 = '\0';
  uVar9 = local_90 & 0xff;
  uVar5 = uVar14;
  if ((local_90 & 1) == 0) {
    uVar9 = 0;
    local_90 = CONCAT71(local_90._1_7_,(char)((int)uVar14 << 1));
    uVar5 = uStack_88;
  }
  uStack_88 = uVar5;
  if (*(long *)s_specificFileSuffixes != 0) {
    uVar9 = 1;
    do {
                    /* try { // try from 00963efc to 00963f2f has its CatchHandler @ 00964000 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      resize((ulong)&local_90,(char)uVar14);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append((char *)&local_90);
      pcVar4 = (char *)((ulong)&local_90 | 1);
      if ((local_90 & 1) != 0) {
        pcVar4 = local_80;
      }
      uVar5 = FileManager::exist((FileManager *)FileManager::s_singletonFileManager,pcVar4);
      if ((uVar5 & 1) != 0) {
        uVar14 = *(ulong *)(param_2 + 2);
        uVar9 = *(ulong *)param_2;
        pcVar4 = *(char **)(param_2 + 4);
        *(ulong *)(param_2 + 2) = uStack_88;
        *(ulong *)param_2 = local_90;
        *(char **)(param_2 + 4) = local_80;
        local_90 = uVar9;
        uStack_88 = uVar14;
        local_80 = pcVar4;
        if ((uVar9 & 1) != 0) {
          operator_delete(pcVar4);
        }
        pcVar4 = (char *)0x1;
        goto LAB_00963f90;
      }
      lVar1 = uVar9 * 8;
      uVar9 = (ulong)((int)uVar9 + 1);
    } while (*(long *)(s_specificFileSuffixes + lVar1) != 0);
    uVar9 = local_90 & 0xff;
  }
  if ((uVar9 & 1) != 0) {
    operator_delete(local_80);
  }
  pcVar4 = (char *)0x0;
LAB_00963f90:
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(pcVar4);
  }
  return;
}


