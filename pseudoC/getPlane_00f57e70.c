// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getPlane
// Entry Point: 00f57e70
// Size: 172 bytes
// Signature: undefined __cdecl getPlane(btVector3 * param_1, btVector3 * param_2, int param_3)


/* btBoxShape::getPlane(btVector3&, btVector3&, int) const */

void btBoxShape::getPlane(btVector3 *param_1,btVector3 *param_2,int param_3)

{
  long lVar1;
  undefined4 *puVar2;
  undefined4 in_w3;
  undefined4 uVar3;
  float fVar4;
  undefined4 in_s2;
  undefined4 in_s3;
  undefined8 local_58;
  float local_50;
  undefined4 local_4c;
  undefined8 local_48;
  float local_40;
  long local_38;
  
  puVar2 = (undefined4 *)(ulong)(uint)param_3;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*(long *)param_1 + 0xf8))(param_1,&local_48,in_w3);
  *(undefined4 *)(param_2 + 0xc) = 0;
  local_4c = 0;
  *(undefined8 *)param_2 = local_48;
  local_58 = CONCAT44(-(float)((ulong)local_48 >> 0x20),-(float)local_48);
  *(float *)(param_2 + 8) = local_40;
  fVar4 = -local_40;
  local_50 = fVar4;
  uVar3 = (**(code **)(*(long *)param_1 + 0x80))(param_1,&local_58);
  *puVar2 = uVar3;
  puVar2[1] = fVar4;
  puVar2[2] = in_s2;
  puVar2[3] = in_s3;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


