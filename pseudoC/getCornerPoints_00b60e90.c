// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getCornerPoints
// Entry Point: 00b60e90
// Size: 148 bytes
// Signature: undefined __thiscall getCornerPoints(BoundingAxisAlignedBox * this, Vector3 * param_1)


/* BoundingAxisAlignedBox::getCornerPoints(Vector3*) const */

void __thiscall
BoundingAxisAlignedBox::getCornerPoints(BoundingAxisAlignedBox *this,Vector3 *param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *(undefined8 *)(this + 0x1c);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(this + 0x24);
  *(undefined8 *)param_1 = uVar1;
  uVar1 = *(undefined8 *)(this + 0x28);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(this + 0x30);
  *(undefined8 *)(param_1 + 0xc) = uVar1;
  uVar2 = *(undefined4 *)(this + 0x30);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(this + 0x1c);
  *(undefined4 *)(param_1 + 0x38) = uVar2;
  uVar1 = *(undefined8 *)(this + 0x2c);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(this + 0x1c);
  *(undefined8 *)(param_1 + 0x58) = uVar1;
  uVar1 = *(undefined8 *)(this + 0x20);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(this + 0x28);
  *(undefined8 *)(param_1 + 0x1c) = uVar1;
  uVar2 = *(undefined4 *)(this + 0x20);
  uVar3 = *(undefined4 *)(this + 0x30);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(this + 0x28);
  *(undefined4 *)(param_1 + 0x4c) = uVar2;
  *(undefined4 *)(param_1 + 0x50) = uVar3;
  uVar2 = *(undefined4 *)(this + 0x2c);
  uVar3 = *(undefined4 *)(this + 0x24);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(this + 0x1c);
  *(undefined4 *)(param_1 + 0x28) = uVar2;
  *(undefined4 *)(param_1 + 0x2c) = uVar3;
  uVar2 = *(undefined4 *)(this + 0x24);
  *(undefined8 *)(param_1 + 0x3c) = *(undefined8 *)(this + 0x28);
  *(undefined4 *)(param_1 + 0x44) = uVar2;
  return;
}


