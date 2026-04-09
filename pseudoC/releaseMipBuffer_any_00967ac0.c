// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: releaseMipBuffer_any
// Entry Point: 00967ac0
// Size: 112 bytes
// Signature: undefined __thiscall releaseMipBuffer_any(UpgradePipeline * this, MipsBuffer param_1)


/* TextureStreamingManager::UpgradePipeline::releaseMipBuffer_any(TextureStreamingManager::UpgradePipeline::MipsBuffer)
    */

void __thiscall
TextureStreamingManager::UpgradePipeline::releaseMipBuffer_any
          (UpgradePipeline *this,MipsBuffer param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(ulong)param_1;
  Mutex::enterCriticalSection();
  if (puVar1[2] == *(long *)(this + 0x2a8)) {
    this[0x2a0] = (UpgradePipeline)0x0;
                    /* try { // try from 00967b18 to 00967b1f has its CatchHandler @ 00967b30 */
    Mutex::leaveCriticalSection();
  }
  else {
                    /* try { // try from 00967af4 to 00967afb has its CatchHandler @ 00967b34 */
    Mutex::leaveCriticalSection();
    if ((void *)puVar1[2] != (void *)0x0) {
      operator_delete__((void *)puVar1[2]);
    }
    puVar1[2] = 0;
    *puVar1 = 0;
  }
  return;
}


