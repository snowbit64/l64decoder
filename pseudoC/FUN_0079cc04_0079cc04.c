// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0079cc04
// Entry Point: 0079cc04
// Size: 440 bytes
// Signature: undefined FUN_0079cc04(void)


void FUN_0079cc04(char **param_1)

{
  long lVar1;
  uint uVar2;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  uVar2 = 0;
  local_28 = *(long *)(lVar1 + 0x28);
  switch(*(undefined4 *)(param_1 + 3)) {
  case 1:
    local_38 = (float)*(int *)(param_1 + 2);
    break;
  case 2:
    local_38 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 2));
    break;
  default:
    goto switchD_0079cc48_caseD_3;
  case 4:
    local_38 = *(float *)(param_1 + 2);
    break;
  case 5:
    local_38 = (float)(double)param_1[2];
  }
  uVar2 = 1;
switchD_0079cc48_caseD_3:
  switch(*(undefined4 *)(param_1 + 5)) {
  case 1:
    local_34 = (float)*(int *)(param_1 + 4);
    break;
  case 2:
    local_34 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 4));
    break;
  default:
    goto switchD_0079cca0_caseD_3;
  case 4:
    local_34 = *(float *)(param_1 + 4);
    break;
  case 5:
    local_34 = (float)(double)param_1[4];
  }
  uVar2 = uVar2 | 2;
switchD_0079cca0_caseD_3:
  switch(*(undefined4 *)(param_1 + 7)) {
  case 1:
    local_30 = (float)*(int *)(param_1 + 6);
    break;
  case 2:
    local_30 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 6));
    break;
  default:
    goto switchD_0079ccf8_caseD_3;
  case 4:
    local_30 = *(float *)(param_1 + 6);
    break;
  case 5:
    local_30 = (float)(double)param_1[6];
  }
  uVar2 = uVar2 | 4;
switchD_0079ccf8_caseD_3:
  switch(*(undefined4 *)(param_1 + 9)) {
  case 1:
    local_2c = (float)*(int *)(param_1 + 8);
    break;
  case 2:
    local_2c = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 8));
    break;
  default:
    goto switchD_0079cd50_caseD_3;
  case 4:
    local_2c = *(float *)(param_1 + 8);
    break;
  case 5:
    local_2c = (float)(double)param_1[8];
  }
  uVar2 = uVar2 | 8;
switchD_0079cd50_caseD_3:
  MeshSplitManager::addSplitShapesShaderParameterOverwrite
            ((MeshSplitManager *)&MeshSplitManager::s_singletonMeshSplitManager,*param_1,uVar2,
             &local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


