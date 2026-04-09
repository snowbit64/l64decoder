// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getSpecificName
// Entry Point: 00b852e8
// Size: 664 bytes
// Signature: undefined __cdecl getSpecificName(char * param_1, DensityMapDesc * param_2, basic_string * param_3)


/* DensityMap::getSpecificName(char const*, DensityMapDesc const*, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&) */

undefined4 DensityMap::getSpecificName(char *param_1,DensityMapDesc *param_2,basic_string *param_3)

{
  long lVar1;
  undefined8 *puVar2;
  int iVar3;
  size_t sVar4;
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
  undefined4 uVar15;
  ulong uVar16;
  char *pcVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 local_a0;
  ulong uStack_98;
  char *local_90;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  sVar4 = strlen(param_1);
  if ((uint)sVar4 < 5) {
    if ((uint)sVar4 == 4) goto LAB_00b8534c;
LAB_00b85364:
    pcVar5 = strrchr(param_1,0x2e);
    if (pcVar5 != (char *)0x0) {
      uVar16 = (long)pcVar5 - (long)param_1;
      local_a0 = 0;
      uStack_98 = 0;
      local_90 = (char *)0x0;
                    /* try { // try from 00b85388 to 00b854cb has its CatchHandler @ 00b85580 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      reserve((ulong)&local_a0);
      uVar6 = 0x16;
      if ((local_a0 & 1) != 0) {
        uVar6 = (local_a0 & 0xfffffffffffffffe) - 1;
      }
      if (uVar16 < uVar6 || uVar16 - uVar6 == 0) {
        uVar7 = (uint)local_a0 & 0xff;
      }
      else {
        uVar14 = local_a0 >> 1 & 0x7f;
        if ((local_a0 & 1) != 0) {
          uVar14 = uStack_98;
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::__grow_by((ulong)&local_a0,uVar6,uVar16 - uVar6,uVar14,0,uVar14);
        uVar7 = (uint)(byte)local_a0;
      }
      pcVar17 = (char *)((ulong)&local_a0 | 1);
      pcVar8 = pcVar17;
      if ((uVar7 & 1) != 0) {
        pcVar8 = local_90;
      }
      uVar6 = (long)pcVar5 - (long)param_1;
      pcVar9 = pcVar8;
      if (uVar6 != 0) {
        if ((0x1f < uVar6) && ((pcVar5 <= pcVar8 || (pcVar8 + uVar6 <= param_1)))) {
          uVar11 = uVar6 & 0xffffffffffffffe0;
          puVar13 = (undefined8 *)(param_1 + 0x10);
          pcVar9 = pcVar8 + uVar11;
          param_1 = param_1 + uVar11;
          puVar12 = (undefined8 *)(pcVar8 + 0x10);
          uVar14 = uVar11;
          do {
            puVar2 = puVar13 + -1;
            uVar18 = puVar13[-2];
            uVar20 = puVar13[1];
            uVar19 = *puVar13;
            puVar13 = puVar13 + 4;
            uVar14 = uVar14 - 0x20;
            puVar12[-1] = *puVar2;
            puVar12[-2] = uVar18;
            puVar12[1] = uVar20;
            *puVar12 = uVar19;
            puVar12 = puVar12 + 4;
          } while (uVar14 != 0);
          pcVar8 = pcVar9;
          if (uVar6 == uVar11) goto LAB_00b85444;
        }
        do {
          pcVar10 = param_1 + 1;
          pcVar9 = pcVar8 + 1;
          *pcVar8 = *param_1;
          pcVar8 = pcVar9;
          param_1 = pcVar10;
        } while (pcVar10 != pcVar5);
      }
LAB_00b85444:
      *pcVar9 = '\0';
      uVar6 = uVar16;
      if ((local_a0 & 1) == 0) {
        local_a0 = CONCAT71(local_a0._1_7_,(char)((int)uVar16 << 1));
        uVar6 = uStack_98;
      }
      uStack_98 = uVar6;
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append((char *)&local_a0);
      pcVar5 = pcVar17;
      if ((local_a0 & 1) != 0) {
        pcVar5 = local_90;
      }
      uVar6 = FileManager::exist((FileManager *)FileManager::s_singletonFileManager,pcVar5);
      if ((uVar6 & 1) == 0) {
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::resize((ulong)&local_a0,(char)uVar16);
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::append((char *)&local_a0);
        if ((local_a0 & 1) != 0) {
          pcVar17 = local_90;
        }
        uVar6 = FileManager::exist((FileManager *)FileManager::s_singletonFileManager,pcVar17);
        if ((uVar6 & 1) != 0) goto LAB_00b854d0;
        uVar15 = 0;
      }
      else {
LAB_00b854d0:
        uVar15 = 1;
        uVar16 = *(ulong *)(param_3 + 2);
        uVar6 = *(ulong *)param_3;
        pcVar5 = *(char **)(param_3 + 4);
        *(ulong *)(param_3 + 2) = uStack_98;
        *(ulong *)param_3 = local_a0;
        *(char **)(param_3 + 4) = local_90;
        local_90 = pcVar5;
        local_a0 = uVar6;
        uStack_98 = uVar16;
      }
      if ((local_a0 & 1) != 0) {
        operator_delete(local_90);
      }
      goto LAB_00b85504;
    }
  }
  else {
    iVar3 = strcmp(param_1 + ((sVar4 & 0xffffffff) - 5),".grle");
    if (iVar3 != 0) {
LAB_00b8534c:
      iVar3 = strcmp(param_1 + ((sVar4 & 0xffffffff) - 4),".gdm");
      if (iVar3 != 0) goto LAB_00b85364;
    }
  }
  uVar15 = 0;
LAB_00b85504:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return uVar15;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


