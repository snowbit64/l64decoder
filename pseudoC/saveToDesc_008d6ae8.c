// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: saveToDesc
// Entry Point: 008d6ae8
// Size: 260 bytes
// Signature: undefined __thiscall saveToDesc(ParticleSystem * this, ParticleSystemDesc * param_1)


/* ParticleSystem::saveToDesc(ParticleSystemDesc&) */

void __thiscall ParticleSystem::saveToDesc(ParticleSystem *this,ParticleSystemDesc *param_1)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  ParticleSystem PVar4;
  ParticleSystem PVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)(param_1 + 0x80));
  iVar3 = *(int *)(this + 0x124);
  uVar6 = *(undefined4 *)(this + 0x11c);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(this + 0x120);
  PVar4 = this[0x180];
  uVar8 = *(undefined8 *)(this + 0x128);
  iVar1 = 0;
  if (iVar3 != -1) {
    iVar1 = iVar3;
  }
  *(undefined4 *)(param_1 + 8) = uVar6;
  uVar9 = *(undefined8 *)(this + 0x108);
  uVar2 = *(undefined8 *)(this + 0x110);
  *(undefined8 *)(param_1 + 0x14) = uVar8;
  uVar6 = *(undefined4 *)(this + 0x134);
  *(int *)(param_1 + 0x10) = iVar1;
  PVar5 = this[0x138];
  *(ParticleSystem *)(param_1 + 0x7a) = PVar4;
  *(undefined8 *)param_1 = uVar9;
  PVar4 = this[0x16c];
  *(undefined4 *)(param_1 + 0x1c) = uVar6;
  uVar8 = *(undefined8 *)(this + 0x13c);
  *(ParticleSystem *)(param_1 + 0x78) = PVar5;
  PVar5 = this[0x16d];
  *(ParticleSystem *)(param_1 + 0x79) = PVar4;
  *(undefined8 *)(param_1 + 0x20) = uVar8;
  uVar9 = *(undefined8 *)(this + 0x14c);
  *(ParticleSystem *)(param_1 + 0x7b) = PVar5;
  uVar8 = *(undefined8 *)(this + 0x198);
  *(undefined8 *)(param_1 + 0x28) = uVar9;
  uVar9 = *(undefined8 *)(this + 0x154);
  *(undefined8 *)(param_1 + 0x98) = uVar8;
  *(undefined8 *)(param_1 + 0xa0) = uVar2;
  *(undefined8 *)(param_1 + 0x58) = uVar9;
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(this + 0x160);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(this + 0x164);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(this + 0x168);
  *(undefined8 *)(param_1 + 0x3c) = *(undefined8 *)(this + 0xa8);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(this + 0xb0);
  uVar8 = NEON_rev64(*(undefined8 *)(this + 0x144),4);
  *(undefined8 *)(param_1 + 0x48) = uVar8;
  uVar8 = *(undefined8 *)(this + 0x178);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(this + 0x170);
  *(undefined8 *)(param_1 + 0x68) = uVar8;
  uVar6 = *(undefined4 *)(this + 400);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(this + 0x184);
  uVar7 = *(undefined4 *)(this + 0x18c);
  *(undefined4 *)(param_1 + 0x74) = uVar6;
  *(undefined4 *)(param_1 + 0x70) = uVar7;
  return;
}


