// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: enableCellChangedCallbackForCell
// Entry Point: 00858be4
// Size: 300 bytes
// Signature: undefined __thiscall enableCellChangedCallbackForCell(DensityMapSyncer * this, DensityMap * param_1, uint param_2, uint param_3, bool param_4)


/* DensityMapSyncer::enableCellChangedCallbackForCell(DensityMap*, unsigned int, unsigned int, bool)
    */

void __thiscall
DensityMapSyncer::enableCellChangedCallbackForCell
          (DensityMapSyncer *this,DensityMap *param_1,uint param_2,uint param_3,bool param_4)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  Logger *this_00;
  int *piVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  
  uVar6 = (*(long *)(this + 0x30) - *(long *)(this + 0x28) >> 4) * -0x5555555555555555;
  if ((int)uVar6 != 0) {
    uVar6 = uVar6 & 0xffffffff;
    piVar5 = (int *)(*(long *)(this + 0x28) + 0xc);
    do {
      if (*(DensityMap **)(piVar5 + -3) == param_1) {
        plVar7 = *(long **)(piVar5 + 3);
        if (plVar7 == (long *)0x0) {
          return;
        }
        uVar1 = param_2 + *piVar5 * param_3;
        uVar6 = (ulong)(uVar1 >> 3) & 0xffff;
        lVar8 = (ulong)(uVar1 >> 0x13) * 8;
        lVar9 = *(long *)(*plVar7 + lVar8);
        bVar3 = (byte)(1 << (ulong)(uVar1 & 7));
        bVar2 = bVar3 ^ 0xff;
        if (!param_4) {
          bVar3 = 0;
        }
        *(byte *)(lVar9 + uVar6) = *(byte *)(lVar9 + uVar6) & bVar2;
        lVar8 = *(long *)(*plVar7 + lVar8);
        *(byte *)(lVar8 + uVar6) = *(byte *)(lVar8 + uVar6) | bVar3;
        return;
      }
      piVar5 = piVar5 + 0xc;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar4 != 0)) {
                    /* try { // try from 00858cd0 to 00858cd7 has its CatchHandler @ 00858d20 */
    this_00 = (Logger *)operator_new(0x38);
                    /* try { // try from 00858cdc to 00858cdf has its CatchHandler @ 00858d10 */
    Logger::Logger(this_00);
    LogManager::getInstance()::singletonLogManager = this_00;
    __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
  }
  LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                     "DensityMap %p is not found in the syncer\n",param_1);
  return;
}


