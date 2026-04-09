// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: DrawInfos
// Entry Point: 00f8e9c0
// Size: 604 bytes
// Signature: undefined __cdecl DrawInfos(btSoftBody * param_1, btIDebugDraw * param_2, bool param_3, bool param_4, bool param_5)


/* btSoftBodyHelpers::DrawInfos(btSoftBody*, btIDebugDraw*, bool, bool, bool) */

void btSoftBodyHelpers::DrawInfos
               (btSoftBody *param_1,btIDebugDraw *param_2,bool param_3,bool param_4,bool param_5)

{
  long lVar1;
  undefined8 extraout_x1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined auStack_c68 [1024];
  char local_868 [2048];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if (0 < *(int *)(param_1 + 0x374)) {
    if (param_3) {
      if (param_4) {
        lVar2 = 0;
        lVar3 = 0;
        do {
          lVar4 = *(long *)(param_1 + 0x380);
          memset(local_868,0,0x800);
          lVar4 = lVar4 + lVar2;
          FUN_00f8ec1c((double)(1.0 / *(float *)(lVar4 + 0x60)),auStack_c68);
          __strcat_chk(local_868,auStack_c68,0x800);
          FUN_00f8ec1c((double)*(float *)(lVar4 + 100),auStack_c68,extraout_x1," A(%.2f)");
          __strcat_chk(local_868,auStack_c68,0x800);
          if (local_868[0] != '\0') {
            (**(code **)(*(long *)param_2 + 0x60))(param_2,lVar4 + 0x10,local_868);
          }
          lVar3 = lVar3 + 1;
          lVar2 = lVar2 + 0x78;
        } while (lVar3 < *(int *)(param_1 + 0x374));
      }
      else {
        lVar3 = 0;
        lVar2 = 0x60;
        do {
          lVar4 = *(long *)(param_1 + 0x380);
          memset(local_868,0,0x800);
          FUN_00f8ec1c((double)(1.0 / *(float *)(lVar4 + lVar2)),auStack_c68);
          __strcat_chk(local_868,auStack_c68,0x800);
          if (local_868[0] != '\0') {
            (**(code **)(*(long *)param_2 + 0x60))(param_2,lVar4 + lVar2 + -0x50,local_868);
          }
          lVar3 = lVar3 + 1;
          lVar2 = lVar2 + 0x78;
        } while (lVar3 < *(int *)(param_1 + 0x374));
      }
    }
    else if (param_4) {
      lVar3 = 0;
      lVar2 = 100;
      do {
        lVar4 = *(long *)(param_1 + 0x380);
        memset(local_868,0,0x800);
        FUN_00f8ec1c((double)*(float *)(lVar4 + lVar2),auStack_c68);
        __strcat_chk(local_868,auStack_c68,0x800);
        if (local_868[0] != '\0') {
          (**(code **)(*(long *)param_2 + 0x60))(param_2,lVar4 + lVar2 + -0x54,local_868);
        }
        lVar3 = lVar3 + 1;
        lVar2 = lVar2 + 0x78;
      } while (lVar3 < *(int *)(param_1 + 0x374));
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


