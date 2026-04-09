// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007bcf50
// Entry Point: 007bcf50
// Size: 296 bytes
// Signature: undefined FUN_007bcf50(void)


void FUN_007bcf50(long **param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  plVar7 = *param_1;
  fVar8 = *(float *)(param_1 + 1);
  uVar1 = (**(code **)(*plVar7 + 0x48))(plVar7);
  fVar9 = *(float *)((long)param_1 + 0xc);
  uVar2 = (**(code **)(*plVar7 + 0x50))(plVar7);
  plVar7 = *param_1;
  fVar10 = *(float *)(param_1 + 2);
  uVar3 = (**(code **)(*plVar7 + 0x48))(plVar7);
  fVar11 = *(float *)((long)param_1 + 0x14);
  uVar4 = (**(code **)(*plVar7 + 0x50))(plVar7);
  plVar7 = *param_1;
  fVar12 = *(float *)(param_1 + 3);
  uVar5 = (**(code **)(*plVar7 + 0x48))(plVar7);
  fVar13 = *(float *)((long)param_1 + 0x1c);
  uVar6 = (**(code **)(*plVar7 + 0x50))(plVar7);
  *(float *)(param_2 + 0x100) = fVar8 * (float)(uVar1 & 0xffffffff);
  *(float *)(param_2 + 0x110) = fVar9 * (float)(uVar2 & 0xffffffff);
  *(float *)(param_2 + 0x120) = fVar10 * (float)(uVar3 & 0xffffffff);
  *(float *)(param_2 + 0x130) = fVar11 * (float)(uVar4 & 0xffffffff);
  *(float *)(param_2 + 0x140) = fVar12 * (float)(uVar5 & 0xffffffff);
  *(undefined4 *)(param_2 + 0x108) = 4;
  *(undefined4 *)(param_2 + 0x118) = 4;
  *(undefined4 *)(param_2 + 0x128) = 4;
  *(undefined4 *)(param_2 + 0x138) = 4;
  *(undefined4 *)(param_2 + 0x148) = 4;
  *(float *)(param_2 + 0x150) = fVar13 * (float)(uVar6 & 0xffffffff);
  *(undefined4 *)(param_2 + 0x158) = 4;
  return;
}


