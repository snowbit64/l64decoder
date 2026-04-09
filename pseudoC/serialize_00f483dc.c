// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: serialize
// Entry Point: 00f483dc
// Size: 584 bytes
// Signature: undefined __thiscall serialize(btCollisionObject * this, void * param_1, btSerializer * param_2)


/* btCollisionObject::serialize(void*, btSerializer*) const */

char * __thiscall
btCollisionObject::serialize(btCollisionObject *this,void *param_1,btSerializer *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 uVar4;
  undefined auVar5 [16];
  undefined auVar6 [16];
  undefined auVar7 [16];
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar4 = *(undefined4 *)(this + 8);
  *(undefined8 *)param_1 = 0;
  uVar1 = *(undefined4 *)(this + 0xb8);
  lVar3 = *(long *)param_2;
  *(undefined4 *)((long)param_1 + 0x20) = uVar4;
  uVar4 = *(undefined4 *)(this + 0xc);
  *(undefined4 *)((long)param_1 + 0xf0) = uVar1;
  *(undefined4 *)((long)param_1 + 0x24) = uVar4;
  *(undefined4 *)((long)param_1 + 0x28) = *(undefined4 *)(this + 0x10);
  *(undefined4 *)((long)param_1 + 0x2c) = *(undefined4 *)(this + 0x14);
  *(undefined4 *)((long)param_1 + 0x30) = *(undefined4 *)(this + 0x18);
  *(undefined4 *)((long)param_1 + 0x34) = *(undefined4 *)(this + 0x1c);
  *(undefined4 *)((long)param_1 + 0x38) = *(undefined4 *)(this + 0x20);
  *(undefined4 *)((long)param_1 + 0x3c) = *(undefined4 *)(this + 0x24);
  *(undefined4 *)((long)param_1 + 0x40) = *(undefined4 *)(this + 0x28);
  *(undefined4 *)((long)param_1 + 0x44) = *(undefined4 *)(this + 0x2c);
  *(undefined4 *)((long)param_1 + 0x48) = *(undefined4 *)(this + 0x30);
  *(undefined4 *)((long)param_1 + 0x4c) = *(undefined4 *)(this + 0x34);
  *(undefined4 *)((long)param_1 + 0x50) = *(undefined4 *)(this + 0x38);
  *(undefined4 *)((long)param_1 + 0x54) = *(undefined4 *)(this + 0x3c);
  *(undefined4 *)((long)param_1 + 0x58) = *(undefined4 *)(this + 0x40);
  *(undefined4 *)((long)param_1 + 0x5c) = *(undefined4 *)(this + 0x44);
  *(undefined4 *)((long)param_1 + 0x60) = *(undefined4 *)(this + 0x48);
  *(undefined4 *)((long)param_1 + 100) = *(undefined4 *)(this + 0x4c);
  *(undefined4 *)((long)param_1 + 0x68) = *(undefined4 *)(this + 0x50);
  *(undefined4 *)((long)param_1 + 0x6c) = *(undefined4 *)(this + 0x54);
  *(undefined4 *)((long)param_1 + 0x70) = *(undefined4 *)(this + 0x58);
  *(undefined4 *)((long)param_1 + 0x74) = *(undefined4 *)(this + 0x5c);
  *(undefined4 *)((long)param_1 + 0x78) = *(undefined4 *)(this + 0x60);
  *(undefined4 *)((long)param_1 + 0x7c) = *(undefined4 *)(this + 100);
  *(undefined4 *)((long)param_1 + 0x80) = *(undefined4 *)(this + 0x68);
  *(undefined4 *)((long)param_1 + 0x84) = *(undefined4 *)(this + 0x6c);
  *(undefined4 *)((long)param_1 + 0x88) = *(undefined4 *)(this + 0x70);
  *(undefined4 *)((long)param_1 + 0x8c) = *(undefined4 *)(this + 0x74);
  *(undefined4 *)((long)param_1 + 0x90) = *(undefined4 *)(this + 0x78);
  *(undefined4 *)((long)param_1 + 0x94) = *(undefined4 *)(this + 0x7c);
  *(undefined4 *)((long)param_1 + 0x98) = *(undefined4 *)(this + 0x80);
  *(undefined4 *)((long)param_1 + 0x9c) = *(undefined4 *)(this + 0x84);
  *(undefined4 *)((long)param_1 + 0xa0) = *(undefined4 *)(this + 0x88);
  *(undefined4 *)((long)param_1 + 0xa4) = *(undefined4 *)(this + 0x8c);
  *(undefined4 *)((long)param_1 + 0xa8) = *(undefined4 *)(this + 0x90);
  *(undefined4 *)((long)param_1 + 0xac) = *(undefined4 *)(this + 0x94);
  *(undefined4 *)((long)param_1 + 0xb0) = *(undefined4 *)(this + 0x98);
  *(undefined4 *)((long)param_1 + 0xb4) = *(undefined4 *)(this + 0x9c);
  *(undefined4 *)((long)param_1 + 0xb8) = *(undefined4 *)(this + 0xa0);
  *(undefined4 *)((long)param_1 + 0xbc) = *(undefined4 *)(this + 0xa4);
  *(undefined4 *)((long)param_1 + 0xc0) = *(undefined4 *)(this + 0xa8);
  *(undefined4 *)((long)param_1 + 0xc4) = *(undefined4 *)(this + 0xac);
  *(undefined4 *)((long)param_1 + 200) = *(undefined4 *)(this + 0xb0);
  *(undefined4 *)((long)param_1 + 0xcc) = *(undefined4 *)(this + 0xb4);
  *(undefined4 *)((long)param_1 + 0xd0) = *(undefined4 *)(this + 0xbc);
  uVar2 = (**(code **)(lVar3 + 0x38))(param_2,*(undefined8 *)(this + 200));
  uVar9 = *(undefined8 *)(this + 0xe8);
  uVar8 = *(undefined8 *)(this + 0xe0);
  auVar6 = *(undefined (*) [16])(this + 0xf0);
  *(undefined8 *)((long)param_1 + 8) = uVar2;
  *(undefined8 *)((long)param_1 + 0x10) = 0;
  *(undefined8 *)((long)param_1 + 0xfc) = uVar9;
  *(undefined8 *)((long)param_1 + 0xf4) = uVar8;
  auVar7 = NEON_ext(auVar6,auVar6,4,1);
  lVar3 = *(long *)param_2;
  *(undefined4 *)((long)param_1 + 0x104) = *(undefined4 *)(this + 0x100);
  auVar5._4_4_ = auVar6._12_4_;
  auVar5._0_4_ = auVar6._4_4_;
  auVar5._8_4_ = auVar7._4_4_;
  auVar5._12_4_ = auVar7._12_4_;
  auVar6 = NEON_ext(auVar7,auVar5,0xc,1);
  *(long *)((long)param_1 + 0xdc) = auVar6._8_8_;
  *(long *)((long)param_1 + 0xd4) = auVar6._0_8_;
  uVar2 = (**(code **)(lVar3 + 0x50))(param_2,this);
  lVar3 = (**(code **)(*(long *)param_2 + 0x38))(param_2,uVar2);
  *(long *)((long)param_1 + 0x18) = lVar3;
  if (lVar3 != 0) {
    (**(code **)(*(long *)param_2 + 0x60))(param_2,uVar2);
  }
  uVar1 = *(undefined4 *)(this + 0x120);
  *(undefined8 *)((long)param_1 + 0xe4) = *(undefined8 *)(this + 0x114);
  uVar4 = *(undefined4 *)(this + 0x11c);
  *(undefined4 *)((long)param_1 + 0x108) = uVar1;
  *(undefined4 *)((long)param_1 + 0xec) = uVar4;
  return "btCollisionObjectFloatData";
}


