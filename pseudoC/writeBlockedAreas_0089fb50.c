// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: writeBlockedAreas
// Entry Point: 0089fb50
// Size: 552 bytes
// Signature: undefined __thiscall writeBlockedAreas(TerrainDeformation * this, int param_1)


/* TerrainDeformation::writeBlockedAreas(int) */

void __thiscall TerrainDeformation::writeBlockedAreas(TerrainDeformation *this,int param_1)

{
  float *pfVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  DensityMapModifier aDStack_118 [16];
  ChunkedBitSquare *local_108;
  BitVector *local_100;
  uint local_f4;
  uint local_ec;
  ParallelogramHelper aPStack_e8 [72];
  uint local_a0;
  uint local_9c;
  uint local_90;
  uint local_8c;
  long local_88;
  
  lVar2 = tpidr_el0;
  local_88 = *(long *)(lVar2 + 0x28);
  if (this[0x118] == (TerrainDeformation)0x0) {
    if (((*(long *)(this + 0x60) != *(long *)(this + 0x68)) && (*(int *)(this + 0x50) != 0)) &&
       (*(DensityMap **)(this + 0xa8) != (DensityMap *)0x0)) {
      DensityMapModifier::DensityMapModifier(aDStack_118,*(DensityMap **)(this + 0xa8));
      pfVar6 = *(float **)(this + 0x60);
      pfVar1 = *(float **)(this + 0x68);
      if (pfVar6 != pfVar1) {
        do {
          if (*(char *)(pfVar6 + 0x10) != '\0') {
            fVar12 = pfVar6[2];
            fVar10 = pfVar6[3];
            fVar11 = pfVar6[5];
            fVar9 = pfVar6[6];
            fVar7 = *pfVar6;
            fVar8 = pfVar6[8];
                    /* try { // try from 0089fc58 to 0089fc9b has its CatchHandler @ 0089fd90 */
            uVar3 = (**(code **)(**(long **)(this + 0xa8) + 0x48))();
            uVar4 = (**(code **)(**(long **)(this + 0xa8) + 0x50))();
            ParallelogramHelper::ParallelogramHelper
                      (aPStack_e8,fVar7,fVar12,fVar10,fVar11,fVar9,fVar8,uVar3,uVar4,3);
            for (uVar3 = local_a0; uVar3 < local_9c; uVar3 = uVar3 + 1) {
                    /* try { // try from 0089fcb4 to 0089fcbf has its CatchHandler @ 0089fd94 */
              ParallelogramHelper::startXIteration(aPStack_e8,uVar3);
              for (uVar4 = local_90; uVar4 < local_8c; uVar4 = uVar4 + 1) {
                if (local_108 == (ChunkedBitSquare *)0x0) {
                    /* try { // try from 0089fcd4 to 0089fd1b has its CatchHandler @ 0089fd98 */
                  DensityMapAccessUtil::writeBits
                            (local_100,local_ec,local_f4,uVar4,uVar3,*(uint *)(this + 0xb4),1,
                             param_1 & 1U);
                }
                else {
                  ChunkedBitSquare::writeBits
                            (local_108,uVar4,uVar3,*(uint *)(this + 0xb4),1,param_1 & 1U);
                }
              }
            }
          }
          pfVar6 = pfVar6 + 0x12;
        } while (pfVar6 != pfVar1);
      }
      DensityMapModifier::~DensityMapModifier(aDStack_118);
    }
  }
  else {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar5 != 0)) {
                    /* try { // try from 0089fd3c to 0089fd47 has its CatchHandler @ 0089fd78 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "Terrain sculpt object is still working");
  }
  if (*(long *)(lVar2 + 0x28) == local_88) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


