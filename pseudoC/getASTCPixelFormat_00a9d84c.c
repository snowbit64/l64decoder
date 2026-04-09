// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getASTCPixelFormat
// Entry Point: 00a9d84c
// Size: 408 bytes
// Signature: undefined __cdecl getASTCPixelFormat(FORMAT param_1, bool param_2, char * param_3)


/* PixelFormatUtil::getASTCPixelFormat(ImageDesc::FORMAT, bool, char const*) */

undefined4 PixelFormatUtil::getASTCPixelFormat(FORMAT param_1,bool param_2,char *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  switch(param_1) {
  case 0x1f:
    uVar2 = 0x3b;
    uVar3 = 0x48;
    break;
  case 0x20:
    uVar2 = 0x3c;
    uVar3 = 0x49;
    break;
  case 0x21:
    uVar2 = 0x3d;
    uVar3 = 0x4a;
    break;
  case 0x22:
    uVar2 = 0x3e;
    uVar3 = 0x4b;
    break;
  case 0x23:
    uVar2 = 0x3f;
    uVar3 = 0x4c;
    break;
  case 0x24:
    uVar2 = 0x40;
    uVar3 = 0x4d;
    break;
  case 0x25:
    uVar2 = 0x41;
    uVar3 = 0x4e;
    break;
  case 0x26:
    uVar2 = 0x42;
    uVar3 = 0x4f;
    break;
  case 0x27:
    uVar2 = 0x43;
    uVar3 = 0x50;
    break;
  case 0x28:
    uVar2 = 0x44;
    uVar3 = 0x51;
    break;
  case 0x29:
    uVar2 = 0x45;
    uVar3 = 0x52;
    break;
  case 0x2a:
    uVar2 = 0x46;
    uVar3 = 0x53;
    break;
  case 0x2b:
    uVar2 = 0x47;
    uVar3 = 0x54;
    break;
  default:
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0)) {
                    /* try { // try from 00a9d9ac to 00a9d9b7 has its CatchHandler @ 00a9d9e4 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "Error: Texture %s invalid 4-channel format %s.\n",param_3,
                       *(undefined8 *)(ImageUtil::s_formatNames + (ulong)param_1 * 8));
    return 0;
  }
  if (!param_2) {
    uVar3 = uVar2;
  }
  return uVar3;
}


