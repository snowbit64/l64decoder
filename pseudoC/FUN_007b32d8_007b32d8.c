// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b32d8
// Entry Point: 007b32d8
// Size: 136 bytes
// Signature: undefined FUN_007b32d8(void)


void FUN_007b32d8(long param_1,long param_2)

{
  undefined8 *this;
  long lVar1;
  
  this = (undefined8 *)operator_new(0x28);
  lVar1 = *(long *)(param_1 + 0x2a0);
                    /* try { // try from 007b3300 to 007b330f has its CatchHandler @ 007b3360 */
  Entity::Entity((Entity *)this,"ScriptTextureArray",true);
  this[4] = lVar1;
  *this = &PTR__TextureEntity_00fdb6b8;
  this[2] = this[2] | 0x100000000000;
  if (lVar1 != 0) {
    FUN_00f276d0(1,lVar1 + 8);
  }
  *(undefined4 *)(param_2 + 0x100) = *(undefined4 *)(this + 3);
  *(undefined4 *)(param_2 + 0x108) = 1;
  return;
}


