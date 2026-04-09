// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: acquireMipsBuffer_async
// Entry Point: 0096ec60
// Size: 216 bytes
// Signature: undefined __thiscall acquireMipsBuffer_async(UpgradePipeline * this, uint param_1, MipsBuffer * param_2)


/* TextureStreamingManager::UpgradePipeline::acquireMipsBuffer_async(unsigned int,
   TextureStreamingManager::UpgradePipeline::MipsBuffer&) */

undefined8 __thiscall
TextureStreamingManager::UpgradePipeline::acquireMipsBuffer_async
          (UpgradePipeline *this,uint param_1,MipsBuffer *param_2)

{
  uint uVar1;
  long lVar2;
  void *pvVar3;
  long lVar4;
  
  lVar2 = tpidr_el0;
  lVar4 = *(long *)(lVar2 + 0x28);
  Mutex::enterCriticalSection();
  uVar1 = *(uint *)(this + 0x2a4);
  pvVar3 = *(void **)(this + 0x2a8);
  if (uVar1 < param_1) {
    if (pvVar3 != (void *)0x0) {
      operator_delete__(pvVar3);
    }
    *(uint *)(this + 0x2a4) = param_1;
                    /* try { // try from 0096eccc to 0096ecd3 has its CatchHandler @ 0096ed38 */
    pvVar3 = operator_new__((ulong)param_1);
    *(void **)(this + 0x2a8) = pvVar3;
    uVar1 = param_1;
    DAT_0210ee80 = (ulong)param_1;
  }
  *(void **)(param_2 + 4) = pvVar3;
  param_2[1] = uVar1;
  param_2[2] = uVar1;
  this[0x2a0] = (UpgradePipeline)0x1;
                    /* try { // try from 0096ecfc to 0096ed03 has its CatchHandler @ 0096ed4c */
  Mutex::leaveCriticalSection();
  if (*(long *)(lVar2 + 0x28) != lVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 1;
}


