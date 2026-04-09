// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: loadImageHeader
// Entry Point: 00a7bcc0
// Size: 360 bytes
// Signature: undefined __cdecl loadImageHeader(char * param_1, ORIGIN param_2, ImageDesc * param_3, bool * param_4, ulonglong * param_5)


/* DDSUtil::loadImageHeader(char const*, ImageDesc::ORIGIN, ImageDesc&, bool&, unsigned long long&)
    */

uint DDSUtil::loadImageHeader
               (char *param_1,ORIGIN param_2,ImageDesc *param_3,bool *param_4,ulonglong *param_5)

{
  long lVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  ulonglong uVar6;
  DDSHeaderDX10 aDStack_f0 [24];
  File *local_d8 [2];
  DDSHeader aDStack_c8 [28];
  int local_ac;
  uint local_a4;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FileReader::FileReader((FileReader *)local_d8,param_1);
                    /* try { // try from 00a7bd04 to 00a7bd0b has its CatchHandler @ 00a7be40 */
  uVar5 = FileReader::isValid();
  if ((uVar5 & 1) == 0) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar4 != 0)) {
                    /* try { // try from 00a7bdec to 00a7bdf7 has its CatchHandler @ 00a7be28 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
                    /* try { // try from 00a7bd8c to 00a7bda3 has its CatchHandler @ 00a7be40 */
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "Error: Missing dds file \'%s\'\n",param_1);
    uVar3 = 0;
  }
  else {
                    /* try { // try from 00a7bd14 to 00a7bd6b has its CatchHandler @ 00a7be3c */
    uVar3 = readHeader(local_d8[0],param_2,aDStack_c8,aDStack_f0,param_3,param_1);
    if ((uVar3 & 1) != 0) {
      local_a4 = local_a4 & 1;
      if (local_ac != 0x288ae8d9) {
        local_a4 = 0;
      }
      bVar2 = ImageUtil::getNeedFlipY
                        (*(ORIGIN *)(param_3 + 0x44),local_a4,*(TEXTURE_TYPE *)(param_3 + 0x1c));
      *param_4 = (bool)(bVar2 & 1);
      uVar6 = FileReader::getPosition();
      *param_5 = uVar6;
      *(undefined4 *)(param_3 + 0x20) = 0;
      *(undefined8 *)(param_3 + 0x28) = 0;
    }
  }
  FileReader::~FileReader((FileReader *)local_d8);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return uVar3 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


