// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setVehicleLightIntensity
// Entry Point: 0071ccbc
// Size: 100 bytes
// Signature: undefined __cdecl setVehicleLightIntensity(TransformGroup * param_1, float param_2)


/* TrafficVehicle::setVehicleLightIntensity(TransformGroup*, float) */

void TrafficVehicle::setVehicleLightIntensity(TransformGroup *param_1,float param_2)

{
  long lVar1;
  float local_38;
  undefined4 local_34;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (((byte)param_1[0x11] >> 3 & 1) != 0) {
    local_30 = 0;
    local_34 = 0;
    local_38 = param_2;
    GsShape::setCustomShaderParameter((GsShape *)param_1,"lightControl",&local_38);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


