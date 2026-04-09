// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: DrawClusterTree
// Entry Point: 00f8e948
// Size: 120 bytes
// Signature: undefined __cdecl DrawClusterTree(btSoftBody * param_1, btIDebugDraw * param_2, int param_3, int param_4)


/* btSoftBodyHelpers::DrawClusterTree(btSoftBody*, btIDebugDraw*, int, int) */

void btSoftBodyHelpers::DrawClusterTree
               (btSoftBody *param_1,btIDebugDraw *param_2,int param_3,int param_4)

{
  long lVar1;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uStack_48 = 0;
  local_50 = 0x3f800000;
  uStack_38 = 0x3f800000;
  uStack_40 = 0x3f80000000000000;
  FUN_00f8e4d8(param_2,*(undefined8 *)(param_1 + 0x578),0,&uStack_40,&local_50,param_3,param_4);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


