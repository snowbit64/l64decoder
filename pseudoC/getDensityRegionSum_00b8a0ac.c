// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getDensityRegionSum
// Entry Point: 00b8a0ac
// Size: 504 bytes
// Signature: undefined __thiscall getDensityRegionSum(DensityMapOldOperations * this, int param_1, int param_2, uint param_3, uint param_4, uint param_5, uint param_6, OPERATION param_7, uint param_8)


/* DensityMapOldOperations::getDensityRegionSum(int, int, unsigned int, unsigned int, unsigned int,
   unsigned int, DensityMapFilter::OPERATION, unsigned int) */

void __thiscall
DensityMapOldOperations::getDensityRegionSum
          (DensityMapOldOperations *this,int param_1,int param_2,uint param_3,uint param_4,
          uint param_5,uint param_6,OPERATION param_7,uint param_8)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined4 local_e8;
  uint uStack_e4;
  uint local_e0;
  uint uStack_dc;
  uint local_d8;
  undefined8 local_d4;
  undefined8 local_cc;
  undefined local_c4;
  undefined8 local_c0;
  undefined8 local_b0;
  uint local_a8;
  uint uStack_a4;
  uint local_a0;
  undefined2 local_9c;
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined8 local_80;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  plVar1 = (long *)0x0;
  if (*(long *)(this + 8) != 0) {
    plVar1 = (long *)(*(long *)(this + 8) + 0x58);
  }
  (**(code **)(*plVar1 + 0x28))(plVar1);
  (**(code **)(*plVar1 + 0x30))(plVar1);
  (**(code **)(*plVar1 + 0x28))(plVar1);
  uVar6 = (**(code **)(**(long **)(this + 8) + 0x30))();
  if (uVar6 != 0) {
    plVar7 = *(long **)(this + 8);
    plVar2 = (long *)0x0;
    if (plVar7 != (long *)0x0) {
      plVar2 = plVar7 + 0xb;
    }
    uVar8 = (**(code **)(*plVar7 + 0x30))();
    local_90 = (**(code **)(*plVar2 + 0x18))(plVar2);
    local_8c = (**(code **)(*plVar2 + 0x20))(plVar2);
    local_88 = (**(code **)(*plVar2 + 0x30))(plVar2);
    uVar9 = *(undefined8 *)(this + 8);
    local_80 = uVar8;
    local_e8 = (**(code **)(*plVar1 + 0x28))(plVar1);
    uVar5 = ~(-1 << (ulong)(param_6 & 0x1f));
    uStack_e4 = param_5;
    local_e0 = param_6;
    uStack_dc = uVar5;
    uVar4 = (**(code **)(*plVar1 + 0x28))(plVar1);
    local_d4 = CONCAT44(param_8,param_7);
    local_a0 = -1 << (ulong)(uVar4 & 0x1f);
    local_d8 = ~local_a0;
    uVar5 = uVar5 << (ulong)(param_5 & 0x1f);
    local_a8 = local_a0 & (uVar5 ^ 0xffffffff);
    uStack_a4 = ~uVar5;
    local_c4 = 0;
    local_c0 = 0;
    local_cc = 0x7fffffff00000000;
    local_9c = 0;
    local_98 = 0;
    local_b0 = uVar9;
    uVar5 = getRegionSum<ChunkedBitSquare>
                      (this,param_1,param_2,param_3,param_4,0,(Helper *)&local_e8,
                       (HelperSource *)&local_90);
    uVar6 = (ulong)uVar5;
  }
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}


