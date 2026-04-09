// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getContext
// Entry Point: 0098d488
// Size: 136 bytes
// Signature: undefined getContext(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* ScenegraphPhysicsContextManager::getContext() */

Bt2ScenegraphPhysicsContext * ScenegraphPhysicsContextManager::getContext(void)

{
  Bt2ScenegraphPhysicsContext **in_x0;
  StatsOverlayManager *pSVar1;
  Bt2ScenegraphPhysicsContext *this;
  Bt2PhysicsStats *pBVar2;
  
  this = *in_x0;
  if (this == (Bt2ScenegraphPhysicsContext *)0x0) {
    pBVar2 = (Bt2PhysicsStats *)in_x0[2];
    if (pBVar2 == (Bt2PhysicsStats *)0x0) {
      pBVar2 = (Bt2PhysicsStats *)operator_new(0x120);
                    /* try { // try from 0098d4b8 to 0098d4bb has its CatchHandler @ 0098d510 */
      Bt2PhysicsStats::Bt2PhysicsStats(pBVar2);
      in_x0[2] = (Bt2ScenegraphPhysicsContext *)pBVar2;
      pSVar1 = (StatsOverlayManager *)StatsOverlayManager::getInstance();
      StatsOverlayManager::addStatsOverlay(pSVar1,(StatsOverlay *)in_x0[2],0);
      pSVar1 = (StatsOverlayManager *)StatsOverlayManager::getInstance();
      StatsOverlayManager::addStatsOverlay(pSVar1,(StatsOverlay *)in_x0[2],1);
      pBVar2 = (Bt2PhysicsStats *)in_x0[2];
    }
    this = (Bt2ScenegraphPhysicsContext *)operator_new(0x5d8);
                    /* try { // try from 0098d4f0 to 0098d4f7 has its CatchHandler @ 0098d514 */
    Bt2ScenegraphPhysicsContext::Bt2ScenegraphPhysicsContext(this,pBVar2);
    *in_x0 = this;
  }
  return this;
}


