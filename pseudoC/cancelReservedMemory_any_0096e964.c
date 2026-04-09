// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: cancelReservedMemory_any
// Entry Point: 0096e964
// Size: 120 bytes
// Signature: undefined __thiscall cancelReservedMemory_any(UpgradePipeline * this, MipsBuffer param_1)


/* TextureStreamingManager::UpgradePipeline::cancelReservedMemory_any(TextureStreamingManager::UpgradePipeline::MipsBuffer)
    */

void __thiscall
TextureStreamingManager::UpgradePipeline::cancelReservedMemory_any
          (UpgradePipeline *this,MipsBuffer param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  Mutex::enterCriticalSection();
                    /* try { // try from 0096e9a0 to 0096e9ab has its CatchHandler @ 0096e9e0 */
  FUN_0096e9f4(this + 0x200,param_1);
                    /* try { // try from 0096e9ac to 0096e9b3 has its CatchHandler @ 0096e9dc */
  Mutex::leaveCriticalSection();
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


