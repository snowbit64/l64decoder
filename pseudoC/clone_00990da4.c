// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: clone
// Entry Point: 00990da4
// Size: 220 bytes
// Signature: undefined __thiscall clone(Bt2PhysicsJointObject * this, TransformGroup * param_1)


/* Bt2PhysicsJointObject::clone(TransformGroup*) */

void __thiscall Bt2PhysicsJointObject::clone(Bt2PhysicsJointObject *this,TransformGroup *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  Bt2PhysicsJointObject BVar3;
  undefined2 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  
  puVar5 = (undefined8 *)operator_new(0x90);
  uVar6 = *(undefined8 *)(this + 0x34);
  *(undefined8 *)((long)puVar5 + 0x3c) = *(undefined8 *)(this + 0x3c);
  *(undefined8 *)((long)puVar5 + 0x34) = uVar6;
  uVar6 = *(undefined8 *)(this + 0x4c);
  puVar5[4] = param_1;
  puVar5[5] = 0;
  uVar8 = *(undefined4 *)(this + 0x44);
  *(undefined *)(puVar5 + 6) = 0;
  *(undefined8 *)((long)puVar5 + 0x4c) = uVar6;
  uVar1 = *(undefined4 *)(this + 0x60);
  *(undefined4 *)((long)puVar5 + 0x44) = uVar8;
  uVar9 = *(undefined8 *)(this + 0x84);
  puVar5[2] = 0;
  puVar5[3] = &PTR__Bt2PhysicsJointObject_00fe0cc8;
  uVar4 = *(undefined2 *)(this + 0x48);
  *puVar5 = &PTR__Bt2PhysicsJointObject_00fe0c78;
  BVar3 = this[0x4a];
  *(undefined4 *)(puVar5 + 0xc) = uVar1;
  uVar7 = *(undefined8 *)(this + 0x68);
  *(undefined2 *)(puVar5 + 9) = uVar4;
  uVar1 = *(undefined4 *)(this + 0x54);
  *(Bt2PhysicsJointObject *)((long)puVar5 + 0x4a) = BVar3;
  uVar6 = *(undefined8 *)(this + 0x58);
  puVar5[0xd] = uVar7;
  uVar7 = *(undefined8 *)(this + 0x74);
  *(undefined4 *)((long)puVar5 + 0x54) = uVar1;
  uVar4 = *(undefined2 *)(this + 100);
  puVar5[0xb] = uVar6;
  BVar3 = this[0x66];
  *(undefined8 *)((long)puVar5 + 0x74) = uVar7;
  *(undefined2 *)((long)puVar5 + 100) = uVar4;
  uVar1 = *(undefined4 *)(this + 0x70);
  *(Bt2PhysicsJointObject *)((long)puVar5 + 0x66) = BVar3;
  uVar8 = *(undefined4 *)(this + 0x7c);
  *(undefined8 *)((long)puVar5 + 0x84) = uVar9;
  *(undefined4 *)(puVar5 + 0xe) = uVar1;
  uVar2 = *(uint *)(this + 8);
  *(undefined4 *)((long)puVar5 + 0x7c) = uVar8;
  *(Bt2PhysicsJointObject *)(puVar5 + 0x10) = this[0x80];
  *(uint *)(puVar5 + 1) = uVar2 & 0xfffffff8 | 0x14;
  return;
}


