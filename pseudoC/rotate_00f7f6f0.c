// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: rotate
// Entry Point: 00f7f6f0
// Size: 244 bytes
// Signature: undefined __thiscall rotate(btSoftBody * this, btQuaternion * param_1)


/* btSoftBody::rotate(btQuaternion const&) */

void __thiscall btSoftBody::rotate(btSoftBody *this,btQuaternion *param_1)

{
  long lVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float local_68;
  float fStack_64;
  float local_60;
  undefined4 local_5c;
  float local_58;
  float fStack_54;
  float local_50;
  undefined4 local_4c;
  float local_48;
  float fStack_44;
  float local_40;
  undefined4 local_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  fVar2 = *(float *)param_1;
  fVar3 = *(float *)(param_1 + 4);
  fVar6 = *(float *)(param_1 + 8);
  fVar7 = *(float *)(param_1 + 0xc);
  local_38 = 0;
  uStack_30 = 0;
  local_5c = 0;
  local_4c = 0;
  local_3c = 0;
  uVar4 = NEON_fmadd(fVar3,fVar3,fVar2 * fVar2);
  uVar4 = NEON_fmadd(fVar6,fVar6,uVar4);
  fVar5 = (float)NEON_fmadd(fVar7,fVar7,uVar4);
  fVar5 = 2.0 / fVar5;
  fVar8 = fVar5 * fVar3;
  fVar9 = fVar5 * fVar6;
  fStack_54 = (float)NEON_fmsub(fVar9,fVar6,0x3f800000);
  local_40 = fVar5 * fVar2 * -fVar2;
  fStack_44 = fVar5 * fVar2 * fVar7;
  local_68 = fStack_54 + fVar8 * -fVar3;
  fStack_64 = fVar8 * fVar2 - fVar9 * fVar7;
  local_60 = fVar9 * fVar2 + fVar8 * fVar7;
  local_58 = fVar8 * fVar2 + fVar9 * fVar7;
  fStack_54 = fStack_54 + local_40;
  local_48 = fVar9 * fVar2 - fVar8 * fVar7;
  local_50 = fVar9 * fVar3 - fStack_44;
  fStack_44 = fVar9 * fVar3 + fStack_44;
  local_40 = fVar8 * -fVar3 + 1.0 + local_40;
  transform(this,(btTransform *)&local_68);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


