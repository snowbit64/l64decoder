// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getPixelFormat
// Entry Point: 00a9da18
// Size: 1088 bytes
// Signature: undefined __cdecl getPixelFormat(uint param_1, FORMAT param_2, TYPE param_3, bool param_4, char * param_5)


/* PixelFormatUtil::getPixelFormat(unsigned int, ImageDesc::FORMAT, ImageDesc::TYPE, bool, char
   const*) */

ulong PixelFormatUtil::getPixelFormat
                (uint param_1,FORMAT param_2,TYPE param_3,bool param_4,char *param_5)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  char *pcVar4;
  char *pcVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar6 = (ulong)param_3;
  uVar2 = (ulong)param_2;
  if (param_2 - 0x1f < 0xd) {
    uVar2 = getASTCPixelFormat(param_2,param_1 == 4,param_5);
    return uVar2;
  }
  switch(param_1) {
  case 1:
    switch(param_2) {
    case 1:
      goto switchD_00a9dadc_caseD_4;
    default:
      pcVar4 = (char *)LogManager::getInstance();
      pcVar5 = "Error: Texture %s invalid 1-channel format %s with type %s.\n";
LAB_00a9dc9c:
      uVar7 = *(undefined8 *)(ImageUtil::s_formatNames + uVar2 * 8);
      uVar8 = *(undefined8 *)(ImageUtil::s_typeNames + uVar6 * 8);
      goto LAB_00a9ddac;
    case 10:
      return 0xc;
    case 0xb:
      return 0xd;
    case 0x15:
      return 0x32;
    case 0x16:
      return 0x33;
    }
  case 2:
    switch(param_2) {
    case 2:
      goto switchD_00a9dadc_caseD_4;
    default:
      pcVar4 = (char *)LogManager::getInstance();
      pcVar5 = "Error: Texture %s invalid 2-channel format %s with type %s.\n";
      goto LAB_00a9dc9c;
    case 0xc:
      return 0xe;
    case 0xd:
      return 0xf;
    case 0x17:
      return 0x34;
    case 0x18:
      return 0x35;
    }
  case 3:
    uVar3 = 8;
    switch(param_2) {
    case 3:
      if (param_3 == 1) {
        uVar2 = 3;
      }
      else {
        if (param_3 != 8) {
          pcVar4 = (char *)LogManager::getInstance();
          pcVar5 = "Error: Texture %s invalid 3-channel format %s with type %s.\n";
          uVar8 = *(undefined8 *)(ImageUtil::s_typeNames + uVar6 * 8);
          uVar7 = 0x50b7e7;
          goto LAB_00a9ddac;
        }
        uVar2 = 0x1a;
      }
    case 4:
      goto switchD_00a9dadc_caseD_4;
    default:
      pcVar4 = (char *)LogManager::getInstance();
      pcVar5 = "Error: Texture %s invalid 3-channel format %s with type %s.\n";
      goto LAB_00a9dc9c;
    case 7:
      break;
    case 0xe:
      uVar3 = 0x10;
      break;
    case 0xf:
      uVar3 = 0x11;
      break;
    case 0x10:
      uVar3 = 0x12;
      break;
    case 0x11:
      uVar3 = 0x2e;
      break;
    case 0x13:
      uVar3 = 0x30;
      break;
    case 0x19:
      uVar3 = 0x36;
      break;
    case 0x1b:
      uVar3 = 0x39;
      break;
    case 0x1e:
      if (param_3 != 7) {
        pcVar4 = (char *)LogManager::getInstance();
        pcVar5 = "Error: Texture %s invalid 3-channel format %s with type %s.\n";
        uVar8 = *(undefined8 *)(ImageUtil::s_typeNames + uVar6 * 8);
        uVar7 = 0x4d6d58;
        goto LAB_00a9ddac;
      }
      uVar2 = 0x16;
      goto switchD_00a9dadc_caseD_4;
    }
    break;
  case 4:
    switch(param_2) {
    case 5:
      if (param_3 == 1) {
        uVar2 = 5;
      }
      else if (param_3 == 8) {
        uVar2 = 0x1b;
      }
      else {
        if (param_3 != 6) {
          pcVar4 = (char *)LogManager::getInstance();
          uVar8 = *(undefined8 *)(ImageUtil::s_typeNames + uVar6 * 8);
          uVar7 = 0x50df19;
          goto LAB_00a9dda4;
        }
        uVar2 = 0x15;
      }
      break;
    case 6:
      if (param_3 != 1) {
        pcVar4 = (char *)LogManager::getInstance();
        uVar8 = *(undefined8 *)(ImageUtil::s_typeNames + uVar6 * 8);
        uVar7 = 0x4cd560;
        goto LAB_00a9dda4;
      }
      uVar2 = 6;
      break;
    case 7:
      return 9;
    case 8:
      return 10;
    case 9:
      return 0xb;
    default:
      pcVar4 = (char *)LogManager::getInstance();
      uVar7 = *(undefined8 *)(ImageUtil::s_formatNames + uVar2 * 8);
      uVar8 = *(undefined8 *)(ImageUtil::s_typeNames + uVar6 * 8);
LAB_00a9dda4:
      pcVar5 = "Error: Texture %s invalid 4-channel format %s with type %s.\n";
LAB_00a9ddac:
      LogManager::errorf(pcVar4,pcVar5,param_5,uVar7,uVar8);
      return 0;
    case 0x10:
      return 0x13;
    case 0x12:
      return 0x2f;
    case 0x14:
      return 0x31;
    case 0x1a:
      return 0x37;
    case 0x1c:
      return 0x3a;
    case 0x1d:
      return 0x38;
    }
switchD_00a9dadc_caseD_4:
    uVar3 = uVar2;
    if (param_4) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0))
      {
                    /* try { // try from 00a9de20 to 00a9de2b has its CatchHandler @ 00a9de58 */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                        "Warning (performance): Texture %s raw format.\n",param_5);
    }
    break;
  default:
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0)) {
                    /* try { // try from 00a9ddd8 to 00a9dde3 has its CatchHandler @ 00a9de5c */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "Error: Texture %s invalid number of channels (%u).\n",param_5,(ulong)param_1
                      );
    return 0;
  }
  return uVar3;
}


