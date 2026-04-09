// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: copyFolder
// Entry Point: 00c5fbf0
// Size: 1644 bytes
// Signature: undefined __cdecl copyFolder(char * param_1, char * param_2, bool param_3)


/* NativeFileUtil::copyFolder(char const*, char const*, bool) */

undefined4 NativeFileUtil::copyFolder(char *param_1,char *param_2,bool param_3)

{
  char *pcVar1;
  long lVar2;
  void *pvVar3;
  byte *pbVar4;
  byte bVar5;
  size_t sVar6;
  char *pcVar7;
  ulong uVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined4 uVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  ulong uVar15;
  char *pcVar16;
  byte local_100 [16];
  void *local_f0;
  undefined8 local_e8;
  size_t local_e0;
  char *local_d8;
  undefined8 local_d0;
  size_t local_c8;
  char *local_c0;
  byte *local_b8;
  byte *local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  size_t local_98;
  char *local_90;
  undefined8 local_88;
  size_t local_80;
  char *local_78;
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  sVar6 = strlen(param_1);
  if (0xffffffffffffffef < sVar6) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar6 < 0x17) {
    pcVar12 = (char *)((ulong)&local_88 | 1);
    local_88 = CONCAT71(local_88._1_7_,(char)((int)sVar6 << 1));
    if (sVar6 != 0) goto LAB_00c5fc78;
  }
  else {
    uVar15 = sVar6 + 0x10 & 0xfffffffffffffff0;
    pcVar12 = (char *)operator_new(uVar15);
    local_88 = uVar15 | 1;
    local_80 = sVar6;
    local_78 = pcVar12;
LAB_00c5fc78:
    memcpy(pcVar12,param_1,sVar6);
  }
  pcVar12[sVar6] = '\0';
                    /* try { // try from 00c5fc8c to 00c5fc97 has its CatchHandler @ 00c60260 */
  PathUtil::removeBackReferencesInPlace((basic_string *)&local_88);
  pcVar12 = (char *)((ulong)&local_88 | 1);
  if ((local_88 & 1) != 0) {
    pcVar12 = local_78;
  }
  sVar6 = strlen(param_2);
  if (0xffffffffffffffef < sVar6) {
                    /* try { // try from 00c60250 to 00c60257 has its CatchHandler @ 00c6026c */
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar6 < 0x17) {
    pcVar13 = (char *)((ulong)&local_a0 | 1);
    local_a0 = CONCAT71(local_a0._1_7_,(char)((int)sVar6 << 1));
    if (sVar6 == 0) goto LAB_00c5fd10;
  }
  else {
    uVar15 = sVar6 + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 00c5fce8 to 00c5fcef has its CatchHandler @ 00c6026c */
    pcVar13 = (char *)operator_new(uVar15);
    local_a0 = uVar15 | 1;
    local_98 = sVar6;
    local_90 = pcVar13;
  }
  memcpy(pcVar13,param_2,sVar6);
LAB_00c5fd10:
  pcVar13[sVar6] = '\0';
                    /* try { // try from 00c5fd14 to 00c5fd3f has its CatchHandler @ 00c6027c */
  PathUtil::removeBackReferencesInPlace((basic_string *)&local_a0);
  pcVar13 = (char *)((ulong)&local_a0 | 1);
  if ((local_a0 & 1) != 0) {
    pcVar13 = local_90;
  }
  createAllFolders(pcVar13,false);
  local_b8 = (byte *)0x0;
  local_b0 = (byte *)0x0;
  local_a8 = 0;
                    /* try { // try from 00c5fd48 to 00c5fd57 has its CatchHandler @ 00c6025c */
  getFiles(pcVar12,(vector *)&local_b8,true);
  if (local_b0 != local_b8) {
    pcVar14 = (char *)((ulong)&local_e8 | 1);
    pcVar16 = (char *)((ulong)&local_d0 | 1);
    uVar15 = 0;
    do {
      if (*(int *)(local_b8 + uVar15 * 0x30 + 0x18) == 1) {
        sVar6 = strlen(pcVar12);
        if (0xffffffffffffffef < sVar6) {
                    /* try { // try from 00c60228 to 00c6022f has its CatchHandler @ 00c60300 */
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__basic_string_common<true>::__throw_length_error();
        }
        if (sVar6 < 0x17) {
          local_d0 = CONCAT71(local_d0._1_7_,(char)((int)sVar6 << 1));
          pcVar7 = pcVar16;
          if (sVar6 != 0) goto LAB_00c5fe78;
        }
        else {
          uVar8 = sVar6 + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 00c5fe60 to 00c5fe67 has its CatchHandler @ 00c60288 */
          pcVar7 = (char *)operator_new(uVar8);
          local_d0 = uVar8 | 1;
          local_c8 = sVar6;
          local_c0 = pcVar7;
LAB_00c5fe78:
          memcpy(pcVar7,pcVar12,sVar6);
        }
        pcVar7[sVar6] = '\0';
        pbVar9 = local_b8 + uVar15 * 0x30;
        pbVar10 = *(byte **)(pbVar9 + 0x10);
        if ((*pbVar9 & 1) == 0) {
          pbVar10 = pbVar9 + 1;
        }
                    /* try { // try from 00c5feb0 to 00c5feb7 has its CatchHandler @ 00c602e4 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::append((char *)&local_d0,(ulong)pbVar10);
        sVar6 = strlen(pcVar13);
        if (0xffffffffffffffef < sVar6) {
                    /* try { // try from 00c60230 to 00c60237 has its CatchHandler @ 00c602e8 */
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__basic_string_common<true>::__throw_length_error();
        }
        if (sVar6 < 0x17) {
          local_e8 = CONCAT71(local_e8._1_7_,(char)((int)sVar6 << 1));
          pcVar7 = pcVar14;
          if (sVar6 != 0) goto LAB_00c5ff08;
        }
        else {
          uVar8 = sVar6 + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 00c5fef0 to 00c5fef7 has its CatchHandler @ 00c60284 */
          pcVar7 = (char *)operator_new(uVar8);
          local_e8 = uVar8 | 1;
          local_e0 = sVar6;
          local_d8 = pcVar7;
LAB_00c5ff08:
          memcpy(pcVar7,pcVar13,sVar6);
        }
        pcVar7[sVar6] = '\0';
        pbVar9 = local_b8 + uVar15 * 0x30;
        pbVar10 = *(byte **)(pbVar9 + 0x10);
        if ((*pbVar9 & 1) == 0) {
          pbVar10 = pbVar9 + 1;
        }
                    /* try { // try from 00c5ff40 to 00c5ff47 has its CatchHandler @ 00c602cc */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::append((char *)&local_e8,(ulong)pbVar10);
        pcVar7 = pcVar16;
        if ((local_d0 & 1) != 0) {
          pcVar7 = local_c0;
        }
        pcVar1 = pcVar14;
        if ((local_e8 & 1) != 0) {
          pcVar1 = local_d8;
        }
                    /* try { // try from 00c5ff68 to 00c5ff73 has its CatchHandler @ 00c602c8 */
        bVar5 = copyFile(pcVar7,pcVar1,param_3);
        if ((bVar5 & 1 | !param_3) == 0) {
          if ((local_e8 & 1) != 0) {
            operator_delete(local_d8);
          }
          if ((local_d0 & 1) != 0) {
            operator_delete(local_c0);
          }
LAB_00c60180:
          uVar11 = 0;
          pbVar10 = local_b8;
          goto joined_r0x00c60188;
        }
        if ((local_e8 & 1) != 0) {
          operator_delete(local_d8);
        }
        if ((local_d0 & 1) != 0) {
          operator_delete(local_c0);
        }
      }
      else if (*(int *)(local_b8 + uVar15 * 0x30 + 0x18) == 2) {
        pbVar9 = local_b8 + uVar15 * 0x30;
        pbVar10 = *(byte **)(pbVar9 + 0x10);
        if ((*pbVar9 & 1) == 0) {
          pbVar10 = pbVar9 + 1;
        }
        if (*pbVar10 != 0x2e) {
          sVar6 = strlen(pcVar12);
          if (0xffffffffffffffef < sVar6) {
                    /* try { // try from 00c60240 to 00c60247 has its CatchHandler @ 00c6028c */
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__basic_string_common<true>::__throw_length_error();
          }
          if (sVar6 < 0x17) {
            local_d0 = CONCAT71(local_d0._1_7_,(char)((int)sVar6 << 1));
            pcVar7 = pcVar16;
            if (sVar6 != 0) goto LAB_00c5ffc4;
          }
          else {
            uVar8 = sVar6 + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 00c5ffac to 00c5ffb3 has its CatchHandler @ 00c60268 */
            pcVar7 = (char *)operator_new(uVar8);
            local_d0 = uVar8 | 1;
            local_c8 = sVar6;
            local_c0 = pcVar7;
LAB_00c5ffc4:
            memcpy(pcVar7,pcVar12,sVar6);
          }
          pcVar7[sVar6] = '\0';
                    /* try { // try from 00c5ffe4 to 00c5fff3 has its CatchHandler @ 00c602c4 */
          FUN_006cadd8(&local_e8,local_b8 + uVar15 * 0x30,&DAT_004cce2a);
          pcVar7 = pcVar14;
          if ((local_e8 & 1) != 0) {
            pcVar7 = local_d8;
          }
                    /* try { // try from 00c6000c to 00c60013 has its CatchHandler @ 00c602b4 */
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                    ((char *)&local_d0,(ulong)pcVar7);
          if ((local_e8 & 1) != 0) {
            operator_delete(local_d8);
          }
          sVar6 = strlen(pcVar13);
          if (0xffffffffffffffef < sVar6) {
                    /* try { // try from 00c60238 to 00c6023f has its CatchHandler @ 00c60290 */
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__basic_string_common<true>::__throw_length_error();
          }
          if (sVar6 < 0x17) {
            local_e8 = CONCAT71(local_e8._1_7_,(char)((int)sVar6 << 1));
            pcVar7 = pcVar14;
            if (sVar6 != 0) goto LAB_00c60074;
          }
          else {
            uVar8 = sVar6 + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 00c6005c to 00c60063 has its CatchHandler @ 00c60264 */
            pcVar7 = (char *)operator_new(uVar8);
            local_e8 = uVar8 | 1;
            local_e0 = sVar6;
            local_d8 = pcVar7;
LAB_00c60074:
            memcpy(pcVar7,pcVar13,sVar6);
          }
          pcVar7[sVar6] = '\0';
                    /* try { // try from 00c60094 to 00c600a3 has its CatchHandler @ 00c602b0 */
          FUN_006cadd8(local_100,local_b8 + uVar15 * 0x30,&DAT_004cce2a);
          pvVar3 = (void *)((ulong)local_100 | 1);
          if ((local_100[0] & 1) != 0) {
            pvVar3 = local_f0;
          }
                    /* try { // try from 00c600c0 to 00c600c7 has its CatchHandler @ 00c60298 */
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                    ((char *)&local_e8,(ulong)pvVar3);
          if ((local_100[0] & 1) != 0) {
            operator_delete(local_f0);
          }
          pcVar7 = pcVar16;
          if ((local_d0 & 1) != 0) {
            pcVar7 = local_c0;
          }
          pcVar1 = pcVar14;
          if ((local_e8 & 1) != 0) {
            pcVar1 = local_d8;
          }
                    /* try { // try from 00c600f8 to 00c60103 has its CatchHandler @ 00c60294 */
          uVar8 = copyFolder(pcVar7,pcVar1,param_3);
          if ((local_e8 & 1) != 0) {
            operator_delete(local_d8);
          }
          if ((local_d0 & 1) != 0) {
            operator_delete(local_c0);
          }
          if ((uVar8 & 1) != 0) goto LAB_00c5fda4;
          goto LAB_00c60180;
        }
      }
LAB_00c5fda4:
      uVar15 = (ulong)((int)uVar15 + 1);
      uVar8 = ((long)local_b0 - (long)local_b8 >> 4) * -0x5555555555555555;
    } while (uVar15 <= uVar8 && uVar8 - uVar15 != 0);
  }
  uVar11 = 1;
  pbVar10 = local_b8;
joined_r0x00c60188:
  local_b8 = pbVar10;
  pbVar9 = local_b0;
  if (pbVar10 != (byte *)0x0) {
    while (pbVar4 = pbVar9, pbVar4 != pbVar10) {
      pbVar9 = pbVar4 + -0x30;
      if ((*pbVar9 & 1) != 0) {
        operator_delete(*(void **)(pbVar4 + -0x20));
      }
    }
    local_b0 = pbVar10;
    operator_delete(local_b8);
  }
  if ((local_a0 & 1) != 0) {
    operator_delete(local_90);
  }
  if ((local_88 & 1) != 0) {
    operator_delete(local_78);
  }
  if (*(long *)(lVar2 + 0x28) == local_70) {
    return uVar11;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


