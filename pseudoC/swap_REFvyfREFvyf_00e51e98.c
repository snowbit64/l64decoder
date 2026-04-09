// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: swap___REFvyfREFvyf
// Entry Point: 00e51e98
// Size: 168 bytes
// Signature: undefined swap___REFvyfREFvyf(void)


void swap___REFvyfREFvyf(undefined param_1 [16],undefined (*param_2) [16],undefined8 *param_3)

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  
  uVar4 = param_3[1];
  uVar3 = *param_3;
  uVar5 = (uint)(param_1[0] & 1) + (uint)(param_1[4] & 2) +
          (uint)(param_1[8] & 4) + (uint)(param_1[12] & 8);
  auVar2 = *param_2;
  if ((uVar5 & 1) != 0) {
    *(int *)*param_2 = (int)uVar3;
  }
  if ((uVar5 >> 1 & 1) != 0) {
    *(int *)(*param_2 + 4) = (int)((ulong)uVar3 >> 0x20);
  }
  if ((uVar5 >> 2 & 1) == 0) {
    auVar1._0_4_ = (int)auVar2._0_4_;
    auVar1._4_4_ = (int)auVar2._4_4_;
    auVar1._8_4_ = (int)auVar2._8_4_;
    auVar1._12_4_ = (int)auVar2._12_4_;
  }
  else {
    *(int *)(*param_2 + 8) = (int)uVar4;
    auVar1._0_4_ = (int)auVar2._0_4_;
    auVar1._4_4_ = (int)auVar2._4_4_;
    auVar1._8_4_ = (int)auVar2._8_4_;
    auVar1._12_4_ = (int)auVar2._12_4_;
  }
  if ((uVar5 >> 3 & 1) == 0) {
    auVar2 = NEON_scvtf(auVar1,4);
  }
  else {
    *(int *)(*param_2 + 0xc) = (int)((ulong)uVar4 >> 0x20);
    auVar2 = NEON_scvtf(auVar1,4);
  }
  if ((uVar5 & 1) != 0) {
    *(int *)param_3 = auVar2._0_4_;
  }
  if ((uVar5 >> 1 & 1) != 0) {
    *(int *)((long)param_3 + 4) = auVar2._4_4_;
  }
  if ((uVar5 >> 2 & 1) != 0) {
    *(int *)(param_3 + 1) = auVar2._8_4_;
  }
  if ((uVar5 >> 3 & 1) == 0) {
    return;
  }
  *(int *)((long)param_3 + 0xc) = auVar2._12_4_;
  return;
}


