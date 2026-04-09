// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: raycastClip
// Entry Point: 009be4e4
// Size: 220 bytes
// Signature: undefined __cdecl raycastClip(Bt2World * param_1, Vector3 * param_2, Vector3 * param_3, float param_4, uint param_5)


/* Bt2SceneQueryUtil::raycastClip(Bt2World*, Vector3 const&, Vector3 const&, float, unsigned int) */

float Bt2SceneQueryUtil::raycastClip
                (Bt2World *param_1,Vector3 *param_2,Vector3 *param_3,float param_4,uint param_5)

{
  long lVar1;
  float fVar2;
  undefined **local_80;
  float local_78;
  long local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_48;
  float local_40;
  undefined4 local_3c;
  undefined8 local_38;
  float local_30;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_2c = 0;
  local_3c = 0;
  local_78 = 1.0;
  local_38 = *(undefined8 *)param_2;
  local_30 = *(float *)(param_2 + 8);
  local_48 = CONCAT44((float)((ulong)local_38 >> 0x20) +
                      (float)((ulong)*(undefined8 *)param_3 >> 0x20) * param_4,
                      (float)local_38 + (float)*(undefined8 *)param_3 * param_4);
  local_80 = &PTR__RayResultCallback_00fe1dc8;
  local_70 = 0;
  local_40 = local_30 + *(float *)(param_3 + 8) * param_4;
  local_64 = 0;
  local_68 = param_5;
  (**(code **)(*(long *)param_1 + 0x40))(param_1,&local_38,&local_48,&local_80);
  fVar2 = 1.0;
  if (local_70 != 0) {
    fVar2 = local_78;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return fVar2 * param_4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


