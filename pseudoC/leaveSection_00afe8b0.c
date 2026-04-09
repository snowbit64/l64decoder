// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: leaveSection
// Entry Point: 00afe8b0
// Size: 244 bytes
// Signature: undefined __thiscall leaveSection(GpuProfilerManager * this, PROFILE_SECTION param_1, ICommandBuffer * param_2)


/* GpuProfilerManager::leaveSection(GpuProfilerManager::PROFILE_SECTION, ICommandBuffer*) */

void __thiscall
GpuProfilerManager::leaveSection
          (GpuProfilerManager *this,PROFILE_SECTION param_1,ICommandBuffer *param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  if ((param_1 != 0x28) && (*(long *)(this + (ulong)param_1 * 0x78) != 0)) {
    if (param_1 != 0) {
      (**(code **)(*(long *)param_2 + 0xe0))(param_2);
    }
    if (this[0x1390] != (GpuProfilerManager)0x0) {
      uVar4 = (ulong)param_1;
      uVar3 = (ulong)*(uint *)(this + 0x13c0);
      if (this[0x13cc] == (GpuProfilerManager)0x0) {
        lVar2 = *(long *)(*(long *)(this + uVar3 * 0x18 + uVar4 * 0x78 + 0x20) +
                         (ulong)*(uint *)(this + uVar3 * 4 + uVar4 * 0x78 + 0x68) * 0x10);
      }
      else {
        lVar2 = *(long *)(*(long *)(this + uVar3 * 0x18 + uVar4 * 0x78 + 0x20) +
                          (ulong)*(uint *)(this + uVar3 * 4 + uVar4 * 0x78 + 0x68) * 0x10 + 8);
      }
      if (lVar2 != 0) {
        (**(code **)(*(long *)param_2 + 0x118))(param_2);
        uVar3 = (ulong)*(uint *)(this + 0x13c0);
      }
      lVar2 = uVar3 * 4 + uVar4 * 0x78;
      *(int *)(this + 0x13b8) = *(int *)(this + 0x13b8) + -1;
      iVar1 = *(int *)(this + lVar2 + 0x68);
      *(long *)(this + 0x13b0) = *(long *)(this + 0x13b0) + -4;
      *(int *)(this + lVar2 + 0x68) = iVar1 + 1;
    }
  }
  return;
}


