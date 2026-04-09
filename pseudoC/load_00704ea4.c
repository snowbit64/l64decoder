// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: load
// Entry Point: 00704ea4
// Size: 244 bytes
// Signature: undefined __thiscall load(AnimalAnimationSystem * this, AnimalAnimationSystemSource * param_1, TransformGroup * param_2, CharacterSet * param_3)


/* AnimalAnimationSystem::load(AnimalAnimationSystemSource*, TransformGroup*, CharacterSet*) */

void __thiscall
AnimalAnimationSystem::load
          (AnimalAnimationSystem *this,AnimalAnimationSystemSource *param_1,TransformGroup *param_2,
          CharacterSet *param_3)

{
  *(undefined2 *)(this + 0x2d8) = 0;
  *(undefined8 *)(this + 0x290) = 0;
  *(undefined8 *)(this + 0x288) = 0;
  *(undefined8 *)(this + 0x2a0) = 0;
  *(undefined8 *)(this + 0x298) = 0;
  *(undefined8 *)(this + 0x2a8) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0x2b0) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0x2e4) = 0x3f80000000000000;
  *(undefined8 *)(this + 0x2dc) = 0;
  *(undefined8 *)(this + 0x2f4) = 0;
  *(undefined8 *)(this + 0x2c0) = 0;
  *(undefined8 *)(this + 0x2b8) = 0;
  *(undefined8 *)(this + 0x2d0) = 0;
  *(undefined8 *)(this + 0x2c8) = 0;
  *(TransformGroup **)(this + 0x290) = param_2;
  *(undefined4 *)(this + 0x304) = 0x3f000000;
  *(undefined8 *)(this + 0x328) = 0x3f0000003f000000;
  *(undefined8 *)(this + 800) = 0x3f0000003f000000;
  *(undefined4 *)(this + 0x330) = 0x3f000000;
  *(undefined8 *)(this + 0x2ec) = 0;
  *(undefined8 *)(this + 0x2fc) = 0x3f0000003f000000;
  CharacterSet::setAutoUpdateState(param_3,false);
  *(CharacterSet **)(this + 0x298) = param_3;
  *(CharacterSet **)(this + 0x18) = param_3;
  *(undefined4 *)(this + 0xf0) = 2;
  *(undefined4 *)(this + 0x20) = 0;
  *(CharacterSet **)(this + 0x80) = param_3;
  *(undefined4 *)(this + 0x158) = 3;
  *(undefined4 *)(this + 0x88) = 1;
  *(CharacterSet **)(this + 0xe8) = param_3;
  *(undefined4 *)(this + 0x1c0) = 4;
  *(CharacterSet **)(this + 0x150) = param_3;
  *(CharacterSet **)(this + 0x1b8) = param_3;
  *(CharacterSet **)(this + 0x220) = param_3;
  *(undefined4 *)(this + 0x228) = 5;
  *(AnimalAnimationSystemSource **)(this + 0x288) = param_1;
  reload();
  this[0x2d8] = (AnimalAnimationSystem)0x1;
  return;
}


