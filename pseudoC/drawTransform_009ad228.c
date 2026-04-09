// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: drawTransform
// Entry Point: 009ad228
// Size: 496 bytes
// Signature: undefined __thiscall drawTransform(btIDebugDraw * this, btTransform * param_1, float param_2)


/* btIDebugDraw::drawTransform(btTransform const&, float) */

void __thiscall btIDebugDraw::drawTransform(btIDebugDraw *this,btTransform *param_1,float param_2)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 local_80;
  undefined8 uStack_78;
  float local_70;
  float fStack_6c;
  float local_68;
  undefined4 local_64;
  undefined8 local_60;
  undefined8 uStack_58;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uStack_58 = *(undefined8 *)(param_1 + 0x38);
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  local_64 = 0;
  uVar2 = NEON_fmadd(*(undefined4 *)param_1,param_2,*(float *)(param_1 + 4) * 0.0);
  uVar3 = NEON_fmadd(*(undefined4 *)(param_1 + 0x10),param_2,*(float *)(param_1 + 0x14) * 0.0);
  uVar4 = NEON_fmadd(*(undefined4 *)(param_1 + 0x20),param_2,*(float *)(param_1 + 0x24) * 0.0);
  local_70 = (float)NEON_fmadd(*(undefined4 *)(param_1 + 8),0,uVar2);
  fStack_6c = (float)NEON_fmadd(*(undefined4 *)(param_1 + 0x18),0,uVar3);
  local_60._0_4_ = (float)uVar5;
  local_60._4_4_ = (float)((ulong)uVar5 >> 0x20);
  local_68 = (float)NEON_fmadd(*(undefined4 *)(param_1 + 0x28),0,uVar4);
  local_70 = local_70 + (float)local_60;
  fStack_6c = fStack_6c + local_60._4_4_;
  local_68 = local_68 + (float)uStack_58;
  uStack_78 = 0;
  local_80 = 0x3f333333;
  local_60 = uVar5;
  (**(code **)(*(long *)this + 0x20))(this,&local_60,&local_70,&local_80);
  local_64 = 0;
  uVar2 = NEON_fmadd(*(undefined4 *)param_1,0,*(float *)(param_1 + 4) * param_2);
  uVar3 = NEON_fmadd(*(undefined4 *)(param_1 + 0x10),0,*(float *)(param_1 + 0x14) * param_2);
  uVar4 = NEON_fmadd(*(undefined4 *)(param_1 + 0x20),0,*(float *)(param_1 + 0x24) * param_2);
  local_70 = (float)NEON_fmadd(*(undefined4 *)(param_1 + 8),0,uVar2);
  fStack_6c = (float)NEON_fmadd(*(undefined4 *)(param_1 + 0x18),0,uVar3);
  local_68 = (float)NEON_fmadd(*(undefined4 *)(param_1 + 0x28),0,uVar4);
  local_70 = local_70 + (float)local_60;
  fStack_6c = fStack_6c + local_60._4_4_;
  local_68 = local_68 + (float)uStack_58;
  uStack_78 = 0;
  local_80 = 0x3f33333300000000;
  (**(code **)(*(long *)this + 0x20))(this,&local_60,&local_70,&local_80);
  local_64 = 0;
  uVar2 = NEON_fmadd(*(undefined4 *)param_1,0,*(float *)(param_1 + 4) * 0.0);
  uVar3 = NEON_fmadd(*(undefined4 *)(param_1 + 0x10),0,*(float *)(param_1 + 0x14) * 0.0);
  uVar4 = NEON_fmadd(*(undefined4 *)(param_1 + 0x20),0,*(float *)(param_1 + 0x24) * 0.0);
  local_70 = (float)NEON_fmadd(*(undefined4 *)(param_1 + 8),param_2,uVar2);
  fStack_6c = (float)NEON_fmadd(*(undefined4 *)(param_1 + 0x18),param_2,uVar3);
  local_68 = (float)NEON_fmadd(*(undefined4 *)(param_1 + 0x28),param_2,uVar4);
  local_70 = local_70 + (float)local_60;
  fStack_6c = fStack_6c + local_60._4_4_;
  local_68 = local_68 + (float)uStack_58;
  uStack_78 = 0x3f333333;
  local_80 = 0;
  (**(code **)(*(long *)this + 0x20))(this,&local_60,&local_70,&local_80);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


