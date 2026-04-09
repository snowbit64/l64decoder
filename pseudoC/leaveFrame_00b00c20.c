// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: leaveFrame
// Entry Point: 00b00c20
// Size: 1328 bytes
// Signature: undefined leaveFrame(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* ProfilerManager::leaveFrame() */

void ProfilerManager::leaveFrame(void)

{
  ulonglong uVar1;
  long lVar2;
  long lVar3;
  long *in_x0;
  void *pvVar4;
  size_t sVar5;
  basic_ostream *pbVar6;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  ulong uVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  uint uVar11;
  ulong uVar12;
  char *__s;
  float fVar13;
  double dVar14;
  double dVar15;
  undefined **local_320;
  undefined **local_318 [8];
  ulong local_2d8;
  undefined8 uStack_2d0;
  void *local_2c8;
  undefined8 uStack_2c0;
  undefined4 local_2b8;
  undefined **local_2b0 [17];
  undefined8 local_228;
  undefined4 local_220;
  undefined **local_218;
  undefined **local_210 [8];
  ulong local_1d0;
  undefined8 uStack_1c8;
  void *local_1c0;
  undefined8 uStack_1b8;
  undefined4 local_1b0;
  undefined **local_1a8 [17];
  undefined8 local_120;
  undefined4 local_118;
  long local_110;
  long lStack_108;
  long local_100;
  long local_80;
  
  lVar3 = tpidr_el0;
  local_80 = *(long *)(lVar3 + 0x28);
  if (*(char *)(in_x0 + 0x10) == '\0') goto LAB_00b01118;
  lVar2 = *in_x0;
  uVar8 = (int)((ulong)(in_x0[1] - lVar2) >> 6) * -0x33333333 - 1;
  uVar12 = (ulong)uVar8;
  if (*(uint *)(in_x0 + 9) < uVar8) {
    if ((void *)in_x0[8] != (void *)0x0) {
      operator_delete__((void *)in_x0[8]);
    }
    pvVar4 = operator_new__(uVar12 << 3);
    in_x0[8] = (long)pvVar4;
    *(uint *)(in_x0 + 9) = uVar8;
LAB_00b00cb4:
    uVar10 = 0;
    uVar8 = 0;
    lVar9 = lVar2;
    do {
      if (*(long *)(lVar9 + 0x130) != 0) {
        *(long *)((long)in_x0[8] + (ulong)uVar8 * 8) = lVar9;
        if (*(int *)(lVar9 + 0x20) == 0) {
          uVar10 = *(long *)(lVar9 + 0x10) + uVar10;
        }
        uVar8 = uVar8 + 1;
      }
      lVar9 = lVar9 + 0x140;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
    dVar15 = (double)(unkuint9)uVar10;
    pvVar4 = (void *)in_x0[8];
    if ((pvVar4 != (void *)0x0) && (uVar8 != 0)) {
      qsort(pvVar4,(ulong)uVar8,8,FUN_00b011dc);
    }
  }
  else {
    if (uVar8 != 0) goto LAB_00b00cb4;
    dVar15 = 0.0;
    uVar10 = 0;
    uVar8 = 0;
  }
  local_218 = (undefined **)0xfd8f40;
  local_1a8[0] = (undefined **)0xfd8f68;
                    /* try { // try from 00b00d50 to 00b00d5b has its CatchHandler @ 00b011a0 */
  std::__ndk1::ios_base::init(local_1a8);
  local_120 = 0;
  local_118 = 0xffffffff;
  local_218 = &PTR__basic_ostringstream_00fd8ed0;
  local_1a8[0] = &PTR__basic_ostringstream_00fd8ef8;
                    /* try { // try from 00b00d80 to 00b00d87 has its CatchHandler @ 00b01184 */
  std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::basic_streambuf();
  local_2b0[0] = (undefined **)0xfd8f68;
  local_1b0 = 0x10;
  uStack_1c8 = 0;
  local_1d0 = 0;
  local_210[0] = &PTR__basic_stringbuf_00fd8fa0;
  uStack_1b8 = 0;
  local_1c0 = (void *)0x0;
  local_320 = (undefined **)0xfd8f40;
                    /* try { // try from 00b00dd0 to 00b00ddf has its CatchHandler @ 00b01174 */
  std::__ndk1::ios_base::init(local_2b0);
  local_320 = &PTR__basic_ostringstream_00fd8ed0;
  local_2b0[0] = &PTR__basic_ostringstream_00fd8ef8;
  local_228 = 0;
  local_220 = 0xffffffff;
                    /* try { // try from 00b00e04 to 00b00e0b has its CatchHandler @ 00b01158 */
  std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::basic_streambuf();
  local_318[0] = &PTR__basic_stringbuf_00fd8fa0;
  uStack_2d0 = 0;
  local_2d8 = 0;
  uStack_2c0 = 0;
  local_2c8 = (void *)0x0;
  local_2b8 = 0x10;
  if (uVar8 != 0) {
    uVar12 = 0;
    do {
      lVar9 = *(long *)(in_x0[8] + uVar12 * 8);
                    /* try { // try from 00b00e6c to 00b00e73 has its CatchHandler @ 00b011b8 */
      ProfiledSection::smooth();
      if (*(int *)(lVar9 + 0x1c) != 0) {
        if (*(int *)(lVar9 + 0x20) != 0) {
          uVar11 = 0;
          do {
                    /* try { // try from 00b00e88 to 00b00e97 has its CatchHandler @ 00b011c0 */
            std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                      ((basic_ostream *)&local_218,"  ",2);
            uVar11 = uVar11 + 1;
          } while (uVar11 < *(uint *)(lVar9 + 0x20));
        }
        __s = *(char **)(lVar9 + 0x130);
        sVar5 = strlen(__s);
                    /* try { // try from 00b00eb8 to 00b00ed3 has its CatchHandler @ 00b011b8 */
        pbVar6 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                           ((basic_ostream *)&local_218,__s,sVar5);
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar6,"\n",1);
        uVar1 = 0;
        if (*(ulong *)(lVar9 + 8) <= *(ulong *)(lVar9 + 0x10)) {
          uVar1 = *(ulong *)(lVar9 + 0x10) - *(ulong *)(lVar9 + 8);
        }
                    /* try { // try from 00b00ee4 to 00b00f73 has its CatchHandler @ 00b011bc */
        FUN_00b011f4(&local_110);
        sVar5 = strlen((char *)&local_110);
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                  ((basic_ostream *)&local_320,(char *)&local_110,sVar5);
        dVar14 = (double)Watch::convertTicksToMs(*(ulonglong *)(lVar9 + 0x10));
        FUN_00b011f4(dVar14 * 1000.0,&local_110,extraout_x1," %8.0f");
        sVar5 = strlen((char *)&local_110);
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                  ((basic_ostream *)&local_320,(char *)&local_110,sVar5);
        dVar14 = (double)Watch::convertTicksToMs(uVar1);
        FUN_00b011f4(dVar14 * 1000.0,&local_110,extraout_x1_00," %8.0f");
        sVar5 = strlen((char *)&local_110);
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                  ((basic_ostream *)&local_320,(char *)&local_110,sVar5);
        if (*(int *)(lVar9 + 0x20) == 0) {
          if (uVar10 == 0) {
LAB_00b00fe4:
            dVar14 = 0.0;
          }
          else {
            dVar14 = (double)NEON_ucvtf(*(undefined8 *)(lVar9 + 0x10));
            dVar14 = (dVar14 * 100.0) / dVar15;
          }
LAB_00b00fe8:
          fVar13 = (float)dVar14;
        }
        else {
          fVar13 = 0.0;
          if (*(uint *)(lVar9 + 0x18) < 0xff000001) {
            uVar7 = *(ulong *)(lVar2 + (ulong)*(uint *)(lVar9 + 0x18) * 0x140 + 0x10);
            if (uVar7 == 0) goto LAB_00b00fe4;
            dVar14 = (double)NEON_ucvtf(*(undefined8 *)(lVar9 + 0x10));
            dVar14 = (dVar14 * 100.0) / (double)(unkuint9)uVar7;
            goto LAB_00b00fe8;
          }
        }
                    /* try { // try from 00b00ff0 to 00b01013 has its CatchHandler @ 00b011b4 */
        FUN_00b011f4((double)fVar13,&local_110);
        sVar5 = strlen((char *)&local_110);
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                  ((basic_ostream *)&local_320,(char *)&local_110,sVar5);
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 != uVar8);
  }
                    /* try { // try from 00b01018 to 00b01027 has its CatchHandler @ 00b01154 */
  std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  str();
  if ((*(byte *)(in_x0 + 10) & 1) != 0) {
    operator_delete((void *)in_x0[0xc]);
  }
  in_x0[0xb] = lStack_108;
  in_x0[10] = local_110;
  in_x0[0xc] = local_100;
                    /* try { // try from 00b01058 to 00b01063 has its CatchHandler @ 00b01150 */
  std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  str();
  if ((*(byte *)(in_x0 + 0xd) & 1) != 0) {
    operator_delete((void *)in_x0[0xf]);
  }
  in_x0[0xe] = lStack_108;
  in_x0[0xd] = local_110;
  in_x0[0xf] = local_100;
  local_320 = &PTR__basic_ostringstream_00fd8ed0;
  local_318[0] = &PTR__basic_stringbuf_00fd8fa0;
  local_2b0[0] = &PTR__basic_ostringstream_00fd8ef8;
  if ((local_2d8 & 1) != 0) {
    operator_delete(local_2c8);
  }
  std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::~basic_streambuf
            ((basic_streambuf<char,std::__ndk1::char_traits<char>> *)local_318);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::~basic_ostream
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_320);
  std::__ndk1::basic_ios<char,std::__ndk1::char_traits<char>>::~basic_ios
            ((basic_ios<char,std::__ndk1::char_traits<char>> *)local_2b0);
  local_218 = &PTR__basic_ostringstream_00fd8ed0;
  local_210[0] = &PTR__basic_stringbuf_00fd8fa0;
  local_1a8[0] = &PTR__basic_ostringstream_00fd8ef8;
  if ((local_1d0 & 1) != 0) {
    operator_delete(local_1c0);
  }
  std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::~basic_streambuf
            ((basic_streambuf<char,std::__ndk1::char_traits<char>> *)local_210);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::~basic_ostream
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_218);
  std::__ndk1::basic_ios<char,std::__ndk1::char_traits<char>>::~basic_ios
            ((basic_ios<char,std::__ndk1::char_traits<char>> *)local_1a8);
LAB_00b01118:
  if (*(long *)(lVar3 + 0x28) == local_80) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


