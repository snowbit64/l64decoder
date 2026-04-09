// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: btTriangleMeshShape
// Entry Point: 00f6ab08
// Size: 404 bytes
// Signature: undefined __thiscall btTriangleMeshShape(btTriangleMeshShape * this, btStridingMeshInterface * param_1)


/* btTriangleMeshShape::btTriangleMeshShape(btStridingMeshInterface*) */

void __thiscall
btTriangleMeshShape::btTriangleMeshShape(btTriangleMeshShape *this,btStridingMeshInterface *param_1)

{
  long lVar1;
  ulong uVar2;
  float fVar3;
  float fVar4;
  float in_s2;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0xffffffff;
  *(btStridingMeshInterface **)(this + 0x40) = param_1;
  *(undefined ***)this = &PTR__btTriangleMeshShape_0101b278;
  *(undefined4 *)(this + 8) = 0x15;
  uVar2 = (**(code **)(*(long *)param_1 + 0x50))(param_1);
  if ((uVar2 & 1) == 0) {
    local_3c = 0;
    uStack_44 = 0;
    uStack_40 = 0;
    local_48 = 0x3f800000;
    fVar3 = (float)(**(code **)(*(long *)this + 0x88))(this,&local_48);
    local_48 = 0xbf800000;
    *(float *)(this + 0x30) = fVar3 + *(float *)(this + 0x1c);
    fVar3 = (float)(**(code **)(*(long *)this + 0x88))(this,&local_48);
    fVar4 = *(float *)(this + 0x1c);
    local_48 = 0;
    uStack_40 = 0;
    local_3c = 0;
    uStack_44 = 0x3f800000;
    *(float *)(this + 0x20) = fVar3 - fVar4;
    (**(code **)(*(long *)this + 0x88))(this,&local_48);
    uStack_44 = 0xbf800000;
    *(float *)(this + 0x34) = fVar4 + *(float *)(this + 0x1c);
    (**(code **)(*(long *)this + 0x88))(this,&local_48);
    local_48 = 0;
    uStack_44 = 0;
    local_3c = 0;
    uStack_40 = 0x3f800000;
    *(float *)(this + 0x24) = fVar4 - *(float *)(this + 0x1c);
    (**(code **)(*(long *)this + 0x88))(this,&local_48);
    uStack_40 = 0xbf800000;
    *(float *)(this + 0x38) = in_s2 + *(float *)(this + 0x1c);
    (**(code **)(*(long *)this + 0x88))(this,&local_48);
    *(float *)(this + 0x28) = in_s2 - *(float *)(this + 0x1c);
  }
  else {
    (**(code **)(*(long *)param_1 + 0x60))(param_1,this + 0x20,this + 0x30);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


