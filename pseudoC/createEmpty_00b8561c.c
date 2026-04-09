// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createEmpty
// Entry Point: 00b8561c
// Size: 348 bytes
// Signature: undefined __thiscall createEmpty(DensityMap * this, uint param_1, uint param_2, bool param_3)


/* DensityMap::createEmpty(unsigned int, unsigned int, bool) */

undefined8 __thiscall
DensityMap::createEmpty(DensityMap *this,uint param_1,uint param_2,bool param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  ChunkedBitSquare *this_00;
  UpdateManager *this_01;
  BitVector *this_02;
  
  if (this[0x20] == (DensityMap)0x0) {
    if (this[0x90] == (DensityMap)0x0) {
      this_02 = (BitVector *)operator_new(0x10);
                    /* try { // try from 00b856d8 to 00b856e3 has its CatchHandler @ 00b8579c */
      BitVector::BitVector(this_02,param_2 * param_1 * *(int *)(this + 0xc4),true,param_3);
      *(BitVector **)(this + 0xa0) = this_02;
      *(uint *)(this + 0xd4) = param_1;
      *(uint *)(this + 0xd8) = param_2;
    }
    else {
      if (param_1 != param_2) {
        if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
           (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0
           )) {
                    /* try { // try from 00b85740 to 00b8574b has its CatchHandler @ 00b85778 */
          LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
          __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                       &PTR_LOOP_00fd8de0);
          __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
        }
        LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                           "DensityMap: ChunkedBitSquare format requires square dimensions.\n");
        goto LAB_00b85638;
      }
      this_00 = (ChunkedBitSquare *)operator_new(0xa8);
                    /* try { // try from 00b85678 to 00b8567b has its CatchHandler @ 00b85790 */
      ChunkedBitSquare::ChunkedBitSquare
                (this_00,*(uint *)(this + 0xc4),*(uint *)(this + 0xa8),(uint *)(this + 0xac));
      *(ChunkedBitSquare **)(this + 0x98) = this_00;
      ChunkedBitSquare::initializeEmpty(this_00,param_1,param_3);
      uVar1 = *(undefined4 *)(*(long *)(this + 0x98) + 0x18);
      *(undefined4 *)(this + 0xd4) = uVar1;
      *(undefined4 *)(this + 0xd8) = uVar1;
      if (this[0x104] == (DensityMap)0x0) {
        this[0x104] = (DensityMap)0x1;
        this_01 = (UpdateManager *)UpdateManager::getInstance();
        UpdateManager::addUpdateable(this_01,(Updateable *)(this + 0x48),false);
      }
    }
    uVar3 = 1;
    this[0x20] = (DensityMap)0x1;
  }
  else {
LAB_00b85638:
    uVar3 = 0;
  }
  return uVar3;
}


