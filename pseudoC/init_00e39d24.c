// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: init
// Entry Point: 00e39d24
// Size: 132 bytes
// Signature: undefined __thiscall init(AudioSourceInstance * this, AudioSource * param_1, int param_2)


/* SoLoud::AudioSourceInstance::init(SoLoud::AudioSource&, int) */

void __thiscall
SoLoud::AudioSourceInstance::init(AudioSourceInstance *this,AudioSource *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  uVar4 = *(undefined4 *)(param_1 + 0xc);
  *(int *)(this + 8) = param_2;
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  uVar2 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x44) = uVar4;
  uVar3 = *(uint *)(param_1 + 8);
  *(undefined4 *)(this + 0x48) = uVar4;
  uVar5 = *(undefined8 *)(param_1 + 0x98);
  *(undefined4 *)(this + 0x4c) = uVar1;
  *(undefined4 *)(this + 0x10) = uVar2;
  *(undefined8 *)(this + 0x1e8) = uVar5;
  if ((uVar3 >> 2 & 1) != 0) {
    *(uint *)(this + 0x14) = *(uint *)(this + 0x14) | 4;
  }
  if ((uVar3 >> 3 & 1) != 0) {
    *(uint *)(this + 0x14) = *(uint *)(this + 0x14) | 8;
  }
  if ((uVar3 >> 5 & 1) != 0) {
    *(uint *)(this + 0x14) = *(uint *)(this + 0x14) | 0x20;
  }
  if ((uVar3 >> 6 & 1) == 0) {
    return;
  }
  *(uint *)(this + 0x14) = *(uint *)(this + 0x14) | 0x40;
  return;
}


