// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setJointLocalRotations
// Entry Point: 0075ffec
// Size: 436 bytes
// Signature: undefined __thiscall setJointLocalRotations(JointConstructor * this, MethodInvocation * param_1)


/* JointConstructor::setJointLocalRotations(MethodInvocation*) */

void __thiscall
JointConstructor::setJointLocalRotations(JointConstructor *this,MethodInvocation *param_1)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  float local_90;
  float fStack_8c;
  float local_88;
  float fStack_84;
  float local_80;
  float fStack_7c;
  float local_78;
  float fStack_74;
  float local_70;
  float fStack_6c;
  float local_68;
  float fStack_64;
  
  sincosf(*(float *)(param_1 + 0x20),&fStack_74,&local_78);
  uVar2 = NEON_fmadd(fStack_74,0,local_78);
  fVar3 = (float)NEON_fnmsub(local_78,0,fStack_74);
  fVar1 = (float)NEON_fmadd(local_78,0,fStack_74 * -0.0);
  fVar4 = fStack_74 + local_78 * 0.0;
  uVar7 = NEON_fmadd(fStack_74,0,local_78 * 0.0);
  sincosf(*(float *)(param_1 + 0x10),&fStack_6c,&local_70);
  uVar6 = NEON_fmadd(uVar7,fStack_6c,local_70);
  uVar8 = NEON_fnmsub(uVar7,local_70,fStack_6c);
  uVar7 = NEON_fmadd(uVar2,fStack_6c,local_70 * 0.0);
  uVar9 = NEON_fmadd(fVar4,fStack_6c,local_70 * 0.0);
  uVar2 = NEON_fmadd(uVar2,local_70,fStack_6c * -0.0);
  uVar5 = NEON_fmadd(fVar4,local_70,fStack_6c * -0.0);
  sincosf(*(float *)param_1,&fStack_64,&local_68);
  *(undefined4 *)(this + 0x10) = uVar2;
  *(undefined4 *)(this + 0x14) = uVar5;
  *(undefined4 *)(this + 0x18) = uVar8;
  uVar2 = NEON_fmadd(uVar7,fStack_64,fVar3 * local_68);
  uVar5 = NEON_fmadd(uVar9,fStack_64,local_68 * (local_78 + fStack_74 * -0.0));
  uVar7 = NEON_fmadd(uVar6,fStack_64,local_68 * fVar1);
  *(undefined4 *)(this + 0x28) = uVar2;
  *(undefined4 *)(this + 0x2c) = uVar5;
  *(undefined4 *)(this + 0x30) = uVar7;
  sincosf(*(float *)(param_1 + 0x50),&fStack_7c,&local_80);
  uVar2 = NEON_fmadd(fStack_7c,0,local_80);
  fVar3 = (float)NEON_fnmsub(local_80,0,fStack_7c);
  fVar4 = fStack_7c + local_80 * 0.0;
  uVar7 = NEON_fmadd(fStack_7c,0,local_80 * 0.0);
  fVar1 = (float)NEON_fmadd(local_80,0,fStack_7c * -0.0);
  sincosf(*(float *)(param_1 + 0x40),&fStack_84,&local_88);
  uVar8 = NEON_fmadd(uVar7,fStack_84,local_88);
  uVar6 = NEON_fnmsub(uVar7,local_88,fStack_84);
  uVar7 = NEON_fmadd(uVar2,fStack_84,local_88 * 0.0);
  uVar9 = NEON_fmadd(fVar4,fStack_84,local_88 * 0.0);
  uVar2 = NEON_fmadd(uVar2,local_88,fStack_84 * -0.0);
  uVar5 = NEON_fmadd(fVar4,local_88,fStack_84 * -0.0);
  sincosf(*(float *)(param_1 + 0x30),&fStack_8c,&local_90);
  *(undefined4 *)(this + 0x1c) = uVar2;
  *(undefined4 *)(this + 0x20) = uVar5;
  *(undefined4 *)(this + 0x24) = uVar6;
  *(undefined2 *)(this + 0x58) = 0;
  uVar2 = NEON_fmadd(uVar7,fStack_8c,fVar3 * local_90);
  uVar5 = NEON_fmadd(uVar9,fStack_8c,local_90 * (local_80 + fStack_7c * -0.0));
  uVar7 = NEON_fmadd(uVar8,fStack_8c,local_90 * fVar1);
  *(undefined4 *)(this + 0x34) = uVar2;
  *(undefined4 *)(this + 0x38) = uVar5;
  *(undefined4 *)(this + 0x3c) = uVar7;
  return;
}


