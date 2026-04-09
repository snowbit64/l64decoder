// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: loadImageHeader
// Entry Point: 00a918c8
// Size: 368 bytes
// Signature: undefined __cdecl loadImageHeader(char * param_1, ORIGIN param_2, ImageDesc * param_3, bool * param_4, ulonglong * param_5)


/* GS2DUtil::loadImageHeader(char const*, ImageDesc::ORIGIN, ImageDesc&, bool&, unsigned long long&)
    */

uint GS2DUtil::loadImageHeader
               (char *param_1,ORIGIN param_2,ImageDesc *param_3,bool *param_4,ulonglong *param_5)

{
  long lVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  ulonglong uVar6;
  uint local_a4;
  File *local_a0 [2];
  GS2DHeader aGStack_90 [64];
  int local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FileReader::FileReader((FileReader *)local_a0,param_1);
                    /* try { // try from 00a9190c to 00a91913 has its CatchHandler @ 00a91a54 */
  uVar5 = FileReader::isValid();
  if ((uVar5 & 1) == 0) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar4 != 0)) {
                    /* try { // try from 00a919fc to 00a91a07 has its CatchHandler @ 00a91a38 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
                    /* try { // try from 00a9199c to 00a919b3 has its CatchHandler @ 00a91a54 */
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "Error: Missing gs2d file \'%s\'\n",param_1);
  }
  else {
                    /* try { // try from 00a9191c to 00a91927 has its CatchHandler @ 00a91a50 */
    uVar5 = readHeader(local_a0[0],aGStack_90,param_1);
    if ((uVar5 & 1) != 0) {
      local_a4 = 0;
                    /* try { // try from 00a91930 to 00a9197b has its CatchHandler @ 00a91a4c */
      uVar3 = buildDesc(aGStack_90,param_2,param_3,param_1,&local_a4,false);
      if ((uVar3 & 1) != 0) {
        bVar2 = ImageUtil::getNeedFlipY
                          (*(ORIGIN *)(param_3 + 0x44),(uint)(local_50 != 0),
                           *(TEXTURE_TYPE *)(param_3 + 0x1c));
        *param_4 = (bool)(bVar2 & 1);
        uVar6 = FileReader::getPosition();
        *param_5 = uVar6;
        *(undefined4 *)(param_3 + 0x20) = 0;
        *(undefined8 *)(param_3 + 0x28) = 0;
      }
      goto LAB_00a919b8;
    }
  }
  uVar3 = 0;
LAB_00a919b8:
  FileReader::~FileReader((FileReader *)local_a0);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return uVar3 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


