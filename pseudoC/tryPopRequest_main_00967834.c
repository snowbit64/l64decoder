// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: tryPopRequest_main
// Entry Point: 00967834
// Size: 212 bytes
// Signature: undefined __thiscall tryPopRequest_main(UpgradePipeline * this, WorkerResult * param_1)


/* TextureStreamingManager::UpgradePipeline::tryPopRequest_main(TextureStreamingManager::UpgradePipeline::WorkerResult&)
    */

bool __thiscall
TextureStreamingManager::UpgradePipeline::tryPopRequest_main
          (UpgradePipeline *this,WorkerResult *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  Mutex::enterCriticalSection();
  lVar3 = *(long *)(this + 0xb8);
  if (lVar3 != 0) {
    puVar1 = (undefined8 *)
             (*(long *)(*(long *)(this + 0x98) + (*(ulong *)(this + 0xb0) / 0x66) * 8) +
             (*(ulong *)(this + 0xb0) % 0x66) * 0x28);
    uVar7 = *puVar1;
    uVar6 = puVar1[3];
    uVar4 = puVar1[2];
    uVar2 = puVar1[4];
    *(undefined8 *)(param_1 + 8) = puVar1[1];
    *(undefined8 *)param_1 = uVar7;
    *(undefined8 *)(param_1 + 0x18) = uVar6;
    *(undefined8 *)(param_1 + 0x10) = uVar4;
    *(undefined8 *)(param_1 + 0x20) = uVar2;
    lVar5 = *(long *)(this + 0xb0);
    *(long *)(this + 0xb8) = *(long *)(this + 0xb8) + -1;
    *(ulong *)(this + 0xb0) = lVar5 + 1U;
    if (0xcb < lVar5 + 1U) {
      operator_delete(**(void ***)(this + 0x98));
      *(long *)(this + 0x98) = *(long *)(this + 0x98) + 8;
      *(long *)(this + 0xb0) = *(long *)(this + 0xb0) + -0x66;
    }
  }
                    /* try { // try from 009678e8 to 009678ef has its CatchHandler @ 00967908 */
  Mutex::leaveCriticalSection();
  return lVar3 != 0;
}


