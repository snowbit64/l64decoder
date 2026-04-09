// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: loadDeviceMapping
// Entry Point: 00b1bdd4
// Size: 6572 bytes
// Signature: undefined __thiscall loadDeviceMapping(DeviceMappingManager * this, char * param_1)


/* DeviceMappingManager::loadDeviceMapping(char const*) */

undefined4 __thiscall
DeviceMappingManager::loadDeviceMapping(DeviceMappingManager *this,char *param_1)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  long lVar5;
  bool bVar6;
  ulong *puVar7;
  void *pvVar8;
  undefined2 *puVar9;
  ulong *puVar10;
  undefined2 *puVar11;
  void *pvVar12;
  undefined2 *puVar13;
  byte bVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  ulong uVar18;
  long lVar19;
  char *pcVar20;
  byte *pbVar21;
  size_t __n;
  void *pvVar22;
  basic_string *pbVar23;
  undefined8 *puVar24;
  pair *ppVar25;
  ushort uVar26;
  undefined4 *puVar27;
  byte *pbVar28;
  ulong uVar29;
  int iVar30;
  int iVar31;
  ulong *puVar32;
  char cVar33;
  char cVar34;
  char cVar35;
  byte *pbVar36;
  byte bVar37;
  char cVar38;
  undefined4 uVar39;
  undefined8 local_1a78;
  bool local_1a6c [4];
  void *local_1a68;
  void *local_1a60;
  undefined8 local_1a58;
  pair apStack_1a50 [2];
  byte local_1a48;
  void *local_1a38;
  void *local_1a30;
  void *local_1a28;
  DeviceMapping aDStack_1a18 [3000];
  undefined4 local_e60;
  ushort local_e5c;
  ulong *local_e58;
  ulong *local_e50;
  ulong *local_e48;
  ulong local_d60;
  undefined8 uStack_d58;
  void *local_d50;
  undefined2 *puStack_d48;
  undefined2 *local_d40;
  undefined2 *local_d38;
  undefined4 local_d30 [2];
  undefined8 local_d28 [4];
  undefined8 local_d08;
  undefined8 local_d00;
  undefined8 uStack_cf8;
  undefined local_cf0;
  undefined8 local_cec;
  undefined8 local_ce4;
  undefined8 uStack_cdc;
  undefined8 local_cd4;
  undefined8 uStack_ccc;
  undefined4 local_cc4;
  undefined8 local_cc0;
  undefined8 local_cb8;
  undefined8 uStack_cb0;
  undefined local_ca8;
  undefined8 local_ca4;
  undefined8 local_c9c;
  undefined8 uStack_c94;
  undefined8 local_c8c;
  undefined8 uStack_c84;
  undefined4 local_c7c;
  undefined8 local_c78;
  undefined8 local_c70;
  undefined8 uStack_c68;
  undefined local_c60;
  undefined8 local_c5c;
  undefined8 local_c54;
  undefined8 uStack_c4c;
  undefined8 local_c44;
  undefined8 uStack_c3c;
  undefined4 local_c34;
  undefined8 local_c30;
  undefined8 local_c28;
  undefined8 uStack_c20;
  undefined local_c18;
  undefined8 local_c14;
  undefined8 local_c0c;
  undefined8 uStack_c04;
  undefined8 local_bfc;
  undefined8 uStack_bf4;
  undefined4 local_bec;
  undefined8 local_be8;
  undefined8 local_be0;
  undefined8 uStack_bd8;
  undefined local_bd0;
  undefined8 local_bcc;
  undefined8 local_bc4;
  undefined8 uStack_bbc;
  undefined8 local_bb4;
  undefined8 uStack_bac;
  undefined4 local_ba4;
  undefined8 local_ba0;
  undefined8 local_b98;
  undefined8 uStack_b90;
  undefined local_b88;
  undefined8 local_b84;
  undefined8 local_b7c;
  undefined8 uStack_b74;
  undefined8 local_b6c;
  undefined8 uStack_b64;
  undefined4 local_b5c;
  undefined8 local_b58;
  undefined8 local_b50;
  undefined8 uStack_b48;
  undefined local_b40;
  undefined8 local_b3c;
  undefined8 local_b34;
  undefined8 uStack_b2c;
  undefined8 local_b24;
  undefined8 uStack_b1c;
  undefined4 local_b14;
  undefined8 local_b10;
  undefined8 local_b08;
  undefined8 uStack_b00;
  undefined local_af8;
  undefined8 local_af4;
  undefined8 local_aec;
  undefined8 uStack_ae4;
  undefined8 local_adc;
  undefined8 uStack_ad4;
  undefined4 local_acc;
  undefined8 local_ac8;
  undefined8 local_ac0;
  undefined8 uStack_ab8;
  undefined local_ab0;
  undefined4 local_aac;
  undefined8 local_aa8;
  undefined8 local_aa0;
  undefined8 uStack_a98;
  undefined8 uStack_a90;
  undefined8 uStack_a88;
  undefined8 local_a80;
  undefined8 uStack_a78;
  undefined8 uStack_a70;
  undefined8 uStack_a68;
  undefined8 local_a60;
  undefined8 uStack_a58;
  undefined8 uStack_a50;
  undefined8 uStack_a48;
  undefined8 local_a40;
  undefined8 uStack_a38;
  undefined8 uStack_a30;
  undefined8 uStack_a28;
  char acStack_a20 [768];
  char acStack_720 [768];
  char acStack_420 [336];
  char acStack_2d0 [336];
  uint local_180;
  undefined local_17c;
  DomXMLFile aDStack_170 [216];
  undefined8 local_98;
  size_t sStack_90;
  void *local_88;
  long local_78;
  
  lVar5 = tpidr_el0;
  local_78 = *(long *)(lVar5 + 0x28);
  DomXMLFile::DomXMLFile(aDStack_170);
                    /* try { // try from 00b1be18 to 00b1be2f has its CatchHandler @ 00b1d8b0 */
  uVar18 = DomXMLFile::loadFromFile(aDStack_170,param_1,true);
  if ((uVar18 & 1) == 0) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar15 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar15 != 0))
    {
                    /* try { // try from 00b1d474 to 00b1d47f has its CatchHandler @ 00b1d7a8 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
                    /* try { // try from 00b1c6f4 to 00b1c70b has its CatchHandler @ 00b1d8b0 */
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "  Error: Failed to load device mapping file %s\n",param_1);
    uVar39 = 0;
  }
  else {
    uStack_c04 = 0;
    local_c0c = 0;
    local_c5c = 0x3f800000ffffffff;
    uStack_c4c = 0;
    local_c54 = 0;
    uStack_bac = 0;
    local_bb4 = 0;
    uStack_c3c = 0;
    local_c44 = 0;
    local_cec = 0x3f800000ffffffff;
    local_ca4 = 0x3f800000ffffffff;
    local_c14 = 0x3f800000ffffffff;
    uStack_c20 = 0;
    local_c28 = 0x3f8000003f800000;
    uStack_b90 = 0;
    local_b98 = 0x3f8000003f800000;
    uStack_bf4 = 0;
    local_bfc = 0;
    uStack_b74 = 0;
    local_b7c = 0;
    uStack_b00 = 0;
    local_b08 = 0x3f8000003f800000;
    local_bcc = 0x3f800000ffffffff;
    puStack_d48 = (undefined2 *)0x0;
    local_d50 = (void *)0x0;
    local_d38 = (undefined2 *)0x0;
    local_d40 = (undefined2 *)0x0;
    uStack_d58 = 0;
    local_d60 = 0;
    uStack_bbc = 0;
    local_bc4 = 0;
    local_d28[1] = 0;
    local_d28[0] = 0;
    local_d28[3] = 0;
    local_d28[2] = 0;
    local_b84 = 0x3f800000ffffffff;
    uStack_cdc = 0;
    local_ce4 = 0;
    uStack_ccc = 0;
    local_cd4 = 0;
    uStack_b64 = 0;
    local_b6c = 0;
    uStack_c84 = 0;
    local_c8c = 0;
    uStack_c94 = 0;
    local_c9c = 0;
    local_b3c = 0x3f800000ffffffff;
    uStack_b2c = 0;
    local_b34 = 0;
    uStack_ad4 = 0;
    local_adc = 0;
    uStack_b1c = 0;
    local_b24 = 0;
    local_d08 = 0xffffffffffffffff;
    uStack_cf8 = 0;
    local_d00 = 0x3f8000003f800000;
    local_af4 = 0x3f800000ffffffff;
    local_cf0 = 0;
    local_cc4 = 0;
    uStack_ae4 = 0;
    local_aec = 0;
    local_cc0 = 0xffffffffffffffff;
    uStack_cb0 = 0;
    local_cb8 = 0x3f8000003f800000;
    local_ca8 = 0;
    local_c7c = 0;
    local_c78 = 0xffffffffffffffff;
    uStack_c68 = 0;
    local_c70 = 0x3f8000003f800000;
    local_c60 = 0;
    local_c34 = 0;
    local_c30 = 0xffffffffffffffff;
    local_c18 = 0;
    local_bec = 0;
    local_be8 = 0xffffffffffffffff;
    uStack_bd8 = 0;
    local_be0 = 0x3f8000003f800000;
    local_bd0 = 0;
    local_ba4 = 0;
    local_ba0 = 0xffffffffffffffff;
    local_b88 = 0;
    local_b5c = 0;
    local_b58 = 0xffffffffffffffff;
    uStack_b48 = 0;
    local_b50 = 0x3f8000003f800000;
    local_b40 = 0;
    local_b14 = 0;
    local_b10 = 0xffffffffffffffff;
    local_af8 = 0;
    local_acc = 0;
    local_ac8 = 0xffffffffffffffff;
    uStack_ab8 = 0;
    local_ac0 = 0x3f8000003f800000;
    local_aac = 0xffffffff;
    local_aa8 = 0x3f800000;
    local_ab0 = 0;
    memset(acStack_a20,0,0x8a0);
    local_d30[0] = 0;
    local_180 = 0;
    local_17c = 0;
    uStack_a98 = 0xffffffffffffffff;
    local_aa0 = 0xffffffffffffffff;
    uStack_a88 = 0xffffffffffffffff;
    uStack_a90 = 0xffffffffffffffff;
    uStack_a78 = 0xffffffffffffffff;
    local_a80 = 0xffffffffffffffff;
    uStack_a68 = 0xffffffffffffffff;
    uStack_a70 = 0xffffffffffffffff;
    uStack_a58 = 0xffffffffffffffff;
    local_a60 = 0xffffffffffffffff;
    uStack_a48 = 0xffffffffffffffff;
    uStack_a50 = 0xffffffffffffffff;
    uStack_a38 = 0xffffffffffffffff;
    local_a40 = 0xffffffffffffffff;
    uStack_a28 = 0xffffffffffffffff;
    uStack_a30 = 0xffffffffffffffff;
                    /* try { // try from 00b1bfe4 to 00b1c00b has its CatchHandler @ 00b1d894 */
    lVar19 = DomXMLFile::getValue(aDStack_170,"deviceMapping#backends",false);
    if (lVar19 != 0) {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign((char *)&local_d60);
    }
                    /* try { // try from 00b1c00c to 00b1c023 has its CatchHandler @ 00b1d868 */
    pcVar20 = (char *)DomXMLFile::getValue(aDStack_170,"deviceMapping#mergeWithPrevious",false);
    if (pcVar20 != (char *)0x0) {
      iVar15 = strcmp(pcVar20,"true");
      local_17c = iVar15 == 0;
    }
    local_1a68 = (void *)0x0;
    local_1a60 = (void *)0x0;
    local_1a58 = 0;
                    /* try { // try from 00b1c04c to 00b1c05f has its CatchHandler @ 00b1d864 */
    iVar15 = DomXMLFile::getNumElements(aDStack_170,"deviceMapping.productKey");
    if (iVar15 != 0) {
      iVar31 = 0;
      do {
        local_e5c = 0xffff;
        local_e60 = 0xffffffff;
                    /* try { // try from 00b1c0a0 to 00b1c0b3 has its CatchHandler @ 00b1d8b8 */
        FUN_00b1db64(apStack_1a50,0x100,"deviceMapping.productKey(%u)#vendorId",iVar31);
                    /* try { // try from 00b1c0b4 to 00b1c16b has its CatchHandler @ 00b1d8cc */
        pbVar21 = (byte *)DomXMLFile::getValue(aDStack_170,(char *)apStack_1a50,false);
        if ((pbVar21 == (byte *)0x0) ||
           (lVar19 = __strlen_chk(pbVar21,0xffffffffffffffff), lVar19 != 4)) {
          if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
             (iVar15 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
             iVar15 != 0)) {
                    /* try { // try from 00b1d4bc to 00b1d4c7 has its CatchHandler @ 00b1d7a4 */
            LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
            __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                         &PTR_LOOP_00fd8de0);
            __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
          }
                    /* try { // try from 00b1c7ec to 00b1c803 has its CatchHandler @ 00b1d820 */
          LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                             "  Error: Failed to read vendorId in file %s\n",param_1);
          goto LAB_00b1d358;
        }
        bVar37 = pbVar21[1];
        bVar14 = pbVar21[3];
        cVar38 = '\t';
        cVar2 = '\t';
        if (*pbVar21 < 0x41) {
          cVar2 = '\0';
        }
        cVar33 = -0x37;
        cVar34 = -0x37;
        if (bVar37 < 0x41) {
          cVar34 = -0x30;
        }
        cVar1 = -0x57;
        if (bVar37 < 0x61) {
          cVar1 = cVar34;
        }
        if (pbVar21[2] < 0x41) {
          cVar38 = '\0';
        }
        if (bVar14 < 0x41) {
          cVar33 = -0x30;
        }
        cVar34 = -0x57;
        if (bVar14 < 0x61) {
          cVar34 = cVar33;
        }
        bVar14 = cVar34 + bVar14 + (cVar38 + pbVar21[2]) * '\x10';
        local_e60._0_2_ = CONCAT11(bVar14,cVar1 + bVar37 + (cVar2 + *pbVar21) * '\x10');
        local_e60 = CONCAT22(local_e60._2_2_,
                             (ushort)bVar14 | (ushort)(((ushort)local_e60 & 0xff00ff) << 8));
        FUN_00b1db64(apStack_1a50,0x100,"deviceMapping.productKey(%u)#productId",iVar31);
                    /* try { // try from 00b1c16c to 00b1c223 has its CatchHandler @ 00b1d8c8 */
        pbVar21 = (byte *)DomXMLFile::getValue(aDStack_170,(char *)apStack_1a50,false);
        if ((pbVar21 == (byte *)0x0) ||
           (lVar19 = __strlen_chk(pbVar21,0xffffffffffffffff), lVar19 != 4)) {
          if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
             (iVar15 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
             iVar15 != 0)) {
                    /* try { // try from 00b1d504 to 00b1d50f has its CatchHandler @ 00b1d7a0 */
            LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
            __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                         &PTR_LOOP_00fd8de0);
            __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
          }
                    /* try { // try from 00b1c818 to 00b1c82f has its CatchHandler @ 00b1d81c */
          LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                             "  Error: Failed to read productId in file %s\n",param_1);
          goto LAB_00b1d358;
        }
        bVar37 = pbVar21[1];
        cVar38 = '\t';
        cVar2 = cVar38;
        if (*pbVar21 < 0x41) {
          cVar2 = '\0';
        }
        cVar33 = -0x37;
        cVar34 = -0x37;
        if (bVar37 < 0x41) {
          cVar34 = -0x30;
        }
        cVar35 = -0x57;
        cVar1 = cVar35;
        if (bVar37 < 0x61) {
          cVar1 = cVar34;
        }
        bVar14 = pbVar21[3];
        cVar34 = cVar38;
        if (pbVar21[2] < 0x41) {
          cVar34 = '\0';
        }
        cVar3 = cVar33;
        if (bVar14 < 0x41) {
          cVar3 = -0x30;
        }
        cVar4 = cVar35;
        if (bVar14 < 0x61) {
          cVar4 = cVar3;
        }
        local_e60 = CONCAT13(cVar4 + bVar14 + (cVar34 + pbVar21[2]) * '\x10',
                             CONCAT12(cVar1 + bVar37 + (cVar2 + *pbVar21) * '\x10',(ushort)local_e60
                                     ));
        local_e60 = CONCAT22(local_e60._2_2_ >> 8 | (ushort)((local_e60._2_2_ & 0xff00ff) << 8),
                             (ushort)local_e60);
        FUN_00b1db64(apStack_1a50,0x100,"deviceMapping.productKey(%u)#versionId",iVar31);
                    /* try { // try from 00b1c224 to 00b1c2d7 has its CatchHandler @ 00b1d8c4 */
        pbVar21 = (byte *)DomXMLFile::getValue(aDStack_170,(char *)apStack_1a50,false);
        if ((pbVar21 == (byte *)0x0) ||
           (lVar19 = __strlen_chk(pbVar21,0xffffffffffffffff), lVar19 != 4)) {
          local_e5c = 0xffff;
        }
        else {
          bVar37 = pbVar21[1];
          cVar2 = '\t';
          if (*pbVar21 < 0x41) {
            cVar2 = '\0';
          }
          cVar34 = -0x37;
          if (bVar37 < 0x41) {
            cVar34 = -0x30;
          }
          cVar1 = cVar35;
          if (bVar37 < 0x61) {
            cVar1 = cVar34;
          }
          bVar14 = pbVar21[3];
          if (pbVar21[2] < 0x41) {
            cVar38 = '\0';
          }
          if (bVar14 < 0x41) {
            cVar33 = -0x30;
          }
          if (bVar14 < 0x61) {
            cVar35 = cVar33;
          }
          bVar14 = cVar35 + bVar14 + (cVar38 + pbVar21[2]) * '\x10';
          local_e5c = CONCAT11(bVar14,cVar1 + bVar37 + (cVar2 + *pbVar21) * '\x10');
          local_e5c = (ushort)bVar14 | (ushort)((local_e5c & 0xff00ff) << 8);
        }
        FUN_00b1dc08(&local_1a68,&local_e60);
        iVar31 = iVar31 + 1;
      } while (iVar15 != iVar31);
    }
                    /* try { // try from 00b1c2e4 to 00b1c2f7 has its CatchHandler @ 00b1d834 */
    iVar15 = DomXMLFile::getNumElements(aDStack_170,"deviceMapping.productName");
    if (iVar15 != 0) {
      iVar31 = 0;
      do {
        local_e58 = (ulong *)0x0;
        local_e50 = (ulong *)0x0;
        local_e48 = (ulong *)0x0;
                    /* try { // try from 00b1c334 to 00b1c34b has its CatchHandler @ 00b1d8bc */
        FUN_00b1db64(apStack_1a50,0x100,"deviceMapping.productName(%u)#vendorId",iVar31);
                    /* try { // try from 00b1c34c to 00b1c41f has its CatchHandler @ 00b1d8d4 */
        pbVar21 = (byte *)DomXMLFile::getValue(aDStack_170,(char *)apStack_1a50,false);
        if ((pbVar21 == (byte *)0x0) ||
           (lVar19 = __strlen_chk(pbVar21,0xffffffffffffffff), lVar19 != 4)) {
          uVar26 = 0xffff;
        }
        else {
          bVar37 = pbVar21[1];
          bVar14 = pbVar21[3];
          cVar38 = '\t';
          cVar2 = '\t';
          if (*pbVar21 < 0x41) {
            cVar2 = '\0';
          }
          cVar33 = -0x37;
          cVar34 = -0x37;
          if (bVar37 < 0x41) {
            cVar34 = -0x30;
          }
          cVar1 = -0x57;
          if (bVar37 < 0x61) {
            cVar1 = cVar34;
          }
          if (pbVar21[2] < 0x41) {
            cVar38 = '\0';
          }
          if (bVar14 < 0x41) {
            cVar33 = -0x30;
          }
          cVar34 = -0x57;
          if (bVar14 < 0x61) {
            cVar34 = cVar33;
          }
          bVar14 = cVar34 + bVar14 + (cVar38 + pbVar21[2]) * '\x10';
          local_e60._0_2_ = CONCAT11(bVar14,cVar1 + bVar37 + (cVar2 + *pbVar21) * '\x10');
          uVar26 = (ushort)bVar14 | (ushort)(((ushort)local_e60 & 0xff00ff) << 8);
        }
        local_e60 = CONCAT22(local_e60._2_2_,uVar26);
        FUN_00b1db64(apStack_1a50,0x100,"deviceMapping.productName(%u).keyword",iVar31);
                    /* try { // try from 00b1c420 to 00b1c42f has its CatchHandler @ 00b1d8c0 */
        iVar16 = DomXMLFile::getNumElements(aDStack_170,(char *)apStack_1a50);
        if (iVar16 != 0) {
          iVar30 = 0;
          do {
                    /* try { // try from 00b1c464 to 00b1c47b has its CatchHandler @ 00b1d910 */
            FUN_00b1db64(apStack_1a50,0x100,"deviceMapping.productName(%u).keyword(%u)#text",iVar31,
                         iVar30);
                    /* try { // try from 00b1c47c to 00b1c48f has its CatchHandler @ 00b1d914 */
            pcVar20 = (char *)DomXMLFile::getValue(aDStack_170,(char *)apStack_1a50,false);
            if (pcVar20 == (char *)0x0) {
              if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
                 (iVar16 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
                 iVar16 != 0)) {
                    /* try { // try from 00b1c6a8 to 00b1c6b3 has its CatchHandler @ 00b1d7e4 */
                LogManager::LogManager
                          ((LogManager *)&LogManager::getInstance()::singletonLogManager);
                __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager
                             ,&PTR_LOOP_00fd8de0);
                __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
              }
                    /* try { // try from 00b1c5f8 to 00b1c60f has its CatchHandler @ 00b1d890 */
              LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                                 "  Error: Failed to read keyword in file %s\n",param_1);
              bVar6 = false;
              puVar7 = local_e58;
              goto joined_r0x00b1c618;
            }
            __n = strlen(pcVar20);
            if (0xffffffffffffffef < __n) {
                    /* try { // try from 00b1d454 to 00b1d45b has its CatchHandler @ 00b1d90c */
                    /* WARNING: Subroutine does not return */
              std::__ndk1::__basic_string_common<true>::__throw_length_error();
            }
            if (__n < 0x17) {
              local_98 = CONCAT71(local_98._1_7_,(char)((int)__n << 1));
              pvVar22 = (void *)((ulong)&local_98 | 1);
              if (__n != 0) goto LAB_00b1c4ec;
            }
            else {
              uVar18 = __n + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 00b1c4d0 to 00b1c4d7 has its CatchHandler @ 00b1d8d8 */
              pvVar22 = operator_new(uVar18);
              local_98 = uVar18 | 1;
              sStack_90 = __n;
              local_88 = pvVar22;
LAB_00b1c4ec:
              memcpy(pvVar22,pcVar20,__n);
            }
            *(undefined *)((long)pvVar22 + __n) = 0;
            if (local_e50 < local_e48) {
              local_e50[2] = (ulong)local_88;
              local_e50[1] = sStack_90;
              *local_e50 = local_98;
              local_e50 = local_e50 + 3;
            }
            else {
                    /* try { // try from 00b1c510 to 00b1c51b has its CatchHandler @ 00b1d8dc */
              std::__ndk1::
              vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
              ::
              __push_back_slow_path<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                        ((vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                          *)&local_e58,(basic_string *)&local_98);
              if ((local_98 & 1) != 0) {
                operator_delete(local_88);
              }
            }
            iVar30 = iVar30 + 1;
          } while (iVar16 != iVar30);
        }
        puVar11 = local_d40;
        if (local_d40 == local_d38) {
                    /* try { // try from 00b1c620 to 00b1c62b has its CatchHandler @ 00b1d8c0 */
          std::__ndk1::
          vector<DeviceMappingManager::ProductName,std::__ndk1::allocator<DeviceMappingManager::ProductName>>
          ::__push_back_slow_path<DeviceMappingManager::ProductName_const&>
                    ((vector<DeviceMappingManager::ProductName,std::__ndk1::allocator<DeviceMappingManager::ProductName>>
                      *)&puStack_d48,(ProductName *)&local_e60);
        }
        else {
          *(undefined8 *)(local_d40 + 8) = 0;
          *(undefined8 *)(local_d40 + 0xc) = 0;
          *local_d40 = (ushort)local_e60;
          *(undefined8 *)(local_d40 + 4) = 0;
          uVar18 = (long)local_e50 - (long)local_e58;
          if (uVar18 != 0) {
            if (0xaaaaaaaaaaaaaaa < (ulong)(((long)uVar18 >> 3) * -0x5555555555555555)) {
                    /* try { // try from 00b1d45c to 00b1d463 has its CatchHandler @ 00b1d880 */
                    /* WARNING: Subroutine does not return */
              std::__ndk1::__vector_base_common<true>::__throw_length_error();
            }
                    /* try { // try from 00b1c588 to 00b1c58b has its CatchHandler @ 00b1d87c */
            pbVar23 = (basic_string *)operator_new(uVar18);
            puVar32 = local_e50;
            *(basic_string **)(puVar11 + 4) = pbVar23;
            *(basic_string **)(puVar11 + 8) = pbVar23;
            *(basic_string **)(puVar11 + 0xc) = pbVar23 + ((long)uVar18 >> 3) * 2;
            for (puVar7 = local_e58; puVar7 != puVar32; puVar7 = puVar7 + 3) {
                    /* try { // try from 00b1c5b0 to 00b1c5bb has its CatchHandler @ 00b1d8f4 */
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
              basic_string(pbVar23);
              pbVar23 = pbVar23 + 6;
            }
            *(basic_string **)(puVar11 + 8) = pbVar23;
          }
          local_d40 = puVar11 + 0x10;
        }
        bVar6 = true;
        puVar7 = local_e58;
joined_r0x00b1c618:
        local_e58 = puVar7;
        puVar32 = local_e50;
        if (puVar7 != (ulong *)0x0) {
          while (puVar10 = puVar32, puVar10 != puVar7) {
            puVar32 = puVar10 + -3;
            if ((*(byte *)puVar32 & 1) != 0) {
              operator_delete((void *)puVar10[-1]);
            }
          }
          local_e50 = puVar7;
          operator_delete(local_e58);
        }
        if (!bVar6) goto LAB_00b1d358;
        iVar31 = iVar31 + 1;
      } while (iVar31 != iVar15);
    }
                    /* try { // try from 00b1c714 to 00b1c72b has its CatchHandler @ 00b1d830 */
    pcVar20 = (char *)DomXMLFile::getValue(aDStack_170,"deviceMapping.category",false);
    if (pcVar20 == (char *)0x0) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar15 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar15 != 0
         )) {
                    /* try { // try from 00b1d54c to 00b1d557 has its CatchHandler @ 00b1d79c */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
                    /* try { // try from 00b1c844 to 00b1c85b has its CatchHandler @ 00b1d830 */
      LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                         "  Error: Failed to read category in file %s\n",param_1);
LAB_00b1d358:
      uVar39 = 0;
    }
    else {
      iVar15 = strcasecmp(pcVar20,"wheel");
      if (iVar15 == 0) {
        local_d30[0] = 2;
      }
      else {
        iVar15 = strcasecmp(pcVar20,"gamepad");
        if (iVar15 == 0) {
          local_d30[0] = 1;
        }
        else {
          iVar15 = strcasecmp(pcVar20,"joystick");
          if (iVar15 == 0) {
            local_d30[0] = 3;
          }
          else {
            iVar15 = strcasecmp(pcVar20,"farmWheel");
            if (iVar15 == 0) {
              local_d30[0] = 4;
            }
            else {
              iVar15 = strcasecmp(pcVar20,"farmSidePanel");
              if (iVar15 == 0) {
                local_d30[0] = 5;
              }
              else {
                iVar15 = strcasecmp(pcVar20,"farmWheelHori");
                if (iVar15 == 0) {
                  local_d30[0] = 6;
                }
                else {
                  iVar15 = strcasecmp(pcVar20,"farmSidePanelHori");
                  if (iVar15 == 0) {
                    local_d30[0] = 7;
                  }
                  else {
                    iVar15 = strcasecmp(pcVar20,"farmJoystickThrustmaster");
                    if (iVar15 == 0) {
                      local_d30[0] = 8;
                    }
                    else {
                      local_d30[0] = 0;
                    }
                  }
                }
              }
            }
          }
        }
      }
      local_1a6c[0] = true;
                    /* try { // try from 00b1c8a8 to 00b1c8bb has its CatchHandler @ 00b1d818 */
      iVar15 = DomXMLFile::getNumChildren(aDStack_170,"deviceMapping.buttonMappings");
      if (iVar15 != 0) {
        iVar31 = 0;
        do {
                    /* try { // try from 00b1c914 to 00b1c927 has its CatchHandler @ 00b1d88c */
          FUN_00b1db64(apStack_1a50,0x100,"deviceMapping.buttonMappings.buttonMapping(%u)#physical",
                       iVar31);
                    /* try { // try from 00b1c928 to 00b1c95b has its CatchHandler @ 00b1d8ac */
          uVar18 = Properties::getUInt((Properties *)aDStack_170,(char *)apStack_1a50,local_1a6c);
          if (local_1a6c[0] == false) {
            if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
               (iVar15 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
               iVar15 != 0)) {
                    /* try { // try from 00b1d594 to 00b1d59f has its CatchHandler @ 00b1d798 */
              LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
              __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                           &PTR_LOOP_00fd8de0);
              __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
            }
                    /* try { // try from 00b1d074 to 00b1d08b has its CatchHandler @ 00b1d80c */
            LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                               "  Error: Failed to read button mapping in file %s\n",param_1);
            goto LAB_00b1d358;
          }
          FUN_00b1db64(apStack_1a50,0x100,"deviceMapping.buttonMappings.buttonMapping(%u)#logical",
                       iVar31);
                    /* try { // try from 00b1c95c to 00b1c96f has its CatchHandler @ 00b1d888 */
          uVar17 = Properties::getUInt((Properties *)aDStack_170,(char *)apStack_1a50,local_1a6c);
          if ((0x1f < uVar17) || (local_1a6c[0] == false)) {
            if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
               (iVar15 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
               iVar15 != 0)) {
                    /* try { // try from 00b1d5dc to 00b1d5e7 has its CatchHandler @ 00b1d794 */
              LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
              __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                           &PTR_LOOP_00fd8de0);
              __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
            }
                    /* try { // try from 00b1d264 to 00b1d27b has its CatchHandler @ 00b1d808 */
            LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                               "  Error: Failed to read button mapping in file %s\n",param_1);
            goto LAB_00b1d358;
          }
          *(uint *)((long)&local_aa0 + (uVar18 & 0xffffffff) * 4) = uVar17;
          FUN_00b1b2b4(&local_e60);
                    /* try { // try from 00b1c9a4 to 00b1c9bf has its CatchHandler @ 00b1d8a8 */
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                    (acStack_a20 + (uVar18 & 0xffffffff) * 0x18);
          FUN_00b1db64(apStack_1a50,0x100,"deviceMapping.buttonMappings.buttonMapping(%u)#label",
                       iVar31);
                    /* try { // try from 00b1c9c0 to 00b1ca03 has its CatchHandler @ 00b1d8a4 */
          lVar19 = DomXMLFile::getValue(aDStack_170,(char *)apStack_1a50,false);
          if (lVar19 == 0) {
            if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
               (iVar16 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
               iVar16 != 0)) {
                    /* try { // try from 00b1ca18 to 00b1ca23 has its CatchHandler @ 00b1d7cc */
              LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
              __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                           &PTR_LOOP_00fd8de0);
              __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
            }
            LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                              "  Warning: Failed to read button label in file %s\n",param_1);
          }
          else {
                    /* try { // try from 00b1c904 to 00b1c907 has its CatchHandler @ 00b1d8a4 */
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                      (acStack_720 + (ulong)uVar17 * 0x18);
          }
          iVar31 = iVar31 + 1;
        } while (iVar15 != iVar31);
      }
                    /* try { // try from 00b1ca50 to 00b1ca63 has its CatchHandler @ 00b1d814 */
      iVar15 = DomXMLFile::getNumElements(aDStack_170,"deviceMapping.axisMappings.axisMapping");
      if (iVar15 != 0) {
        iVar31 = 0;
        do {
                    /* try { // try from 00b1cab4 to 00b1cac7 has its CatchHandler @ 00b1d874 */
          FUN_00b1db64(&local_e60,0x100,"deviceMapping.axisMappings.axisMapping(%u)#physical",iVar31
                      );
                    /* try { // try from 00b1cac8 to 00b1cadb has its CatchHandler @ 00b1d870 */
          pcVar20 = (char *)DomXMLFile::getValue(aDStack_170,(char *)&local_e60,false);
          if (pcVar20 == (char *)0x0) {
            if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
               (iVar15 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
               iVar15 != 0)) {
                    /* try { // try from 00b1d624 to 00b1d62f has its CatchHandler @ 00b1d790 */
              LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
              __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                           &PTR_LOOP_00fd8de0);
              __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
            }
                    /* try { // try from 00b1d290 to 00b1d2a7 has its CatchHandler @ 00b1d804 */
            LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                               "  Error: Failed to read axis mapping in file %s\n",param_1);
            goto LAB_00b1d358;
          }
          local_1a78 = 0;
                    /* try { // try from 00b1cae4 to 00b1caeb has its CatchHandler @ 00b1d860 */
          uVar18 = parsePhysicalName(pcVar20,(IndexedUsage *)&local_1a78);
          if ((uVar18 & 1) != 0) {
                    /* try { // try from 00b1caf0 to 00b1cb17 has its CatchHandler @ 00b1d878 */
            puVar24 = (undefined8 *)
                      DeviceMapping::getAxisMapping
                                ((DeviceMapping *)local_d30,(IndexedUsage *)&local_1a78);
            if (puVar24 == (undefined8 *)0x0) {
              uVar18 = (ulong)local_180;
              if (8 < local_180) {
                if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
                   (iVar16 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
                   iVar16 != 0)) {
                    /* try { // try from 00b1cd0c to 00b1cd17 has its CatchHandler @ 00b1d7c8 */
                  LogManager::LogManager
                            ((LogManager *)&LogManager::getInstance()::singletonLogManager);
                  __cxa_atexit(LogManager::~LogManager,
                               &LogManager::getInstance()::singletonLogManager,&PTR_LOOP_00fd8de0);
                  __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
                }
                    /* try { // try from 00b1cc30 to 00b1ccaf has its CatchHandler @ 00b1d878 */
                LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                                  "  Warning: Too many axes defined in file %s\n",param_1);
                goto LAB_00b1caa8;
              }
              local_180 = local_180 + 1;
              puVar24 = local_d28 + uVar18 * 9;
              *puVar24 = local_1a78;
              USBUtil::getShortDescriptorForUsage((uint)local_1a78,(char *)apStack_1a50);
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                        ((char *)(local_d28 + uVar18 * 9 + 1));
              if (local_1a78._4_4_ != 0) {
                FUN_00b1db64(&local_98,0x20,&DAT_00504b22);
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                append((char *)(local_d28 + uVar18 * 9 + 1));
              }
            }
            FUN_00b1db64(&local_e60,0x100,"deviceMapping.axisMappings.axisMapping(%u)#logical",
                         iVar31);
                    /* try { // try from 00b1cb18 to 00b1cb2b has its CatchHandler @ 00b1d824 */
            uVar17 = Properties::getUInt((Properties *)aDStack_170,(char *)&local_e60,local_1a6c);
            if ((0xd < uVar17) || (local_1a6c[0] == false)) {
              if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
                 (iVar15 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
                 iVar15 != 0)) {
                    /* try { // try from 00b1d6b4 to 00b1d6bf has its CatchHandler @ 00b1d788 */
                LogManager::LogManager
                          ((LogManager *)&LogManager::getInstance()::singletonLogManager);
                __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager
                             ,&PTR_LOOP_00fd8de0);
                __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
              }
                    /* try { // try from 00b1d2e8 to 00b1d2ff has its CatchHandler @ 00b1d7f8 */
              LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                                 "  Error: Failed to read axis mapping in file %s\n",param_1);
              goto LAB_00b1d358;
            }
            uVar18 = (ulong)(*(int *)(puVar24 + 4) != -1);
            *(uint *)((long)(puVar24 + 4) + uVar18 * 4) = uVar17;
                    /* try { // try from 00b1cb54 to 00b1cbcb has its CatchHandler @ 00b1d8a0 */
            FUN_00b1db64(&local_e60,0x100,"deviceMapping.axisMappings.axisMapping(%u)#scale",iVar31)
            ;
            uVar39 = Properties::getFloat((Properties *)aDStack_170,(char *)&local_e60,1.0);
            *(undefined4 *)((long)puVar24 + uVar18 * 4 + 0x28) = uVar39;
            FUN_00b1db64(&local_e60,0x100,"deviceMapping.axisMappings.axisMapping(%u)#offset",iVar31
                        );
            uVar39 = Properties::getFloat((Properties *)aDStack_170,(char *)&local_e60,0.0);
            *(undefined4 *)((long)puVar24 + uVar18 * 4 + 0x30) = uVar39;
            FUN_00b1db64(&local_e60,0x100,"deviceMapping.axisMappings.axisMapping(%u)#label",iVar31)
            ;
                    /* try { // try from 00b1cbcc to 00b1cc0f has its CatchHandler @ 00b1d848 */
            lVar19 = DomXMLFile::getValue(aDStack_170,(char *)&local_e60,false);
            if (lVar19 == 0) {
              if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
                 (iVar16 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
                 iVar16 != 0)) {
                    /* try { // try from 00b1ccc4 to 00b1cccf has its CatchHandler @ 00b1d7d0 */
                LogManager::LogManager
                          ((LogManager *)&LogManager::getInstance()::singletonLogManager);
                __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager
                             ,&PTR_LOOP_00fd8de0);
                __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
              }
              LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                                "  Warning: Failed to read axis label in file %s\n",param_1);
            }
            else {
                    /* try { // try from 00b1caa4 to 00b1caa7 has its CatchHandler @ 00b1d848 */
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                        (acStack_420 + (ulong)uVar17 * 0x18);
            }
          }
LAB_00b1caa8:
          iVar31 = iVar31 + 1;
        } while (iVar15 != iVar31);
      }
                    /* try { // try from 00b1cd44 to 00b1cd57 has its CatchHandler @ 00b1d810 */
      iVar15 = DomXMLFile::getNumElements
                         (aDStack_170,"deviceMapping.axisMappings.separateAxisMapping");
      if (iVar15 != 0) {
        iVar31 = 0;
        bVar37 = 0;
        do {
                    /* try { // try from 00b1cda4 to 00b1cdb7 has its CatchHandler @ 00b1d840 */
          FUN_00b1db64(&local_e60,0x100,
                       "deviceMapping.axisMappings.separateAxisMapping(%u)#physical",iVar31);
                    /* try { // try from 00b1cdb8 to 00b1cdcb has its CatchHandler @ 00b1d83c */
          pcVar20 = (char *)DomXMLFile::getValue(aDStack_170,(char *)&local_e60,false);
          if (pcVar20 == (char *)0x0) {
            if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
               (iVar15 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
               iVar15 != 0)) {
                    /* try { // try from 00b1d66c to 00b1d677 has its CatchHandler @ 00b1d78c */
              LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
              __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                           &PTR_LOOP_00fd8de0);
              __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
            }
                    /* try { // try from 00b1d2bc to 00b1d2d3 has its CatchHandler @ 00b1d800 */
            LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                               "  Error: Failed to read physical name in sparate axis mapping in file %s\n"
                               ,param_1);
            goto LAB_00b1d358;
          }
          local_1a78 = 0;
                    /* try { // try from 00b1cdd4 to 00b1cddb has its CatchHandler @ 00b1d838 */
          uVar18 = parsePhysicalName(pcVar20,(IndexedUsage *)&local_1a78);
          if ((uVar18 & 1) != 0) {
                    /* try { // try from 00b1cde0 to 00b1ce07 has its CatchHandler @ 00b1d844 */
            puVar24 = (undefined8 *)
                      DeviceMapping::getAxisMapping
                                ((DeviceMapping *)local_d30,(IndexedUsage *)&local_1a78);
            if (puVar24 == (undefined8 *)0x0) {
              uVar18 = (ulong)local_180;
              if (8 < local_180) {
                if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
                   (iVar16 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
                   iVar16 != 0)) {
                    /* try { // try from 00b1d02c to 00b1d037 has its CatchHandler @ 00b1d7c4 */
                  LogManager::LogManager
                            ((LogManager *)&LogManager::getInstance()::singletonLogManager);
                  __cxa_atexit(LogManager::~LogManager,
                               &LogManager::getInstance()::singletonLogManager,&PTR_LOOP_00fd8de0);
                  __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
                }
                    /* try { // try from 00b1cf50 to 00b1cfcf has its CatchHandler @ 00b1d844 */
                LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                                  "  Warning: Too many axes defined in file %s\n",param_1);
                goto LAB_00b1cd98;
              }
              local_180 = local_180 + 1;
              puVar24 = local_d28 + uVar18 * 9;
              *puVar24 = local_1a78;
              USBUtil::getShortDescriptorForUsage((uint)local_1a78,(char *)apStack_1a50);
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                        ((char *)(local_d28 + uVar18 * 9 + 1));
              if (local_1a78._4_4_ != 0) {
                FUN_00b1db64(&local_98,0x20,&DAT_00504b22);
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                append((char *)(local_d28 + uVar18 * 9 + 1));
              }
            }
            FUN_00b1db64(&local_e60,0x100,
                         "deviceMapping.axisMappings.separateAxisMapping(%u)#logical",iVar31);
                    /* try { // try from 00b1ce08 to 00b1cee7 has its CatchHandler @ 00b1d89c */
            uVar17 = Properties::getUInt((Properties *)aDStack_170,(char *)&local_e60,local_1a6c);
            if ((0xd < uVar17) || (local_1a6c[0] == false)) {
              if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
                 (iVar15 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
                 iVar15 != 0)) {
                    /* try { // try from 00b1d6fc to 00b1d707 has its CatchHandler @ 00b1d784 */
                LogManager::LogManager
                          ((LogManager *)&LogManager::getInstance()::singletonLogManager);
                __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager
                             ,&PTR_LOOP_00fd8de0);
                __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
              }
                    /* try { // try from 00b1d314 to 00b1d357 has its CatchHandler @ 00b1d7fc */
              LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                                 "  Error: Failed to read axis mapping in file %s\n",param_1);
              goto LAB_00b1d358;
            }
            *(uint *)((long)puVar24 + 0x3c) = uVar17;
            FUN_00b1db64(&local_e60,0x100,"deviceMapping.axisMappings.separateAxisMapping(%u)#scale"
                         ,iVar31);
            uVar39 = Properties::getFloat((Properties *)aDStack_170,(char *)&local_e60,1.0);
            *(undefined4 *)(puVar24 + 8) = uVar39;
            FUN_00b1db64(&local_e60,0x100,
                         "deviceMapping.axisMappings.separateAxisMapping(%u)#offset",iVar31);
            uVar39 = Properties::getFloat((Properties *)aDStack_170,(char *)&local_e60,0.0);
            *(undefined4 *)((long)puVar24 + 0x44) = uVar39;
            FUN_00b1db64(&local_e60,0x100,
                         "deviceMapping.axisMappings.separateAxisMapping(%u)#triggersSeparateAxes",
                         iVar31);
            bVar14 = Properties::getBoolDefault((Properties *)aDStack_170,(char *)&local_e60,false);
            *(byte *)(puVar24 + 7) = bVar14 & 1;
            if ((bVar14 & bVar37 & 1) != 0) {
              if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
                 (iVar15 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
                 iVar15 != 0)) {
                    /* try { // try from 00b1d744 to 00b1d74f has its CatchHandler @ 00b1d780 */
                LogManager::LogManager
                          ((LogManager *)&LogManager::getInstance()::singletonLogManager);
                __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager
                             ,&PTR_LOOP_00fd8de0);
                __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
              }
              LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                                 "  Error: Only one trigger axis allowed in file %s\n",param_1);
              goto LAB_00b1d358;
            }
            FUN_00b1db64(&local_e60,0x100,"deviceMapping.axisMappings.separateAxisMapping(%u)#label"
                         ,iVar31);
                    /* try { // try from 00b1cee8 to 00b1cf2f has its CatchHandler @ 00b1d828 */
            lVar19 = DomXMLFile::getValue(aDStack_170,(char *)&local_e60,false);
            bVar37 = bVar14 | bVar37;
            if (lVar19 == 0) {
              if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
                 (iVar16 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
                 iVar16 != 0)) {
                    /* try { // try from 00b1cfe4 to 00b1cfef has its CatchHandler @ 00b1d7bc */
                LogManager::LogManager
                          ((LogManager *)&LogManager::getInstance()::singletonLogManager);
                __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager
                             ,&PTR_LOOP_00fd8de0);
                __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
              }
              LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                                "  Warning: Failed to read separate axis label in file %s\n",param_1
                               );
            }
            else {
                    /* try { // try from 00b1cd94 to 00b1cd97 has its CatchHandler @ 00b1d828 */
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                        (acStack_2d0 + (ulong)uVar17 * 0x18);
            }
          }
LAB_00b1cd98:
          iVar31 = iVar31 + 1;
        } while (iVar15 != iVar31);
      }
      if (local_1a60 != local_1a68) {
        uVar18 = 0;
        do {
          puVar27 = (undefined4 *)((long)local_1a68 + uVar18 * 6);
          local_e5c = *(ushort *)(puVar27 + 1);
          local_e60 = *puVar27;
                    /* try { // try from 00b1d0e8 to 00b1d0f7 has its CatchHandler @ 00b1d84c */
          std::__ndk1::
          pair<DeviceMappingManager::ProductKey,DeviceMappingManager::NamedDeviceMapping>::
          pair<DeviceMappingManager::ProductKey&,DeviceMappingManager::NamedDeviceMapping&,false>
                    ((pair<DeviceMappingManager::ProductKey,DeviceMappingManager::NamedDeviceMapping>
                      *)apStack_1a50,(ProductKey *)&local_e60,(NamedDeviceMapping *)&local_d60);
                    /* try { // try from 00b1d0f8 to 00b1d107 has its CatchHandler @ 00b1d850 */
          ppVar25 = apStack_1a50;
          std::__ndk1::
          __tree<std::__ndk1::__value_type<DeviceMappingManager::ProductKey,DeviceMappingManager::NamedDeviceMapping>,std::__ndk1::__map_value_compare<DeviceMappingManager::ProductKey,std::__ndk1::__value_type<DeviceMappingManager::ProductKey,DeviceMappingManager::NamedDeviceMapping>,std::__ndk1::less<DeviceMappingManager::ProductKey>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<DeviceMappingManager::ProductKey,DeviceMappingManager::NamedDeviceMapping>>>
          ::
          __emplace_unique_key_args<DeviceMappingManager::ProductKey,std::__ndk1::pair<DeviceMappingManager::ProductKey,DeviceMappingManager::NamedDeviceMapping>>
                    ((__tree<std::__ndk1::__value_type<DeviceMappingManager::ProductKey,DeviceMappingManager::NamedDeviceMapping>,std::__ndk1::__map_value_compare<DeviceMappingManager::ProductKey,std::__ndk1::__value_type<DeviceMappingManager::ProductKey,DeviceMappingManager::NamedDeviceMapping>,std::__ndk1::less<DeviceMappingManager::ProductKey>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<DeviceMappingManager::ProductKey,DeviceMappingManager::NamedDeviceMapping>>>
                      *)this,(ProductKey *)ppVar25,apStack_1a50);
          DeviceMapping::~DeviceMapping(aDStack_1a18);
          pvVar22 = local_1a30;
          pvVar12 = local_1a28;
          if (local_1a30 != (void *)0x0) {
            while (pvVar8 = pvVar12, pvVar8 != pvVar22) {
              pbVar21 = *(byte **)((long)pvVar8 + -0x18);
              pvVar12 = (void *)((long)pvVar8 + -0x20);
              if (pbVar21 != (byte *)0x0) {
                pbVar28 = *(byte **)((long)pvVar8 + -0x10);
                pbVar36 = pbVar21;
                if (pbVar28 != pbVar21) {
                  do {
                    pbVar36 = pbVar28 + -0x18;
                    if ((*pbVar36 & 1) != 0) {
                      operator_delete(*(void **)(pbVar28 + -8));
                    }
                    pbVar28 = pbVar36;
                  } while (pbVar36 != pbVar21);
                  pbVar36 = *(byte **)((long)pvVar8 + -0x18);
                }
                *(byte **)((long)pvVar8 + -0x10) = pbVar21;
                operator_delete(pbVar36);
              }
            }
            local_1a28 = pvVar22;
            operator_delete(local_1a30);
          }
          if ((local_1a48 & 1) != 0) {
            operator_delete(local_1a38);
          }
          if (((ulong)ppVar25 & 1) == 0) {
            if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
               (iVar15 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
               iVar15 != 0)) {
                    /* try { // try from 00b1d1f4 to 00b1d1ff has its CatchHandler @ 00b1d7c0 */
              LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
              __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                           &PTR_LOOP_00fd8de0);
              __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
            }
                    /* try { // try from 00b1d1c8 to 00b1d1df has its CatchHandler @ 00b1d82c */
            LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                              "  Info: Same productKey VID:\'%X\' PID:\'%X\' already defined in file %s\n"
                              ,(ulong)(ushort)local_e60,(ulong)local_e60._2_2_,param_1);
          }
          uVar18 = (ulong)((int)uVar18 + 1);
          uVar29 = ((long)local_1a60 - (long)local_1a68 >> 1) * -0x5555555555555555;
        } while (uVar18 <= uVar29 && uVar29 - uVar18 != 0);
      }
      if (puStack_d48 != local_d40) {
                    /* try { // try from 00b1d244 to 00b1d24b has its CatchHandler @ 00b1d810 */
        FUN_00b1dfb4(this + 0x18,&local_d60);
      }
      uVar39 = 1;
    }
    if (local_1a68 != (void *)0x0) {
      local_1a60 = local_1a68;
      operator_delete(local_1a68);
    }
    DeviceMapping::~DeviceMapping((DeviceMapping *)local_d30);
    puVar11 = puStack_d48;
    puVar13 = local_d40;
    if (puStack_d48 != (undefined2 *)0x0) {
      while (puVar9 = puVar13, puVar9 != puVar11) {
        pbVar21 = *(byte **)(puVar9 + -0xc);
        puVar13 = puVar9 + -0x10;
        if (pbVar21 != (byte *)0x0) {
          pbVar28 = *(byte **)(puVar9 + -8);
          pbVar36 = pbVar21;
          if (pbVar28 != pbVar21) {
            do {
              pbVar36 = pbVar28 + -0x18;
              if ((*pbVar36 & 1) != 0) {
                operator_delete(*(void **)(pbVar28 + -8));
              }
              pbVar28 = pbVar36;
            } while (pbVar36 != pbVar21);
            pbVar36 = *(byte **)(puVar9 + -0xc);
          }
          *(byte **)(puVar9 + -8) = pbVar21;
          operator_delete(pbVar36);
        }
      }
      local_d40 = puVar11;
      operator_delete(puStack_d48);
    }
    if ((local_d60 & 1) != 0) {
      operator_delete(local_d50);
    }
  }
  DomXMLFile::~DomXMLFile(aDStack_170);
  if (*(long *)(lVar5 + 0x28) == local_78) {
    return uVar39;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


