// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: issueTasksToThreadPool
// Entry Point: 00a0dba4
// Size: 96 bytes
// Signature: undefined __thiscall issueTasksToThreadPool(EnvFilterJob * this, ThreadPoolTaskManager * param_1)


/* IndirectLightRenderController::EnvFilterJob::issueTasksToThreadPool(ThreadPoolTaskManager*) */

void __thiscall
IndirectLightRenderController::EnvFilterJob::issueTasksToThreadPool
          (EnvFilterJob *this,ThreadPoolTaskManager *param_1)

{
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined8 *)(this + 0xf0) = *(undefined8 *)(this + 0x148);
  *(undefined8 *)(this + 0xf8) = *(undefined8 *)(this + 0x140);
  *(undefined8 *)(this + 0x38) = *(undefined8 *)(this + 0x110);
  *(undefined8 *)(this + 0x30) = *(undefined8 *)(this + 0x108);
  *(undefined8 *)(this + 0x48) = *(undefined8 *)(this + 0x120);
  *(undefined8 *)(this + 0x40) = *(undefined8 *)(this + 0x118);
  *(undefined8 *)(this + 0x58) = *(undefined8 *)(this + 0x130);
  *(undefined8 *)(this + 0x50) = *(undefined8 *)(this + 0x128);
  *(undefined8 *)(this + 0x60) = *(undefined8 *)(this + 0x138);
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 0xc0) = 0;
  *(undefined8 *)(this + 0xb8) = 0;
  *(undefined8 *)(this + 0xd0) = 0;
  *(undefined8 *)(this + 200) = 0;
  *(undefined8 *)(this + 0xdc) = 0;
  *(undefined8 *)(this + 0xd4) = 0;
  ThreadPoolTaskManager::issueTask(param_1,(Task *)(this + 8));
  return;
}


