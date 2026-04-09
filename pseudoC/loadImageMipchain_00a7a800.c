// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: loadImageMipchain
// Entry Point: 00a7a800
// Size: 804 bytes
// Signature: undefined __cdecl loadImageMipchain(char * param_1, bool param_2, uint param_3, uint param_4, ORIGIN param_5, ImageDesc * param_6, ImageStreamingDesc * param_7)


/* DDSUtil::loadImageMipchain(char const*, bool, unsigned int, unsigned int, ImageDesc::ORIGIN,
   ImageDesc&, ImageStreamingDesc&) */

uint DDSUtil::loadImageMipchain
               (char *param_1,bool param_2,uint param_3,uint param_4,ORIGIN param_5,
               ImageDesc *param_6,ImageStreamingDesc *param_7)

{
  TEXTURE_TYPE TVar1;
  uint uVar2;
  long lVar3;
  byte bVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  ulong uVar10;
  void *pvVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  uint local_170;
  uint uStack_16c;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined4 local_158;
  File *local_150 [2];
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  int local_cc;
  undefined4 local_c8;
  uint uStack_c4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined8 uStack_74;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  FileReader::FileReader((FileReader *)local_150,param_1);
                    /* try { // try from 00a7a854 to 00a7a85b has its CatchHandler @ 00a7ab54 */
  uVar10 = FileReader::isValid();
  if ((uVar10 & 1) == 0) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar9 != 0)) {
                    /* try { // try from 00a7aae8 to 00a7aaf3 has its CatchHandler @ 00a7ab24 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
                    /* try { // try from 00a7a93c to 00a7a953 has its CatchHandler @ 00a7ab54 */
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "Error: Missing dds file \'%s\'\n",param_1);
  }
  else {
                    /* try { // try from 00a7a864 to 00a7a87b has its CatchHandler @ 00a7ab4c */
    uVar10 = readHeader(local_150[0],param_5,(DDSHeader *)&local_e8,(DDSHeaderDX10 *)&local_168,
                        param_6,param_1);
    if ((uVar10 & 1) != 0) {
                    /* try { // try from 00a7a880 to 00a7a887 has its CatchHandler @ 00a7ab48 */
      uVar5 = FileReader::getPosition();
      iVar9 = *(int *)(param_6 + 0x1c);
                    /* try { // try from 00a7a890 to 00a7a8ab has its CatchHandler @ 00a7ab44 */
      uVar6 = MipMapUtil::countHighDefMipsBeforeMipchain
                        (param_6,param_2,param_3,param_4,&uStack_16c,&local_170);
      uStack_118 = *(undefined8 *)(param_6 + 0x28);
      local_120 = *(undefined8 *)(param_6 + 0x20);
      uStack_108 = *(undefined8 *)(param_6 + 0x38);
      uStack_110 = *(undefined8 *)(param_6 + 0x30);
      if (iVar9 != 0) {
        uVar6 = 0;
      }
      uStack_f8 = *(undefined8 *)(param_6 + 0x48);
      local_100 = *(undefined8 *)(param_6 + 0x40);
      uStack_138 = *(undefined8 *)(param_6 + 8);
      local_140 = *(undefined8 *)param_6;
      uStack_128 = *(undefined8 *)(param_6 + 0x18);
      uStack_130 = *(undefined8 *)(param_6 + 0x10);
      local_f0 = *(undefined8 *)(param_6 + 0x50);
      if (uVar6 == 0) {
        iVar9 = *(int *)(param_6 + 0x10);
        uVar7 = 0;
      }
      else {
                    /* try { // try from 00a7a8d8 to 00a7a8e7 has its CatchHandler @ 00a7ab38 */
        uVar7 = MipMapUtil::getMipRangeSize(param_6,0,uVar6);
        uVar13 = NEON_neg(CONCAT44(uVar6,uVar6),4);
        uVar2 = *(uint *)(param_6 + 8) >> (ulong)(uVar6 & 0x1f);
        if (uVar2 < 2) {
          uVar2 = 1;
        }
        iVar9 = *(int *)(param_6 + 0x10) - uVar6;
        uVar13 = NEON_ushl(*(undefined8 *)param_6,uVar13,4);
        *(uint *)(param_6 + 8) = uVar2;
        *(int *)(param_6 + 0x10) = iVar9;
        uVar13 = NEON_umax(uVar13,0x100000001,4);
        *(undefined8 *)param_6 = uVar13;
      }
                    /* try { // try from 00a7a9a0 to 00a7a9ab has its CatchHandler @ 00a7ab40 */
      iVar8 = MipMapUtil::getMipRangeSize(param_6,0,iVar9 + 1);
      TVar1 = *(TEXTURE_TYPE *)(param_6 + 0x1c);
      iVar9 = 6;
      if (TVar1 != 1) {
        iVar9 = 1;
      }
      uVar2 = *(int *)(param_6 + 0xc) * iVar8 * iVar9;
      *(uint *)(param_6 + 0x20) = uVar2;
                    /* try { // try from 00a7a9cc to 00a7a9cf has its CatchHandler @ 00a7ab3c */
      pvVar11 = operator_new__((ulong)uVar2);
      *(void **)(param_6 + 0x28) = pvVar11;
      uVar2 = uStack_c4 & 1;
      if (local_cc != 0x288ae8d9) {
        uVar2 = 0;
      }
                    /* try { // try from 00a7a9f4 to 00a7aaa7 has its CatchHandler @ 00a7ab50 */
      bVar4 = ImageUtil::getNeedFlipY(*(ORIGIN *)(param_6 + 0x44),uVar2,TVar1);
      param_7[0x70] = (ImageStreamingDesc)(bVar4 & 1);
      *(undefined4 *)param_7 = uVar5;
      *(uint *)(param_7 + 4) = uStack_16c;
      *(uint *)(param_7 + 8) = local_170;
      *(uint *)(param_7 + 0xc) = uVar6;
      if (uVar6 != 0) {
        puVar12 = (undefined8 *)operator_new__(0x90);
        *(undefined8 **)(param_7 + 0x10) = puVar12;
        puVar12[9] = uStack_a0;
        puVar12[8] = local_a8;
        puVar12[0xb] = uStack_90;
        puVar12[10] = uStack_98;
        puVar12[0xd] = CONCAT44(uStack_7c,uStack_80);
        puVar12[0xc] = local_88;
        *(undefined8 *)((long)puVar12 + 0x74) = uStack_74;
        *(ulong *)((long)puVar12 + 0x6c) = CONCAT44(uStack_78,uStack_7c);
        puVar12[1] = uStack_e0;
        *puVar12 = local_e8;
        puVar12[3] = CONCAT44(local_cc,uStack_d0);
        puVar12[2] = uStack_d8;
        puVar12[5] = uStack_c0;
        puVar12[4] = CONCAT44(uStack_c4,local_c8);
        puVar12[7] = uStack_b0;
        puVar12[6] = uStack_b8;
        *(undefined4 *)((long)puVar12 + 0x8c) = local_158;
        *(undefined8 *)((long)puVar12 + 0x84) = uStack_160;
        *(undefined8 *)((long)puVar12 + 0x7c) = local_168;
      }
      *(undefined8 *)(param_7 + 0x40) = uStack_118;
      *(undefined8 *)(param_7 + 0x38) = local_120;
      *(undefined8 *)(param_7 + 0x50) = uStack_108;
      *(undefined8 *)(param_7 + 0x48) = uStack_110;
      *(undefined8 *)(param_7 + 0x60) = uStack_f8;
      *(undefined8 *)(param_7 + 0x58) = local_100;
      *(undefined8 *)(param_7 + 0x20) = uStack_138;
      *(undefined8 *)(param_7 + 0x18) = local_140;
      *(undefined8 *)(param_7 + 0x30) = uStack_128;
      *(undefined8 *)(param_7 + 0x28) = uStack_130;
      *(undefined2 *)(param_7 + 0x68) = (undefined2)local_f0;
      uVar6 = readMips(local_150[0],param_6,(bool)(bVar4 & 1),uVar7,0,*(uchar **)(param_6 + 0x28),
                       param_1);
      if ((uVar6 & 1) == 0) {
        if (*(void **)(param_7 + 0x10) != (void *)0x0) {
          operator_delete__(*(void **)(param_7 + 0x10));
        }
        *(undefined8 *)(param_7 + 0x10) = 0;
        if (*(void **)(param_6 + 0x28) != (void *)0x0) {
          operator_delete__(*(void **)(param_6 + 0x28));
        }
        *(undefined8 *)(param_6 + 0x28) = 0;
        *(undefined4 *)(param_6 + 0x20) = 0;
      }
      goto LAB_00a7a958;
    }
  }
  uVar6 = 0;
LAB_00a7a958:
  FileReader::~FileReader((FileReader *)local_150);
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return uVar6 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


