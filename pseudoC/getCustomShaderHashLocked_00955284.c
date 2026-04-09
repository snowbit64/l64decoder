// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getCustomShaderHashLocked
// Entry Point: 00955284
// Size: 1604 bytes
// Signature: undefined __thiscall getCustomShaderHashLocked(MaterialShaderManager * this, vector * param_1, char * param_2, map * param_3, map * param_4, char * param_5, char * param_6, bool param_7)


/* MaterialShaderManager::getCustomShaderHashLocked(std::__ndk1::vector<MaterialShaderManager::CodeInjection,
   std::__ndk1::allocator<MaterialShaderManager::CodeInjection> > const&, char const*,
   std::__ndk1::map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, unsigned int, std::__ndk1::less<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, unsigned int> > > const&,
   std::__ndk1::map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, unsigned int, std::__ndk1::less<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, unsigned int> > > const&,
   char const*, char const*, bool) */

uint __thiscall
MaterialShaderManager::getCustomShaderHashLocked
          (MaterialShaderManager *this,vector *param_1,char *param_2,map *param_3,map *param_4,
          char *param_5,char *param_6,bool param_7)

{
  uchar *puVar1;
  byte bVar2;
  long lVar3;
  undefined auVar4 [16];
  bool bVar5;
  int iVar6;
  CustomShaderInfo *this_00;
  undefined8 *puVar7;
  basic_string *extraout_x1;
  basic_string *extraout_x1_00;
  basic_string *pbVar8;
  long lVar9;
  byte *pbVar10;
  byte *pbVar11;
  map **ppmVar12;
  long **pplVar13;
  long *plVar14;
  ulong uVar15;
  map *pmVar16;
  long **pplVar17;
  long **pplVar18;
  map **ppmVar19;
  uint uVar20;
  ulong uVar21;
  undefined auVar22 [16];
  uint local_170;
  undefined4 uStack_16c;
  uint uStack_168;
  undefined4 uStack_164;
  uchar *local_160;
  uint local_154;
  uint uStack_150;
  int local_14c;
  undefined4 uStack_148;
  undefined4 local_144;
  MD5Hash aMStack_140 [16];
  undefined auStack_130 [72];
  ulong local_e8;
  ulong uStack_e0;
  undefined *local_d8;
  undefined auStack_d0 [72];
  ulong local_88;
  ulong uStack_80;
  undefined *local_78;
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  MD5Hash::MD5Hash(aMStack_140);
  local_144 = (undefined4)*(undefined8 *)(param_4 + 0x10);
  local_14c = (int)((ulong)(*(long *)(param_1 + 8) - *(long *)param_1) >> 4) * -0x55555555;
  uStack_148 = (undefined4)*(undefined8 *)(param_3 + 0x10);
                    /* try { // try from 009552fc to 0095530b has its CatchHandler @ 00955900 */
  MD5Hash::add(aMStack_140,(uchar *)&local_14c,0xc);
  lVar9 = *(long *)param_1;
  if (*(long *)(param_1 + 8) != lVar9) {
    uVar21 = 0;
    pbVar8 = extraout_x1;
    do {
                    /* try { // try from 00955358 to 0095535f has its CatchHandler @ 00955908 */
      removeAbsolutePathsFromCode((MaterialShaderManager *)(lVar9 + uVar21 * 0x30 + 0x18),pbVar8);
      pbVar10 = (byte *)(*(long *)param_1 + uVar21 * 0x30);
      bVar2 = *pbVar10;
      local_154 = (uint)(bVar2 >> 1);
      if ((bVar2 & 1) != 0) {
        local_154 = (uint)*(undefined8 *)(pbVar10 + 8);
      }
      uStack_150 = local_170 >> 1 & 0x7f;
      if ((local_170 & 1) != 0) {
        uStack_150 = uStack_168;
      }
                    /* try { // try from 00955398 to 009553fb has its CatchHandler @ 00955924 */
      MD5Hash::add(aMStack_140,(uchar *)&local_154,8);
      pbVar11 = (byte *)(*(long *)param_1 + uVar21 * 0x30);
      pbVar10 = *(byte **)(pbVar11 + 0x10);
      bVar5 = (*pbVar11 & 1) == 0;
      if (bVar5) {
        pbVar10 = pbVar11 + 1;
      }
      uVar20 = (uint)(*pbVar11 >> 1);
      if (!bVar5) {
        uVar20 = *(uint *)(pbVar11 + 8);
      }
      MD5Hash::add(aMStack_140,pbVar10,uVar20);
      bVar5 = (local_170 & 1) != 0;
      puVar1 = (uchar *)((ulong)&local_170 | 1);
      if (bVar5) {
        puVar1 = local_160;
      }
      uVar20 = local_170 >> 1 & 0x7f;
      if (bVar5) {
        uVar20 = uStack_168;
      }
      MD5Hash::add(aMStack_140,puVar1,uVar20);
      pbVar8 = extraout_x1_00;
      if ((local_170 & 1) != 0) {
        operator_delete(local_160);
      }
      lVar9 = *(long *)param_1;
      uVar21 = (ulong)((int)uVar21 + 1);
      uVar15 = (*(long *)(param_1 + 8) - lVar9 >> 4) * -0x5555555555555555;
    } while (uVar21 <= uVar15 && uVar15 - uVar21 != 0);
  }
  ppmVar19 = *(map ***)param_3;
  while (ppmVar19 != (map **)(param_3 + 8)) {
    local_170 = (uint)(*(byte *)(ppmVar19 + 4) >> 1);
    if ((*(byte *)(ppmVar19 + 4) & 1) != 0) {
      local_170 = (uint)ppmVar19[5];
    }
                    /* try { // try from 00955444 to 0095547f has its CatchHandler @ 00955910 */
    MD5Hash::add(aMStack_140,(uchar *)&local_170,4);
    pmVar16 = ppmVar19[6];
    if ((*(byte *)(ppmVar19 + 4) & 1) == 0) {
      pmVar16 = (map *)((long)ppmVar19 + 0x21);
    }
    MD5Hash::add(aMStack_140,(uchar *)pmVar16,local_170);
    MD5Hash::add(aMStack_140,(uchar *)(ppmVar19 + 7),4);
    ppmVar12 = (map **)ppmVar19[1];
    if ((map **)ppmVar19[1] == (map **)0x0) {
      ppmVar12 = ppmVar19 + 2;
      bVar5 = *(map ***)*ppmVar12 != ppmVar19;
      ppmVar19 = (map **)*ppmVar12;
      if (bVar5) {
        do {
          pmVar16 = *ppmVar12;
          ppmVar12 = (map **)(pmVar16 + 0x10);
          ppmVar19 = (map **)*ppmVar12;
        } while (*ppmVar19 != pmVar16);
      }
    }
    else {
      do {
        ppmVar19 = ppmVar12;
        ppmVar12 = (map **)*ppmVar19;
      } while ((map **)*ppmVar19 != (map **)0x0);
    }
  }
  ppmVar19 = *(map ***)param_4;
  while (ppmVar19 != (map **)(param_4 + 8)) {
    local_170 = (uint)(*(byte *)(ppmVar19 + 4) >> 1);
    if ((*(byte *)(ppmVar19 + 4) & 1) != 0) {
      local_170 = (uint)ppmVar19[5];
    }
                    /* try { // try from 009554fc to 00955537 has its CatchHandler @ 0095590c */
    MD5Hash::add(aMStack_140,(uchar *)&local_170,4);
    pmVar16 = ppmVar19[6];
    if ((*(byte *)(ppmVar19 + 4) & 1) == 0) {
      pmVar16 = (map *)((long)ppmVar19 + 0x21);
    }
    MD5Hash::add(aMStack_140,(uchar *)pmVar16,local_170);
    MD5Hash::add(aMStack_140,(uchar *)(ppmVar19 + 7),4);
    ppmVar12 = (map **)ppmVar19[1];
    if ((map **)ppmVar19[1] == (map **)0x0) {
      ppmVar12 = ppmVar19 + 2;
      bVar5 = *(map ***)*ppmVar12 != ppmVar19;
      ppmVar19 = (map **)*ppmVar12;
      if (bVar5) {
        do {
          pmVar16 = *ppmVar12;
          ppmVar12 = (map **)(pmVar16 + 0x10);
          ppmVar19 = (map **)*ppmVar12;
        } while (*ppmVar19 != pmVar16);
      }
    }
    else {
      do {
        ppmVar19 = ppmVar12;
        ppmVar12 = (map **)*ppmVar19;
      } while ((map **)*ppmVar19 != (map **)0x0);
    }
  }
  if ((param_2 != (char *)0x0) && (*param_2 != '\0')) {
                    /* try { // try from 0095558c to 009555bb has its CatchHandler @ 00955904 */
    local_170 = __strlen_chk(param_2,0xffffffffffffffff);
    MD5Hash::add(aMStack_140,(uchar *)&local_170,4);
    MD5Hash::add(aMStack_140,(uchar *)param_2,local_170);
  }
                    /* try { // try from 009555bc to 009555c7 has its CatchHandler @ 009558fc */
  MD5Hash::getMD5Hash(aMStack_140,(uchar *)&local_170);
  auVar4._4_4_ = uStack_16c;
  auVar4._0_4_ = local_170;
  auVar4._8_4_ = uStack_168;
  auVar4._12_4_ = uStack_164;
  auVar22._4_4_ = uStack_16c;
  auVar22._0_4_ = local_170;
  auVar22._8_4_ = uStack_168;
  auVar22._12_4_ = uStack_164;
  auVar22 = NEON_ext(auVar22,auVar4,8,1);
  uVar20 = CONCAT13((byte)(local_170 >> 0x18) ^ auVar22[3],
                    CONCAT12((byte)(local_170 >> 0x10) ^ auVar22[2],
                             CONCAT11((byte)(local_170 >> 8) ^ auVar22[1],
                                      (byte)local_170 ^ auVar22[0]))) ^
           CONCAT13((byte)((uint)uStack_16c >> 0x18) ^ auVar22[7],
                    CONCAT12((byte)((uint)uStack_16c >> 0x10) ^ auVar22[6],
                             CONCAT11((byte)((uint)uStack_16c >> 8) ^ auVar22[5],
                                      (byte)uStack_16c ^ auVar22[4])));
  if (uVar20 == 0) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar6 != 0)) {
                    /* try { // try from 00955844 to 0095584f has its CatchHandler @ 009558cc */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
                    /* try { // try from 009556b8 to 009556cb has its CatchHandler @ 009558e4 */
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "Error: Custom shader hash collision.\n");
LAB_009556cc:
    uVar20 = 0;
  }
  else {
    pplVar18 = (long **)(this + 0xe0);
    pplVar17 = (long **)*pplVar18;
    pplVar13 = pplVar18;
    if (pplVar17 != (long **)0x0) {
      do {
        if (*(uint *)(pplVar17 + 4) >= uVar20) {
          pplVar13 = pplVar17;
        }
        pplVar17 = (long **)pplVar17[*(uint *)(pplVar17 + 4) < uVar20];
      } while (pplVar17 != (long **)0x0);
      if ((pplVar13 != pplVar18) && (*(uint *)(pplVar13 + 4) <= uVar20)) {
        plVar14 = pplVar13[5];
                    /* try { // try from 009556e8 to 009556ff has its CatchHandler @ 009558e0 */
        uVar21 = CustomShaderInfo::equals
                           ((CustomShaderInfo *)plVar14,param_1,param_2,param_3,param_4);
        if ((uVar21 & 1) != 0) {
          *(int *)(plVar14 + 0x13) = *(int *)(plVar14 + 0x13) + 1;
          goto LAB_0095576c;
        }
        if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar6 != 0
           )) {
                    /* try { // try from 0095588c to 00955897 has its CatchHandler @ 009558c8 */
          LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
          __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                       &PTR_LOOP_00fd8de0);
          __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
        }
                    /* try { // try from 0095581c to 0095582f has its CatchHandler @ 009558e0 */
        LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                           "Error: Custom shader hash collision\n");
        goto LAB_009556cc;
      }
    }
                    /* try { // try from 00955620 to 00955627 has its CatchHandler @ 009558f8 */
    this_00 = (CustomShaderInfo *)operator_new(0xa0);
                    /* try { // try from 0095562c to 00955653 has its CatchHandler @ 009558e8 */
    CustomShaderInfo::CustomShaderInfo
              (this_00,uVar20,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
    if ((long **)*pplVar18 == (long **)0x0) {
      plVar14 = *pplVar18;
      pplVar13 = pplVar18;
    }
    else {
      pplVar17 = (long **)*pplVar18;
      pplVar13 = (long **)(this + 0xe0);
LAB_00955668:
      do {
        pplVar18 = pplVar17;
        if (*(uint *)(pplVar18 + 4) <= uVar20) {
          if (*(uint *)(pplVar18 + 4) < uVar20) {
            pplVar13 = pplVar18 + 1;
            pplVar17 = (long **)*pplVar13;
            if ((long **)*pplVar13 != (long **)0x0) goto LAB_00955668;
          }
          plVar14 = *pplVar13;
          goto joined_r0x00955720;
        }
        pplVar17 = (long **)*pplVar18;
        pplVar13 = pplVar18;
      } while ((long **)*pplVar18 != (long **)0x0);
      plVar14 = *pplVar18;
    }
joined_r0x00955720:
    if (plVar14 == (long *)0x0) {
                    /* try { // try from 00955724 to 0095572f has its CatchHandler @ 009558f8 */
      puVar7 = (undefined8 *)operator_new(0x30);
      *(uint *)(puVar7 + 4) = uVar20;
      puVar7[5] = this_00;
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7[2] = pplVar18;
      *pplVar13 = puVar7;
      if (**(long **)(this + 0xd8) != 0) {
        *(long *)(this + 0xd8) = **(long **)(this + 0xd8);
        puVar7 = *pplVar13;
      }
      std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                (*(__tree_node_base **)(this + 0xe0),(__tree_node_base *)puVar7);
      *(long *)(this + 0xe8) = *(long *)(this + 0xe8) + 1;
    }
  }
LAB_0095576c:
  if (uStack_80 <= local_88) {
    local_88 = uStack_80;
  }
  if (local_78 == auStack_d0) {
    for (; local_88 != 0; local_88 = local_88 - 1) {
      *(undefined4 *)(local_78 + local_88 * 4 + -4) = 0;
    }
  }
  if (uStack_e0 <= local_e8) {
    local_e8 = uStack_e0;
  }
  if (local_d8 == auStack_130) {
    for (; local_e8 != 0; local_e8 = local_e8 - 1) {
      *(undefined4 *)(local_d8 + local_e8 * 4 + -4) = 0;
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_70) {
    return uVar20;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


