// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: kickOccluderRendering
// Entry Point: 00a18a04
// Size: 124 bytes
// Signature: undefined __thiscall kickOccluderRendering(RenderList * this, ThreadPool * param_1, float * param_2, float * param_3, float * param_4)


/* RenderList::kickOccluderRendering(ThreadPool*, float const*, float const*, float const*) */

void __thiscall
RenderList::kickOccluderRendering
          (RenderList *this,ThreadPool *param_1,float *param_2,float *param_3,float *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  if (param_1 == (ThreadPool *)0x0) {
    occluderRendering(this,param_2,param_3,param_4);
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 8);
    uVar2 = *(undefined8 *)(param_2 + 0xe);
    uVar1 = *(undefined8 *)(param_2 + 0xc);
    uVar7 = *(undefined8 *)(param_2 + 2);
    uVar6 = *(undefined8 *)param_2;
    uVar5 = *(undefined8 *)(param_2 + 6);
    uVar4 = *(undefined8 *)(param_2 + 4);
    *(undefined8 *)(this + 0x208) = *(undefined8 *)(param_2 + 10);
    *(undefined8 *)(this + 0x200) = uVar3;
    *(undefined8 *)(this + 0x218) = uVar2;
    *(undefined8 *)(this + 0x210) = uVar1;
    *(undefined8 *)(this + 0x1e8) = uVar7;
    *(undefined8 *)(this + 0x1e0) = uVar6;
    *(undefined8 *)(this + 0x1f8) = uVar5;
    *(undefined8 *)(this + 0x1f0) = uVar4;
    uVar3 = *(undefined8 *)(param_3 + 8);
    uVar2 = *(undefined8 *)(param_3 + 0xe);
    uVar1 = *(undefined8 *)(param_3 + 0xc);
    uVar7 = *(undefined8 *)(param_3 + 2);
    uVar6 = *(undefined8 *)param_3;
    uVar5 = *(undefined8 *)(param_3 + 6);
    uVar4 = *(undefined8 *)(param_3 + 4);
    *(undefined8 *)(this + 0x248) = *(undefined8 *)(param_3 + 10);
    *(undefined8 *)(this + 0x240) = uVar3;
    *(undefined8 *)(this + 600) = uVar2;
    *(undefined8 *)(this + 0x250) = uVar1;
    *(undefined8 *)(this + 0x228) = uVar7;
    *(undefined8 *)(this + 0x220) = uVar6;
    *(undefined8 *)(this + 0x238) = uVar5;
    *(undefined8 *)(this + 0x230) = uVar4;
    uVar1 = *(undefined8 *)(param_4 + 8);
    uVar3 = *(undefined8 *)(param_4 + 0xe);
    uVar2 = *(undefined8 *)(param_4 + 0xc);
    uVar5 = *(undefined8 *)(param_4 + 2);
    uVar4 = *(undefined8 *)param_4;
    uVar7 = *(undefined8 *)(param_4 + 6);
    uVar6 = *(undefined8 *)(param_4 + 4);
    *(undefined8 *)(this + 0x288) = *(undefined8 *)(param_4 + 10);
    *(undefined8 *)(this + 0x280) = uVar1;
    *(undefined8 *)(this + 0x298) = uVar3;
    *(undefined8 *)(this + 0x290) = uVar2;
    *(undefined8 *)(this + 0x268) = uVar5;
    *(undefined8 *)(this + 0x260) = uVar4;
    *(undefined8 *)(this + 0x278) = uVar7;
    *(undefined8 *)(this + 0x270) = uVar6;
    ThreadPoolTaskManager::issueTask((ThreadPoolTaskManager *)(this + 0x140),(Task *)(this + 0x1b8))
    ;
  }
  this[0x10] = (RenderList)0x1;
  return;
}


