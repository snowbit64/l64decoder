// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateWheelCollisionShape
// Entry Point: 009b6270
// Size: 320 bytes
// Signature: undefined __thiscall updateWheelCollisionShape(Bt2RaycastVehicle * this, uint param_1, bool param_2)


/* Bt2RaycastVehicle::updateWheelCollisionShape(unsigned int, bool) */

void __thiscall
Bt2RaycastVehicle::updateWheelCollisionShape(Bt2RaycastVehicle *this,uint param_1,bool param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 local_68;
  float local_60;
  undefined4 local_5c;
  undefined8 local_58;
  float local_50;
  undefined4 local_4c;
  float local_48;
  float fStack_44;
  float local_40;
  undefined4 local_3c;
  undefined8 local_38;
  float local_30;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar2 = *(long *)(*(long *)(this + 0x48) + (long)(int)param_1 * 0x1a0 + 0x160);
  if (lVar2 != 0) {
    lVar3 = *(long *)(this + 0x48) + (long)(int)param_1 * 0x1a0;
    *(undefined4 *)(lVar2 + 0x50) = *(undefined4 *)(lVar3 + 0x140);
    *(undefined4 *)(lVar2 + 0x54) = *(undefined4 *)(lVar3 + 0x18c);
    fVar5 = *(float *)(lVar3 + 0x18c);
    local_48 = *(float *)(lVar3 + 0xac);
    fVar6 = (float)*(undefined8 *)(lVar3 + 0xa4);
    fVar7 = (float)((ulong)*(undefined8 *)(lVar3 + 0xa4) >> 0x20);
    fVar4 = (float)*(undefined8 *)(lVar3 + 0x11c);
    fVar9 = *(float *)(lVar3 + 0x104);
    fStack_44 = *(float *)(lVar3 + 0x124);
    fVar8 = (float)((ulong)*(undefined8 *)(lVar3 + 0x11c) >> 0x20);
    local_68 = CONCAT44(fVar4,fVar6);
    local_38 = CONCAT44(fVar7 * fVar5 + (float)((ulong)*(undefined8 *)(lVar3 + 0x10c) >> 0x20) +
                        fVar8 * fVar9,
                        fVar6 * fVar5 + (float)*(undefined8 *)(lVar3 + 0x10c) + fVar4 * fVar9);
    local_50 = fStack_44 * -fVar6 + local_48 * fVar4;
    local_30 = fVar5 * local_48 + *(float *)(lVar3 + 0x114) + fVar9 * fStack_44;
    local_2c = 0;
    local_5c = 0;
    local_60 = -local_48 * fVar8 + fStack_44 * fVar7;
    local_40 = -fVar7 * fVar4 + fVar8 * fVar6;
    local_4c = 0;
    local_58 = CONCAT44(fVar8,fVar7);
    local_3c = 0;
    btCompoundShape::updateChildTransform
              (*(btCompoundShape **)
                (*(long *)(this + (ulong)*(uint *)(lVar3 + 0x180) * 8 + 8) + 200),
               *(int *)(lVar3 + 0x168),(btTransform *)&local_68,param_2);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


