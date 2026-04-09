// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: loadImageMipchain
// Entry Point: 00a90418
// Size: 736 bytes
// Signature: undefined __cdecl loadImageMipchain(char * param_1, bool param_2, uint param_3, uint param_4, ORIGIN param_5, ImageDesc * param_6, ImageStreamingDesc * param_7)


/* GS2DUtil::loadImageMipchain(char const*, bool, unsigned int, unsigned int, ImageDesc::ORIGIN,
   ImageDesc&, ImageStreamingDesc&) */

uint GS2DUtil::loadImageMipchain
               (char *param_1,bool param_2,uint param_3,uint param_4,ORIGIN param_5,
               ImageDesc *param_6,ImageStreamingDesc *param_7)

{
  TEXTURE_TYPE TVar1;
  undefined2 uVar2;
  uint uVar3;
  long lVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  ulong uVar11;
  void *pvVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  uint local_cc;
  uint uStack_c8;
  uint local_c4;
  File *local_c0 [2];
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  int local_70;
  undefined4 uStack_6c;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  FileReader::FileReader((FileReader *)local_c0,param_1);
                    /* try { // try from 00a9046c to 00a90473 has its CatchHandler @ 00a90724 */
  uVar11 = FileReader::isValid();
  if ((uVar11 & 1) == 0) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar10 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar10 != 0))
    {
                    /* try { // try from 00a906bc to 00a906c7 has its CatchHandler @ 00a906f8 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
                    /* try { // try from 00a9062c to 00a90643 has its CatchHandler @ 00a90724 */
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "Error: Missing gs2d file \'%s\'\n",param_1);
  }
  else {
                    /* try { // try from 00a9047c to 00a90487 has its CatchHandler @ 00a90720 */
    uVar11 = readHeader(local_c0[0],(GS2DHeader *)&local_b0,param_1);
    if ((uVar11 & 1) != 0) {
      local_c4 = 0;
                    /* try { // try from 00a90490 to 00a904ab has its CatchHandler @ 00a90718 */
      uVar11 = buildDesc((GS2DHeader *)&local_b0,param_5,param_6,param_1,&local_c4,false);
      if ((uVar11 & 1) != 0) {
        iVar10 = *(int *)(param_6 + 0x1c);
                    /* try { // try from 00a904b4 to 00a904cf has its CatchHandler @ 00a90714 */
        uVar6 = MipMapUtil::countHighDefMipsBeforeMipchain
                          (param_6,param_2,param_3,param_4,&uStack_c8,&local_cc);
        if (iVar10 != 0) {
          uVar6 = 0;
        }
                    /* try { // try from 00a904e8 to 00a904f3 has its CatchHandler @ 00a90710 */
        iVar7 = MipMapUtil::getMipRangeSize(param_6,uVar6,(1 - uVar6) + *(int *)(param_6 + 0x10));
        TVar1 = *(TEXTURE_TYPE *)(param_6 + 0x1c);
        iVar10 = 6;
        if (TVar1 != 1) {
          iVar10 = 1;
        }
        uVar9 = *(int *)(param_6 + 0xc) * iVar7 * iVar10;
        *(uint *)(param_6 + 0x20) = uVar9;
                    /* try { // try from 00a90514 to 00a90517 has its CatchHandler @ 00a9070c */
        pvVar12 = operator_new__((ulong)uVar9);
        *(void **)(param_6 + 0x28) = pvVar12;
                    /* try { // try from 00a90528 to 00a905cf has its CatchHandler @ 00a9071c */
        bVar5 = ImageUtil::getNeedFlipY(param_5,(uint)(local_70 != 0),TVar1);
        uVar8 = FileReader::getPosition();
        *(undefined4 *)param_7 = uVar8;
        *(uint *)(param_7 + 4) = uStack_c8;
        *(uint *)(param_7 + 8) = local_cc;
        *(uint *)(param_7 + 0xc) = uVar6;
        param_7[0x70] = (ImageStreamingDesc)(bVar5 & 1);
        uVar14 = *(undefined8 *)(param_6 + 0x20);
        uVar18 = *(undefined8 *)(param_6 + 0x38);
        uVar17 = *(undefined8 *)(param_6 + 0x30);
        uVar2 = *(undefined2 *)(param_6 + 0x50);
        uVar16 = *(undefined8 *)(param_6 + 0x48);
        uVar15 = *(undefined8 *)(param_6 + 0x40);
        *(undefined8 *)(param_7 + 0x40) = *(undefined8 *)(param_6 + 0x28);
        *(undefined8 *)(param_7 + 0x38) = uVar14;
        *(undefined8 *)(param_7 + 0x50) = uVar18;
        *(undefined8 *)(param_7 + 0x48) = uVar17;
        *(undefined2 *)(param_7 + 0x68) = uVar2;
        *(undefined8 *)(param_7 + 0x60) = uVar16;
        *(undefined8 *)(param_7 + 0x58) = uVar15;
        uVar16 = *(undefined8 *)param_6;
        uVar15 = *(undefined8 *)(param_6 + 0x18);
        uVar14 = *(undefined8 *)(param_6 + 0x10);
        *(undefined8 *)(param_7 + 0x20) = *(undefined8 *)(param_6 + 8);
        *(undefined8 *)(param_7 + 0x18) = uVar16;
        *(undefined8 *)(param_7 + 0x30) = uVar15;
        *(undefined8 *)(param_7 + 0x28) = uVar14;
        if (uVar6 != 0) {
          puVar13 = (undefined8 *)operator_new__(0x48);
          *(undefined8 **)(param_7 + 0x10) = puVar13;
          puVar13[5] = uStack_88;
          puVar13[4] = local_90;
          puVar13[7] = uStack_78;
          puVar13[6] = uStack_80;
          puVar13[8] = CONCAT44(uStack_6c,local_70);
          puVar13[1] = uStack_a8;
          *puVar13 = local_b0;
          puVar13[3] = uStack_98;
          puVar13[2] = uStack_a0;
        }
        uVar9 = readMips(local_c0[0],(GS2DHeader *)&local_b0,param_6,(bool)(bVar5 & 1),uVar6,
                         (1 - uVar6) + *(int *)(param_6 + 0x10),*(uchar **)(param_6 + 0x28),
                         *(uint *)(param_6 + 0x20),param_1);
        if ((uVar9 & 1) == 0) {
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
        else if (uVar6 != 0) {
          uVar14 = NEON_neg(CONCAT44(uVar6,uVar6),4);
          uVar3 = *(uint *)(param_6 + 8) >> (ulong)(uVar6 & 0x1f);
          if (uVar3 < 2) {
            uVar3 = 1;
          }
          uVar14 = NEON_ushl(*(undefined8 *)param_6,uVar14,4);
          *(uint *)(param_6 + 8) = uVar3;
          *(uint *)(param_6 + 0x10) = *(int *)(param_6 + 0x10) - uVar6;
          uVar14 = NEON_umax(uVar14,0x100000001,4);
          *(undefined8 *)param_6 = uVar14;
        }
        goto LAB_00a90648;
      }
    }
  }
  uVar9 = 0;
LAB_00a90648:
  FileReader::~FileReader((FileReader *)local_c0);
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return uVar9 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


