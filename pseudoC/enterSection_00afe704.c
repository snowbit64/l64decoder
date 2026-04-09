// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: enterSection
// Entry Point: 00afe704
// Size: 428 bytes
// Signature: undefined __thiscall enterSection(GpuProfilerManager * this, PROFILE_SECTION param_1, ICommandBuffer * param_2)


/* GpuProfilerManager::enterSection(GpuProfilerManager::PROFILE_SECTION, ICommandBuffer*) */

void __thiscall
GpuProfilerManager::enterSection
          (GpuProfilerManager *this,PROFILE_SECTION param_1,ICommandBuffer *param_2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  int *piVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  
  if ((param_1 != 0x28) && (*(long *)(this + (ulong)param_1 * 0x78) != 0)) {
    if (param_1 != 0) {
      (**(code **)(*(long *)param_2 + 0xd8))(param_2);
    }
    if (this[0x1390] != (GpuProfilerManager)0x0) {
      uVar10 = (ulong)param_1;
      uVar5 = (ulong)*(uint *)(this + 0x13c0);
      uVar4 = *(uint *)(this + uVar5 * 4 + uVar10 * 0x78 + 0x68);
      if (uVar4 == 0) {
        iVar3 = *(int *)(this + 0x13bc);
        piVar7 = *(int **)(this + 0x13b0);
        iVar2 = *piVar7;
        *(int *)(this + 0x13bc) = iVar3 + 1;
        *(undefined4 *)(this + uVar10 * 0x78 + 0x14) = *(undefined4 *)(this + 0x13b8);
        *(int *)(this + uVar10 * 0x78 + 0x18) = iVar3;
        *(int *)(this + uVar10 * 0x78 + 0x10) = iVar2;
      }
      else {
        piVar7 = *(int **)(this + 0x13b0);
        if (*(int *)(this + uVar10 * 0x78 + 0x10) != *piVar7) {
          *(int *)(this + uVar10 * 0x78 + 0x10) = 0x28;
        }
      }
      iVar3 = *(int *)(this + 0x13b8);
      piVar7[1] = param_1;
      lVar1 = uVar5 * 0x18 + uVar10 * 0x78;
      *(int **)(this + 0x13b0) = piVar7 + 1;
      *(int *)(this + 0x13b8) = iVar3 + 1;
      lVar8 = *(long *)(this + lVar1 + 0x20);
      uVar9 = *(long *)(this + lVar1 + 0x28) - lVar8 >> 4;
      if (uVar9 <= uVar4) {
        uVar6 = (ulong)(*(uint *)(this + uVar5 * 4 + uVar10 * 0x78 + 0x68) + 1);
        if (uVar9 < uVar6) {
          std::__ndk1::
          vector<GpuProfilerManager::QueryData,std::__ndk1::allocator<GpuProfilerManager::QueryData>>
          ::__append((vector<GpuProfilerManager::QueryData,std::__ndk1::allocator<GpuProfilerManager::QueryData>>
                      *)(this + lVar1 + 0x20),uVar6 - uVar9);
          uVar5 = (ulong)*(uint *)(this + 0x13c0);
        }
        else if (uVar6 < uVar9) {
          *(ulong *)(this + lVar1 + 0x28) = lVar8 + uVar6 * 0x10;
        }
      }
      if (*(long *)(*(long *)(this + uVar5 * 0x18 + uVar10 * 0x78 + 0x20) + (ulong)uVar4 * 0x10) !=
          0) {
        lVar1 = 0x110;
        if (this[0x13cc] != (GpuProfilerManager)0x0) {
          lVar1 = 0x118;
        }
                    /* WARNING: Could not recover jumptable at 0x00afe898. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*(long *)param_2 + lVar1))(param_2);
        return;
      }
    }
  }
  return;
}


