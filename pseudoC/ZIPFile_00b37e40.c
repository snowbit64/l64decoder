// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ZIPFile
// Entry Point: 00b37e40
// Size: 480 bytes
// Signature: undefined __thiscall ZIPFile(ZIPFile * this, void * param_1, char * param_2, unz64_file_pos_s * param_3, ulonglong param_4)


/* ZIPFile::ZIPFile(void*, char const*, unz64_file_pos_s*, unsigned long long) */

void __thiscall
ZIPFile::ZIPFile(ZIPFile *this,void *param_1,char *param_2,unz64_file_pos_s *param_3,
                ulonglong param_4)

{
  long lVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  undefined uStack_d0;
  uint local_cf;
  byte local_c0;
  ulong local_98;
  byte local_68;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  MemoryBufferedFile::MemoryBufferedFile((MemoryBufferedFile *)this);
  *(ulonglong *)(this + 0x20) = param_4;
  *(undefined ***)this = &PTR__ZIPFile_00fe9a38;
  if (param_3 == (unz64_file_pos_s *)0x0) {
    iVar2 = unzLocateFile(param_1,param_2,1);
  }
  else {
                    /* try { // try from 00b37e94 to 00b37eb3 has its CatchHandler @ 00b38044 */
    iVar2 = unzGoToFilePos64(param_1,param_3);
  }
  if (iVar2 == 0) {
                    /* try { // try from 00b37ee0 to 00b37f03 has its CatchHandler @ 00b38040 */
    unzGetCurrentFileInfo64(param_1,&uStack_d0,0,0,0,0,0,0);
    if (((local_cf < 0xf) && ((1 << (ulong)(local_cf & 0x1f) & 0x4881U) != 0)) &&
       ((local_68 >> 1 & 1) != 0)) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0))
      {
                    /* try { // try from 00b37fe4 to 00b37fef has its CatchHandler @ 00b38020 */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
                    /* try { // try from 00b37fa4 to 00b37fbb has its CatchHandler @ 00b3803c */
      LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                         "Error: Hidden files are not allowed \'%s\'\n.",param_2);
    }
    else {
                    /* try { // try from 00b37f34 to 00b37f3b has its CatchHandler @ 00b3803c */
      if (((local_c0 & 1) == 0) && (iVar2 = unzOpenCurrentFile(param_1), iVar2 == 0)) {
                    /* try { // try from 00b37f48 to 00b37f4b has its CatchHandler @ 00b38034 */
        pvVar3 = operator_new__(local_98 & 0xffffffff);
                    /* try { // try from 00b37f50 to 00b37f5f has its CatchHandler @ 00b38038 */
        iVar2 = unzReadCurrentFile(param_1,pvVar3,local_98 & 0xffffffff);
        iVar4 = (int)local_98;
        if (iVar2 == iVar4) {
          if ((*(void **)(this + 8) != (void *)0x0) && (this[0x10] != (ZIPFile)0x0)) {
            operator_delete__(*(void **)(this + 8));
          }
          *(void **)(this + 8) = pvVar3;
          *(int *)(this + 0x14) = iVar4;
          *(undefined4 *)(this + 0x18) = 0;
          *(int *)(this + 0x1c) = iVar4;
          this[0x10] = (ZIPFile)0x1;
        }
        else {
          operator_delete__(pvVar3);
        }
                    /* try { // try from 00b37fc8 to 00b37fcf has its CatchHandler @ 00b38038 */
        unzCloseCurrentFile(param_1);
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


