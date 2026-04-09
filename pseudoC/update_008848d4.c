// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: update
// Entry Point: 008848d4
// Size: 200 bytes
// Signature: undefined __cdecl update(float param_1)


/* DeerStateMoveTo::update(float) */

void DeerStateMoveTo::update(float param_1)

{
  long lVar1;
  long in_x0;
  undefined8 uVar2;
  long lVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float local_58;
  float fStack_54;
  float local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (*(long *)(*(long *)(in_x0 + 0x10) + 0x28) == 0) {
LAB_00884960:
    uVar2 = 1;
  }
  else {
    lVar3 = *(long *)(in_x0 + 0x28);
    if (lVar3 != 0) {
      RawTransformGroup::updateWorldTransformation();
      fVar5 = *(float *)(lVar3 + 0xe8);
      fVar6 = *(float *)(lVar3 + 0xec);
      fVar7 = *(float *)(lVar3 + 0xf0);
      AnimalSteering::getPosition
                (*(AnimalSteering **)(*(long *)(in_x0 + 0x20) + 0xb0),(Vector3 *)&local_58);
      fVar5 = fVar5 - local_58;
      fVar6 = fVar6 - fStack_54;
      uVar4 = NEON_fmadd(fVar6,fVar6,fVar5 * fVar5);
      fVar7 = fVar7 - local_50;
      param_1 = (float)NEON_fmadd(fVar7,fVar7,uVar4);
      if (param_1 < *(float *)(in_x0 + 0x30)) goto LAB_00884960;
    }
    uVar2 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1,uVar2);
}


