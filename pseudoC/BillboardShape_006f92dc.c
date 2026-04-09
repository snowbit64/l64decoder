// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: BillboardShape
// Entry Point: 006f92dc
// Size: 76 bytes
// Signature: undefined __thiscall BillboardShape(BillboardShape * this, uint param_1, uchar * param_2, uint param_3, AdsBrockerManager * param_4)


/* BillboardShape::BillboardShape(unsigned int, unsigned char const*, unsigned int,
   AdsBrockerManager*) */

void __thiscall
BillboardShape::BillboardShape
          (BillboardShape *this,uint param_1,uchar *param_2,uint param_3,AdsBrockerManager *param_4)

{
  undefined8 uVar1;
  
  *(AdsBrockerManager **)this = param_4;
  *(undefined2 *)(this + 8) = 0;
  *(uint *)(this + 0xc) = param_1;
  *(uint *)(this + 0x20) = param_3;
  this[0x74] = (BillboardShape)0x0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined4 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x2c) = 0;
  *(undefined8 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined ***)(this + 0x88) = &PTR__IRaycastReport_00fd9928;
  *(BillboardShape **)(this + 0x90) = this;
  this[0x98] = (BillboardShape)0x0;
  *(undefined4 *)(this + 0x9c) = 0;
  uVar1 = *(undefined8 *)param_2;
  *(undefined8 *)(this + 0x18) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(this + 0x10) = uVar1;
  return;
}


