// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: CharacterSet
// Entry Point: 00747b68
// Size: 296 bytes
// Signature: undefined __thiscall CharacterSet(CharacterSet * this, char * param_1, CharacterSetSource * param_2)


/* CharacterSet::CharacterSet(char const*, CharacterSet::CharacterSetSource*) */

void __thiscall
CharacterSet::CharacterSet(CharacterSet *this,char *param_1,CharacterSetSource *param_2)

{
  UpdateManager *this_00;
  undefined8 uVar1;
  undefined auVar2 [16];
  
  Entity::Entity((Entity *)this,param_1,true);
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0xd0) = 0;
  this[0x38] = (CharacterSet)0x0;
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined ***)(this + 0x30) = &PTR__CharacterSet_00fdaa28;
  *(undefined ***)(this + 0x20) = &PTR__CharacterSet_00fdaa00;
  *(undefined ***)this = &PTR__CharacterSet_00fda9d8;
  *(ulong *)(this + 0x10) = *(ulong *)(this + 0x10) | 0x80000;
  if (param_2 == (CharacterSetSource *)0x0) {
                    /* try { // try from 00747bd0 to 00747bd7 has its CatchHandler @ 00747c90 */
    param_2 = (CharacterSetSource *)operator_new(0x88);
    *(undefined4 *)((long)param_2 + 8) = 0;
    *(undefined8 *)((long)param_2 + 0x14) = 0;
    *(undefined8 *)((long)param_2 + 0xc) = 0;
    *(undefined8 *)((long)param_2 + 0x24) = 0;
    *(undefined8 *)((long)param_2 + 0x1c) = 0;
    *(undefined8 *)((long)param_2 + 0x34) = 0;
    *(undefined8 *)((long)param_2 + 0x2c) = 0;
    *(undefined8 *)((long)param_2 + 0x44) = 0;
    *(undefined8 *)((long)param_2 + 0x3c) = 0;
    *(undefined8 *)((long)param_2 + 0x54) = 0;
    *(undefined8 *)((long)param_2 + 0x4c) = 0;
    *(undefined ***)param_2 = &PTR__CharacterSetSource_00fdaa98;
    *(undefined8 *)((long)param_2 + 100) = 0;
    *(undefined8 *)((long)param_2 + 0x5c) = 0;
    *(undefined8 *)((long)param_2 + 0x74) = 0;
    *(undefined8 *)((long)param_2 + 0x6c) = 0;
    *(undefined8 *)((long)param_2 + 0x80) = 0;
    *(undefined8 *)((long)param_2 + 0x78) = 0;
  }
  *(CharacterSetSource **)(this + 0x40) = param_2;
  FUN_00f276d0(1,(undefined8 *)((long)param_2 + 8));
  auVar2 = NEON_fmov(0x3f800000,4);
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0xb0) = 0;
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 0x5c) = 0;
  *(undefined8 *)(this + 0x54) = 0;
  *(undefined8 *)(this + 0x6c) = 0;
  *(undefined8 *)(this + 100) = 0;
  *(undefined8 *)(this + 0x7c) = 0;
  *(undefined8 *)(this + 0x74) = 0;
  *(long *)(this + 0x8c) = auVar2._8_8_;
  *(long *)(this + 0x84) = auVar2._0_8_;
  *(long *)(this + 0xbc) = auVar2._8_8_;
  *(long *)(this + 0xb4) = auVar2._0_8_;
  *(undefined8 *)(this + 0x9c) = 0;
  *(undefined8 *)(this + 0x94) = 0x3f8000003f800000;
  uVar1 = NEON_fmov(0x3f800000,4);
  *(undefined4 *)(this + 0xa4) = 0;
  *(undefined2 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0xc4) = uVar1;
                    /* try { // try from 00747c68 to 00747c77 has its CatchHandler @ 00747c90 */
  this_00 = (UpdateManager *)UpdateManager::getInstance();
  UpdateManager::addUpdateable(this_00,(Updateable *)(this + 0x30),false);
  this[0xe8] = (CharacterSet)0x1;
  return;
}


