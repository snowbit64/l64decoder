// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: operator=
// Entry Point: 008ed800
// Size: 296 bytes
// Signature: undefined __thiscall operator=(OverlayLayer * this, OverlayLayer * param_1)


/* BaseTerrain::OverlayLayer::TEMPNAMEPLACEHOLDERVALUE(BaseTerrain::OverlayLayer&&) */

OverlayLayer * __thiscall
BaseTerrain::OverlayLayer::operator=(OverlayLayer *this,OverlayLayer *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *(undefined4 *)this = *(undefined4 *)param_1;
  if (((byte)this[8] & 1) != 0) {
    operator_delete(*(void **)(this + 0x18));
  }
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 0x18) = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(this + 0x10) = uVar3;
  *(undefined8 *)(this + 8) = uVar2;
  *(undefined2 *)(param_1 + 8) = 0;
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  *(undefined8 *)(this + 0x20) = *(undefined8 *)(param_1 + 0x20);
  *(undefined4 *)(this + 0x28) = uVar1;
  if (((byte)this[0x30] & 1) != 0) {
    operator_delete(*(void **)(this + 0x40));
  }
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(this + 0x40) = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(this + 0x38) = uVar3;
  *(undefined8 *)(this + 0x30) = uVar2;
  *(undefined2 *)(param_1 + 0x30) = 0;
  if (((byte)this[0x48] & 1) != 0) {
    operator_delete(*(void **)(this + 0x58));
  }
  uVar3 = *(undefined8 *)(param_1 + 0x50);
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(this + 0x58) = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(this + 0x50) = uVar3;
  *(undefined8 *)(this + 0x48) = uVar2;
  *(undefined2 *)(param_1 + 0x48) = 0;
  if (((byte)this[0x60] & 1) != 0) {
    operator_delete(*(void **)(this + 0x70));
  }
  uVar3 = *(undefined8 *)(param_1 + 0x68);
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(this + 0x70) = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(this + 0x68) = uVar3;
  *(undefined8 *)(this + 0x60) = uVar2;
  *(undefined2 *)(param_1 + 0x60) = 0;
  if (((byte)this[0x78] & 1) != 0) {
    operator_delete(*(void **)(this + 0x88));
  }
  uVar3 = *(undefined8 *)(param_1 + 0x80);
  uVar2 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(this + 0x88) = *(undefined8 *)(param_1 + 0x88);
  *(undefined8 *)(this + 0x80) = uVar3;
  *(undefined8 *)(this + 0x78) = uVar2;
  *(undefined2 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(this + 0x90) = *(undefined8 *)(param_1 + 0x90);
  return this;
}


