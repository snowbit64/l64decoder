// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: buildDesc
// Entry Point: 00a8f3e8
// Size: 724 bytes
// Signature: undefined __cdecl buildDesc(GS2DHeader * param_1, ORIGIN param_2, ImageDesc * param_3, char * param_4, uint * param_5, bool param_6)


/* WARNING: Removing unreachable block (ram,0x00a8f4f8) */
/* GS2DUtil::buildDesc(GS2DUtil::GS2DHeader const&, ImageDesc::ORIGIN, ImageDesc&, char const*,
   unsigned int&, bool) */

undefined8
GS2DUtil::buildDesc(GS2DHeader *param_1,ORIGIN param_2,ImageDesc *param_3,char *param_4,
                   uint *param_5,bool param_6)

{
  undefined4 *puVar1;
  ushort uVar2;
  int iVar3;
  ulong uVar4;
  char *pcVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  TEXTURE_TYPE TVar9;
  undefined8 uVar10;
  
  uVar10 = *(undefined8 *)(param_1 + 4);
  uVar2 = *(ushort *)(param_1 + 0x12);
  param_3[0x48] = (ImageDesc)0x1;
  uVar6 = *(uint *)(param_1 + 0x44);
  *(undefined8 *)param_3 = uVar10;
  *(uint *)(param_3 + 0x10) = (uint)uVar2;
  puVar1 = (undefined4 *)(&UNK_0052076c + (ulong)*(uint *)(param_1 + 0x3c) * 0xc);
  if (uVar6 != 0) {
    puVar1 = (undefined4 *)(s_typeInfo + (ulong)uVar6 * 4);
  }
  *(undefined4 *)(param_3 + 0x18) = *puVar1;
  uVar6 = *(uint *)(param_1 + 0x14);
  TVar9 = 3;
  if (uVar6 < 2) {
    TVar9 = 0;
  }
  if ((*(uint *)(param_1 + 0x18) & 1) != 0) {
    uVar6 = 1;
    TVar9 = 1;
  }
  *(uint *)(param_3 + 0xc) = uVar6;
  *(TEXTURE_TYPE *)(param_3 + 0x1c) = TVar9;
  uVar6 = *(uint *)(param_1 + 0x3c);
  uVar2 = *(ushort *)(param_1 + 0x10);
  *(uint *)(param_3 + 0x14) = (uint)uVar2;
  *(undefined4 *)(param_3 + 0x40) = (&s_pixelFormatInfo)[(ulong)uVar6 * 3];
  if (uVar2 == 0) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0)) {
                    /* try { // try from 00a8f63c to 00a8f647 has its CatchHandler @ 00a8f6c0 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    pcVar5 = "Error: Failed to load image (texture format not recognized)\n";
LAB_00a8f550:
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,pcVar5);
    return 0;
  }
  iVar3 = *(int *)(param_1 + 0x40);
  *(ORIGIN *)(param_3 + 0x44) = param_2;
  uVar4 = ImageUtil::getNeedFlipY(param_2,(uint)(iVar3 != 0),TVar9);
  if ((uVar4 & 1) != 0) {
    uVar4 = 0;
    piVar8 = &s_pixelFormatInfo;
    do {
      if (*piVar8 == *(int *)(param_3 + 0x40)) {
        if ((0x800000ffffeU >> (uVar4 & 0x3f) & 1) != 0) goto LAB_00a8f560;
        break;
      }
      uVar4 = uVar4 + 1;
      piVar8 = piVar8 + 3;
    } while (uVar4 != 0x2c);
    if (!param_6) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0))
      {
                    /* try { // try from 00a8f684 to 00a8f68f has its CatchHandler @ 00a8f6bc */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      pcVar5 = 
      "Error: Failed to load image (vertical flipping for compressed texture not supported)\n";
      goto LAB_00a8f550;
    }
  }
LAB_00a8f560:
  if (*param_5 == 0) goto LAB_00a8f5a4;
  if ((*(uint *)(param_1 + 0x18) >> 3 & 1) == 0) {
    if ((*(uint *)(param_1 + 0x18) >> 1 & 1) == 0) {
      pcVar5 = strrchr(param_4,0x2e);
      if ((pcVar5 <= param_4) || (pcVar5[-1] != 'H')) goto LAB_00a8f5a4;
      goto LAB_00a8f594;
    }
    uVar6 = *param_5 - 1;
  }
  else {
LAB_00a8f594:
    uVar6 = 0;
  }
  *param_5 = uVar6;
LAB_00a8f5a4:
  uVar6 = *(uint *)(param_3 + 0x10);
  uVar7 = *param_5;
  if (uVar6 < *param_5) {
    *param_5 = uVar6;
    uVar7 = uVar6;
  }
  if (uVar7 != 0) {
    uVar6 = *(uint *)param_3 >> (ulong)(uVar7 & 0x1f);
    if (uVar6 < 2) {
      uVar6 = 1;
    }
    *(uint *)param_3 = uVar6;
    uVar6 = *(uint *)(param_3 + 4) >> (ulong)(*param_5 & 0x1f);
    if (uVar6 < 2) {
      uVar6 = 1;
    }
    *(uint *)(param_3 + 4) = uVar6;
    uVar6 = *(uint *)(param_3 + 8) >> (ulong)(*param_5 & 0x1f);
    if (uVar6 < 2) {
      uVar6 = 1;
    }
    *(uint *)(param_3 + 8) = uVar6;
    *(uint *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) - *param_5;
  }
  param_3[0x49] = (ImageDesc)0x1;
  return 1;
}


