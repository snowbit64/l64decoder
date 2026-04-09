// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setCellChangedCallback
// Entry Point: 00858a7c
// Size: 316 bytes
// Signature: undefined __thiscall setCellChangedCallback(DensityMapSyncer * this, DensityMap * param_1, uint param_2, ICellChangedCallback * param_3)


/* DensityMapSyncer::setCellChangedCallback(DensityMap*, unsigned int,
   DensityMapSyncer::ICellChangedCallback*) */

void __thiscall
DensityMapSyncer::setCellChangedCallback
          (DensityMapSyncer *this,DensityMap *param_1,uint param_2,ICellChangedCallback *param_3)

{
  int iVar1;
  ulong uVar2;
  BitVector *pBVar3;
  BitVector **ppBVar4;
  
  uVar2 = (*(long *)(this + 0x30) - *(long *)(this + 0x28) >> 4) * -0x5555555555555555;
  if ((int)uVar2 != 0) {
    uVar2 = uVar2 & 0xffffffff;
    ppBVar4 = (BitVector **)(*(long *)(this + 0x28) + 0x18);
    do {
      if (ppBVar4[-3] == (BitVector *)param_1) {
        pBVar3 = *ppBVar4;
        if (pBVar3 != (BitVector *)0x0) {
          BitVector::~BitVector(pBVar3);
          operator_delete(pBVar3);
        }
        if ((long *)ppBVar4[1] != (long *)0x0) {
          (**(code **)(*(long *)ppBVar4[1] + 8))();
        }
        if (param_3 != (ICellChangedCallback *)0x0) {
          pBVar3 = (BitVector *)operator_new(0x10);
                    /* try { // try from 00858b40 to 00858b4b has its CatchHandler @ 00858bd0 */
          BitVector::BitVector(pBVar3,*(uint *)(ppBVar4 + -2),true,false);
          *ppBVar4 = pBVar3;
          ppBVar4[1] = (BitVector *)param_3;
          *(uint *)(ppBVar4 + 2) = param_2;
          return;
        }
        *ppBVar4 = (BitVector *)0x0;
        ppBVar4[1] = (BitVector *)0x0;
        *(undefined4 *)(ppBVar4 + 2) = 0;
        return;
      }
      ppBVar4 = ppBVar4 + 6;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0)) {
                    /* try { // try from 00858b80 to 00858b8b has its CatchHandler @ 00858bb8 */
    LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
    __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
  }
  LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                     "DensityMap %p is not found in the syncer\n",param_1);
  return;
}


