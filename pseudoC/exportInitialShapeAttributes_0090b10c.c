// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: exportInitialShapeAttributes
// Entry Point: 0090b10c
// Size: 152 bytes
// Signature: undefined __cdecl exportInitialShapeAttributes(GsShape * param_1, uint param_2, bool param_3, FileOutputStream * param_4)


/* I3DSave::exportInitialShapeAttributes(GsShape*, unsigned int, bool, FileOutputStream&) */

void I3DSave::exportInitialShapeAttributes
               (GsShape *param_1,uint param_2,bool param_3,FileOutputStream *param_4)

{
  long lVar1;
  long lVar2;
  char *pcVar3;
  FileOutputStream *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = param_4;
  if (param_3) {
    I3DWriter::writeUint32Attribute((I3DWriter *)&local_30,"dynamicId",param_2);
    lVar2 = ParticleSystem::getEmitterShape();
    if (lVar2 == 0) goto LAB_0090b180;
    param_2 = *(uint *)(lVar2 + 0x18);
    pcVar3 = "emitterShapeNodeId";
  }
  else {
    pcVar3 = "shapeId";
  }
  I3DWriter::writeUint32Attribute((I3DWriter *)&local_30,pcVar3,param_2);
LAB_0090b180:
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


