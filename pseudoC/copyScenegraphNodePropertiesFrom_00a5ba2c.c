// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: copyScenegraphNodePropertiesFrom
// Entry Point: 00a5ba2c
// Size: 156 bytes
// Signature: undefined __thiscall copyScenegraphNodePropertiesFrom(ScenegraphNode * this, ScenegraphNode * param_1)


/* ScenegraphNode::copyScenegraphNodePropertiesFrom(ScenegraphNode&) */

void __thiscall
ScenegraphNode::copyScenegraphNodePropertiesFrom(ScenegraphNode *this,ScenegraphNode *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(this + 0x40);
  uVar2 = *(uint *)(param_1 + 0x40);
  if ((uVar2 >> 7 & 1) != (uVar1 & 0x80) >> 7) {
    uVar1 = uVar1 & 0xffffff7f | uVar2 & 0x80;
    *(uint *)(this + 0x40) = uVar1;
    uVar2 = *(uint *)(param_1 + 0x40);
  }
  if ((uVar2 & 1) != (uVar1 & 1)) {
    *(uint *)(this + 0x40) = uVar1 & 0xfffffffe | uVar2 & 1;
    (**(code **)(*(long *)this + 0x28))(this,2,0);
    uVar2 = *(uint *)(param_1 + 0x40);
    uVar1 = *(uint *)(this + 0x40);
  }
  *(uint *)(this + 0x40) = uVar1 & 0xfffffff8 | uVar1 & 3 | (uVar2 >> 2 & 1) << 2;
  UserAttributes::copyUserAttributesFrom
            ((UserAttributes *)(this + 0x60),(UserAttributes *)(param_1 + 0x60));
  return;
}


