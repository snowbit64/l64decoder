// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: processTriangle
// Entry Point: 00f69a1c
// Size: 180 bytes
// Signature: undefined __cdecl processTriangle(btVector3 * param_1, int param_2, int param_3)


/* btScaledTriangleCallback::processTriangle(btVector3*, int, int) */

uint btScaledTriangleCallback::processTriangle(btVector3 *param_1,int param_2,int param_3)

{
  long lVar1;
  uint uVar2;
  undefined8 *puVar3;
  float fVar4;
  float fVar5;
  undefined8 local_58;
  float local_50;
  undefined4 local_4c;
  undefined8 local_48;
  float local_40;
  undefined4 local_3c;
  undefined8 local_38;
  float local_30;
  undefined4 local_2c;
  long local_28;
  
  puVar3 = (undefined8 *)(ulong)(uint)param_2;
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_4c = 0;
  local_3c = 0;
  local_2c = 0;
  local_30 = *(float *)(param_1 + 0x18);
  fVar4 = (float)*(undefined8 *)(param_1 + 0x10);
  fVar5 = (float)((ulong)*(undefined8 *)(param_1 + 0x10) >> 0x20);
  local_58 = CONCAT44(fVar5 * (float)((ulong)*puVar3 >> 0x20),fVar4 * (float)*puVar3);
  local_50 = local_30 * *(float *)(puVar3 + 1);
  local_48 = CONCAT44((float)((ulong)puVar3[2] >> 0x20) * fVar5,(float)puVar3[2] * fVar4);
  local_40 = *(float *)(puVar3 + 3) * local_30;
  local_38 = CONCAT44((float)((ulong)puVar3[4] >> 0x20) * fVar5,(float)puVar3[4] * fVar4);
  local_30 = *(float *)(puVar3 + 5) * local_30;
  uVar2 = (**(code **)(**(long **)(param_1 + 8) + 0x10))(*(long **)(param_1 + 8),&local_58,param_3);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


