// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: buildGS2DHeader
// Entry Point: 00a91664
// Size: 564 bytes
// Signature: undefined __cdecl buildGS2DHeader(ImageDesc * param_1, uint param_2, uint * param_3, GS2DHeader * param_4)


/* GS2DUtil::buildGS2DHeader(ImageDesc const&, unsigned int, unsigned int*, GS2DUtil::GS2DHeader&)
    */

undefined8
GS2DUtil::buildGS2DHeader(ImageDesc *param_1,uint param_2,uint *param_3,GS2DHeader *param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  Logger *pLVar5;
  char *pcVar6;
  ulong uVar7;
  uint uVar8;
  int *piVar9;
  undefined8 uVar10;
  
  iVar4 = *(int *)(param_1 + 0x14);
  if (*(int *)(param_1 + 0x40) == 0) {
    uVar8 = iVar4 - 1;
    if (3 < uVar8) goto LAB_00a916c4;
    uVar7 = (ulong)*(uint *)(&DAT_004c5870 + (long)(int)uVar8 * 4);
  }
  else {
    uVar7 = 0;
    piVar9 = &s_pixelFormatInfo;
    do {
      if (*piVar9 == *(int *)(param_1 + 0x40)) goto LAB_00a916c8;
      uVar7 = uVar7 + 1;
      piVar9 = piVar9 + 3;
    } while (uVar7 != 0x2c);
LAB_00a916c4:
    uVar7 = 0;
  }
LAB_00a916c8:
  *(uint *)param_4 = param_2;
  iVar1 = *(int *)(param_1 + 0x1c);
  uVar10 = *(undefined8 *)param_1;
  *(short *)(param_4 + 0x10) = (short)iVar4;
  *(undefined8 *)(param_4 + 4) = uVar10;
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  uVar3 = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(param_4 + 0xc) = *(undefined4 *)(param_1 + 8);
  *(short *)(param_4 + 0x12) = (short)uVar2;
  *(undefined4 *)(param_4 + 0x14) = uVar3;
  *(undefined4 *)(param_4 + 0x18) = 0;
  if (iVar1 == 1) {
    *(undefined8 *)(param_4 + 0x14) = 0x100000001;
  }
  uVar8 = (uint)(iVar1 == 1);
  if (*(int *)(param_1 + 0x4c) != 0) {
    if (*(int *)(param_1 + 0x4c) != 1) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar4 != 0))
      {
                    /* try { // try from 00a91808 to 00a9180f has its CatchHandler @ 00a918b0 */
        pLVar5 = (Logger *)operator_new(0x38);
                    /* try { // try from 00a91814 to 00a91817 has its CatchHandler @ 00a918a0 */
        Logger::Logger(pLVar5);
        LogManager::getInstance()::singletonLogManager = pLVar5;
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      pcVar6 = "Error: Failed to save g2d image with num skipped mipmaps larger than 1\n";
      goto LAB_00a917e0;
    }
    uVar8 = uVar8 | 2;
    *(uint *)(param_4 + 0x18) = uVar8;
  }
  if (param_1[0x50] != (ImageDesc)0x0) {
    uVar8 = uVar8 | 8;
    *(uint *)(param_4 + 0x18) = uVar8;
  }
  iVar4 = *(int *)(param_1 + 0x44);
  *(int *)(param_4 + 0x3c) = (int)uVar7;
  if ((iVar4 == 1) || (iVar4 == 0)) {
    *(int *)(param_4 + 0x40) = iVar4;
  }
  iVar4 = *(int *)(param_1 + 0x18);
  if (7 < iVar4 - 1U) {
    iVar4 = 0;
  }
  *(int *)(param_4 + 0x44) = iVar4;
  if ((int)uVar7 != 0) {
    if (param_1[0x51] != (ImageDesc)0x0) {
      *(uint *)(param_4 + 0x18) = uVar8 | 4;
      uVar10 = *(undefined8 *)(param_1 + 0x30);
      *(undefined8 *)(param_4 + 0x34) = *(undefined8 *)(param_1 + 0x38);
      *(undefined8 *)(param_4 + 0x2c) = uVar10;
    }
    *(uint *)(param_4 + 0x1c) = *param_3;
    *(uint *)(param_4 + 0x20) = param_3[1];
    *(uint *)(param_4 + 0x24) = param_3[2];
    *(uint *)(param_4 + 0x28) = param_3[3];
    return 1;
  }
  if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar4 != 0)) {
                    /* try { // try from 00a91858 to 00a9185f has its CatchHandler @ 00a9189c */
    pLVar5 = (Logger *)operator_new(0x38);
                    /* try { // try from 00a91864 to 00a91867 has its CatchHandler @ 00a91898 */
    Logger::Logger(pLVar5);
    LogManager::getInstance()::singletonLogManager = pLVar5;
    __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
  }
  pcVar6 = "Error: Failed to save image (texture format not supported)\n";
LAB_00a917e0:
  LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,pcVar6);
  return 0;
}


