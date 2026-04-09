// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b1b80
// Entry Point: 007b1b80
// Size: 464 bytes
// Signature: undefined FUN_007b1b80(void)


void FUN_007b1b80(DensityMapSyncer *param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  EntityRegistryManager *this;
  long lVar3;
  undefined8 *puVar4;
  size_t __n;
  Logger *this_00;
  ulong uVar5;
  DensityMap **ppDVar6;
  DensityMap *pDVar7;
  void *__dest;
  char *__s;
  undefined8 uVar8;
  
  uVar1 = *param_2;
  this = (EntityRegistryManager *)EntityRegistryManager::getInstance();
  lVar3 = EntityRegistryManager::getEntityById(this,uVar1);
  if ((lVar3 == 0) || (uVar5 = *(ulong *)(lVar3 + 0x10), (uVar5 & 0xa00000000100) == 0)) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0)) {
                    /* try { // try from 007b1d08 to 007b1d0f has its CatchHandler @ 007b1d60 */
      this_00 = (Logger *)operator_new(0x38);
                    /* try { // try from 007b1d14 to 007b1d17 has its CatchHandler @ 007b1d50 */
      Logger::Logger(this_00);
      LogManager::getInstance()::singletonLogManager = this_00;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "Error: Invalid density map syncer density map with id %u.\n",(ulong)uVar1);
    return;
  }
  if ((uVar5 >> 0x2f & 1) == 0) {
    if (((uint)uVar5 >> 8 & 1) == 0) {
      ppDVar6 = (DensityMap **)(lVar3 + 0x20);
    }
    else {
      ppDVar6 = (DensityMap **)(lVar3 + 0x218);
    }
  }
  else {
    ppDVar6 = (DensityMap **)(lVar3 + 0x50);
  }
  if (param_2[10] == 8) {
    uVar8 = *(undefined8 *)(param_2 + 8);
  }
  else {
    uVar8 = 0;
  }
  pDVar7 = *ppDVar6;
  puVar4 = (undefined8 *)operator_new(0x28);
  __s = *(char **)(param_2 + 4);
  *puVar4 = &PTR__DensityMapSyncerCallback_00fdb9a0;
  __n = strlen(__s);
  if (0xffffffffffffffef < __n) {
                    /* try { // try from 007b1d48 to 007b1d4f has its CatchHandler @ 007b1d78 */
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (void *)((long)puVar4 + 9);
    *(char *)(puVar4 + 1) = (char)((int)__n << 1);
    if (__n == 0) goto LAB_007b1cc4;
  }
  else {
    uVar5 = __n + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 007b1c9c to 007b1ca3 has its CatchHandler @ 007b1d78 */
    __dest = operator_new(uVar5);
    puVar4[2] = __n;
    puVar4[3] = __dest;
    puVar4[1] = uVar5 | 1;
  }
  memcpy(__dest,__s,__n);
LAB_007b1cc4:
  *(undefined *)((long)__dest + __n) = 0;
  puVar4[4] = uVar8;
  DensityMapSyncer::setCellChangedCallback(param_1,pDVar7,uVar1,(ICellChangedCallback *)puVar4);
  return;
}


