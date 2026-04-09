// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setDirt
// Entry Point: 0071c80c
// Size: 232 bytes
// Signature: undefined __cdecl setDirt(TransformGroup * param_1, float param_2)


/* TrafficVehicle::setDirt(TransformGroup*, float) */

void TrafficVehicle::setDirt(TransformGroup *param_1,float param_2)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  CustomShader *this;
  ulong uVar4;
  long lVar5;
  uint local_64;
  long local_60;
  undefined8 uStack_58;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  if (((byte)param_1[0x11] >> 3 & 1) != 0) {
    plVar1 = (long *)(param_1 + 0x178);
    if (*(short *)(param_1 + 0x196) != 1) {
      plVar1 = *(long **)(param_1 + 0x178);
    }
    lVar5 = *plVar1;
    if ((lVar5 != 0) &&
       (this = (CustomShader *)GsMaterial::getCustomShader(), this != (CustomShader *)0x0)) {
      uVar2 = *(uint *)(lVar5 + 0x88);
      local_64 = 0;
      uVar4 = CustomShader::getParameterIndex(this,uVar2,"RDT",&local_64);
      if ((uVar4 & 1) != 0) {
        uStack_58 = *(undefined8 *)
                     (*(long *)(*(long *)(*(long *)(this + 0x110) + (ulong)uVar2 * 0xe0 + 0x40) +
                               (ulong)local_64 * 8) + 0x38);
        local_60 = (ulong)(uint)param_2 << 0x20;
        GsShape::setCustomShaderParameter((GsShape *)param_1,"RDT",(float *)&local_60);
      }
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


