// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: issueTasksToThreadPool
// Entry Point: 00a20c5c
// Size: 548 bytes
// Signature: undefined __thiscall issueTasksToThreadPool(RenderQueue * this, ThreadPoolTaskManager * param_1)


/* RenderQueue::issueTasksToThreadPool(ThreadPoolTaskManager*) */

void __thiscall
RenderQueue::issueTasksToThreadPool(RenderQueue *this,ThreadPoolTaskManager *param_1)

{
  uint uVar1;
  ShadowBufferRenderTask *this_00;
  ITextureObject *pIVar2;
  undefined8 uVar3;
  Task *pTVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ShadowBufferRenderController *pSVar8;
  ulong uVar9;
  long lVar10;
  
  lVar10 = *(long *)(this + 0x38);
  if (*(long *)(this + 0x40) != lVar10) {
    uVar9 = 0;
    do {
      uVar1 = *(uint *)(lVar10 + uVar9 * 0x2c0);
      if (uVar1 < 2) {
        lVar6 = lVar10 + uVar9 * 0x2c0;
        *(uint *)(lVar6 + 0x144) = uVar1;
        *(undefined8 *)(lVar6 + 0x2a8) = 0;
        *(undefined8 *)(lVar6 + 0x1f0) = *(undefined8 *)(lVar6 + 0xb0);
        *(undefined8 *)(lVar6 + 0x1e8) = *(undefined8 *)(lVar6 + 0xa8);
        *(undefined8 *)(lVar6 + 0x200) = *(undefined8 *)(lVar6 + 0xc0);
        *(undefined8 *)(lVar6 + 0x1f8) = *(undefined8 *)(lVar6 + 0xb8);
        *(undefined8 *)(lVar6 + 0x210) = *(undefined8 *)(lVar6 + 0xd0);
        *(undefined8 *)(lVar6 + 0x208) = *(undefined8 *)(lVar6 + 200);
        *(undefined8 *)(lVar6 + 0x1b0) = *(undefined8 *)(lVar6 + 0x70);
        *(undefined8 *)(lVar6 + 0x1a8) = *(undefined8 *)(lVar6 + 0x68);
        *(undefined8 *)(lVar6 + 0x1c0) = *(undefined8 *)(lVar6 + 0x80);
        *(undefined8 *)(lVar6 + 0x1b8) = *(undefined8 *)(lVar6 + 0x78);
        *(undefined8 *)(lVar6 + 0x1d0) = *(undefined8 *)(lVar6 + 0x90);
        *(undefined8 *)(lVar6 + 0x1c8) = *(undefined8 *)(lVar6 + 0x88);
        *(undefined8 *)(lVar6 + 0x1e0) = *(undefined8 *)(lVar6 + 0xa0);
        *(undefined8 *)(lVar6 + 0x1d8) = *(undefined8 *)(lVar6 + 0x98);
        *(undefined8 *)(lVar6 + 0x170) = *(undefined8 *)(lVar6 + 0x30);
        *(undefined8 *)(lVar6 + 0x168) = *(undefined8 *)(lVar6 + 0x28);
        *(undefined8 *)(lVar6 + 0x180) = *(undefined8 *)(lVar6 + 0x40);
        *(undefined8 *)(lVar6 + 0x178) = *(undefined8 *)(lVar6 + 0x38);
        *(undefined8 *)(lVar6 + 400) = *(undefined8 *)(lVar6 + 0x50);
        *(undefined8 *)(lVar6 + 0x188) = *(undefined8 *)(lVar6 + 0x48);
        *(undefined8 *)(lVar6 + 0x1a0) = *(undefined8 *)(lVar6 + 0x60);
        *(undefined8 *)(lVar6 + 0x198) = *(undefined8 *)(lVar6 + 0x58);
        *(undefined8 *)(lVar6 + 0x160) = *(undefined8 *)(lVar6 + 0x20);
        *(undefined8 *)(lVar6 + 0x158) = *(undefined8 *)(lVar6 + 0x18);
        *(undefined8 *)(lVar6 + 0x138) = *(undefined8 *)(lVar6 + 8);
        *(undefined4 *)(lVar6 + 0x140) = *(undefined4 *)(lVar6 + 0x10);
        *(undefined8 *)(lVar6 + 0x220) = *(undefined8 *)(lVar6 + 0xe0);
        *(undefined8 *)(lVar6 + 0x218) = *(undefined8 *)(lVar6 + 0xd8);
        *(undefined8 *)(lVar6 + 0x230) = 0;
        *(undefined8 *)(lVar6 + 0x228) = 0;
        *(undefined8 *)(lVar6 + 0x240) = 0;
        *(undefined8 *)(lVar6 + 0x238) = 0;
        *(undefined8 *)(lVar6 + 0x250) = 0;
        *(undefined8 *)(lVar6 + 0x248) = 0;
        *(undefined8 *)(lVar6 + 0x260) = 0;
        *(undefined8 *)(lVar6 + 600) = 0;
        lVar7 = lVar6 + 0xf9;
        if ((*(byte *)(lVar6 + 0xf8) & 1) != 0) {
          lVar7 = *(long *)(lVar6 + 0x108);
        }
        *(undefined8 *)(lVar6 + 0x270) = 0;
        *(undefined8 *)(lVar6 + 0x268) = 0;
        *(undefined8 *)(lVar6 + 0x280) = 0;
        *(undefined8 *)(lVar6 + 0x278) = 0;
        *(undefined8 *)(lVar6 + 0x290) = 0;
        *(undefined8 *)(lVar6 + 0x288) = 0;
        *(undefined8 *)(lVar6 + 0x29c) = 0;
        *(undefined8 *)(lVar6 + 0x294) = 0;
        uVar3 = *(undefined8 *)this;
        *(long *)(lVar6 + 0x148) = lVar7;
        *(RenderQueue **)(lVar6 + 0x150) = this;
        *(undefined8 *)(lVar6 + 0x2b0) = uVar3;
        ThreadPoolTaskManager::issueTask(param_1,(Task *)(lVar6 + 0x110));
      }
      else if (uVar1 == 2) {
        this_00 = (ShadowBufferRenderTask *)operator_new(0x50);
        pSVar8 = *(ShadowBufferRenderController **)(*(long *)(this + 0x28) + 0x568);
                    /* try { // try from 00a20e20 to 00a20e43 has its CatchHandler @ 00a20e80 */
        pIVar2 = (ITextureObject *)RenderController::getShadowMap();
        ShadowBufferRenderController::ShadowBufferRenderTask::ShadowBufferRenderTask
                  (this_00,pSVar8,pIVar2,*(ITextureObject **)(lVar10 + uVar9 * 0x2c0 + 0x38),
                   *(IStructBuffer **)(*(long *)(this + 0x20) + 0x58));
        *(ShadowBufferRenderTask **)(lVar10 + uVar9 * 0x2c0 + 0x2b8) = this_00;
      }
      else if (uVar1 == 3) {
        lVar7 = lVar10 + uVar9 * 0x2c0;
        uVar3 = *(undefined8 *)(lVar7 + 0x38);
        uVar3 = (**(code **)(**(long **)(*(long *)(this + 0x28) + 0x570) + 0x10))
                          (*(long **)(*(long *)(this + 0x28) + 0x570),uVar3,uVar3);
        *(undefined8 *)(lVar7 + 0x2b8) = uVar3;
      }
      pTVar4 = *(Task **)(lVar10 + uVar9 * 0x2c0 + 0x2b8);
      if (pTVar4 != (Task *)0x0) {
        ThreadPoolTaskManager::issueTask(param_1,pTVar4);
      }
      lVar10 = *(long *)(this + 0x38);
      uVar9 = (ulong)((int)uVar9 + 1);
      uVar5 = (*(long *)(this + 0x40) - lVar10 >> 6) * 0x2e8ba2e8ba2e8ba3;
    } while (uVar9 <= uVar5 && uVar5 - uVar9 != 0);
  }
  return;
}


